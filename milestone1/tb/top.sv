module top (
  // input
  input logic clk_i,
  input logic nickle_i,
  input logic dime_i,
  input logic quarter_i,

  // output
  output logic soda_o,
  output logic [2:0] change_o
);

  design_1 dut (
    .clk_i  (clk_i),
    .nickle_i (nickle_i),
    .dime_i (dime_i),
    .quarter_i  (quarter_i),
    .soda_o (soda_o),
    .change_o (change_o),
  );

  always @(posedge clk_i) begin : proc_assertions
    if (sel_i == 2'b00)
      assert (result_o == '0);
    if (sel_i == 2'b01)
      assert (result_o == (data0_i & data1_i));
    if (sel_i == 2'b10)
      assert (result_o == (data0_i | data1_i));
    if (sel_i == 2'b11)
      assert (result_o == (data0_i ^ data1_i));
  end

endmodule : top
