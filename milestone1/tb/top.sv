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

  vending_machine dut (
    .clk_i  (clk_i),
    .nickle_i (nickle_i),
    .dime_i (dime_i),
    .quarter_i  (quarter_i),
    .soda_o (soda_o),
    .change_o (change_o)
  );

  // always @(posedge clk_i) begin : proc_assertions
  //   // be only received soda when deposit is greater than or equal to 20 cents.
  //   if (soda_o)
  //     assert (deposit >= 20); 

  //   //  assert that the vending machine can change correctly.
  //   case (deposit)
  //     20: assert (change_o == 3'b000);
  //     25: assert (change_o == 3'b001);
  //     30: assert (change_o == 3'b010);
  //     25: assert (change_o == 3'b011);
  //     40: assert (change_o == 3'b100);
  //   endcase
  // end

endmodule : top
