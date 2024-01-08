module btb(
	input logic 		clk_i,
	/* verilator lint_off UNUSED */
	input logic 		rst_ni,
	input logic [31:0] 	pc_if,
	 /* verilator lint_on UNUSED */
	input logic 		branch_id,

	input logic [31:0]	pc_four_mem,
	input logic			branch_mem,
	input logic 		br_sel_mem,
	input logic	[31:0]	alu_data_mem,

	output logic [31:0] predicted_pc_o,
	output logic 		hit_o,
	output logic 		mis_hit_o
);

logic [5:0] 	index_if;
logic [23:0]	tag_if;

/// FOR CHECKING MIS HIT
 /* verilator lint_off UNUSED */
logic [31:0]	pc_mem;
logic [23:0]	tag_mem;
 /* verilator lint_on UNUSED */
logic [5:0]		index_mem;

/* verilator lint_off UNOPTFLAT */
typedef struct packed{
	logic [1:0]  hit;
    logic [23:0] tag;
    logic [31:0] predicted_pc;
  } BTB_Table;

BTB_Table myBTB[63:0];
/* verilator lint_on UNOPTFLAT */

logic [5:0]		index_mem_past;
logic			branch_mem_past;
logic			br_sel_mem_past;
logic [31:0]	alu_data_mem_past;
logic [23:0]	tag_mem_past ;

initial begin
    // Clear myBTB array 
    for (int i = 0; i < 64; i = i + 1) begin
        myBTB[i].hit = 2'b0;
        myBTB[i].tag = 24'b0;
        myBTB[i].predicted_pc = 32'b0;
    end
end

/// Calculate Prediction Efficiency
int branch_time;
int mis_hit_time;
int wrong_percent;

always_comb begin
	wrong_percent = 100 * mis_hit_time/(branch_time);
end
always_ff @(negedge clk_i) begin 
	if (mis_hit_o) 
		mis_hit_time <= mis_hit_time + 1;
	if (branch_id) 
		branch_time <= branch_time + 1;
	$display("pc_if: %h, branch_time : %d, mis_hit_time : %d, wrong_percent: %d %%", pc_if ,branch_time, mis_hit_time, wrong_percent );
end

/* verilator lint_off LATCH */
always_comb begin 	
	predicted_pc_o = 32'b0;
	hit_o		   = 1'b0;
	mis_hit_o 	   = 0;

	index_if = pc_if[7:2];
	tag_if	 = pc_if[31:8];	

	pc_mem 	 = pc_four_mem - 4;
	index_mem = pc_mem[7:2];
	tag_mem	= pc_mem[31:8];

		/// Detect_Miss_Hit
		if ((br_sel_mem) && (myBTB[index_mem].predicted_pc == alu_data_mem) && (myBTB[index_mem].hit[1] == 0)) begin
			mis_hit_o = 1;	
			hit_o 	  = 1;	
			predicted_pc_o = alu_data_mem;
		end

		if ((br_sel_mem) && (myBTB[index_mem].predicted_pc != alu_data_mem)) begin
			mis_hit_o = 1;	
			hit_o 	  = 1;	
			predicted_pc_o = alu_data_mem;	

		end else if ( (branch_mem) && (!br_sel_mem) && (myBTB[index_mem].hit[1] == 1)  
		&& (myBTB[index_mem].predicted_pc != pc_four_mem)) begin
			mis_hit_o = 1;
			hit_o 	  = 1;
			predicted_pc_o = pc_four_mem;

		/// Hit
		end else if (((branch_id)) && (tag_if == myBTB[index_if].tag) 
		&& (myBTB[index_if].predicted_pc != 0) && (myBTB[index_if].hit[1] == 1)) begin
			hit_o = 1 ;
			predicted_pc_o 	= myBTB[index_if].predicted_pc;	
		end
			
	//$writememh("../mem/BranchTargetBuffer.data", myBTB);

	end	

/* verilator lint_on LATCH */
	

always_ff @(negedge clk_i) begin 
	if (!rst_ni) begin
		
	end else begin
		
		if (branch_mem_past) begin
			myBTB[index_mem_past].predicted_pc 			<= alu_data_mem_past;
			myBTB[index_mem_past].tag		  			<= tag_mem_past;
	
			// TWO-BIT PREDICTION
			if (br_sel_mem_past == 1) begin
				case (myBTB[index_mem_past].hit) 
					2'b00: begin 
						myBTB[index_mem_past].hit  <= 2'b01;
			
					end
					2'b01: begin
						myBTB[index_mem_past].hit  <= 2'b10;
					end
					2'b10: begin
						myBTB[index_mem_past].hit  <= 2'b11;
					end
					2'b11: begin
						myBTB[index_mem_past].hit  <= 2'b11;
					end
				endcase
		
			end else begin
				case (myBTB[index_mem_past].hit) 
					2'b00: begin
						myBTB[index_mem_past].hit  <= 2'b00;
					end
					2'b01: begin
						myBTB[index_mem_past].hit  <= 2'b00;
					end
					2'b10: begin
						myBTB[index_mem_past].hit  <= 2'b01;
					end
					2'b11: begin
						myBTB[index_mem_past].hit  <= 2'b10;
					end
				endcase
			
			end
		//$display("two_bit : %h, branch_mem_past: %b, br_sel_mem_past: %b", myBTB[index_mem_past].hit, branch_mem_past, br_sel_mem_past);		
		end
	end

		//$display("------------------------------------------------------------------------------------------");
 	index_mem_past 		<= 	index_mem;
	branch_mem_past 	<=	branch_mem;
	br_sel_mem_past		<= 	br_sel_mem;
	alu_data_mem_past 	<=	alu_data_mem;
	tag_mem_past 		<=	tag_mem;
	


end

endmodule

