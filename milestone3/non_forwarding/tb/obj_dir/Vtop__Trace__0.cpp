// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__rst_reg));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__rst_wait));
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[3]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[4]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[5]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[6]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[7]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[8]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[9]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[10]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[11]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[12]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__dut__DOT__pc_ex),32);
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__dut__DOT__op_a_sel_ex));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__dut__DOT__op_b_sel_ex));
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__dut__DOT__operand_a_ex),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__dut__DOT__operand_b_ex),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__dut__DOT__rs1_data_ex),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__dut__DOT__imm_ex),32);
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__dut__DOT__branch_ex));
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__dut__DOT__alu_op_ex),4);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__dut__DOT__br_op_ex),3);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__dut__DOT__pc_four_ex),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__dut__DOT__alu_data_ex),32);
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__dut__DOT__br_sel_ex));
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__dut__DOT__rs2_data_ex),32);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__dut__DOT__ld_op_ex),4);
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__dut__DOT__mem_wren_ex));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__dut__DOT__is_load_ex));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__dut__DOT__jump_ex));
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__dut__DOT__rd_addr_ex),5);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__dut__DOT__rd_wren_ex));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__dut__DOT__br_sel_mem));
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__dut__DOT__rs2_data_mem),32);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__dut__DOT__ld_op_mem),4);
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__dut__DOT__mem_wren_mem));
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__dut__DOT__pc_four_mem),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__dut__DOT__alu_data_mem),32);
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__dut__DOT__is_load_mem));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__dut__DOT__jump_mem));
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__dut__DOT__rd_addr_mem),5);
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__dut__DOT__rd_wren_mem));
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__dut__DOT__pc_four_wb),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__dut__DOT__alu_data_wb),32);
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__dut__DOT__is_load_wb));
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__dut__DOT__jump_wb));
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__dut__DOT__rd_addr_wb),5);
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__dut__DOT__rd_wren_wb));
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__dut__DOT__ld_data_wb),32);
        bufp->chgIData(oldp+55,(((IData)(vlSelf->top__DOT__dut__DOT__jump_wb)
                                  ? vlSelf->top__DOT__dut__DOT__pc_four_wb
                                  : ((IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)
                                      ? vlSelf->top__DOT__dut__DOT__ld_data_wb
                                      : vlSelf->top__DOT__dut__DOT__alu_data_wb))),32);
        bufp->chgIData(oldp+56,(((IData)(vlSelf->top__DOT__dut__DOT__is_load_wb)
                                  ? vlSelf->top__DOT__dut__DOT__ld_data_wb
                                  : vlSelf->top__DOT__dut__DOT__alu_data_wb)),32);
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_less));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__dut__DOT__alu0__DOT__br_equal));
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_cal__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk4__DOT__i),32);
        bufp->chgBit(oldp+63,((0U != (vlSelf->top__DOT__dut__DOT__alu_data_mem 
                                      >> 0xcU))));
        bufp->chgSData(oldp+64,((0xfffU & vlSelf->top__DOT__dut__DOT__alu_data_mem)),12);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__dut__DOT__instr_id),32);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__dut__DOT__rs1_addr_id),5);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__dut__DOT__rs2_addr_id),5);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__dut__DOT__pc_id),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__dut__DOT__pc_four_id),32);
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__dut__DOT__op_a_sel_id));
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__dut__DOT__op_b_sel_id));
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__dut__DOT__imm_id),32);
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__dut__DOT__branch_id));
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__dut__DOT__alu_op_id),4);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__dut__DOT__br_op_id),3);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__dut__DOT__ld_op_id),4);
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__dut__DOT__mem_wren_id));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__dut__DOT__is_load_id));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__dut__DOT__jump_id));
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__dut__DOT__rd_addr_id),5);
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__dut__DOT__rd_wren_id));
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__dut__DOT__hazard_op),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__dut__DOT__pc_if),32);
        bufp->chgIData(oldp+85,(((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc_if)),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__dut__DOT__ld_data_mem),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__lw_data),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[1]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[2]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[3]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[4]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[5]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[6]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[7]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[8]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[9]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[10]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[11]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[12]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[13]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[14]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[15]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[16]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[17]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[18]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[19]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[20]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[21]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[22]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[23]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[24]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[25]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[26]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[27]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[28]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[29]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[30]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__dut__DOT__enable_if_id));
        bufp->chgBit(oldp+121,(vlSelf->top__DOT__dut__DOT__enable_id_ex));
        bufp->chgBit(oldp+122,(vlSelf->top__DOT__dut__DOT__enable_ex_mem));
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__dut__DOT__enable_mem_wb));
        bufp->chgBit(oldp+124,(vlSelf->top__DOT__dut__DOT__rst_if_id));
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__dut__DOT__rst_id_ex));
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__dut__DOT__rst_ex_mem));
        bufp->chgBit(oldp+127,(vlSelf->top__DOT__dut__DOT__rst_mem_wb));
    }
    bufp->chgBit(oldp+128,(vlSelf->clk_i));
    bufp->chgBit(oldp+129,(vlSelf->rst_ni));
    bufp->chgIData(oldp+130,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+131,(vlSelf->pc_debug_o),32);
    bufp->chgIData(oldp+132,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+133,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+134,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+135,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+136,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+137,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+138,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+139,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+140,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+141,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+142,(vlSelf->io_hex7_o),32);
    bufp->chgIData(oldp+143,(((IData)(vlSelf->top__DOT__dut__DOT__br_sel_mem)
                               ? vlSelf->top__DOT__dut__DOT__alu_data_mem
                               : ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc_if))),32);
    bufp->chgIData(oldp+144,(vlSelf->top__DOT__dut__DOT__test0__DOT__instruction
                             [(0x3ffU & (vlSelf->pc_debug_o 
                                         >> 2U))]),32);
    bufp->chgIData(oldp+145,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
                             [vlSelf->top__DOT__dut__DOT__rs1_addr_id]),32);
    bufp->chgIData(oldp+146,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers
                             [vlSelf->top__DOT__dut__DOT__rs2_addr_id]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
