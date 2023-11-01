module wrapper (
  // input
  input logic        CLOCK_50,
  input logic [2:0]  COIN,

  // output
  output logic  SODA,
  output logic [2:0] CHANGE
);

  design_1 dut (
    .clk_i  (CLOCK_50),
    .nickle_i (COIN[0]),
    .dime_i (COIN[1]),
    .quarter_i  (COIN[2]),
    .soda_o (SODA),
    .change_o (CHANGE[2:0])
  );

endmodule : wrapper
