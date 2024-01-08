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

  assign instruction[0] = 32'h01400093;     // addi x1, x0, 20
  assign instruction[1] = 32'h02800113;     // addi x2, x0, 40
  assign instruction[2] = 32'h00A08093;     // NEQUAL: addi x1,x1,10
  assign instruction[3] = 32'hFE209EE3;     // bne x1,x2,NEQUAL
  assign instruction[4] = 32'h03200193;     // addi x3, x0, 50
  assign instruction[5] = 32'h03200213;     // addi x4, x0, 50   
  assign instruction[6] = 32'hFF618193;     // EQUAL: addi x3,x3,-10
  assign instruction[7] = 32'hFE118EE3;     // beq x3, x1, EQUAL
  assign instruction[8] = 32'h03220213;     // addi x4, x4, 50

  always_comb begin : proc_instr_tb
    instr_debug = instruction[pc_debug >> 2];  
  end
  /*verilator lint_on UNUSED*/
endmodule
