module lsu (
  // input
  input logic clk_i,
  input logic rst_ni,
  input logic [31:0] addr,
  input logic [31:0] st_data,
  input logic st_en,
  input logic [31:0] io_sw,

  // output
  output logic [31:0] ld_data,
  output logic [31:0] io_lcd,
  output logic [31:0] io_ledg,
  output logic [31:0] io_ledr,
  output logic [31:0] io_hex0,
  output logic [31:0] io_hex1,
  output logic [31:0] io_hex2,
  output logic [31:0] io_hex3,
  output logic [31:0] io_hex4,
  output logic [31:0] io_hex5,
  output logic [31:0] io_hex6,
  output logic [31:0] io_hex7
);

  parameter ADDR_SW   = 32'h9ff,
            ADDR_LCD  = 32'h8a0,
            ADDR_LEDG = 32'h890,
            ADDR_LEDR = 32'h880,
            ADDR_HEX7 = 32'h870,
            ADDR_HEX6 = 32'h860,
            ADDR_HEX5 = 32'h850,
            ADDR_HEX4 = 32'h840,
            ADDR_HEX3 = 32'h830,
            ADDR_HEX2 = 32'h820,
            ADDR_HEX1 = 32'h810,
            ADDR_HEX0 = 32'h800;

  typedef enum logic [3:0] {
    SEL_SW,   SEL_LCD,  SEL_LEDG, SEL_LEDR,
    SEL_HEX7, SEL_HEX6, SEL_HEX5, SEL_HEX4,
    SEL_HEX3, SEL_HEX2, SEL_HEX1, SEL_HEX0,
    SEL_DATA
  } addr_sel_e;

  logic [7:0] mem_data [2047:0]; // Data memory (2KB)
  logic [10:0] addr_mem_data;

  addr_sel_e addr_sel;
  assign addr_sel = (addr == ADDR_SW)   ? SEL_SW   :
                    (addr == ADDR_LCD)  ? SEL_LCD  :
                    (addr == ADDR_LEDG) ? SEL_LEDG :
                    (addr == ADDR_LEDR) ? SEL_LEDR :
                    (addr == ADDR_HEX7) ? SEL_HEX7 :
                    (addr == ADDR_HEX6) ? SEL_HEX6 :
                    (addr == ADDR_HEX5) ? SEL_HEX5 :
                    (addr == ADDR_HEX4) ? SEL_HEX4 :
                    (addr == ADDR_HEX3) ? SEL_HEX3 :
                    (addr == ADDR_HEX2) ? SEL_HEX2 :
                    (addr == ADDR_HEX1) ? SEL_HEX1 :
                    (addr == ADDR_HEX0) ? SEL_HEX0 : SEL_DATA;
  
  always_comb begin : pro_load_data
      $readmemb("mem/data_mem.data", mem_data);
  end

  // Load-store logic
  always @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      ld_data <= 32'h0;
      io_lcd  <= 32'h0;
      io_ledg <= 32'h0;
      io_ledr <= 32'h0;
      io_hex0 <= 32'h0;
      io_hex1 <= 32'h0;
      io_hex2 <= 32'h0;
      io_hex3 <= 32'h0;
      io_hex4 <= 32'h0;
      io_hex5 <= 32'h0;
      io_hex6 <= 32'h0;
      io_hex7 <= 32'h0;
    end else begin  
      case (addr_sel)
        SEL_SW: begin

        end
        SEL_LCD: begin
          io_lcd <= st_data;
        end
        SEL_LEDG: begin
          io_ledg <= st_data;
        end
        SEL_LEDR: begin
          io_ledr <= st_data;
        end
        SEL_HEX7: begin
          io_hex7 <= st_data;
        end
        SEL_HEX6: begin
          io_hex6 <= st_data;
        end
        SEL_HEX5: begin
          io_hex5 <= st_data;
        end
        SEL_HEX4: begin
          io_hex4 <= st_data;
        end
        SEL_HEX3: begin
          io_hex3 <= st_data;
        end
        SEL_HEX2: begin
          io_hex2 <= st_data;
        end
        SEL_HEX1: begin
          io_hex1 <= st_data;
        end
        SEL_HEX0: begin
          io_hex0 <= st_data;
        end
        SEL_DATA: begin
          if (st_en) begin
            mem_data[addr[10:0]]   <= st_data[7:0];
            mem_data[addr[10:0]+1] <= st_data[15:8];
            mem_data[addr[10:0]+2] <= st_data[23:16];
            mem_data[addr[10:0]+3] <= st_data[31:24];
          end else
            ld_data <= {mem_data[addr[10:0]+3], mem_data[addr[10:0]+2], mem_data[addr[10:0]+1], mem_data[addr[10:0]]};
        end
        default;
      endcase
    end
  end

  always @(posedge clk_i or negedge rst_ni) begin: proc_rw_data
    if (rst_ni && addr_sel == SEL_DATA && st_en) begin
      $writememh("/milestone2/mem/data_mem.data", mem_data);
    end
  end
endmodule
