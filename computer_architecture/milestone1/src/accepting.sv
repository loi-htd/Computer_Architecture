module accepting (
    // input
    input logic clk_i,
    input logic nickle_i,
    input logic dime_i,
    input logic quarter_i,

    // output
    output logic exceed_o,
    output logic [5:0] deposit_o // maximum off deposit is 40 cents
  );

  // Change to be dispensed
  always @(posedge clk_i) begin : proc_inserted_coin
    // the deposit is less than 20 cent
    // new_deposit = old_deposit + coin's value
    if (deposit_o < 20) begin
      if (nickle_i)
        deposit_o <= deposit_o + 5;
      else if (dime_i)
        deposit_o <= deposit_o + 10;
      else if (quarter_i)
        deposit_o <= deposit_o + 25;
    end else begin  
      // the deposit exceeds 20 cent
      // reset to zero and accept new value
      if (nickle_i)
        deposit_o <= 5;
      else if (dime_i)
        deposit_o <= 10;
      else if (quarter_i)
        deposit_o <= 25;
      else deposit_o <= 0;
    end
  end

  // process exceed signal for dispensing system
  assign exceed_o = (deposit_o >= 20) ? 1 : 0;
  
endmodule : accepting
