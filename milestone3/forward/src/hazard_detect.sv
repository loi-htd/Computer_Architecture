module hazard_detect (
//Input
  input logic       clk_i,
  input logic [4:0] r1_addr_id_i,
  input logic [4:0] r2_addr_id_i,
  input logic [4:0] r1_addr_ex_i,
  input logic [4:0] r2_addr_ex_i,
  input logic [4:0] rd_addr_mem_i,
  input logic [4:0] rd_addr_wb_i,
  input logic       rd_wren_mem_i,
  input logic       rd_wren_wb_i,
  
  input logic       is_load_mem_i,
  input logic       is_load_wb_i,

  input logic       br_sel_i,
//Output
  output logic [5:0]  hazard_op           //hazard_op[5] = forward B, [4] forward A, [1:0] : Data Forward A, [3:2] : Data Forward B
);

  logic       stall_cycle;

  initial begin
      stall_cycle = 1;
  end

  always_comb begin
      hazard_op[5] = 0;
      hazard_op[4] = 0;
      hazard_op[3:0] = 0;
  //-------------------------BRANCH HAZARD--------------------------//
    if (br_sel_i == 1) begin
        hazard_op = 6'b001111;

  //-------------------------WAIT FOR REGFILE--------------------------//
    end else if (rd_wren_wb_i   && (rd_addr_wb_i != 0)  && (stall_cycle == 1)
    && (rd_addr_wb_i == r1_addr_id_i || rd_addr_wb_i == r2_addr_id_i)) begin
        hazard_op = 6'b000111;

    end else begin
      //--------------------------RS2--------------------------//
        // FORWARD ALU FROM MEM 
        if (rd_wren_mem_i  && (rd_addr_mem_i != 0)  && (is_load_mem_i == 0) && (rd_addr_mem_i == r2_addr_ex_i)) begin
          hazard_op[5] =  1;
          hazard_op[3:2] = 0;
        end

        // FORWARD LOAD FROM MEM (STALL 1 TIME) 
        else if (rd_wren_mem_i  && (rd_addr_mem_i != 0) && (is_load_mem_i == 1) && (rd_addr_mem_i == r2_addr_ex_i))  begin
          hazard_op[5] = 1;
          hazard_op[3:2] = 2;
        end

        // FORWARD ALU FROM WB 
        else if (rd_wren_wb_i  && (rd_addr_wb_i != 0) && (is_load_wb_i == 0) && (rd_addr_wb_i == r2_addr_ex_i)) begin
          hazard_op[5] =  1;
          hazard_op[3:2] = 1;
        end

        // FORWARD LOAD FROM WB (NO STALL)
        else if (rd_wren_wb_i  && (rd_addr_wb_i != 0) && (is_load_wb_i == 1) && (rd_addr_wb_i == r2_addr_ex_i) ) begin
          hazard_op[5] = 1;
          hazard_op[3:2] = 3 ;
        end

      //-------------------------RS1--------------------------//
        // FORWARD ALU FROM MEM 
        if (rd_wren_mem_i  && (rd_addr_mem_i != 0)  && (is_load_mem_i == 0) && (rd_addr_mem_i == r1_addr_ex_i)) begin
          hazard_op[4] =  1;
          hazard_op[1:0] = 0;
        end

        // FORWARD LOAD FROM MEM (STALL 1 TIME) 
        else if (rd_wren_mem_i  && (rd_addr_mem_i != 0) && (is_load_mem_i == 1) && (rd_addr_mem_i == r1_addr_ex_i))  begin
          hazard_op[4] = 1;
          hazard_op[1:0] = 2;
        end

        // FORWARD ALU FROM WB 
        else if (rd_wren_wb_i  && (rd_addr_wb_i != 0) && (is_load_wb_i == 0) && (rd_addr_wb_i == r1_addr_ex_i)) begin
          hazard_op[4] =  1;
          hazard_op[1:0] = 1;
        end

        // FORWARD LOAD FROM WB (NO STALL)
        else if (rd_wren_wb_i  && (rd_addr_wb_i != 0) && (is_load_wb_i == 1) && (rd_addr_wb_i == r1_addr_ex_i) ) begin
          hazard_op[4] = 1;
          hazard_op[1:0] = 3 ;
        end
    end
  end

  always_ff @(posedge clk_i) begin  
    if (hazard_op == 6'b000111) begin
        stall_cycle <= 0;
    end else stall_cycle <= 1;
  end

endmodule 
