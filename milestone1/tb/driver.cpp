#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
  // only one signal is set to 1 at a time
  // nickle has 50% to be set, dime and quarter are 25%
  dut->nickle_i  = (rand()%2 == 0) && (!dut->dime_i)    && (!dut->quarter_i);
  dut->dime_i    = (rand()%4 == 0) && (!dut->quarter_i) && (!dut->nickle_i);
  dut->quarter_i = (rand()%4 == 0) && (!dut->dime_i)    && (!dut->nickle_i);
}
