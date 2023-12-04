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
  assign instruction[2] = 32'h002081B3;     // add  x3, x1, x2   //unused
  assign instruction[3] = 32'h002081B3;     // add  x3, x1, x2 
  assign instruction[4] = 32'h40208233;     // sub x4, x1, x2 
  assign instruction[5] = 32'h002092B3;     // sll x5, x1, x2 
  assign instruction[6] = 32'h0020A333;     // slt x6, x1, x2 
  assign instruction[7] = 32'h0020B3B3;     // sltu x7, x1, x2 
  assign instruction[8] = 32'h0020D433;     // srl x8, x1, x2 
  assign instruction[9] = 32'h4020D4B3;     // sra x9, x1, x2 
  assign instruction[10] = 32'h0020C533;     // xor x10, x1, x2 
  assign instruction[11] = 32'h0020E5B3;    // or x11, x1, x2 
  assign instruction[12] = 32'h0020F633;    // and x12, x1, x2 
  

  always_comb begin : proc_instr_tb
    instr_debug = instruction[pc_debug >> 2];  
  end
  /*verilator lint_on UNUSED*/
endmodule
