module alu (
//Input
  input logic [31:0] operand_a,
  input logic [31:0] operand_b,
  input logic [31:0] rs1_data,
  input logic [31:0] rs2_data,
  input logic [3:0]  alu_op,
  input logic [2:0]  br_op,			
  input logic		    branch,
//Output
  output logic 		   br_sel,			
  output logic [31:0]  alu_data
);

// ALU calculation
  always_comb begin : alu_cal
    case (alu_op)
      4'b0000:						//ADD			
		  alu_data =  operand_a + operand_b ; 

      4'b0001: 				  	//SUB
	  	alu_data =  operand_a + (~operand_b + 1);
      	
      4'b0010: 	          //SLT
	    alu_data = ($signed(operand_a) < $signed(operand_b)) ? 1:0;
	 
      4'b0011:            //SLTU
	    alu_data = (operand_a < operand_b) ? 1:0 ;

      4'b0100: alu_data = operand_a ^ operand_b ;  		    //XOR
      
      4'b0101: alu_data = operand_a | operand_b ;  		    //OR
      
      4'b0110: alu_data = operand_a & operand_b ;  		    //AND
      
      4'b0111: alu_data = operand_a << operand_b[4:0] ;  	//SLL
      
      4'b1000: alu_data = operand_a >> operand_b[4:0] ;  	//SRL
      
      4'b1001: alu_data = $signed(operand_a) >>> operand_b[4:0] ;  	//SRA
      
      default: alu_data = 0 ;
    endcase
  end

// ALU Branch
	always_comb begin : br_cal
	br_sel = 0;
    	if (branch) begin
			case (br_op) 
				0:	if (rs1_data == rs2_data)  	                br_sel = 1;	// BEQ
				1:	if (rs1_data != rs2_data) 	                br_sel = 1;	// BNE
				2:	if (rs1_data < rs2_data)   	                br_sel = 1;	// BLT
				3:	if (rs1_data >= rs2_data)                   br_sel = 1; // BGE
				4:	if ($signed(rs1_data) < $signed(rs2_data))  	br_sel = 1;	// BLTU
				5:	if ($signed(rs1_data) >= $signed(rs2_data)) 	br_sel = 1;	// BGEU
				6:  br_sel = 1;					// JAL
				7:	br_sel = 1;					// JALR
			endcase
		end	else 	br_sel = 0;
	end    

endmodule : alu
