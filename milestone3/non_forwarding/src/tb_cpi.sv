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
  logic [31:0] count_instr;
  /* verilator lint_on UNDRIVEN */

  initial begin
    $readmemh("../mem/instruction_mem.data",instruction);
  end        

  // always_ff @(posedge clk_i) begin : proc_count_clk
  //   $readmemh("../mem/regfile.data",debug_reg);
  //   if (pc_debug != $past(pc_debug)) begin
  //     count_instr <= count_instr + 1;
  //   end
  //   count_clk <= count_clk + 1;
  //   if (debug_reg[11] == 20) begin
  //     $display("Clock: %d, x11: %d", count_clk, count_instr);
  //   end
  // end

  always_ff @(posedge clk_i) begin : proc_count_clk
    $readmemh("../mem/regfile.data",debug_reg);
    if (pc_debug != $past(pc_debug)) begin
      count_instr <= count_instr + 1;
    end
    count_clk <= count_clk + 1;
    if (debug_reg[4] == 1) begin
      $display("Clock: %d, x11: %d", count_clk, count_instr);
    end
  end

  always_comb begin : proc_instr_tb
    instr_debug = instruction[pc_debug >> 2];  
  end
  /*verilator lint_on UNUSED*/
endmodule
