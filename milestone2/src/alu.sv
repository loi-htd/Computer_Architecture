module alu (

//Input
  input logic [31:0] operand_a,
  input logic [31:0] operand_b,
  input logic [3:0] alu_op,
  
//Output
  output logic [31:0]  alu_data
);

//Local declaration
  logic [32:0] alu_data_33bit;

// ALU cases
/* verilator lint_off LATCH */
  always_comb begin 
    case (alu_op)
      4'b0000: begin						//ADD
      	/* verilator lint_off WIDTH */				
      	alu_data_33bit = operand_a + operand_b ;
      	if (alu_data_33bit > 33'h0_FFFF_FFFF) alu_data = 32'hFFFF_FFFF;
      	else alu_data =  operand_a + operand_b ;
	end      
      
      4'b0001: begin					  	//SUB
	alu_data_33bit = operand_a + (~operand_b + 1);
      	if (alu_data_33bit > 33'h0_FFFF_FFFF) alu_data = 32'hFFFF_FFFF;
      	else alu_data =  operand_a + (~operand_b + 1);
      	end      
      	/* verilator lint_on WIDTH */	
      	
      4'b0010: 	begin 						//SLT
      	if (operand_a[31] == 0 && operand_b[31] == 1) 	   alu_data = 0;
      	
      	else if (operand_a[31] == 1 && operand_b[31] == 0) alu_data = 1;	
      	
        else begin
        	for (int i = 30; i >= 0; i = i - 1) begin
        		if (operand_a[i] == 1'b0 && operand_b[i] == 1'b1) begin
            			alu_data = 1;
            			break;
        		end else if (operand_a[i] == 1'b1 && operand_b[i] == 1'b0) begin
        			alu_data = 0;
            			break;
        		end
    		end
        end

        end
         
      4'b0011: begin 						//SLTU
      	for (int i = 31; i >= 0; i = i - 1) begin
        	if (operand_a[i] == 1'b0 && operand_b[i] == 1'b1) begin
            		alu_data = 1;
            		break;
        	end else if (operand_a[i] == 1'b1 && operand_b[i] == 1'b0) begin
            		break;
        	end
    	end
          	
      	end
      
      4'b0100: alu_data = operand_a ^ operand_b ;  		//XOR
      
      4'b0101: alu_data = operand_a | operand_b ;  		//OR
      
      4'b0110: alu_data = operand_a & operand_b ;  		//AND
      
      4'b0111: alu_data = operand_a << operand_b[4:0] ;  	//SLL
      
      4'b1000: alu_data = operand_a >> operand_b[4:0] ;  	//SRL
      
      4'b1001: alu_data = $signed(operand_a) >>> operand_b[4:0] ;  	//SRA
      
      default: alu_data = 0 ;
    endcase
  end
/* verilator lint_on LATCH */

endmodule

