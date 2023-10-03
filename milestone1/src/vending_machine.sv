module vending_machine (
    // input
    input logic clk_i,
    input logic nickle_i,
    input logic dime_i,
    input logic quarter_i,

    // output
    output logic soda_o,
    output logic [2:0] change_o
  );
  logic rst;
  logic [5:0] deposit;

  accepting accepting_i (
    .clk_i    (clk_i),
    .nickle_i (nickle_i),
    .dime_i   (dime_i),
    .quarter_i(quarter_i),
    .rst_i    (rst),
    .deposit_o(deposit)
  );

  dispending dispending_o (
    .clk_i    (clk_i),
    .deposit_i(deposit),
    .soda_o   (soda_o),
    .change_o (change_o),
    .rst_o    (rst)
  );

  `ifdef VERILATOR
    /*verilator lint_off UNUSED*/
    always @(posedge clk_i) begin : proc_setup_past
      // be only received soda when deposit is greater than or equal to 20 cents.
      if (soda_o)
        assert (deposit < 20); 

      //  assert that the vending machine can change correctly.
      // case (deposit)
      //   20: assert (change_o != 3'b000);
      //   25: assert (change_o != 3'b001);
      //   30: assert (change_o != 3'b010);
      //   25: assert (change_o != 3'b011);
      //   40: assert (change_o != 3'b100);
      // endcase 
    end
    /*verilator lint_on UNUSED*/
  `endif
endmodule : vending_machine
