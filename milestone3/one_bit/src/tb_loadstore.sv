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
  assign instruction[2] = 32'h0013A023;  //  sw   x1,0(x7)                
  assign instruction[3] = 32'h00139223;  //  sh   x1,4(x7)                
  assign instruction[4] = 32'h00138423;  //  sb   x1,8(x7)                  
  assign instruction[5] = 32'h0003A103;  //  lw   x2,0(x7)                
  assign instruction[6] = 32'h00039183;  //  lh   x3,0(x7)                
  assign instruction[7] = 32'h0003D203;  //  lhu  x4,0(x7)                
  assign instruction[8] = 32'h00438283;  //  lb   x5,4(x7)                
  assign instruction[9] = 32'h0043C303;  //  lbu  x6,4(x7)          

  always_comb begin : proc_instr_tb
    instr_debug = instruction[pc_debug >> 2];  
  end
  /*verilator lint_on UNUSED*/
endmodule
