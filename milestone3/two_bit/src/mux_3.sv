module mux_3 (
  // input
  input logic  [31:0] mux_i_0,
  input logic  [31:0] mux_i_1,
  input logic  [31:0] mux_i_2,
  input logic  [1:0]	mux_sel,

  // output
  output logic [31:0] mux_o
);

	always_comb begin
    case (mux_sel)
      1: mux_o = mux_i_0;
      2: mux_o = mux_i_1;
      3: mux_o = mux_i_2;
      default: mux_o = 0;
    endcase	
	end
	
endmodule 
