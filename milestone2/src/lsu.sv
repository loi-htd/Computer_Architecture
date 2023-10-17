module lsu (
  // input
  input clk_i,
  input rst_ni,
  input [31:0] addr,
  input [31:0] st_data,
  input st_en,
  input [31:0] io_sw,

  // output
  output [31:0] ld_data,
  output [31:0] io_lcd,
  output [31:0] io_ledg,
  output [31:0] io_ledr,
  output [7:0] io_hex0,
  output [7:0] io_hex1,
  output [7:0] io_hex2,
  output [7:0] io_hex3,
  output [7:0] io_hex4,
  output [7:0] io_hex5,
  output [7:0] io_hex6,
  output [7:0] io_hex7
);

  enum {
    ADDR_SW   = 16'h09ff,
    ADDR_LCD  = 16'h08a0,
    ADDR_LEDG = 16'h0890,
    ADDR_LEDR = 16'h0880,
    ADDR_HEX7 = 16'h0870,
    ADDR_HEX6 = 16'h0860,
    ADDR_HEX5 = 16'h0850,
    ADDR_HEX4 = 16'h0840,
    ADDR_HEX3 = 16'h0830,
    ADDR_HEX2 = 16'h0820,
    ADDR_HEX1 = 16'h0810,
    ADDR_HEX0 = 16'h0800
  } mem_mapping;

  typedef enum logic [3:0] {
    SEL_SW,   SEL_LCD,  SEL_LEDG, SEL_LEDR,
    SEL_HEX7, SEL_HEX6, SEL_HEX5, SEL_HEX4,
    SEL_HEX3, SEL_HEX2, SEL_HEX1, SEL_HEX0,
    SEL_DATA
  } addr_sel_e

  initial begin
    logic [7:0] mem_inst [8191:0]; // Instruction memory (8KB)
    logic [7:0] mem_data [2047:0]; // Data memory (2KB)
  end

  addr_sel_e addr_sel;
  assign addr_sel = (addr == ADDR_SW)  ? SEL_SW   :
                    (addr = ADDR_LCD)  ? SEL_LCD  :
                    (addr = ADDR_LEDG) ? SEL_LEDG :
                    (addr = ADDR_LEDR) ? SEL_LEDR :
                    (addr = ADDR_HEX7) ? SEL_HEX7 :
                    (addr = ADDR_HEX6) ? SEL_HEX6 :
                    (addr = ADDR_HEX5) ? SEL_HEX5 :
                    (addr = ADDR_HEX4) ? SEL_HEX4 :
                    (addr = ADDR_HEX3) ? SEL_HEX3 :
                    (addr = ADDR_HEX2) ? SEL_HEX2 :
                    (addr = ADDR_HEX1) ? SEL_HEX1 :
                    (addr = ADDR_HEX0) ? SEL_HEX0 : SEL_DATA

  // Load-store logic
  always @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      ld_data <= 32'h0;
    end else if (st_en) begin
      // Store
      if (addr[31:14] == 14'h0) begin
        // Instruction memory
        mem_inst[addr[13:0]] <= st_data[7:0];
      end else if (addr[31:14] == 14'h1) begin
        // Data memory
        mem_data[addr[13:0]] <= st_data[7:0];
      end
    end else begin
      // Load
      if (addr[31:14] == 14'h0) begin
        // Instruction memory
        ld_data <= {mem_inst[addr[13:0]], mem_inst[addr[13:0] + 1], mem_inst[addr[13:0] + 2], mem_inst[addr[13:0] + 3]};
      end else if (addr[31:14] == 14'h1) begin
        // Data memory
        ld_data <= {mem_data[addr[13:0]], mem_data[addr[13:0] + 1], mem_data[addr[13:0] + 2], mem_data[addr[13:0] + 3]};
      end
    end
  end

  // I/O logic
  assign io_lcd = ld_data;
  assign io_ledg = ld_data & io_sw;
  assign io_ledr = ~ld_data & io_sw;
  assign io_hex0 = ld_data[31:24];
  assign io_hex1 = ld_data[23:16];
  assign io_hex2 = ld_data[15:8];
  assign io_hex3 = ld_data[7:0];
  assign io_hex4 = ld_data[63:56];
  assign io_hex5 = ld_data[55:48];
  assign io_hex6 = ld_data[47:40];
  assign io_hex7 = ld_data[39:32];

endmodule