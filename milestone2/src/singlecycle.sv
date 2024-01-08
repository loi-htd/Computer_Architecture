module singlecycle (
 //INPUT
  input logic        	clk_i,
  input logic        	rst_ni,

  input logic [31:0]    io_sw_i,
 //OUTPUT
  output logic [31:0] 	pc_debug_o,
  output logic [31:0] 	io_lcd_o,
  output logic [31:0] 	io_ledg_o,
  output logic [31:0] 	io_ledr_o,
  output logic [31:0] 	io_hex0_o,
  output logic [31:0] 	io_hex1_o,
  output logic [31:0] 	io_hex2_o,
  output logic [31:0] 	io_hex3_o,
  output logic [31:0] 	io_hex4_o,
  output logic [31:0] 	io_hex5_o,
  output logic [31:0] 	io_hex6_o,
  output logic [31:0] 	io_hex7_o
);

  // `define VERIFICATION

  //LOCAL DECLARATION
    //PC declare
    logic [31:0]  pc;
    logic [31:0]  pc_four;
    logic [31:0]	nxt_pc;
    
    //Instruction declare
    logic [31:0] 	instr_memory [0:1011];
    logic [31:0]  instr;

    //Decoder declare
    logic [4:0]  rs1_addr  ;
    logic [4:0]  rs2_addr  ;
    logic [4:0]  rd_addr   ;
    logic        rd_wren   ;   // 1 if the instruction writes data into Regfile
    logic [31:0] imm       ;
    logic        branch    ;   // 1 if there's either branch or jump instruction
    logic        jump       ;  // 1 if  jump instruction
    logic [3:0]  alu_op    ;    
    logic [2:0]  br_op     ;   // 0-7: BEQ, BNE, BLT, BGE, BLTU, BGEU, JAL, JALR
    logic [3:0]  ld_op     ;   // ld_op[3] = 1 if signed, [2][1][0] = 111 if lw, sw; [2][1][0] = 011 if lh, sh; [2][1][0] = 001 if lb, sb 
    logic        op_a_sel  ;   // 0 if rs1, 1 if PC
    logic        op_b_sel  ;   // 0 if rs2, 1 if imm, 2 or 3 if 32'h4
    logic        mem_wren  ;   // 1 if the instruction writes data into LSU.
    logic        is_load   ;   // 1 if register's write data is load data 
     
    //Reg declare
    logic [31:0]  rs1_data;
    logic [31:0]  rs2_data;
        
    //ALU declare
    logic [31:0]  operand_a;
    logic [31:0]  operand_b;
    logic [31:0]	alu_data;
    logic         br_sel;      // 1 if nxt_pc = alu_data, 0 if pc+4

    //LSU declare
    logic [31:0] 	ld_data;
      
    //WriteBack declare 
    logic [31:0] 	rd_data;
    logic [31:0]  wb_data;
    
    /* verilator lint_off UNUSED */
    logic [31:0] instr_debug_i;
    /* verilator lint_on UNUSED */

  mux_2 mux_pc(
      .mux_i_0 	(pc_four),
      .mux_i_1	(alu_data),
      .mux_sel	(br_sel),
      .mux_o	  (nxt_pc)
  );

  decoder decoder0(
    .instr	(instr),
    .rs1_addr	(rs1_addr),
    .rs2_addr	(rs2_addr),
    .rd_addr	(rd_addr),
    .rd_wren  (rd_wren),
    .imm	    (imm),
    .branch	  (branch),
    .jump     (jump),
    .alu_op	  (alu_op),
    .br_op	  (br_op),
    .ld_op    (ld_op),
    .op_a_sel	(op_a_sel),
    .op_b_sel	(op_b_sel),
    .mem_wren	(mem_wren),
    .is_load	(is_load)
  );
  
  regfile regfile0 (
    .clk_i	(clk_i),
    .rst_ni 	(rst_ni),
    .rs1_addr	(rs1_addr),
    .rs2_addr	(rs2_addr),
    .rd_addr	(rd_addr),
    .rd_data	(rd_data),
    .rd_wren	(rd_wren),
    .rs1_data	(rs1_data),
    .rs2_data	(rs2_data)
  );
  
  mux_2 mux_op_a(
    .mux_i_0	(rs1_data),
    .mux_i_1	(pc),
    .mux_sel	(op_a_sel),
    .mux_o	  (operand_a)
  );
  
  mux_2 mux_op_b(
    .mux_i_0	(rs2_data),
    .mux_i_1	(imm),
    .mux_sel	(op_b_sel),
    .mux_o	  (operand_b)
  );
  
  alu alu0 (
    .operand_a  (operand_a),
    .operand_b  (operand_b),
    .rs1_data   (rs1_data),
    .rs2_data   (rs2_data),
    .branch     (branch),
    .alu_op	    (alu_op),
    .br_op      (br_op),
    .alu_data	  (alu_data),
    .br_sel     (br_sel)
  );

  lsu lsu0 (
    .clk_i	  (clk_i),
    .rst_ni 	(rst_ni),
    .addr	    (alu_data),
    .ld_op    (ld_op),
    .st_data	(rs2_data),
    .st_en	  (mem_wren),
    .io_sw	  (io_sw_i),
    .ld_data	(ld_data),
    .io_lcd	  (io_lcd_o),
    .io_ledg	(io_ledg_o),
    .io_ledr	(io_ledr_o),
    .io_hex0	(io_hex0_o),
    .io_hex1	(io_hex1_o),
    .io_hex2	(io_hex2_o),
    .io_hex3	(io_hex3_o),
    .io_hex4	(io_hex4_o),
    .io_hex5	(io_hex5_o),
    .io_hex6	(io_hex6_o),
    .io_hex7	(io_hex7_o)
  );
 
  mux_2 mux_wb_data(
    .mux_i_0	(alu_data),
    .mux_i_1	(ld_data),
    .mux_sel	(is_load),
    .mux_o	  (wb_data)
  );
  
  mux_2 mux_jump(
    .mux_i_0	(wb_data),
    .mux_i_1	(pc_four),
    .mux_sel	(jump),
    .mux_o	  (rd_data)
  );

  `ifdef VERIFICATION  
  instr_test test0(
    .clk_i       (clk_i),
    .pc_debug    (pc_debug_o),
    .instr_debug (instr_debug_i)
  );
  `endif
  
  initial begin : load_instruction_file 
    $readmemh("../mem/instruction_mem.data", instr_memory);   	
    pc	 = 0;
  end
  
  always_comb begin : fetch_instr
  	pc_four     = pc + 4;	
  	pc_debug_o  = pc;
    instr	= instr_memory[pc >> 2] ;
    `ifdef VERIFICATION
    /*verilator lint_off UNUSED*/
      instr	= instr_debug_i;
    /*verilator lint_on UNUSED*/
    `endif
  end
  
  always @(posedge clk_i or negedge rst_ni) begin : update_pc
  	if (!rst_ni) 	pc <= 0;
  	else 		      pc <= nxt_pc ;	
  end

/* Verilator*/
  `ifdef VERILATOR
    /*verilator lint_off UNUSED*/
    always @(posedge clk_i) begin : proc_debugging
      $display("%h %h  %h", pc[11:0], nxt_pc[11:0], instr);
    end
    /*verilator lint_on UNUSED*/
  `endif

endmodule : singlecycle
