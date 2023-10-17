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

  logic [5:0] deposit;
  logic exceed;

  accepting accepting_i (
    .clk_i    (clk_i),
    .nickle_i (nickle_i),
    .dime_i   (dime_i),
    .quarter_i(quarter_i),
    .exceed_o (exceed),
    .deposit_o(deposit)
  );

  dispensing dispensing_o (
    .clk_i    (clk_i),
    .deposit_i(deposit),
    .exceed_i (exceed),
    .soda_o   (soda_o),
    .change_o (change_o)
  );

  `ifdef VERILATOR
    /*verilator lint_off UNUSED*/
    always @(posedge clk_i) begin : proc_asserting
      // only received soda when the deposit is greater than or equal to 20 cents
      if (soda_o) begin
        $display("deposit = %d, receive soda, change = %b", $past(deposit), change_o);
        assert ($past(deposit) >= 20); 
      end

      // assert that the vending machine can change correctly.
      case ($past(deposit))
        20: assert (change_o == 3'b000);
        25: assert (change_o == 3'b001);
        30: assert (change_o == 3'b010);
        35: assert (change_o == 3'b011);
        40: assert (change_o == 3'b100);
      endcase 
    end
    /*verilator lint_on UNUSED*/
  `endif
endmodule : vending_machine
