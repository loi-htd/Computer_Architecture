#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->nickle_i = (rand()%2) && (!dut->dime_i) && (!dut->quarter_i);
  dut->dime_i = (rand()%4) && (!dut->quarter_i) && (!dut->nickle_i);
  dut->quarter_i = (rand()%8) && (!dut->dime_i) && (!dut->nickle_i);
}
