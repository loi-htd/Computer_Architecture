module top (

  // inputs
  	input logic		clk_i,
	input logic [31:0] 	operand_a,
 	input logic [31:0] 	operand_b,
  	input logic [3:0]  	alu_op,
	
  // outputs
  	output logic [31:0] 	alu_data
);

	alu dut (
		.operand_a (operand_a ),
		.operand_b (operand_b ),
		.alu_op (alu_op),
		.alu_data (alu_data  )
	);
  
	always @(posedge clk_i) begin: proc_assertions
 		if (alu_op == 4'b0000)
 			assert (alu_data == (operand_a + operand_b) || alu_data == 32'hFFFF_FFFF);
		if (alu_op == 4'b0001)
 			assert (alu_data == (operand_a - operand_b) || alu_data == 32'hFFFF_FFFF);
 		if (alu_op == 4'b0010)
 			assert (alu_data == ((operand_a  < operand_b)?1:0));
 		if (alu_op == 4'b0011)
 			assert (alu_data == ((operand_a  < operand_b)?1:0));
 		if (alu_op == 4'b0100)
 			assert (alu_data == (operand_a ^ operand_b));
 		if (alu_op == 4'b0101)
 			assert (alu_data == (operand_a | operand_b));
 		if (alu_op == 4'b0110)
 			assert (alu_data == (operand_a & operand_b));
 		if (alu_op == 4'b0111)
 			assert (alu_data == (operand_a << operand_b[4:0]));
 		if (alu_op == 4'b1000)
 			assert (alu_data == (operand_a >> operand_b[4:0]));
 		if (alu_op == 4'b1001)
 			assert (alu_data == (operand_a >>> operand_b[4:0]));
 	end

endmodule : top
