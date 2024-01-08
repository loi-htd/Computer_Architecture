module register_control (
//Input
  input logic       rst_ni,
  input logic [5:0] hazard_op,
//Output
  output logic  enable_if_id,
  output logic  enable_id_ex,
  output logic  enable_ex_mem,
  output logic  enable_mem_wb,
  output logic  rst_if_id,
  output logic  rst_id_ex,
  output logic  rst_ex_mem,
  output logic  rst_mem_wb
);

// ALU calculation
  always_comb begin
   if (!rst_ni) begin
      enable_if_id  = 0;
      enable_id_ex  = 0;
      enable_ex_mem = 0;
      enable_mem_wb = 0;
      rst_if_id     = 0;
      rst_id_ex     = 0;
      rst_ex_mem    = 0;
      rst_mem_wb    = 0;
   end else begin   
      if (hazard_op == 6'b001111) begin     //CONTROL
        enable_if_id  = 0;
        enable_id_ex  = 0;
        enable_ex_mem = 0;
        enable_mem_wb = 1;

        rst_if_id     = 0;
        rst_id_ex     = 0;
        rst_ex_mem    = 0;
        rst_mem_wb    = 1;

      end else if (hazard_op == 6'b000111) begin      // Wait for RegFile
        enable_if_id  = 0;
        enable_id_ex  = 0;
        enable_ex_mem = 0;
        enable_mem_wb = 0;

        rst_if_id     = 1;
        rst_id_ex     = 1;
        rst_ex_mem    = 1;
        rst_mem_wb    = 1;

      end else if ((hazard_op[1:0] == 2) || (hazard_op[3:2] == 2)) begin     //LOAD FROM MEM (STALL 1 TIME)
        enable_if_id  = 0;
        enable_id_ex  = 0;
        enable_ex_mem = 0;
        enable_mem_wb = 1;

        rst_if_id     = 1;
        rst_id_ex     = 1;
        rst_ex_mem    = 0;
        rst_mem_wb    = 1;

      end else begin 
        enable_if_id  = 1;
        enable_id_ex  = 1;
        enable_ex_mem = 1;
        enable_mem_wb = 1;

        rst_if_id     = 1;
        rst_id_ex     = 1;
        rst_ex_mem    = 1;
        rst_mem_wb    = 1;
      end
    end
  end

endmodule 
