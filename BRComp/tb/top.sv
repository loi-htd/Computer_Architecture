module top (

  // inputs
  	input logic		clk_i,
	input logic [31:0] 	rs1_data,
 	input logic [31:0] 	rs2_data,
  	input logic  	 	br_unsigned,
	
  // outputs
  	output logic 		br_less,
  	output logic 		br_equal
);

	brcomp dut (
		.rs1_data    (rs1_data ),
		.rs2_data    (rs2_data ),
		.br_unsigned (br_unsigned),
		.br_less     (br_less  ),
		.br_equal    (br_equal)
	);
  
	always @(posedge clk_i) begin: proc_assertions
		if (rs1_data == rs2_data) 
			assert ( (br_equal == 1) && (br_less == 0) );
		if (rs1_data < rs2_data)
			assert ( (br_equal == 0) && (br_less == 1) );
		if (rs1_data > rs2_data)
			assert ( (br_equal == 0) && (br_less == 0) );
 	end

endmodule : top
