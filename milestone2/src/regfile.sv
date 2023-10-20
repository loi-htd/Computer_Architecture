module regfile (
  // input
  input logic clk_i,
  input logic rst_ni,
  input logic [4:0] rs1_addr,
  input logic [4:0] rs2_addr,
  input logic [4:0] rd_addr,
  input logic [31:0] rd_data,
  input logic rd_wren,

  //output
  output logic [31:0] rs1_data,
  output logic [31:0] rs2_data
);
  
  // Register file
  logic [31:0] registers [31:0];
  initial begin
    for (int i = 0; i < 32; i++) begin
        registers[i] = 32'b0;
    end
  end

  // Read from register file
  always_comb begin : proc_read_regfile
    $readmemb("regfile.data", registers);
    assign rs1_data = registers[rs1_addr];
    assign rs2_data = registers[rs2_addr];
  end

  // Write to register file
  always @(posedge clk_i) begin : proc_write_regfile
    if (!rst_ni) begin
      registers[0] <= 32'b0;
      for (int i = 1; i < 32; i++) begin
        registers[i] <= 32'bx;
      end
    end else if (rd_wren) begin
      registers[rd_addr] <= rd_data;
    end
  end

  // Write data to register file
  always @(posedge clk_i) begin : proc_write_regfile_to_file
    if (rst_ni) begin
      $writememb("regfile.data", registers);
    end
  end

endmodule : regfile
