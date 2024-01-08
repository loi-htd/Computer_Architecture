module instr_test (
  /*verilator lint_off UNUSED*/
  input logic clk_i,
  input logic [31:0] pc_debug,

  output logic [31:0] instr_debug
);
/* Local parameter */
  /* verilator lint_off UNDRIVEN */
  logic [31:0] instruction[0:1023];
  logic [31:0] debug_reg [31:0];
  logic [31:0] count_clk;
  /* verilator lint_on UNDRIVEN */

  initial begin
    $readmemh("../mem/instruction_mem.data",instruction);
  end 

  always_comb begin : proc_instr_tb
    instr_debug = instruction[pc_debug >> 2];  
  end
  /*verilator lint_on UNUSED*/
endmodule
