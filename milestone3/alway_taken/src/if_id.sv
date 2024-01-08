module if_id(
	input logic clk_i,
	input logic enable_i,
    input logic rst_i,

	input logic [31:0] pc_i,
    input logic [31:0]	pc_four_i,
	input logic [31:0] instr_i,
    
	output logic [31:0] pc_o,
    output logic [31:0]	pc_four_o,
	output logic [31:0] instr_o
);

always_ff @(posedge clk_i or negedge rst_i)  begin
	if(!rst_i) begin
		pc_o        <= 32'b0;
        pc_four_o	<= 32'b0;
		instr_o     <= 32'b0;
	end else if(enable_i) begin
		pc_o        <= pc_i;
        pc_four_o	<= pc_four_i;
		instr_o     <= instr_i;
    end else begin
        pc_o        <= pc_o;
        pc_four_o	<= pc_four_o;
		instr_o     <= instr_o;
    end
end

endmodule

