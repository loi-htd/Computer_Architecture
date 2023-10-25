module ctrl_unit(
  // input
  /* verilator lint_off UNUSED */
  input [31:0] instr,
  /* verilator lint_on UNUSED */
  input br_less,
  input br_equal,

  //output
  output reg br_sel,        // 0 if P C + 4, 1 if computed in ALU
  output reg br_unsigned,   // 1 if the two operands are unsigned
  output reg rd_wren,       // 1 if the instruction writes data into Regfile
  output reg mem_wren,      // 1 if the instruction writes data into LSU.
  output reg op_a_sel,      // 0 if rs1, 1 if P C
  output reg op_b_sel,      // 0 if rs2, 1 if imm.
  output reg [3:0] alu_op, 
  output reg [1:0] wb_sel   // 0 if alu_data, 1 if ld_data, and 2 or 3 if br_four
);

  localparam [4:0]
        // OP_LUI    = 5'b01101,
        // OP_AUIPIC = 5'b00101,
        OP_JAL    = 5'b11011,
        OP_JALR   = 5'b11001,
        OP_BRANCH = 5'b11000,
        OP_LOAD   = 5'b00000,
        OP_STORE  = 5'b01000,
        OP_M_IMME = 5'b00100,
        OP_M_REG  = 5'b01100;
        
  always_latch begin : proc_instr
    case (instr[6:2])
      OP_JAL: begin //jal
        br_sel = 1;
        op_a_sel = 1;
        op_b_sel = 1;
        alu_op = 4'b0;  //add
        mem_wren = 0;
        rd_wren = 1;
        wb_sel  = 2;
      end
      OP_JALR: begin  //jalr
        br_sel = 1;
        op_a_sel = 0;
        op_b_sel = 1;
        alu_op = 4'b0;  //add
        mem_wren = 0;
        rd_wren = 1;
        wb_sel  = 2;
      end
      OP_BRANCH: begin
        if (instr[14:12] == 3'b000) begin //beq
          if (br_equal) br_sel = 1;
          else  br_sel = 0;
          op_a_sel = 1;
          op_b_sel = 1;
          alu_op = 4'b0;  //add
          mem_wren = 0;
          rd_wren = 0;
        end
        else if (instr[14:12] == 3'b001) begin  //bne
          if (br_equal) br_sel = 0;
          else  br_sel = 1;
          op_a_sel = 1;
          op_b_sel = 1;
          alu_op = 4'b0;  //add
          mem_wren = 0;
          rd_wren = 0;
        end
        else if (instr[14:12] == 3'b100) begin  //blt
          if (br_less) begin
            br_sel = 1;
            br_unsigned = 0;
            op_a_sel = 1;
            op_b_sel = 1;
            alu_op = 4'b0;  //add
            mem_wren = 0;
            rd_wren = 0;
          end
        end
        else if (instr[14:12] == 3'b110) begin  //bltu
          if (br_less) begin
            br_sel = 1;
            br_unsigned = 1;
            op_a_sel = 1;
            op_b_sel = 1;
            alu_op = 4'b0;  //add
            mem_wren = 0;
            rd_wren = 0;
          end
        end
      end
      OP_LOAD: begin
        if (instr[14:12] == 3'b010) begin //lw
          br_sel = 0;
          op_a_sel = 0;
          op_b_sel = 1;
          alu_op = 4'b0;  //add
          mem_wren = 0;
          rd_wren = 1;
          wb_sel  = 1;
        end
        // lb, lh, lbu, lhu
      end
      OP_STORE: begin
        if (instr[14:12] == 3'b010) begin //sw
          br_sel = 0;
          op_a_sel = 0;
          op_b_sel = 1;
          alu_op = 4'b0;  //add
          mem_wren = 1;
          rd_wren = 0;
        end
        // sb, sh, sbu, shu
      end
      OP_M_IMME: begin
        br_sel = 0;
        op_a_sel = 0;
        op_b_sel = 1;
        mem_wren = 0;
        rd_wren = 1;
        wb_sel = 0;
        if (instr[14:12] == 3'b000) //addi
          alu_op = 4'b0;  //add
        else if (instr[14:12] == 3'b010) //slti
          alu_op = 4'b0010;  //slt
        else if (instr[14:12] == 3'b011) //sltiu
          alu_op = 4'b0011;  //sltu
        else if (instr[14:12] == 3'b100) //xori
          alu_op = 4'b0100;  //xor
        else if (instr[14:12] == 3'b110) //ori
          alu_op = 4'b0101;  //or
        else if (instr[14:12] == 3'b111) //andi
          alu_op = 4'b0110;  //and
        else if (instr[14:12] == 3'b001) //slli
          alu_op = 4'b0111;  //sll
        else if (instr[14:12] == 3'b101)
          if (instr[30] == 0) //srli
            alu_op = 4'b1000;  //srl
          else  alu_op = 4'b1001;  //sra
      end
      OP_M_REG: begin
        br_sel = 0;
        op_a_sel = 0;
        op_b_sel = 0;
        mem_wren = 0;
        rd_wren = 1;
        wb_sel = 0;
        if (instr[14:12] == 3'b000)
          if (instr[30] == 0) //add
            alu_op = 4'b0;  
          else  alu_op = 4'b0001;  //sub
        else if (instr[14:12] == 3'b010) 
          alu_op = 4'b0010;  //slt
        else if (instr[14:12] == 3'b011) 
          alu_op = 4'b0011;  //sltu
        else if (instr[14:12] == 3'b100) 
          alu_op = 4'b0100;  //xor
        else if (instr[14:12] == 3'b110) 
          alu_op = 4'b0101;  //or
        else if (instr[14:12] == 3'b111) 
          alu_op = 4'b0110;  //and
        else if (instr[14:12] == 3'b001) 
          alu_op = 4'b0111;  //sll
        else if (instr[14:12] == 3'b101)
          if (instr[30] == 0) //srl
            alu_op = 4'b1000;  
          else  alu_op = 4'b1001;  //sra
      end
      default;
    endcase
  end 
endmodule
