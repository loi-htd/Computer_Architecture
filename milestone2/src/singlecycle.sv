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
    //PC declare
  logic [31:0]  pc;
  logic [31:0]  pc_four;
  logic [31:0]	nxt_pc;
  
    //Instruction declare
  logic [31:0] 	instr_memory [0:1011];
  logic [31:0]  instr;

  
    //Reg declare
  logic [4:0]   rs1_addr;
  logic [4:0]   rs2_addr;
  logic [4:0]   rd_addr;
  logic [31:0]  rs1_data;
  logic [31:0]  rs2_data;
  
    //ImmGen declare
  logic [31:0]	imm;
  
    //BranchCompare declare    
/* verilator lint_off UNOPTFLAT */
  logic 	br_unsigned;
/* verilator lint_on UNOPTFLAT */

  logic 	br_less;
  logic		br_equal;
  
    //ALU declare
  logic [31:0]  operand_a;
  logic [31:0]  operand_b;
  logic [31:0]	alu_data;
  
    //LSU declare
  logic [31:0] 	ld_data;
  
    //ControlUnit declare
  logic 	br_sel;
  logic 	rd_wren;
  logic		op_a_sel;
  logic		op_b_sel;
  logic [3:0]	alu_op;
  logic		mem_wren;
  logic	[1:0]	wb_sel;
 
    //WriteBack declare 
  logic [31:0] 	wb_data;
  
  mux_2 mux_pc(
    .mux_i_0 	(pc_four),
    .mux_i_1	(alu_data),
    .mux_sel	(br_sel),
    .mux_o	(nxt_pc)
  );
  
  regfile regfile0 (
    .clk_i	(clk_i),
    .rst_ni 	(rst_ni),
    .rs1_addr	(rs1_addr),
    .rs2_addr	(rs2_addr),
    .rd_addr	(rd_addr),
    .rd_data	(wb_data),
    .rd_wren	(rd_wren),
    .rs1_data	(rs1_data),
    .rs2_data	(rs2_data)
  );
            
  immgen immgen0(
    .instr	(instr),
    .imm	(imm)
  );   

  brcomp brcomp0 (
    .rs1_data	 (rs1_data),
    .rs2_data	 (rs2_data),
    .br_unsigned (br_unsigned),
    .br_less	 (br_less),
    .br_equal	 (br_equal)
  );
  
  mux_2 mux_op_a(
    .mux_i_0	(rs1_data),
    .mux_i_1	(pc),
    .mux_sel	(op_a_sel),
    .mux_o	(operand_a)
  );
  
  mux_2 mux_op_b(
    .mux_i_0	(rs2_data),
    .mux_i_1	(imm),
    .mux_sel	(op_b_sel),
    .mux_o	(operand_b)
  );
  
  alu alu0 (
    .operand_a  (operand_a),
    .operand_b  (operand_b),
    .alu_op	(alu_op),
    .alu_data	(alu_data)
  );

  lsu lsu0 (
    .clk_i	(clk_i),
    .rst_ni 	(rst_ni),
    .addr	(alu_data),
    .st_data	(rs2_data),
    .st_en	(mem_wren),
    .io_sw	(io_sw_i),
    .ld_data	(ld_data),
    .io_lcd	(io_lcd_o),
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
 
  mux_3 mux_wb_data(
    .mux_i_0	(alu_data),
    .mux_i_1	(ld_data),
    .mux_i_2	(pc_four),
    .mux_sel	(wb_sel),
    .mux_o	(wb_data)
  );
  
  ctrl_unit ctrl_unit0(
    .instr	(instr),
    .br_less	(br_less),
    .br_equal	(br_equal),
    .br_sel	(br_sel),
    .br_unsigned(br_unsigned),
    .rd_wren	(rd_wren),
    .mem_wren	(mem_wren),
    .op_a_sel	(op_a_sel),
    .op_b_sel	(op_b_sel),
    .alu_op	(alu_op),
    .wb_sel	(wb_sel)
  );

logic [9:0]  i;
//Load Instruction file 
  initial begin
    	$readmemh("../mem/instruction_mem.data", instr_memory);   	
    	pc	 = 0;
    	i 	 = 0;
  end
  

  
logic [31:0] pc_debug_o_array [0:1011];
logic [31:0] nxt_pc_array [0:1011];
logic [31:0] instr_array [0:1011];
logic [31:0] alu_data_array [0:1011];
logic [31:0] immgen_array [0:1011];
logic [31:0] br_sel_array [0:1011];
logic [31:0] test_array [0:1011];
logic [31:0] rd_wren_array [0:1011];
logic [31:0] op_a_sel_array [0:1011];
logic [31:0] op_b_sel_array [0:1011];


// Fetch instruction  
  always @(posedge clk_i or negedge rst_ni) begin 
  	if (!rst_ni) 	instr <= 0;
  	
  	else begin

	instr	<= instr_memory[pc / 4] ;
    			
	alu_data_array[i] 	<= alu_data;
	immgen_array[i]   	<= imm;
	br_sel_array[i][0]	<= br_sel;
	op_a_sel_array[i][0]	<= op_a_sel;
	op_b_sel_array[i][0]	<= op_b_sel;
	
	nxt_pc_array[i]		<= nxt_pc;
	pc_debug_o_array[i] 	<= pc;	
	rd_wren_array[i][0]	<= rd_wren; 

	test_array		<= instr_memory;
	instr_array[pc/4] 	<= instr;
	
	$writememh("../mem/test.data", test_array);

	$writememh("../mem/test_alu_data.data", alu_data_array);	
	$writememh("../mem/test_imm.data", immgen_array);
	$writememh("../mem/test_br_sel.data", br_sel_array);	
	$writememh("../mem/test_instr.data", instr_array);	
	$writememh("../mem/test_pc.data", pc_debug_o_array);	
	$writememh("../mem/test_nxt_pc.data", nxt_pc_array);	
	
	$writememh("../mem/test_op_a_sel.data", op_a_sel_array);	
	$writememh("../mem/test_op_b_sel.data", op_b_sel_array);	
	$writememh("../mem/test_rd_wren.data", rd_wren_array);	
	
	i <= i + 1;
	
	end
end

//Calculate pc_four
  always_comb begin
  	pc_four    = pc + 4;	
  	pc_debug_o = pc;
  	rs1_addr = instr[19:15];
  	rs2_addr = instr[24:20];
  	rd_addr  = instr[11:7];
  end
  
// Update PC
  always @(posedge clk_i or negedge rst_ni) begin 
  	if (!rst_ni) 	pc <= 0;
  	else 		pc <= nxt_pc ;	
  end

endmodule : singlecycle

