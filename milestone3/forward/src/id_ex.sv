module id_ex(
	input logic clk_i,
	input logic enable_i,
	input logic rst_i,

	input logic [31:0] instr_i,
	input logic [4:0] rs1_addr_i,
	input logic [4:0] rs2_addr_i,
	input logic [31:0] pc_i,
	input logic [31:0] pc_four_i,
	input logic [31:0] rs1_data_i,
	input logic [31:0] rs2_data_i,
	input logic [31:0] imm_i,
	input logic branch_i,
	input logic jump_i,
	input logic [3:0] alu_op_i,
	input logic [2:0] br_op_i,
	input logic [3:0] ld_op_i,
	input logic op_a_sel_i,
	input logic op_b_sel_i,
	input logic mem_wren_i,
	input logic is_load_i,
	input logic [4:0] rd_addr_i,
	input logic rd_wren_i,

	output logic [31:0] instr_o,
	output logic [4:0] rs1_addr_o,
	output logic [4:0] rs2_addr_o,
	output logic [31:0] pc_o,
	output logic [31:0]	pc_four_o,
	output logic [31:0] rs1_data_o,
	output logic [31:0] rs2_data_o,
	output logic [31:0] imm_o,
	output logic branch_o,
	output logic jump_o,
	output logic [3:0] alu_op_o,
	output logic [2:0] br_op_o,
	output logic [3:0] ld_op_o,
	output logic op_a_sel_o,
	output logic op_b_sel_o,
	output logic mem_wren_o,
	output logic is_load_o,
	output logic [4:0] rd_addr_o,
	output logic rd_wren_o
);


always @(posedge clk_i)  begin
	if(!rst_i) begin
		instr_o 	<= 0;
		rs1_addr_o	<= 5'b0;
		rs2_addr_o	<= 5'b0;
		pc_o 		<= 32'b0;
		pc_four_o	<= 32'b0;
		rs1_data_o 	<= 32'b0;
		rs2_data_o 	<= 32'b0;
		imm_o 		<= 32'b0;
		branch_o 	<= 1'b0;
		jump_o 		<= 1'b0;
		alu_op_o 	<= 4'b0;
		br_op_o 	<= 3'b0;
		ld_op_o 	<= 4'b0;
		op_a_sel_o 	<= 1'b0;
		op_b_sel_o 	<= 1'b0;
		mem_wren_o 	<= 1'b0;
		is_load_o 	<= 1'b0;
		rd_addr_o 	<= 5'b0;
		rd_wren_o 	<= 1'b0;

	end else if(enable_i) begin
		instr_o 	<= instr_i;
		rs1_addr_o	<= rs1_addr_i;
		rs2_addr_o	<= rs2_addr_i;
		pc_o 		<= pc_i;
		pc_four_o	<= pc_four_i;
		rs1_data_o 	<= rs1_data_i;
		rs2_data_o 	<= rs2_data_i;
		imm_o 		<= imm_i;
		branch_o 	<= branch_i;
		jump_o 		<= jump_i;
		alu_op_o 	<= alu_op_i;
		br_op_o 	<= br_op_i;
		ld_op_o 	<= ld_op_i;
		op_a_sel_o 	<= op_a_sel_i;
		op_b_sel_o 	<= op_b_sel_i;
		mem_wren_o 	<= mem_wren_i;
		is_load_o 	<= is_load_i;
		rd_addr_o 	<= rd_addr_i;
		rd_wren_o 	<= rd_wren_i;

	end else begin
		instr_o 	<= instr_o;
		rs1_addr_o	<= rs1_addr_o;
		rs2_addr_o	<= rs2_addr_o;
        pc_o 		<= pc_o;
		pc_four_o	<= pc_four_o;
		rs1_data_o 	<= rs1_data_o;
		rs2_data_o 	<= rs2_data_o;
		imm_o 		<= imm_o;
		branch_o 	<= branch_o;
		jump_o 		<= jump_o;
		alu_op_o 	<= alu_op_o;
		br_op_o 	<= br_op_o;
		ld_op_o 	<= ld_op_o;
		op_a_sel_o 	<= op_a_sel_o;
		op_b_sel_o 	<= op_b_sel_o;
		mem_wren_o 	<= mem_wren_o;
		is_load_o 	<= is_load_o;
		rd_addr_o 	<= rd_addr_o;
		rd_wren_o 	<= rd_wren_o;
	end
end
endmodule

