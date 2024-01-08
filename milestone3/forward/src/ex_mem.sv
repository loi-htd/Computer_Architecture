module ex_mem(
	input logic 		clk_i,
	input logic 		enable_i,
	input logic 		rst_i,
	
	input logic [31:0]	pc_four_i,
	input logic [31:0]	st_data_i,
	input logic  		br_sel_i,
	input logic [31:0] 	alu_data_i,
	input logic [3:0] 	ld_op_i,
	input logic 		jump_i,
	input logic 		mem_wren_i,
	input logic 		is_load_i,
	input logic [4:0] 	rd_addr_i,
	input logic 		rd_wren_i,

	output logic [31:0]	pc_four_o,
	output logic [31:0]	st_data_o,
	output logic  		br_sel_o,
	output logic [31:0] alu_data_o,
	output logic [3:0] 	ld_op_o,
	output logic 		jump_o,
	output logic 		mem_wren_o,
	output logic 		is_load_o,
	output logic [4:0] rd_addr_o,
	output logic 		rd_wren_o
);

always @(posedge clk_i)  begin
	if(!rst_i) begin
		pc_four_o	<= 32'b0;
		st_data_o   <= 32'b0;
		br_sel_o 	<= 1'b0;
		alu_data_o 	<= 32'b0;
		ld_op_o 	<= 4'b0;
		jump_o 		<= 1'b0;
		mem_wren_o 	<= 1'b0;
		is_load_o 	<= 1'b0;
		rd_addr_o 	<= 5'b0;
		rd_wren_o 	<= 1'b0;

	end else if(enable_i) begin
		pc_four_o	<= pc_four_i;
		st_data_o   <= st_data_i;
		br_sel_o 	<= br_sel_i;
		alu_data_o 	<= alu_data_i;
		ld_op_o 	<= ld_op_i;
		jump_o 		<= jump_i;
		mem_wren_o 	<= mem_wren_i;
		is_load_o 	<= is_load_i;
		rd_addr_o 	<= rd_addr_i;
		rd_wren_o 	<= rd_wren_i;
	end else begin
		pc_four_o	<= pc_four_o;
		st_data_o   <= st_data_o;
		br_sel_o 	<= br_sel_o;
		alu_data_o 	<= alu_data_o;
		ld_op_o 	<= ld_op_o;
		jump_o 		<= jump_o;
		mem_wren_o 	<= mem_wren_o;
		is_load_o 	<= is_load_o;
		rd_addr_o 	<= rd_addr_o;
		rd_wren_o 	<= rd_wren_o;
	end
end

endmodule

