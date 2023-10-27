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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc)),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__dut__DOT__nxt_pc),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__dut__DOT__instr),32);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                         >> 7U))),5);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__dut__DOT__rs2_data),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__dut__DOT__imm),32);
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__dut__DOT__br_unsigned));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__dut__DOT__br_less));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__dut__DOT__br_equal));
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__dut__DOT__operand_a),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__dut__DOT__operand_b),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__dut__DOT__alu_data),32);
        bufp->chgIData(oldp+16,(((0xcU >= (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))
                                  ? vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
                                 [vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel]
                                  : vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0)),32);
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__dut__DOT__br_sel));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__dut__DOT__rd_wren));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__dut__DOT__op_a_sel));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__dut__DOT__op_b_sel));
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__dut__DOT__mem_wren));
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__dut__DOT__wb_sel),2);
        bufp->chgIData(oldp+24,(((2U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                                  ? ((IData)(4U) + vlSelf->top__DOT__dut__DOT__pc)
                                  : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                                      ? ((0xcU >= (IData)(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel))
                                          ? vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out
                                         [vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel]
                                          : vlSelf->top__DOT__dut__DOT__lsu0__DOT____Vxrand_h96fd10a2__0)
                                      : vlSelf->top__DOT__dut__DOT__alu_data))),32);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__dut__DOT__i),10);
        bufp->chgQData(oldp+26,(vlSelf->top__DOT__dut__DOT__alu0__DOT__alu_data_33bit),33);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__dut__DOT__alu0__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__dut__DOT__brcomp0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__dut__DOT__brcomp0__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+32,((IData)((0U != (0xbfff8f83U 
                                              & vlSelf->top__DOT__dut__DOT__instr)))));
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__dut__DOT__immgen0__DOT__opcode),7);
        bufp->chgBit(oldp+34,((0U != (vlSelf->top__DOT__dut__DOT__alu_data 
                                      >> 0xcU))));
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__periph_in),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[0]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[1]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[2]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[3]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[4]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[5]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[6]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[7]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[8]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[9]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[10]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[11]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__data_out[12]),32);
        bufp->chgSData(oldp+49,((0xfffU & vlSelf->top__DOT__dut__DOT__alu_data)),12);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__addr_sel),4);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__dut__DOT__lsu0__DOT__proc_periph_out__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[0]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[1]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[2]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[3]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[4]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[5]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[6]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[7]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[8]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[9]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[10]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[11]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[12]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[13]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[14]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[15]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[16]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[17]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[18]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[19]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[20]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[21]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[22]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[23]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[24]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[25]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[26]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[27]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[28]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[29]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[30]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__registers[31]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__dut__DOT__regfile0__DOT__proc_write_regfile__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+85,(vlSelf->clk_i));
    bufp->chgBit(oldp+86,(vlSelf->rst_ni));
    bufp->chgIData(oldp+87,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+88,(vlSelf->pc_debug_o),32);
    bufp->chgIData(oldp+89,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+90,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+91,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+92,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+93,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+94,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+95,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+96,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+97,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+98,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+99,(vlSelf->io_hex7_o),32);
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
}
