module alu (

//Input
  input logic [31:0] operand_a,
  input logic [31:0] operand_b,
  input logic [31:0] rs1_data,
  input logic [31:0] rs2_data,
  input logic [3:0]  alu_op,
  input logic [2:0]  br_op,			
  input logic		 branch,
//Output
  output logic 		   br_sel,			
  output logic [31:0]  alu_data
);

//Local declaration
  logic   br_less;
  logic   br_equal;

// ALU calculation
/* verilator lint_off LATCH */
  always_ff begin : alu_cal
    case (alu_op)
      4'b0000:						//ADD			
		alu_data =  operand_a + operand_b ; 
      
      4'b0001: 				  		//SUB
	  	alu_data =  operand_a + (~operand_b + 1);
      	
      4'b0010: 	begin 				//SLT
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
         
      4'b0011: begin 				//SLTU
      	for (int i = 31; i >= 0; i = i - 1) begin
        	if (operand_a[i] == 1'b0 && operand_b[i] == 1'b1) begin
            		alu_data = 1;
            		break;
        	end else if (operand_a[i] == 1'b1 && operand_b[i] == 1'b0) begin
					alu_data = 0;
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

// ALU Branch
	always_ff begin : alu_compare
    	if (branch) begin
			case (br_op) 
				0:	if (br_equal)  	br_sel = 1;	// BEQ
				1:	if (!br_equal) 	br_sel = 1;	// BNE
				2:	if (br_less)   	br_sel = 1;	// BLT
				3:	if (!br_less)   br_sel = 1; // BGE
				4:	if (br_less)  	br_sel = 1;	// BLTU
				5:	if (!br_less) 	br_sel = 1;	// BGEU
				6:  br_sel = 1;					// JAL
				7:	br_sel = 1;					// JALR
			endcase
		end	else 	br_sel = 0;
	end    
      
/* verilator lint_off LATCH */  
// Check if equal or less
	always_ff begin
		if (rs1_data == rs2_data) begin
			br_equal = 1;
			br_less  = 0;		
		end else begin
			br_equal = 0;

		//Unsigned compare
			if (br_op == 4 || br_op == 5)  begin
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
