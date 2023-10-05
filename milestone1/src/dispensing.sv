  module dispensing (
    // input
    input logic clk_i,
    input logic [5:0] deposit_i,
    input logic exceed_i,

    // output
    output logic soda_o,
    output logic [2:0] change_o
  );
  
  always @(posedge clk_i) begin : proc_dispending
    if (exceed_i) begin
      soda_o <= 1;
      case (deposit_i - 20)
        0:  change_o <= 3'b000;
        5:  change_o <= 3'b001;
        10: change_o <= 3'b010;
        15: change_o <= 3'b011;
        20: change_o <= 3'b100;
        default:  change_o <= 3'b000;
      endcase
    end else begin
      soda_o <= 0;
      change_o <= 3'b000;
    end
  end
endmodule : dispensing
