// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+99,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+99,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+99,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,"rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+56,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+57,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,"branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+60,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,"br_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,"ld_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+64,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+65,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+66,"is_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+67,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+73,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,"rd_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,"instr_debug_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+69,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+67,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+61,"br_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+58,"branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"br_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+71,"alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+76,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+77,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("alu_cal ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+78,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+79,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+80,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+81,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decoder0 ");
    tracep->declBus(c+52,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+54,"rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+55,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+56,"rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+61,"br_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+62,"ld_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+63,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"is_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu0 ");
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+71,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+62,"ld_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+68,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+65,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+99,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+82,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+102,"ADDR_SW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+103,"ADDR_LCD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+104,"ADDR_LEDG",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+105,"ADDR_LEDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+106,"ADDR_HEX7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+107,"ADDR_HEX6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+108,"ADDR_HEX5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+109,"ADDR_HEX4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+110,"ADDR_HEX3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+111,"ADDR_HEX2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+112,"ADDR_HEX1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+113,"ADDR_HEX0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+1,"periph_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+2+i*1,"data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+83,"addr_memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+84,"lw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"SEL_HEX0", "SEL_HEX1", "SEL_HEX2", "SEL_HEX3", 
                                "SEL_HEX4", "SEL_HEX5", 
                                "SEL_HEX6", "SEL_HEX7", 
                                "SEL_LEDR", "SEL_LEDG", 
                                "SEL_LCD", "SEL_DATA", 
                                "SEL_SW"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100"};
        tracep->declDTypeEnum(1, "lsu.periph_out_addr_e", 13, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+85,"addr_sel",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("proc_periph_out ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+15,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux_jump ");
    tracep->declBus(c+75,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+59,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_op_a ");
    tracep->declBus(c+67,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+69,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_op_b ");
    tracep->declBus(c+68,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+64,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_pc ");
    tracep->declBus(c+50,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+72,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_wb_data ");
    tracep->declBus(c+71,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+66,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+75,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile0 ");
    tracep->declBit(c+86,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+54,"rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+55,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+74,"rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+56,"rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+16+i*1,"registers",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("proc_write_regfile ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+48,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[2]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[3]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[4]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[5]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[6]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[7]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[8]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[9]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[10]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[11]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[12]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[13]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[14]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[15]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[16]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[17]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[18]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[19]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[20]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[21]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[22]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[23]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[24]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[25]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[26]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[27]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[28]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[29]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[30]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[31]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+50,(((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc)),32);
    bufp->fullIData(oldp+51,(((IData)(vlSelf->top__DOT__dut__DOT__br_sel)
                               ? vlSelf->top__DOT__dut__DOT__alu_data
                               : ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc))),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__dut__DOT__instr),32);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__dut__DOT__rs1_addr),5);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__dut__DOT__rs2_addr),5);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__dut__DOT__rd_addr),5);
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__dut__DOT__rd_wren));
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__dut__DOT__imm),32);
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__dut__DOT__branch));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__dut__DOT__jump));
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__dut__DOT__alu_op),4);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__dut__DOT__br_op),3);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__dut__DOT__ld_op),4);
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__dut__DOT__op_a_sel));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__dut__DOT__op_b_sel));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__dut__DOT__mem_wren));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__dut__DOT__is_load));
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__dut__DOT__rs1_data),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__dut__DOT__rs2_data),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__dut__DOT__operand_a),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__dut__DOT__operand_b),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__dut__DOT__alu_data),32);
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__dut__DOT__br_sel));
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__dut__DOT__ld_data),32);
    bufp->fullIData(oldp+74,(((IData)(vlSelf->top__DOT__dut__DOT__jump)
                               ? ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc)
                               : ((IData)(vlSelf->top__DOT__dut__DOT__is_load)
                                   ? vlSelf->top__DOT__dut__DOT__ld_data
                                   : vlSelf->top__DOT__dut__DOT__alu_data))),32);
    bufp->fullIData(oldp+75,(((IData)(vlSelf->top__DOT__dut__DOT__is_load)
                               ? vlSelf->top__DOT__dut__DOT__ld_data
                               : vlSelf->top__DOT__dut__DOT__alu_data)),32);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal));
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+82,((0U != (vlSelf->top__DOT__dut__DOT__alu_data 
                                   >> 0xcU))));
    bufp->fullSData(oldp+83,((0xfffU & vlSelf->top__DOT__dut__DOT__alu_data)),12);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data),32);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel),4);
    bufp->fullBit(oldp+86,(vlSelf->clk_i));
    bufp->fullBit(oldp+87,(vlSelf->rst_ni));
    bufp->fullIData(oldp+88,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+89,(vlSelf->pc_debug_o),32);
    bufp->fullIData(oldp+90,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+91,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+92,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+93,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+94,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+95,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+96,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+97,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+98,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+99,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+100,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__dut__DOT__instr_debug_i),32);
    bufp->fullSData(oldp+102,(0x900U),12);
    bufp->fullSData(oldp+103,(0x8a0U),12);
    bufp->fullSData(oldp+104,(0x890U),12);
    bufp->fullSData(oldp+105,(0x880U),12);
    bufp->fullSData(oldp+106,(0x870U),12);
    bufp->fullSData(oldp+107,(0x860U),12);
    bufp->fullSData(oldp+108,(0x850U),12);
    bufp->fullSData(oldp+109,(0x840U),12);
    bufp->fullSData(oldp+110,(0x830U),12);
    bufp->fullSData(oldp+111,(0x820U),12);
    bufp->fullSData(oldp+112,(0x810U),12);
    bufp->fullSData(oldp+113,(0x800U),12);
}
