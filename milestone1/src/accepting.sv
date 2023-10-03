module accepting (
    // input
    input logic clk_i,
    input logic nickle_i,
    input logic dime_i,
    input logic quarter_i,

    // output
    output logic [5:0] deposit_o
  );

  // Change to be dispensed
  always @(posedge clk_i) begin : proc_insert_coin
    if (deposit_o < 20) begin
      if (nickle_i)
          deposit_o <= deposit_o + 5;
      else if (dime_i)
          deposit_o <= deposit_o + 10;
      else if (quarter_i)
          deposit_o <= deposit_o + 25;
    end else begin
      if (nickle_i)
          deposit_o <= 5;
      else if (dime_i)
          deposit_o <= 10;
      else if (quarter_i)
          deposit_o <= 25;
      else deposit_o <= 0;
    end
  end
endmodule : accepting
