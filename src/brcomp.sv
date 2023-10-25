module brcomp (

//Input
  input logic [31:0] rs1_data,
  input logic [31:0] rs2_data,
  input logic        br_unsigned,
  
//Output
  output logic   br_less,
  output logic   br_equal
);

/* verilator lint_off LATCH */
// Branch compare
  always_comb begin 
  	// Check if equal
      	if (rs1_data == rs2_data) begin
      		br_equal = 1;
      		br_less  = 0;
      		
      	end else begin
      		br_equal = 0;
  	//Unsigned compare
  		if (br_unsigned) begin
  			for (int i = 31; i >= 0; i = i - 1) begin
        			if (rs1_data[i] == 1'b0 && rs2_data[i] == 1'b1) begin
            				br_less = 1;
            				break;
        			end else if (rs1_data[i] == 1'b1 && rs2_data[i] == 1'b0) begin
        				br_less = 0;
            				break;
        			end
    			end		
  	//Signed compare
  		end else begin
  			if (rs1_data[31] == 0 && rs2_data[31] == 1) 	   	br_less = 0;
  			
      			else if (rs1_data[31] == 1 && rs2_data[31] == 0) 	br_less = 1;	
      			
       			else begin
        			for (int i = 30; i >= 0; i = i - 1) begin
        				if (rs1_data[i] == 1'b0 && rs2_data[i] == 1'b1) begin
            					br_less = 1;
            					break;
        				end else if (rs1_data[i] == 1'b1 && rs2_data[i] == 1'b0) begin
        					br_less = 0;
            					break;
        				end
    				end
      			end     	
     		end
  	end
  end
/* verilator lint_on LATCH */  
endmodule

