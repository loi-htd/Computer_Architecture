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

 //LOCAL DECLARATION
  //INSTRUCTION MEMORY declare
  logic [31:0] 	instr_memory [0:1023];

  //IF LAYER declare
  logic [31:0]	nxt_pc_if;
  logic [31:0]  pc_if;
  logic [31:0]  pc_four_if;
  logic [31:0]  instr_if;

  //ID LAYER declare
  logic [31:0] instr_id;

  logic [4:0]  rs1_addr_id  ;
  logic [4:0]  rs2_addr_id  ;
  logic [31:0] pc_id;
  logic [31:0] pc_four_id;
  logic [31:0] rs1_data_id;
  logic [31:0] rs2_data_id;
  logic        op_a_sel_id  ;   // 0 if rs1, 1 if PC
  logic        op_b_sel_id  ;   // 0 if rs2, 1 if imm, 2 or 3 if 32'h4
  logic [31:0] imm_id       ;
  logic        branch_id    ;   // 1 if there's either branch or jump instruction
  logic [3:0]  alu_op_id    ;    
  logic [2:0]  br_op_id     ;   // 0-7: BEQ, BNE, BLT, BGE, BLTU, BGEU, JAL, JALR
  logic [3:0]  ld_op_id     ;   // ld_op[3] = 1 if signed, [2][1][0] = 111 if lw, sw; [2][1][0] = 011 if lh, sh; [2][1][0] = 001 if lb, sb 
  logic        mem_wren_id  ;   // 1 if the instruction writes data into LSU.
  logic        is_load_id   ;   // 1 if register's write data is load data 
  logic        jump_id       ;  // 1 if  jump instruction
  logic [4:0]  rd_addr_id   ;
  logic        rd_wren_id   ;   // 1 if the instruction writes data into Regfile
 
  //EX LAYER declare
  logic [31:0] pc_ex;
  logic        op_a_sel_ex  ;  
  logic        op_b_sel_ex  ; 
  logic [31:0] operand_a_ex;
  logic [31:0] operand_b_ex;
  logic [31:0] rs1_data_ex;
  logic [31:0] imm_ex       ;
  logic        branch_ex    ;   
  logic [3:0]  alu_op_ex    ;    
  logic [2:0]  br_op_ex     ;   

  logic [31:0]  pc_four_ex;
  logic [31:0]  alu_data_ex;
  logic         br_sel_ex;      // 1 if nxt_pc = alu_data, 0 if pc+4
  logic [31:0]  rs2_data_ex;
  logic [3:0]   ld_op_ex     ;  
  logic         mem_wren_ex  ;   
  logic         is_load_ex  ;  
  logic         jump_ex     ;  
  logic [4:0]   rd_addr_ex   ;
  logic         rd_wren_ex   ;  

  //MEM LAYER declare
  logic         br_sel_mem;  
  logic [31:0]  rs2_data_mem;
  logic [3:0]   ld_op_mem     ;  
  logic         mem_wren_mem  ;   

  logic [31:0]  pc_four_mem;
  logic [31:0]	alu_data_mem;  
  logic         is_load_mem  ;  
  logic         jump_mem     ;  
  logic [4:0]   rd_addr_mem  ;
  logic         rd_wren_mem  ;  
  logic [31:0] 	ld_data_mem ;
 
  //WriteBack declare 
  logic [31:0]  pc_four_wb;
  logic [31:0]	alu_data_wb;  
  logic         is_load_wb  ;  
  logic         jump_wb    ;  
  logic [4:0]   rd_addr_wb  ;
  logic         rd_wren_wb  ;  
  logic [31:0] 	ld_data_wb ;
 
  logic [31:0] 	rd_data_wb;
  logic [31:0]  wb_data_wb;

  // Logic for CONTROL DFF
  logic         rst_reg;
  logic         enable_if_id;
  logic         enable_id_ex;
  logic         enable_ex_mem;
  logic         enable_mem_wb;

  logic         rst_if_id;
  logic         rst_id_ex;
  logic         rst_ex_mem;
  logic         rst_mem_wb;

  logic[1:0]    hazard_op;

  //COMBINATIONAL BLOCKS
  mux_2 mux_pc (
    .mux_i_0  (pc_four_if),  
    .mux_i_1	(alu_data_mem), 
    .mux_sel  (br_sel_mem),    
    .mux_o	  (nxt_pc_if)
    );

  if_id if_id_0 (
    .clk_i    (clk_i),  
    .enable_i (enable_if_id), 
    .rst_i    (rst_if_id),

    .pc_i     (pc_if), 
    .pc_four_i(pc_four_if),
    .instr_i   (instr_if),
    .pc_o     (pc_id),
    .pc_four_o(pc_four_id),
    .instr_o  (instr_id)
    );

  decoder decoder0 (
    .instr    (instr_id),   
    .rs1_addr	(rs1_addr_id),     
    .rs2_addr	(rs2_addr_id), 
    .rd_addr  (rd_addr_id),   
    .rd_wren  (rd_wren_id),
    .imm      (imm_id),       
    .branch   (branch_id),          
    .jump     (jump_id),         
    .alu_op	  (alu_op_id),     
    .br_op    (br_op_id), 
    .ld_op    (ld_op_id),   
    .op_a_sel	(op_a_sel_id),     
    .op_b_sel (op_b_sel_id),  
    .mem_wren	(mem_wren_id), 
    .is_load	(is_load_id) 
    );

  regfile regfile0 (
    .clk_i    (clk_i),    
    .rst_ni   (rst_ni),   
    .rs1_addr (rs1_addr_id), 
    .rs2_addr (rs2_addr_id), 
    .rs1_data	(rs1_data_id), 
    .rs2_data	(rs2_data_id),
    .rd_addr  (rd_addr_wb),
    .rd_data	(rd_data_wb),
    .rd_wren  (rd_wren_wb)
    );

  id_ex id_ex_0(
    .clk_i      (clk_i),
    .enable_i   (enable_id_ex),
    .rst_i      (rst_id_ex),

    .pc_i       (pc_id),
    .pc_four_i  (pc_four_id),
    .rs1_data_i (rs1_data_id),
    .rs2_data_i (rs2_data_id),
    .imm_i      (imm_id),
    .branch_i   (branch_id),
    .jump_i     (jump_id),
    .alu_op_i   (alu_op_id),
    .br_op_i    (br_op_id),
    .ld_op_i    (ld_op_id),
    .op_a_sel_i (op_a_sel_id),
    .op_b_sel_i (op_b_sel_id),
    .mem_wren_i (mem_wren_id),
    .is_load_i  (is_load_id),
    .rd_addr_i  (rd_addr_id),
    .rd_wren_i  (rd_wren_id),

    .pc_o       (pc_ex),
    .pc_four_o  (pc_four_ex),
    .rs1_data_o (rs1_data_ex),
    .rs2_data_o (rs2_data_ex),
    .imm_o      (imm_ex),
    .branch_o   (branch_ex),
    .jump_o     (jump_ex),
    .alu_op_o   (alu_op_ex),
    .br_op_o    (br_op_ex),
    .ld_op_o    (ld_op_ex),
    .op_a_sel_o (op_a_sel_ex),
    .op_b_sel_o (op_b_sel_ex),
    .mem_wren_o (mem_wren_ex),
    .is_load_o  (is_load_ex),
    .rd_addr_o  (rd_addr_ex),
    .rd_wren_o  (rd_wren_ex)
  );

  mux_2 mux_op_a (
    .mux_i_0  (rs1_data_ex),     
    .mux_i_1	(pc_ex),   
    .mux_sel  (op_a_sel_ex),  
    .mux_o    (operand_a_ex)
    );

  mux_2 mux_op_b (
    .mux_i_0  (rs2_data_ex),     
    .mux_i_1	(imm_ex),  
    .mux_sel	(op_b_sel_ex), 
    .mux_o    (operand_b_ex)
    ); 

  alu alu0 (
    .operand_a  (operand_a_ex),  
    .operand_b  (operand_b_ex), 
    .rs1_data   (rs1_data_ex), 
    .rs2_data   (rs2_data_ex), 
    .branch     (branch_ex),
    .alu_op     (alu_op_ex),         
    .br_op      (br_op_ex),         
    .alu_data   (alu_data_ex), 
    .br_sel     (br_sel_ex)
    );

  ex_mem ex_mem_0(
	.clk_i        (clk_i),
	.enable_i     (enable_ex_mem),
	.rst_i        (rst_ex_mem),

  .pc_four_i    (pc_four_ex),
	.br_sel_i     (br_sel_ex),
	.alu_data_i   (alu_data_ex),
	.rs2_data_i   (rs2_data_ex),
	.ld_op_i      (ld_op_ex),
	.jump_i       (jump_ex),
	.mem_wren_i   (mem_wren_ex),
	.is_load_i    (is_load_ex),
	.rd_addr_i    (rd_addr_ex),
	.rd_wren_i    (rd_wren_ex),

  .pc_four_o    (pc_four_mem),
	.br_sel_o     (br_sel_mem),
	.alu_data_o   (alu_data_mem),
	.rs2_data_o   (rs2_data_mem),
	.ld_op_o      (ld_op_mem),
	.jump_o       (jump_mem),
	.mem_wren_o   (mem_wren_mem),
	.is_load_o    (is_load_mem),
	.rd_addr_o    (rd_addr_mem),
	.rd_wren_o    (rd_wren_mem)
);

  lsu lsu0  (
    .clk_i	  (clk_i),      
    .rst_ni 	(rst_ni),   
    .addr	    (alu_data_mem),    
    .ld_op    (ld_op_mem),      
    .st_data	(rs2_data_mem),
    .st_en	  (mem_wren_mem),   
    .ld_data	(ld_data_mem),  
    .io_sw	  (io_sw_i),   
    .io_lcd	  (io_lcd_o),   
    .io_ledg	(io_ledg_o),
    .io_ledr	(io_ledr_o),  
    .io_hex0  (io_hex0_o), 
    .io_hex1  (io_hex1_o), 
    .io_hex2	(io_hex2_o),  
    .io_hex3	(io_hex3_o),
    .io_hex4	(io_hex4_o),  
    .io_hex5  (io_hex5_o), 
    .io_hex6  (io_hex6_o), 
    .io_hex7	(io_hex7_o)
    );

 mem_wb mem_wb_0(
	.clk_i      (clk_i),
	.enable_i   (enable_mem_wb),
  .rst_i      (rst_mem_wb),

  .pc_four_i(pc_four_mem),
	.alu_data_i (alu_data_mem),
	.ld_data_i  (ld_data_mem),
	.jump_i     (jump_mem),
	.is_load_i  (is_load_mem),
	.rd_addr_i  (rd_addr_mem),
	.rd_wren_i  (rd_wren_mem),

  .pc_four_o  (pc_four_wb),
	.alu_data_o (alu_data_wb),
	.ld_data_o  (ld_data_wb),
	.jump_o     (jump_wb),
	.is_load_o  (is_load_wb),
	.rd_addr_o  (rd_addr_wb),
	.rd_wren_o  (rd_wren_wb)
);

  mux_2 mux_wb_data (
    .mux_i_0	(alu_data_wb),   
    .mux_i_1	(ld_data_wb),  
    .mux_sel	(is_load_wb),  
    .mux_o	  (wb_data_wb)
    );

  mux_2 mux_jump (
    .mux_i_0	(wb_data_wb),    
    .mux_i_1	(pc_four_wb),  
    .mux_sel	(jump_wb),    
     .mux_o	  (rd_data_wb)
     );

  register_control register_control_0 (
    .rst_ni         (rst_reg),
    .hazard_op       (hazard_op),
    .enable_if_id   (enable_if_id),
    .enable_id_ex   (enable_id_ex),
    .enable_ex_mem  (enable_ex_mem),
    .enable_mem_wb  (enable_mem_wb),
    .rst_if_id      (rst_if_id),
    .rst_id_ex      (rst_id_ex),
    .rst_ex_mem     (rst_ex_mem),
    .rst_mem_wb     (rst_mem_wb)
    
  );
  hazard_detect hazard_detect_0(
    .rd_addr_ex_i   (rd_addr_ex),
    .rd_wren_ex_i   (rd_wren_ex),
    .rd_addr_mem_i   (rd_addr_mem),
    .rd_wren_mem_i   (rd_wren_mem),
    .rd_addr_wb_i   (rd_addr_wb),
    .rd_wren_wb_i   (rd_wren_wb),
    .r1_addr_id_i   (rs1_addr_id),
    .r2_addr_id_i   (rs2_addr_id),

    .br_sel_i       (br_sel_ex),

    .hazard_op      (hazard_op)
  );
  /* verilator lint_off UNUSED */
  logic [31:0] instr_debug_i;
  /* verilator lint_on UNUSED */
  `define VERIFICATION
  `ifdef VERIFICATION  
  instr_test test0(
    .clk_i       (clk_i),
    .pc_debug    (pc_debug_o),
    .instr_debug (instr_debug_i)
  );
  `endif
  /*always_comb begin : mux_pc
		nxt_pc  = br_sel? alu_data : pc_four ;	
	end*/
    /*always_comb begin : mux_op_a
		operand_a  = op_a_sel? pc : rs1_data ;	
	end*/
  /*always_comb begin : mux_op_b
		operand_b  = op_b_sel? imm : rs2_data ;	
	end*/
    /*always_comb begin : mux_wb_data
		wb_data  = is_load? ld_data : alu_data ;	
	end */
 /*always_comb begin : mux_jump
		rd_data  = jump? pc_four : wb_data ;	
	end*/

//Load Instruction file 
logic rst_wait;

  initial begin
    	$readmemh("../mem/instruction_mem.data", instr_memory);   
  end

//Fetch instruction
  always_comb begin
  	pc_four_if      = pc_if + 4;	
  	pc_debug_o      = pc_if;
    instr_if	      = instr_memory[pc_if >> 2] ;
    `ifdef VERIFICATION
    /*verilator lint_off UNUSED*/
      instr_if	= instr_debug_i;
    /*verilator lint_on UNUSED*/
    `endif
  end
  
// Update PC
  always @(posedge clk_i or negedge rst_ni) begin 
  	if (!rst_ni) begin
      rst_reg   <= 0;
      pc_if     <= 0;
      rst_wait  <= 1;
    end else begin		      
      rst_reg   <= 1;
      if (rst_wait == 0) begin
          if (hazard_op == 1) begin           //Hazard DATA
            pc_if <= pc_if;
          end else if (hazard_op == 2) begin  //Hazard CONTROL
            pc_if <= nxt_pc_if ;
          end else pc_if <= nxt_pc_if ;
      end else rst_wait <= 0;	
    end
  end

endmodule : singlecycle
