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
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+190,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+191,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+196,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+198,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+200,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+202,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+190,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+191,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+196,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+198,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+200,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+202,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+190,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+191,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+196,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+198,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+200,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+202,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+203,"nxt_pc_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,"pc_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,"pc_four_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,"instr_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,"instr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,"rs1_addr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+122,"rs2_addr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+123,"pc_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,"pc_four_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,"rs1_data_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,"rs2_data_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,"op_a_sel_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+126,"op_b_sel_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+127,"imm_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,"branch_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+129,"alu_op_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,"br_op_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+131,"ld_op_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+132,"mem_wren_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+133,"is_load_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+134,"jump_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+135,"rd_addr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+136,"rd_wren_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"instr_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"rs1_addr_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,"rs2_addr_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,"pc_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,"op_a_sel_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"op_b_sel_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+155,"operand_a_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,"operand_b_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"rs1_data_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"imm_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,"branch_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+11,"alu_op_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,"br_op_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,"pc_four_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,"alu_data_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,"br_sel_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+14,"rs2_data_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,"ld_op_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,"mem_wren_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+17,"is_load_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"jump_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+19,"rd_addr_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,"rd_wren_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+21,"branch_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+22,"br_sel_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+137,"ld_op_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,"mem_wren_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+23,"pc_four_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,"alu_data_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,"is_load_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"jump_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+26,"rd_addr_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,"rd_wren_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+209,"ld_data_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,"pc_four_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,"alu_data_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,"is_load_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+143,"jump_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+144,"rd_addr_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+145,"rd_wren_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+146,"ld_data_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,"rd_data_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,"wb_data_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,"rst_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+172,"enable_if_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"enable_id_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+174,"enable_ex_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+175,"enable_mem_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+176,"rst_if_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+177,"rst_id_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+178,"rst_ex_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+179,"rst_mem_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+159,"hazard_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+160,"alu_ld_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+161,"alu_ld_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+162,"forward_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+163,"forward_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+164,"forward_cmp_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+165,"forward_cmp_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+166,"forward_store",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+28,"operand_a_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,"operand_b_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,"cmp_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,"cmp_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,"st_data_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,"st_data_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,"forward_data_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,"forward_data_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,"predicted_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+181,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"mis_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+206,"instr_debug_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,"rst_wait",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+155,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+156,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+167,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+12,"br_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+10,"branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"br_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+157,"alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("btb_0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+204,"pc_if",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+128,"branch_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"pc_four_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+21,"branch_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"br_sel_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+139,"alu_data_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"predicted_pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+181,"hit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"mis_hit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+183,"index_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+184,"tag_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+185,"pc_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,"tag_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+187,"index_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+113,"index_mem_past",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+114,"branch_mem_past",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+115,"alu_data_mem_past",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,"tag_mem_past",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+117,"branch_time",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+118,"mis_hit_time",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+119,"wrong_percent",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decoder0 ");
    tracep->declBus(c+120,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+122,"rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+135,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+136,"rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+127,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+128,"branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+129,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+130,"br_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+131,"ld_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+125,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"is_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem_0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"pc_four_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+211,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+158,"br_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"branch_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+157,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"ld_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+18,"jump_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+20,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+149,"st_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+22,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"branch_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+139,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"ld_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+25,"jump_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"rd_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+27,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forward_unit_0 ");
    tracep->declBus(c+159,"hazard_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+10,"branch_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+160,"alu_ld_A",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+161,"alu_ld_B",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+162,"forward_A",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"forward_B",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"forward_cmp_A",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"forward_cmp_B",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"forward_store",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"forward_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_detect_0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+121,"r1_addr_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+122,"r2_addr_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3,"r1_addr_ex_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+4,"r2_addr_ex_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+26,"rd_addr_mem_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+144,"rd_addr_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+27,"rd_wren_mem_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"rd_wren_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"is_load_mem_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"is_load_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"br_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+159,"hazard_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+30,"stall_cycle",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+120,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+122,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+123,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"pc_four_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+207,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+208,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+128,"branch_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"jump_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+129,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+130,"br_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+131,"ld_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+125,"op_a_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"op_b_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"mem_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+135,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+136,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"rs1_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+4,"rs2_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+5,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+10,"branch_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"jump_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+12,"br_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+15,"ld_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+6,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"rd_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+20,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+204,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+205,"pc_four_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+206,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+139,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"ld_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+138,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+190,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+209,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+192,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+196,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+198,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+200,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+202,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+150,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+214,"ADDR_SW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+215,"ADDR_LCD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+216,"ADDR_LEDG",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+217,"ADDR_LEDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+218,"ADDR_HEX7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+219,"ADDR_HEX6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+220,"ADDR_HEX5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+221,"ADDR_HEX4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+222,"ADDR_HEX3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+223,"ADDR_HEX2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+224,"ADDR_HEX1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+225,"ADDR_HEX0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+151,"a_divisor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBus(c+152,"b_remainder",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBus(c+65,"periph_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+66+i*1,"data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+153,"addr_memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+213,"lw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
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
    tracep->declBus(c+154,"addr_sel",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("proc_periph_out ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+79,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem_wb_0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"pc_four_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+139,"alu_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+209,"ld_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"jump_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"is_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+27,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+143,"jump_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"is_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+144,"rd_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+145,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_compare_a ");
    tracep->declBus(c+8,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+164,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+167,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_compare_b ");
    tracep->declBus(c+14,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+165,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+168,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_forward_a ");
    tracep->declBus(c+28,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+162,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+155,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_forward_b ");
    tracep->declBus(c+29,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+163,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+156,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_forward_unit_A ");
    tracep->declBus(c+139,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"mux_i_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+160,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+169,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_forward_unit_B ");
    tracep->declBus(c+139,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+141,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"mux_i_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+161,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+170,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_jump ");
    tracep->declBus(c+148,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+140,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+143,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_op_a ");
    tracep->declBus(c+8,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+6,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_op_b ");
    tracep->declBus(c+14,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+7,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_pc ");
    tracep->declBus(c+205,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+181,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+203,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_store_data ");
    tracep->declBus(c+14,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+166,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+211,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_wb_data ");
    tracep->declBus(c+141,"mux_i_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"mux_i_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+142,"mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+148,"mux_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+121,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+122,"rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+144,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+147,"rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+145,"rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+207,"rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+208,"rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+80+i*1,"registers",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("proc_write_regfile ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+112,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("register_control_0 ");
    tracep->declBit(c+210,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"mis_hit",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+159,"hazard_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+172,"enable_if_id",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"enable_id_ex",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"enable_ex_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"enable_mem_wb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"rst_if_id",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"rst_id_ex",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"rst_ex_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"rst_mem_wb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("test0 ");
    tracep->declBit(c+188,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"pc_debug",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+206,"instr_debug",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,"debug_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+63,"count_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,"count_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__dut__DOT__instr_ex),32);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__dut__DOT__rs1_addr_ex),5);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__dut__DOT__rs2_addr_ex),5);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__dut__DOT__pc_ex),32);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__dut__DOT__op_a_sel_ex));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__dut__DOT__op_b_sel_ex));
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__dut__DOT__rs1_data_ex),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__dut__DOT__imm_ex),32);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__dut__DOT__branch_ex));
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__alu_op_ex),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__br_op_ex),3);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__dut__DOT__pc_four_ex),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__dut__DOT__rs2_data_ex),32);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__ld_op_ex),4);
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__dut__DOT__mem_wren_ex));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__dut__DOT__is_load_ex));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__dut__DOT__jump_ex));
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__rd_addr_ex),5);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__dut__DOT__rd_wren_ex));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__dut__DOT__branch_mem));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__dut__DOT__br_sel_mem));
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__dut__DOT__pc_four_mem),32);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__dut__DOT__is_load_mem));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__dut__DOT__jump_mem));
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__dut__DOT__rd_addr_mem),5);
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__dut__DOT__rd_wren_mem));
    bufp->fullIData(oldp+28,(((IData)(vlSelf->top__DOT__dut__DOT__op_a_sel_ex)
                               ? vlSelf->top__DOT__dut__DOT__pc_ex
                               : vlSelf->top__DOT__dut__DOT__rs1_data_ex)),32);
    bufp->fullIData(oldp+29,(((IData)(vlSelf->top__DOT__dut__DOT__op_b_sel_ex)
                               ? vlSelf->top__DOT__dut__DOT__imm_ex
                               : vlSelf->top__DOT__dut__DOT__rs2_data_ex)),32);
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__dut__DOT__hazard_detect_0__DOT__stall_cycle));
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[0]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[1]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[2]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[3]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[4]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[5]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[6]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[7]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[8]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[9]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[10]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[11]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[12]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[13]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[14]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[15]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[16]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[17]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[18]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[19]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[20]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[21]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[22]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[23]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[24]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[25]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[26]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[27]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[28]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[29]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[30]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__dut__DOT__test0__DOT__debug_reg[31]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__dut__DOT__test0__DOT__count_clk),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__dut__DOT__test0__DOT__count_instr),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[0]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[1]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[2]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[3]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[4]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[5]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[6]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[7]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[8]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[9]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[10]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[11]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[12]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[1]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[2]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[3]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[4]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[5]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[6]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[7]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[8]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[9]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[10]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[11]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[12]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[13]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[14]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[15]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[16]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[17]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[18]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[19]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[20]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[21]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[22]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[23]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[24]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[25]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[26]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[27]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[28]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[29]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[30]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[31]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem_past),6);
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_mem_past));
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__alu_data_mem_past),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_mem_past),24);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_time),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__mis_hit_time),32);
    bufp->fullIData(oldp+119,(VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x64U), vlSelf->top__DOT__dut__DOT__btb_0__DOT__mis_hit_time), vlSelf->top__DOT__dut__DOT__btb_0__DOT__branch_time)),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__dut__DOT__instr_id),32);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__dut__DOT__rs1_addr_id),5);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__dut__DOT__rs2_addr_id),5);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__dut__DOT__pc_id),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__dut__DOT__pc_four_id),32);
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__dut__DOT__op_a_sel_id));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__dut__DOT__op_b_sel_id));
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__dut__DOT__imm_id),32);
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__dut__DOT__branch_id));
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__dut__DOT__alu_op_id),4);
    bufp->fullCData(oldp+130,(((0x63U == (0x7fU & vlSelf->top__DOT__dut__DOT__instr_id))
                                ? ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                    ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                        ? ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_id)
                                            ? 5U : 4U)
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_id)
                                            ? 3U : 2U))
                                    : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->top__DOT__dut__DOT__instr_id)
                                                 ? 1U
                                                 : 0U)))
                                : ((0x6fU == (0x7fU 
                                              & vlSelf->top__DOT__dut__DOT__instr_id))
                                    ? 6U : ((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__dut__DOT__instr_id))
                                             ? 7U : 0U)))),3);
    bufp->fullCData(oldp+131,((((3U == (0x7fU & vlSelf->top__DOT__dut__DOT__instr_id)) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->top__DOT__dut__DOT__instr_id)))
                                ? ((0x4000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                    ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->top__DOT__dut__DOT__instr_id)
                                                 ? 3U
                                                 : 1U))
                                    : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr_id)
                                        ? ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_id)
                                            ? 0U : 0xfU)
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__dut__DOT__instr_id)
                                            ? 0xbU : 9U)))
                                : 0U)),4);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__dut__DOT__mem_wren_id));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__dut__DOT__is_load_id));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__dut__DOT__jump_id));
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__dut__DOT__rd_addr_id),5);
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__dut__DOT__rd_wren_id));
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__dut__DOT__ld_op_mem),4);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__dut__DOT__mem_wren_mem));
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__dut__DOT__alu_data_mem),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__dut__DOT__pc_four_wb),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__dut__DOT__alu_data_wb),32);
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__dut__DOT__is_load_wb));
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__dut__DOT__jump_wb));
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__dut__DOT__rd_addr_wb),5);
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__dut__DOT__rd_wren_wb));
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__dut__DOT__ld_data_wb),32);
    bufp->fullIData(oldp+147,(((IData)(vlSelf->top__DOT__dut__DOT__jump_wb)
                                ? vlSelf->top__DOT__dut__DOT__pc_four_wb
                                : ((IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)
                                    ? vlSelf->top__DOT__dut__DOT__ld_data_wb
                                    : vlSelf->top__DOT__dut__DOT__alu_data_wb))),32);
    bufp->fullIData(oldp+148,(((IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)
                                ? vlSelf->top__DOT__dut__DOT__ld_data_wb
                                : vlSelf->top__DOT__dut__DOT__alu_data_wb)),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__dut__DOT__st_data_mem),32);
    bufp->fullBit(oldp+150,((0U != (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                    >> 0xcU))));
    bufp->fullSData(oldp+151,((0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                         >> 2U))),11);
    bufp->fullSData(oldp+152,((3U & vlSelf->top__DOT__dut__DOT__alu_data_mem)),11);
    bufp->fullSData(oldp+153,((0xfffU & vlSelf->top__DOT__dut__DOT__alu_data_mem)),12);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel),4);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__dut__DOT__operand_a_ex),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__dut__DOT__operand_b_ex),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__dut__DOT__alu_data_ex),32);
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__dut__DOT__br_sel_ex));
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__dut__DOT__hazard_op),6);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__dut__DOT__alu_ld_A),2);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__dut__DOT__alu_ld_B),2);
    bufp->fullBit(oldp+162,(vlSelf->top__DOT__dut__DOT__forward_A));
    bufp->fullBit(oldp+163,(vlSelf->top__DOT__dut__DOT__forward_B));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__dut__DOT__forward_cmp_A));
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__dut__DOT__forward_cmp_B));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__dut__DOT__forward_store));
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__dut__DOT__cmp_a),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__dut__DOT__cmp_b),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__dut__DOT__forward_data_A),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__dut__DOT__forward_data_B),32);
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__dut__DOT__forward_unit_0__DOT__forward_st));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__dut__DOT__enable_if_id));
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__dut__DOT__enable_id_ex));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__dut__DOT__enable_ex_mem));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__dut__DOT__enable_mem_wb));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__dut__DOT__rst_if_id));
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__dut__DOT__rst_id_ex));
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__dut__DOT__rst_ex_mem));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__dut__DOT__rst_mem_wb));
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__dut__DOT__predicted_pc),32);
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__dut__DOT__hit));
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__dut__DOT__mis_hit));
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_if),6);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_if),24);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__pc_mem),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__tag_mem),24);
    bufp->fullCData(oldp+187,(vlSelf->top__DOT__dut__DOT__btb_0__DOT__index_mem),6);
    bufp->fullBit(oldp+188,(vlSelf->clk_i));
    bufp->fullBit(oldp+189,(vlSelf->rst_ni));
    bufp->fullIData(oldp+190,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+191,(vlSelf->pc_debug_o),32);
    bufp->fullIData(oldp+192,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+193,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+194,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+195,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+196,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+197,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+198,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+199,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+200,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+201,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+202,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+203,(((IData)(vlSelf->top__DOT__dut__DOT__hit)
                                ? vlSelf->top__DOT__dut__DOT__predicted_pc
                                : ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc_if))),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__dut__DOT__pc_if),32);
    bufp->fullIData(oldp+205,(((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc_if)),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__dut__DOT__test0__DOT__instruction
                              [(0x3ffU & (vlSelf->pc_debug_o 
                                          >> 2U))]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
                              [vlSelf->top__DOT__dut__DOT__rs1_addr_id]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
                              [vlSelf->top__DOT__dut__DOT__rs2_addr_id]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__dut__DOT__ld_data_mem),32);
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__dut__DOT__rst_bit));
    bufp->fullIData(oldp+211,(((IData)(vlSelf->top__DOT__dut__DOT__forward_store)
                                ? vlSelf->top__DOT__dut__DOT__forward_data_B
                                : vlSelf->top__DOT__dut__DOT__rs2_data_ex)),32);
    bufp->fullBit(oldp+212,(vlSelf->top__DOT__dut__DOT__rst_wait));
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data),32);
    bufp->fullSData(oldp+214,(0x900U),12);
    bufp->fullSData(oldp+215,(0x8a0U),12);
    bufp->fullSData(oldp+216,(0x890U),12);
    bufp->fullSData(oldp+217,(0x880U),12);
    bufp->fullSData(oldp+218,(0x870U),12);
    bufp->fullSData(oldp+219,(0x860U),12);
    bufp->fullSData(oldp+220,(0x850U),12);
    bufp->fullSData(oldp+221,(0x840U),12);
    bufp->fullSData(oldp+222,(0x830U),12);
    bufp->fullSData(oldp+223,(0x820U),12);
    bufp->fullSData(oldp+224,(0x810U),12);
    bufp->fullSData(oldp+225,(0x800U),12);
}
