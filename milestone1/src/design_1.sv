  module design_1 (
    // input
    input logic clk_i,
    input logic nickle_i,
    input logic dime_i,
    input logic quarter_i,

    // output
    output logic soda_o,
    output logic [2:0] change_o
  );

  // State machine states
  enum logic {
    PENDING,
    DONE
  } current_state;

  // Total deposit
  reg [7:0] deposit;

  // Change to be dispensed
  reg [7:0] change_tmp;

  always @(posedge clk_i) begin : proc_fsm
    case (current_state)
      PENDING: begin
        if (deposit >= 20)
          current_state <= DONE;
        else begin
          if (nickle_i)
            deposit <= deposit + 5;
          else if (dime_i)
            deposit <= deposit + 10;
          else if (quarter_i)
            deposit <= deposit  + 25;
        end
        change_tmp <= 0;
      end
          
      DONE: begin
        soda_o <= 1;
        change_tmp <= deposit - 20;
        deposit <= 0;
        current_state <= PENDING;
      end      
      default;
    endcase
  end

  always @(posedge clk_i) begin : proc_change
    case (change_tmp)
      0: change_o <= 3'b000;
      10: change_o <= 3'b001;
      15: change_o <= 3'b010;
      20: change_o <= 3'b011;
      25: change_o <= 3'b100;
      default: change_o <= 3'b000;
    endcase
  end
endmodule : design_1
