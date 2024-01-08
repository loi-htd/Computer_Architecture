module lsu (
  // input
  input logic clk_i,
  input logic rst_ni,
  input logic [31:0] addr,
  input logic [3:0]  ld_op ,    // ld_op[3] = 1 if signed, [2][1][0] = 111 if lw, sw; [2][1][0] = 011 if lh, sh; [2][1][0] = 001 if lb, sb 
  input logic [31:0] st_data,
  input logic st_en,            //1 if write, 0 if read
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

  /* verilator lint_off UNUSED */
  
  logic unused;
  assign unused = |addr[31:12];
  /* verilator lint_on UNUSED */
  parameter ADDR_SW   = 12'h900,
            ADDR_LCD  = 12'h8a0,
            ADDR_LEDG = 12'h890,
            ADDR_LEDR = 12'h880,
            ADDR_HEX7 = 12'h870,
            ADDR_HEX6 = 12'h860,
            ADDR_HEX5 = 12'h850,
            ADDR_HEX4 = 12'h840,
            ADDR_HEX3 = 12'h830,
            ADDR_HEX2 = 12'h820,
            ADDR_HEX1 = 12'h810,
            ADDR_HEX0 = 12'h800;

  typedef enum logic [3:0] {
    SEL_HEX0, SEL_HEX1, SEL_HEX2, SEL_HEX3, 
    SEL_HEX4, SEL_HEX5, SEL_HEX6, SEL_HEX7, 
    SEL_LEDR, SEL_LEDG, SEL_LCD,  SEL_DATA,
    SEL_SW 
  } periph_out_addr_e;

  // Data memory (2KB)
  logic [3:0][7:0] mem_data [100:0]; 
  
  // Address[10:0] >> 2
  /* verilator lint_off UNUSED */
  logic [10:0] a_divisor;
  logic [10:0] b_remainder; 
  /* verilator lint_on UNUSED */

  // Peripheral in Buffer
  logic [31:0] periph_in;

  // Load data
  logic [31:0] data_out [12:0];

  // Local variable
  logic [11:0] addr_memory;
  logic [31:0] lw_data;

  assign addr_memory = addr[11:0];

  periph_out_addr_e addr_sel;
  assign addr_sel = (addr_memory == ADDR_SW)   ? SEL_SW   :
                    (addr_memory == ADDR_LCD)  ? SEL_LCD  :
                    (addr_memory == ADDR_LEDG) ? SEL_LEDG :
                    (addr_memory == ADDR_LEDR) ? SEL_LEDR :
                    (addr_memory == ADDR_HEX7) ? SEL_HEX7 :
                    (addr_memory == ADDR_HEX6) ? SEL_HEX6 :
                    (addr_memory == ADDR_HEX5) ? SEL_HEX5 :
                    (addr_memory == ADDR_HEX4) ? SEL_HEX4 :
                    (addr_memory == ADDR_HEX3) ? SEL_HEX3 :
                    (addr_memory == ADDR_HEX2) ? SEL_HEX2 :
                    (addr_memory == ADDR_HEX1) ? SEL_HEX1 :
                    (addr_memory == ADDR_HEX0) ? SEL_HEX0 : SEL_DATA;

  // /// NHO XOA TRUOC KHI CHAY QUARTUS
  //   always_ff @(posedge clk_i) begin : proc_store_data
  //     if (($past(addr_sel) == SEL_DATA) && $past(st_en))
  //       $writememh("../mem/mem_data.data", mem_data);
  //   end
  // ///

   always_comb begin : calculate_ls_addr
    a_divisor   = addr_memory[10:0] / 4;
    b_remainder = addr_memory[10:0] % 4;
   end

  always_ff @(posedge clk_i or negedge rst_ni) begin : proc_periph_in
    if (!rst_ni) begin
      periph_in <= 32'b0;
    end
    else begin
      periph_in <= io_sw;
    end
  end
/* verilator lint_off WIDTH */
  always_ff @(posedge clk_i or negedge rst_ni) begin : proc_periph_out
    if (!rst_ni) begin
      for (int i = 0; i < 13; i++)
        data_out[i] <= 32'b0;

    end 
    else begin 
      case (addr_sel)
      SEL_SW: begin
        data_out[addr_sel] <= periph_in;
      end
      SEL_DATA: begin
        
        if (st_en) begin      // store data
          if (ld_op[0]) mem_data[a_divisor][b_remainder]   <= st_data[7:0] ;

          if (ld_op[1]) mem_data[(b_remainder + 1 > 3) ? (a_divisor + 1) : (a_divisor)]
                                [(b_remainder + 1 > 3) ? (b_remainder + 1 - 4) : (b_remainder + 1)]   <= st_data[15:8] ;

          if (ld_op[2]) mem_data[(b_remainder + 2 > 3) ? (a_divisor + 1) : (a_divisor)]
                                [(b_remainder + 2 > 3) ? (b_remainder + 2 - 4) : (b_remainder + 2)]   <= st_data[23:16] ;

          if (ld_op[2]) mem_data[(b_remainder + 3 > 3) ? (a_divisor + 1) : (a_divisor)]
                                [(b_remainder + 3 > 3) ? (b_remainder + 3 - 4) : (b_remainder + 3)]  <= st_data[31:24] ;  
        //$display("a_divisor : %h,  b_remainder: %h",a_divisor, b_remainder);
        end
      end 
      default:                // peripheral out
        data_out[addr_sel] <= st_data; 
      endcase
    end
  end

  // Load data
  always_comb begin : proc_load_data
    if (addr_sel == SEL_DATA && !st_en) begin
      lw_data[7:0]   = mem_data[a_divisor][b_remainder] ;

      lw_data[15:8]  = mem_data[(b_remainder + 1 > 3) ? (a_divisor + 1) : (a_divisor)]
                                [(b_remainder + 1 > 3) ? (b_remainder + 1 - 4) : (b_remainder + 1)] ;

      lw_data[23:16] = mem_data[(b_remainder + 2 > 3) ? (a_divisor + 1) : (a_divisor)]
                                [(b_remainder + 2 > 3) ? (b_remainder + 2 - 4) : (b_remainder + 2)] ;

      lw_data[31:24] = mem_data[(b_remainder + 3 > 3) ? (a_divisor + 1) : (a_divisor)]
                                [(b_remainder + 3 > 3) ? (b_remainder + 3 - 4) : (b_remainder + 3)] ;

      if (!ld_op[0]) 
        ld_data = 0;
      else begin
        ld_data[7:0]     = lw_data[7:0];

        if (!ld_op[1]) 
          ld_data[31:8]  = {24{lw_data[7] && ld_op[3]}} ;
        else begin   
          ld_data[15:8]  = lw_data[15:8];
          
          if (!ld_op[2]) 
            ld_data[31:16] = {16{lw_data[15] && ld_op[3]}};
          else begin
              ld_data[23:16] = lw_data[23:16];
              ld_data[31:24] = lw_data[31:24];
              end  
        end
      end
    end

    else begin 
      lw_data = 0;
      ld_data = data_out[addr_sel];
    end
  end
/* verilator lint_on WIDTH */

  // Update peripheral out
  assign io_hex0 = data_out[0];
  assign io_hex1 = data_out[1];
  assign io_hex2 = data_out[2];
  assign io_hex3 = data_out[3];
  assign io_hex4 = data_out[4];
  assign io_hex5 = data_out[5];
  assign io_hex6 = data_out[6];
  assign io_hex7 = data_out[7];
  assign io_ledr = data_out[8];
  assign io_ledg = data_out[9];
  assign io_lcd  = data_out[10];

endmodule : lsu
