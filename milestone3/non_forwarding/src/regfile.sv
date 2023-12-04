module regfile (
  // input
  input logic clk_i,
  input logic rst_ni,
  input logic [4:0] rs1_addr,
  input logic [4:0] rs2_addr,
  input logic [4:0] rd_addr,
  input logic [31:0] rd_data,
  input logic rd_wren,  // 1 if write to rd.

  //output
  output logic [31:0] rs1_data,
  output logic [31:0] rs2_data
);

  // Register file
  logic [31:0] registers [31:0];
  // initial begin
  //   $readmemh("../mem/regfile.data", registers);
  // end
  // Read from register file
  always_comb begin : proc_read_regfile
    rs1_data = registers[rs1_addr];
    rs2_data = registers[rs2_addr];
  end

  // Write to register file
  always @(posedge clk_i or negedge rst_ni) begin : proc_write_regfile
    if (!rst_ni) begin
      for (int i = 1; i < 32; i++) begin
        registers[i] <= 32'h0;
      end
    end else begin
      if (rd_wren)
        registers[rd_addr] <= rd_data;
    end
        `ifdef VERILATOR
      /*verilator lint_off UNUSED*/
      $writememh("../mem/regfile.data", registers);
      /*verilator lint_on UNUSED*/
    `endif
  end

endmodule : regfile
