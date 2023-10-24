module mux_2 (
  // input
  input logic  [31:0] mux_i_0,
  input logic  [31:0] mux_i_1,
  input logic 	      mux_sel,

  // output
  output logic [31:0] mux_o
);

	always_comb begin
		mux_o  = mux_sel? mux_i_1 : mux_i_0 ;	
	end
	
endmodule 
