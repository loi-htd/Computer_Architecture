module forward_unit (
//Input
  input logic [5:0]  hazard_op_i,
  input logic        branch_i,
  /* verilator lint_off UNUSED */
  input logic [31:0] instr_i,
  /* verilator lint_off UNUSED */
//Output
  output logic [1:0] alu_ld_A,           
  output logic [1:0] alu_ld_B,
  output logic forward_A,
  output logic forward_B,
  output logic forward_cmp_A,
  output logic forward_cmp_B,
  output logic forward_store
);

logic forward_st ;
  always_comb begin
    forward_st = (instr_i[6:0] == 7'b010_00_11) ? 1:0;
    if (hazard_op_i == 0 || hazard_op_i == 6'b001111 || (hazard_op_i == 6'b000111)) begin       // NO HAZARD OR CONTROL HAZARD
        forward_A = 0;
        forward_B = 0;
        forward_store = 0;
        forward_cmp_A = 0;
        forward_cmp_B = 0;
        alu_ld_B    = 0;
        alu_ld_A    = 0;

    end else begin
        forward_store = (hazard_op_i[5]) && (forward_st);

        forward_A = (hazard_op_i[4]) && (!branch_i);
        forward_B = (hazard_op_i[5]) && (!branch_i) && (!forward_st);

        forward_cmp_A = (hazard_op_i[4]) && (branch_i) && (!forward_st);
        forward_cmp_B = (hazard_op_i[5])  && (branch_i) && (!forward_st);

        case (hazard_op_i[3:2]) 
            0: begin
              alu_ld_B = 1;
            end
            1: begin
              alu_ld_B = 2;
            end
            3: begin
              alu_ld_B = 3;
            end
            default: alu_ld_B = 0;
        endcase

        case (hazard_op_i[1:0]) 
            0: begin
              alu_ld_A = 1;
            end
            1: begin
              alu_ld_A = 2;
            end
            3: begin
              alu_ld_A = 3;
            end
            default: begin
              alu_ld_A = 0;
            end
        endcase
    end
  end

endmodule 
