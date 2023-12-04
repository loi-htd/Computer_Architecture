module hazard_detect (
//Input
  input logic [4:0] r1_addr_id_i,
  input logic [4:0] r2_addr_id_i,
  input logic [4:0] rd_addr_ex_i,
  input logic [4:0] rd_addr_mem_i,
  input logic [4:0] rd_addr_wb_i,
  input logic       rd_wren_ex_i,
  input logic       rd_wren_mem_i,
  input logic       rd_wren_wb_i,
  
  input logic       br_sel_i,
//Output
  output logic [1:0]  hazard_op
);

  always_comb begin
    if ( (rd_wren_ex_i  && (rd_addr_ex_i != 0) && (rd_addr_ex_i == r1_addr_id_i || rd_addr_ex_i == r2_addr_id_i))
      ||(rd_wren_mem_i  && (rd_addr_mem_i != 0) && (rd_addr_mem_i == r1_addr_id_i || rd_addr_mem_i == r2_addr_id_i))
      ||(rd_wren_wb_i   && (rd_addr_wb_i != 0) && (rd_addr_wb_i == r1_addr_id_i || rd_addr_wb_i == r2_addr_id_i))
    )
        hazard_op = 1;
   else if (br_sel_i == 1)
        hazard_op = 2;
    else hazard_op = 0;
  end

endmodule 
