module immgen (

//Input
  input logic [31:0] instr,
  
 //Output
  output logic [31:0] imm
);

 //Local Declaration
  logic [6:0] opcode;
  
// Immediate Generator
  always_comb begin 
  	opcode = instr[6:0];
  	
  	// I-Instruction (Arithmatic and Load and JALR)
      	if (opcode == 7'b0010011 || opcode == 7'b0000011 || opcode == 7'b1100111) begin
      		imm[10:0]   = instr[30:20];
      		imm[31:11]  = {21{instr[31]}};
      		
      	// S-Instruction
      	end else if (opcode == 7'b0100011) begin
      		imm[4:0]   = instr[11:7];
      		imm[10:5]  = instr[30:25];
      		imm[31:11] = {21{instr[31]}};;
      		
      	// B-Instruction
      	end else if (opcode == 7'b1100011) begin
      		imm[0]     = 1'b0;    	      		
      		imm[4:1]   = instr[11:8];     		
      		imm[10:5]  = instr[30:25];  
      		imm[11]	   = instr[7];    		   		
      		imm[31:12] = {20{instr[31]}};
      		
      	// U-Instruction (LUI and AUIPC)
      	end else if (opcode == 7'b0110111 || opcode == 7'b0010111) begin
      		imm[11:0]  = 12'b0;
      		imm[31:12] = instr[31:12];
     		
     	// J-Instruction (JAL)
      	end else if (opcode == 7'b1101111) begin
      		imm[0] 	   = 1'b0;
      		imm[10:1]  = instr[30:21];
      		imm[11]	   = instr[20];
      		imm[19:12] = instr[19:12];
      		imm[20]    = instr[31];
      		imm[31:21] = 11'b0;
      	
      	// Default
      	end else imm = 0;
	
  end

endmodule

