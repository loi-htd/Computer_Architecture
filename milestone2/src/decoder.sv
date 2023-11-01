module decoder(
  // input
  input logic [31:0] instr,

  // output
  output logic [4:0]  rs1_addr  ,
  output logic [4:0]  rs2_addr  ,
  output logic [4:0]  rd_addr   ,
  output logic        rd_wren   ,   // 1 if the instruction writes data into Regfile
  output logic [31:0] imm       ,
  output logic        branch    ,   // 1 if there's either branch or jump instruction
  output logic        jump      ,   // 1 if jump instruction
  output logic [3:0]  alu_op    ,
  output logic [2:0]  br_op     ,   // 0-7: BEQ, BNE, BLT, BGE, BLTU, BGEU, JAL, JALR
  output logic [3:0]  ld_op     ,   // ld_op[3] = 1 if signed, [2][1][0] = 111 if lw, sw; [2][1][0] = 011 if lh, sh; [2][1][0] = 001 if lb, sb 
  output logic        op_a_sel  ,   // 0 if rs1, 1 if PC
  output logic        op_b_sel  ,   // 0 if rs2, 1 if imm
  output logic        mem_wren  ,   // 1 if the instruction writes data into LSU.
  output logic        is_load       // 0 if alu_data, 1 if ld_data
);

// Register Addresses and Signals
  always_comb begin : proc_signals
    rs1_addr   = 5'h0;
    rs2_addr   = 5'h0;
    rd_addr    = 5'h0;
    rd_wren    = 1'b0;
    op_a_sel   = 1'b0;
    op_b_sel   = 1'b0;
    mem_wren   = 1'b0;
    is_load    = 1'b0;
    branch     = 1'b0;
    jump       = 1'b0;
    alu_op     = 0;
    br_op      = 0;
    ld_op      = 0;

    case (instr[6:0])
      // Register - Register
      7'b011_00_11: begin
        // OP_OP: begin
        rs1_addr   = instr[19:15];
        rs2_addr   = instr[24:20];
        rd_addr    = instr[11:7];
        rd_wren    = 1'b1;
        op_a_sel   = 1'b0;
        op_b_sel   = 1'b0;

          // Assign ALU_OP 
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

      // Immediate - Register
      7'b001_00_11: begin
        // OP_OPIMM : begin
        rs1_addr   = instr[19:15];
        rd_addr    = instr[11:7];
        rd_wren    = 1'b1;
        op_a_sel   = 1'b0;
        op_b_sel   = 1'b1;

            // Assign ALU_OP 
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

      // Load
      7'b000_00_11: begin
        // OP_LOAD : begin
        rs1_addr   = instr[19:15];
        rd_addr    = instr[11:7];
        rd_wren    = 1'b1;
        op_a_sel   = 1'b0;
        op_b_sel   = 1'b1;
        is_load    = 1'b1;
        alu_op = 4'b0;  //add
        // Load-Store Option
        case (instr[14:12])
          3'b000: begin // LB and SB
            ld_op = 4'b1001;
          end
          3'b001: begin // LH and SH
            ld_op = 4'b1011;
          end
          3'b010: begin // LW and SW
            ld_op = 4'b1111;
          end
          3'b100: begin // LBU
            ld_op = 4'b0001;
          end
          3'b101: begin // LHU
            ld_op = 4'b0011;
          end
          default: begin
            ld_op = 4'b0000;
          end
        endcase
      end

      // Store
      7'b010_00_11: begin
        // OP_STORE : begin
        rs1_addr   = instr[19:15];
        rs2_addr   = instr[24:20];
        op_a_sel   = 1'b0;
        op_b_sel   = 1'b1;
        mem_wren   = 1'b1;
        alu_op = 4'b0;  //add
        // Load-Store Option
        case (instr[14:12])
          3'b000: begin // LB and SB
            ld_op = 4'b1001;
          end
          3'b001: begin // LH and SH
            ld_op = 4'b1011;
          end
          3'b010: begin // LW and SW
            ld_op = 4'b1111;
          end
          3'b100: begin // LBU
            ld_op = 4'b0001;
          end
          3'b101: begin // LHU
            ld_op = 4'b0011;
          end
          default: begin
            ld_op = 4'b0000;
          end
        endcase
      end

      // Conditional Branch
      7'b110_00_11: begin
        // OP_BRANCH : begin
        rs1_addr   = instr[19:15];
        rs2_addr   = instr[24:20];
        op_a_sel   = 1'b1;
        op_b_sel   = 1'b1;
        branch     = 1'b1;
        jump       = 1'b0;
        alu_op = 4'b0;  //add

        // Assign Branch OP
        case (instr[14:12])
          3'b000: br_op = 0;  //BEQ
          3'b001: br_op = 1;  //BNE
          3'b100: br_op = 2;  //BLT
          3'b101: br_op = 3;  //BGE
          3'b110: br_op = 4;  //BLTU
          3'b111: br_op = 5;  //BGEU
          default: br_op = 0;
        endcase
      end
      // Jump and Link
      7'b110_11_11: begin
        // OP_JAL : begin
        rd_addr    = instr[11:7];
        rd_wren    = 1'b1;
        op_a_sel   = 1'b1;
        op_b_sel   = 1'b1;
        branch     = 1'b1;
        jump       = 1'b1;
        alu_op     = 4'b0;  //add
        br_op      = 6;
      end
      // Jump and Link Register
      7'b110_01_11: begin
        // OP_JALR : begin
        rs1_addr   = instr[19:15];
        rd_addr    = instr[11:7];
        rd_wren    = 1'b1;
        op_a_sel   = 1'b1;
        op_b_sel   = 1'b1;
        branch     = 1'b1;
        jump       = 1'b1;
        alu_op     = 4'b0;  //add
        br_op      = 7;
      end
      // Load Upper Immediate
      7'b011_01_11: begin
        // OP_LUI : begin
        rs1_addr   = 5'h0;
        rd_addr    = instr[11:7];
        rd_wren    = 1'b1;
        op_a_sel   = 1'b0;
        op_b_sel   = 1'b1;
        alu_op     = 4'b0;  //add
      end
      // Add Upper Immediate PC
      7'b001_01_11: begin
        // OP_AUIPC : begin
        rd_addr    = instr[11:7];
        rd_wren    = 1'b1;
        op_a_sel   = 1'b1;
        op_b_sel   = 1'b1;
        alu_op     = 4'b0;  //add
      end

      default: begin
      end
    endcase
  end

   // Immediate Generator
  always_comb begin : proc_imm_gen
    imm   = 32'h0;
    case (instr[6:0])
      // Immediate - Register
      7'b001_00_11: begin
        // OP_OPIMM : begin
        imm = {{21{instr[31]}}, instr[30:20]};
      end
      // Load
      7'b000_00_11: begin
        // OP_LOAD : begin
        imm = {{21{instr[31]}}, instr[30:20]};
      end
      // Store
      7'b010_00_11: begin
        // OP_STORE : begin
        imm = {{21{instr[31]}}, instr[30:25], instr[11:7]};
      end
      // Conditional Branch
      7'b110_00_11: begin
        // OP_BRANCH : begin
        imm = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
      end
      // Jump and Link
      7'b110_11_11: begin
        // OP_JAL : begin
        imm = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
      end
      // Jump and Link Register
      7'b110_01_11: begin
        // OP_JALR : begin
        imm = {{21{instr[31]}}, instr[30:20]};
      end
      // Load Upper Immediate
      7'b011_01_11: begin
        // OP_LUI : begin
        imm = {instr[31:12], 12'b0};
      end
      // Add Upper Immediate PC
      7'b001_01_11: begin
        // OP_AUIPC : begin
        imm = {instr[31:12], 12'b0};
      end
      default: begin
        imm   = 32'h0;
      end
    endcase
  end
  
endmodule
