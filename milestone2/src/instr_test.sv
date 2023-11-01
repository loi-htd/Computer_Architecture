module instr_test (
  /*verilator lint_off UNUSED*/
  input logic clk_i,
  input logic [31:0] pc_debug,

  output logic [31:0] instr_debug
);

/* SELECT DEBUG MODE */
// `define TB_ARITHMETIC
  // `define IMMEDIATE
  // `define REGISTER
// `define TB_JUMP
// `define TB_BRANCH
// `define TB_LOAD_STORE
`define TB_FULL

/* Local parameter */
  /* verilator lint_off UNDRIVEN */
  logic [31:0] instruction[1011:0];
  logic [31:0] debug_reg [31:0];
  logic [1011:0] total_pass;
  logic [1011:0] total_fail;
  /* verilator lint_on UNDRIVEN */

`ifdef TB_ARITHMETIC
  /*verilator lint_off UNUSED*/
  enum {
    ADDR_ADD = 3,  ADDR_SUB, 
    ADDR_SLL, ADDR_SLT, ADDR_SLTU,
    ADDR_SRL, ADDR_SRA,
    ADDR_XOR, ADDR_OR, ADDR_AND
  }instr_addr;  // mapping address of instruction in array
  /*verilator lint_on UNUSED*/

  // Basic case: Two operands are positive integers.
    // base register : change register's value for other testcase
    assign instruction[0] = 32'h01300093;     // addi x1, x0, 19 
    assign instruction[1] = 32'h00200113;     // addi x2, x0, 2 
    assign instruction[2] = 32'h00200113;     // addi x2, x0, 2   //unused

    // intruction tested
  `ifdef REGISTER 
    assign instruction[3] = 32'h002081B3;     // add  x3, x1, x2 
    assign instruction[4] = 32'h40208233;     // sub x4, x1, x2 
    assign instruction[5] = 32'h002092B3;     // sll x5, x1, x2 
    assign instruction[6] = 32'h0020A333;     // slt x6, x1, x2 
    assign instruction[7] = 32'h0020B3B3;     // sltu x7, x1, x2 
    assign instruction[8] = 32'h0020D433;     // srl x8, x1, x2 
    assign instruction[9] = 32'h4020D4B3;     // sra x9, x1, x2 
    assign instruction[10] = 32'h0020C533;     // xor x10, x1, x2 
    assign instruction[11] = 32'h0020E5B3;    // or x11, x1, x2 
    assign instruction[12] = 32'h0020F633;    // and x12, x1, x2 
  `endif 
  `ifdef IMMEDIATE
    assign instruction[3] = 32'h03208193;     // addi  x3, x1, 50 
    assign instruction[4] = 32'h40208233;     // sub x4, x1, x2 
    assign instruction[5] = 32'h00509293;     // slli x5, x1, 5 
    assign instruction[6] = 32'h0580A313;     // slti x6, x1, 88 
    assign instruction[7] = 32'h0C80B393;     // sltiu x7, x1, 200 
    assign instruction[8] = 32'h0040D413;     // srli x8, x1, 4 
    assign instruction[9] = 32'h4020D493;     // srai x9, x1, 2 
    assign instruction[10] = 32'h02D0C513;     // xori x10, x1, 45  
    assign instruction[11] = 32'h02D0E593;    // ori x11, x1, 45 
    assign instruction[12] = 32'h02D0F613;    // andi x12, x1, 45  
  `endif 

  
  always @(posedge clk_i) begin : proc_testbench
    if ((pc_debug >> 2) == 13)  begin
      $readmemh ("../mem/regfile.data", debug_reg);
      
    `ifdef REGISTER
      if (debug_reg[ADDR_ADD] == debug_reg[1] + debug_reg[2]) begin
        total_pass <= total_pass + 1;
        $display("-------------------ADD instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------ADD instruction: FAIL");
      end

      if (debug_reg[ADDR_SUB] == debug_reg[1] - debug_reg[2]) begin
        total_pass <= total_pass + 1;
        $display("-------------------SUB instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------SUB instruction: FAIL");
      end

      if (debug_reg[ADDR_SLL] == debug_reg[1] << debug_reg[2]) begin
        total_pass <= total_pass + 1;
        $display("-------------------SLL instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------SLL instruction: FAIL");
      end

      if ($signed(debug_reg[1]) < $signed(debug_reg[2])) begin
        if (debug_reg[ADDR_SLT] == 1) begin
          total_pass <= total_pass + 1;
          $display("-------------------SLT instruction: PASS");
        end else begin
          total_fail <= total_fail + 1;
          $display("-------------------SLT instruction: FAIL");
        end
      end else begin
        if (debug_reg[ADDR_SLT] == 0) begin
          total_pass <= total_pass + 1;
          $display("-------------------SLT instruction: PASS");
        end else begin
          total_fail <= total_fail + 1;
          $display("-------------------SLT instruction: FAIL");
        end
      end

      if ($unsigned(debug_reg[1]) < $unsigned(debug_reg[2])) begin
        if (debug_reg[ADDR_SLTU] == 1) begin
          total_pass <= total_pass + 1;
          $display("-------------------SLT instruction: PASS");
        end else begin
          total_fail <= total_fail + 1;
          $display("-------------------SLT instruction: FAIL");
        end
      end else begin
        if (debug_reg[ADDR_SLTU] == 0) begin
          total_pass <= total_pass + 1;
          $display("-------------------SLT instruction: PASS");
        end else begin
          total_fail <= total_fail + 1;
          $display("-------------------SLT instruction: FAIL");
        end
      end

      if (debug_reg[ADDR_SRL] == debug_reg[1] >> debug_reg[2]) begin
        total_pass <= total_pass + 1;
        $display("-------------------SRL instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------SRL instruction: FAIL");
      end

      if (debug_reg[ADDR_SRA] == debug_reg[1] >>> debug_reg[2]) begin
        total_pass <= total_pass + 1;
        $display("-------------------SRA instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------SRA instruction: FAIL");
      end

      if (debug_reg[ADDR_XOR] == (debug_reg[1] ^ debug_reg[2])) begin
        total_pass <= total_pass + 1;
        $display("-------------------XOR instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------XOR instruction: FAIL");
      end

      if (debug_reg[ADDR_OR] == (debug_reg[1] | debug_reg[2])) begin
        total_pass <= total_pass + 1;
        $display("-------------------OR instruction : PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------OR instruction : FAIL");
      end

      if (debug_reg[ADDR_AND] == (debug_reg[1] & debug_reg[2])) begin
        total_pass <= total_pass + 1;
        $display("-------------------AND instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------AND instruction: FAIL");
      end
    `endif
    
    `ifdef IMMEDIATE
      if (debug_reg[ADDR_ADD] == debug_reg[1] + {20'b0,instruction[ADDR_ADD][31:20]}) begin
        total_pass <= total_pass + 1;
        $display("-------------------ADD instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------ADD instruction: FAIL");
      end

      if (debug_reg[ADDR_SLL] == debug_reg[1] << {26'b0,instruction[ADDR_SLL][25:20]}) begin
        total_pass <= total_pass + 1;
        $display("-------------------SLL instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------SLL instruction: FAIL");
      end

      if ($signed(debug_reg[1]) < $signed({20'b0,instruction[ADDR_SLT][31:20]})) begin
        if (debug_reg[ADDR_SLT] == 1) begin
          total_pass <= total_pass + 1;
          $display("-------------------SLT instruction: PASS");
        end else begin
          total_fail <= total_fail + 1;
          $display("-------------------SLT instruction: FAIL");
        end
      end else begin
        if (debug_reg[ADDR_SLT] == 0) begin
          total_pass <= total_pass + 1;
          $display("-------------------SLT instruction: PASS");
        end else begin
          total_fail <= total_fail + 1;
          $display("-------------------SLT instruction: FAIL");
        end
      end

      if ($unsigned(debug_reg[1]) < $unsigned({20'b0,instruction[ADDR_SLTU][31:20]})) begin
        if (debug_reg[ADDR_SLTU] == 1) begin
          total_pass <= total_pass + 1;
          $display("-------------------SLTU instruction: PASS");
        end else begin
          total_fail <= total_fail + 1;
          $display("-------------------SLTU instruction: FAIL");
        end
      end else begin
        if (debug_reg[ADDR_SLTU] == 0) begin
          total_pass <= total_pass + 1;
          $display("-------------------SLT instruction: PASS");
        end else begin
          total_fail <= total_fail + 1;
          $display("-------------------SLT instruction: FAIL");
        end
      end

      if (debug_reg[ADDR_SRL] == debug_reg[1] >> {26'b0,instruction[ADDR_SRL][25:20]}) begin
        total_pass <= total_pass + 1;
        $display("-------------------SRL instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------SRL instruction: FAIL");
      end

      if (debug_reg[ADDR_SRA] == debug_reg[1] >>> {26'b0,instruction[ADDR_SRA][25:20]}) begin
        total_pass <= total_pass + 1;
        $display("-------------------SRA instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------SRA instruction: FAIL");
      end

      if (debug_reg[ADDR_XOR] == (debug_reg[1] ^ {20'b0,instruction[ADDR_XOR][31:20]})) begin
        total_pass <= total_pass + 1;
        $display("-------------------XOR instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------XOR instruction: FAIL");
      end

      if (debug_reg[ADDR_OR] == (debug_reg[1] | {20'b0,instruction[ADDR_OR][31:20]})) begin
        total_pass <= total_pass + 1;
        $display("-------------------OR instruction : PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------OR instruction : FAIL");
      end

      if (debug_reg[ADDR_AND] == (debug_reg[1] & {20'b0,instruction[ADDR_AND][31:20]})) begin
        total_pass <= total_pass + 1;
        $display("-------------------AND instruction: PASS");
      end 
      else begin
        total_fail <= total_fail + 1;
        $display("-------------------AND instruction: FAIL");
      end
    `endif 
    end
  end
`endif

`ifdef TB_JUMP
  assign instruction[0]   = 32'h190000EF;   // jal 400      
  assign instruction[100] = 32'h00400113;   // addi x2,x0,4     
  assign instruction[101] = 32'h00300193;   // addi x3,x0,3
  assign instruction[102] = 32'h01810267;   // JALR x4,x2,NEXT
  assign instruction[103] = 32'h00500293;   // addi x5,x0,5
  assign instruction[104] = 32'h00600313;   // addi x6,x0,6
  assign instruction[105] = 32'h00700393;   // NEXT: addi x7,x0,7
  assign instruction[108] = 32'h00800393;   // addi x7, x0, 8

  always_ff @(posedge clk_i) begin : check_jump
    if (pc_debug >> 2 == 110) begin
      $readmemh ("../mem/regfile.data", debug_reg);
      if (debug_reg[7] == 8)
        $display("JUMP instruction: PASS");
      else $display("JUMP instruction: FAIL");
    end
  end
`endif 

`ifdef TB_BRANCH
  assign instruction[0] = 32'h01400093;     // addi x1, x0, 20
  assign instruction[1] = 32'h02800113;     // addi x2, x0, 40
  assign instruction[2] = 32'h00A08093;     // NEQUAL: addi x1,x1,10
  assign instruction[3] = 32'hFE209EE3;     // bne x1,x2,NEQUAL
  assign instruction[4] = 32'h03200193;     // addi x3, x0, 50
  assign instruction[5] = 32'h03200213;     // addi x4, x0, 50   
  assign instruction[6] = 32'hFF618193;     // EQUAL: addi x3,x3,-10
  assign instruction[7] = 32'hFE118EE3;     // beq x3, x1, EQUAL
  assign instruction[8] = 32'h03220213;     // addi x4, x4, 50
  assign instruction[9] = 32'h0040C463;     // blt x1,x4,LESS
  assign instruction[10] = 32'h06420213;     // addi x4,x4,100
  assign instruction[11] = 32'h03220213;     // LESS: addi x4, x4, 50
  assign instruction[12] = 32'h0040E463;     // bltu x1,x4,LESSU
  assign instruction[13] = 32'h06420213;     // addi x4,x4,100
  assign instruction[14] = 32'h03220213;     // LESSU: addi x4,x4,50

  always_ff @(posedge clk_i) begin : check_branch
    if (pc_debug >> 2 == 16) begin
      $readmemh ("../mem/regfile.data", debug_reg);
      if (debug_reg[1] == 40 && debug_reg[2] == 40 && debug_reg[3] == 30 && debug_reg[4] == 200)
        $display("BRANCH instruction: PASS %d/4",debug_reg[4]/50);
      else $display("BRANCH instruction: FAIL %d/4",(200 - debug_reg[4])/50);
    end
  end
`endif

`ifdef TB_LOAD_STORE
  assign instruction[0] = 32'h1EF00093;   // addi x1,x0,0x1EF     # x1 = 0x000001EF
  assign instruction[1] = 32'h00C09093;   // slli x1,x1,12        # x1 = 0x001EF000
  assign instruction[2] = 32'h1FA08093;   // addi x1,x1,0x1FA     # x1 = 0x001EF1FA
  assign instruction[3] = 32'h30000393;   // addi x7,x0,0x300     # x7 = 0x300  - base address
  assign instruction[4] = 32'h0013A023;   // sw   x1,0(x7)        # 0x001EF1FA -> (x7)
  assign instruction[5] = 32'h00139223;   // sh   x1,4(x7)        # 0xF1FA -> (x7+4)
  assign instruction[6] = 32'h001383A3;   // sb   x1,7(x7)        # 0xFA   -> (x7+7) 
  assign instruction[7] = 32'h0003A103;   // lw   x2,0(x7)        # x2 = 0x001EF1FA
  assign instruction[8] = 32'h00039183;   // lh   x3,0(x7)        # x3 = 0xFFFFF1FA
  assign instruction[9] = 32'h0003D203;   // lhu  x4,0(x7)        # x4 = 0x0000F1FA
  assign instruction[10] = 32'h00138283;  // lb   x5,1(x7)        # x5 = 0xFFFFFFF1
  assign instruction[11] = 32'h0013C303;  // lbu  x6,1(x7)        # x6 = 0x000000F1

  logic [7:0] data_mem [2047:0]; 
  always_ff @(posedge clk_i) begin : check_ldst
    if (pc_debug >> 2 == 13) begin
      $readmemh ("../mem/regfile.data", debug_reg);
      $readmemh ("../mem/mem_data.data", data_mem);
      if ({data_mem[debug_reg[7]+3],data_mem[debug_reg[7]+2],data_mem[debug_reg[7]+1],data_mem[debug_reg[7]]} != 32'h001EF1FA)
        $display("SW instruction: FAIL");
      else $display("SW instruction: PASS");

      if ({data_mem[debug_reg[7]+5],data_mem[debug_reg[7]+4]} != 16'hF1FA)
        $display("SH instruction: FAIL");
      else $display("SH instruction: PASS");

      if (data_mem[debug_reg[7]+7] != 8'hFA)
        $display("SB instruction: FAIL");
      else $display("SB instruction: PASS");

      if (debug_reg[2] != 32'h001EF1FA)
        $display("LW instruction: FAIL");
      else $display("LW instruction: PASS");

      if (debug_reg[3] != 32'hFFFFF1FA)
        $display("LH instruction: FAIL");
      else $display("LH instruction: PASS");

      if (debug_reg[4] != 32'h0000F1FA)
        $display("LHU instruction: FAIL");
      else $display("LHU instruction: PASS");

      if (debug_reg[5] != 32'hFFFFFFF1)
        $display("LB instruction: FAIL");
      else $display("LB instruction: PASS");

      if (debug_reg[6] != 32'h000000F1)
        $display("LBU instruction: FAIL");
      else $display("LBU instruction: PASS");
    end
  end
`endif

`ifdef TB_FULL
  // Test the RISCV processor. 
  //   add, sub, and, or, slt, addi, la, SW, beg, jal 
  //   If successful, it should write the value 71 to address 84 
  assign instruction[0]  = 32'h00500113;   // main:   addi x2, x0, 5          # initialize x2 = 5         0
  assign instruction[1]  = 32'h00C00193;   //         addi x3, x0, 12         # initialize x3 = 12        4
  assign instruction[2]  = 32'hFF718393;   //         addi x7, x3, -9         # initialize x7 = 3         8
  assign instruction[3]  = 32'h0023E233;   //         or   x4, x7, x2         # x4 = (3 OR 5) = 7         C
  assign instruction[4]  = 32'h0041F2B3;   //         and  x5, x3, x4         # x5 = (12 AND 7) = 4       10
  assign instruction[5]  = 32'h004282B3;   //         add  x5, x5, x4         # x5 = 4 + 7 = 11           14
  assign instruction[6]  = 32'h02728663;   //         beq  x5, x7, end        # shouldn't be taken        18
  assign instruction[7]  = 32'h0041A233;   //         slt  x4, x3, x4         # x4 = (12 < 7) = 0         1C
  assign instruction[8]  = 32'h00020463;   //         beq  x4, x0, around     # shouldn't be taken        20
  assign instruction[9]  = 32'h00000293;   //         addi x5, x0, 0          # shouldn't happen          24
  assign instruction[10] = 32'h0023A233;   // around: slt  x4, x7, x2         # x4 = (3 < 5) = 1          28
  assign instruction[11] = 32'h005203B3;   //         add  x7, x4, x5         # x7 = 1 + 11 = 12          2C
  assign instruction[12] = 32'h402383B3;   //         sub  x7, x7, x2         # x7 = 12 - 5 = 7           30
  assign instruction[13] = 32'h0471A223;   //         SW   x7, 68(x3)         # [80] = 7                  34
  assign instruction[14] = 32'h05002103;   //         lw   x2, 80(x0)         # x2 = [80] = 7             38
  assign instruction[15] = 32'h008001EF;   //         jal  x3, end            # save 64 in x3             3C
  assign instruction[16] = 32'h00100113;   //         addi x2, x0, 1          # shouldn't happen          40
  assign instruction[17] = 32'h00310133;   // end:    add  x2, x2, x3         # x2 = 7 + 64 = 71          44
  assign instruction[18] = 32'h04202A23;   //         SW   x2, 84(x0)         # write mem[84] = 71        48

  logic [7:0] data_mem [2047:0];
  always_ff @(posedge clk_i) begin : check_full
    if (pc_debug >> 2 == 21) begin
      $readmemh ("../mem/mem_data.data", data_mem);
      if ({data_mem[87], data_mem[86], data_mem[85], data_mem[84]} == 71)
        $display("--------------PASS--------------");
      else $display("--------------FAIL--------------");
    end
  end
`endif 

  always_comb begin : proc_instr_tb
    instr_debug = instruction[pc_debug >> 2];  
  end
  /*verilator lint_on UNUSED*/
endmodule
