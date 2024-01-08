#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

int16_t imme;
uint32_t instr[1024];
uint32_t reg_data[32];
enum sample_instr
{
  ADDI = 0x01300093,
  SLLI = 0x00509693,
  SLTI = 0x0580A713,
  SLTIU = 0x0C80B793,
  SRLI = 0x0040D813,
  SRAI = 0x4020D893,
  XORI = 0x02D0C913,
  ORI = 0x02D0E993,
  ANDI = 0x02D0FA13
};

int16_t rand_13(void)
{
  // Khởi tạo seed cho hàm rand() bằng thời gian hiện tại
  static int seed_initialized = 0;
  if (!seed_initialized)
  {
    srand((unsigned int)time(NULL));
    seed_initialized = 1;
  }
  // Lấy giá trị ngẫu nhiên trong khoảng từ -2048 đến 2047
  int16_t random_value = rand() % 4096 - 2048;
  return random_value;
}

uint8_t rand_5(void)
{
  static int seed_initialized5 = 0;
  if (!seed_initialized5)
  {
    srand((unsigned int)time(NULL));
    seed_initialized5 = 1;
  }
  // Lấy giá trị ngẫu nhiên trong khoảng từ -2048 đến 2047
  int16_t random_value = rand() % 32;
  return random_value;
}

uint16_t rand_7ff(void)
{
  static int seed_initialized7 = 0;
  if (!seed_initialized7)
  {
    srand((unsigned int)time(NULL));
    seed_initialized7 = 1;
  }
  // Lấy giá trị ngẫu nhiên trong khoảng từ -2048 đến 2047
  uint16_t random_value = rand() % 0x800;
  return random_value;
}

uint16_t rand_jump(void)
{
  static int seed_initialized7 = 0;
  if (!seed_initialized7)
  {
    srand((unsigned int)time(NULL));
    seed_initialized7 = 1;
  }
  // Lấy giá trị ngẫu nhiên trong khoảng từ -2048 đến 2047
  uint16_t random_value = (rand()%480)*4 + 16;
  return random_value;
}

uint32_t assign_iformat(uint16_t rand_value, uint32_t sample, uint8_t rs_n, uint8_t rd)
{
  if (sample == SLLI || sample == SRLI || sample == SRAI)
  {
    uint32_t imme_bits = (uint32_t)(rand_value & 0x001F);
    sample &= ~(0x01FF8F80);
    sample |= (imme_bits << 20);
    sample |= (rs_n << 15);
    sample |= (rd << 7);
    return sample;
  }
  else
  {
    uint32_t imme_bits = (uint32_t)(rand_value & 0x0FFF);
    sample &= ~(0xFFFF8F80);
    sample |= (imme_bits << 20);
    sample |= (rs_n << 15);
    sample |= (rd << 7);
    return sample;
  }
}

uint32_t generateJAL(uint32_t random_pc) {
    // Định dạng của lệnh JAL: imm[20] | imm[10:1] | imm[11] | imm[19:12] | rd(5) | opcode(7)
    uint32_t opcodeJAL = 0x6F;  // Mã opcode cho lệnh JAL
    uint32_t rd = 1;  // x1
    uint32_t bit11 = (random_pc >> 11) & 0x01;
    uint32_t bit12_19 = (random_pc >> 12) & 0xFF;
    uint32_t bit10_1 = (random_pc >> 1) & 0x3FF;
    uint32_t bit20 = (random_pc >> 20) & 0x01;

    // Xây dựng lệnh JAL
    uint32_t jalInstruction = (bit20 << 31) | (bit10_1 << 21) | (bit11 << 20) | (bit12_19 << 12) |
                                   (rd & 0x1F) << 7 | (opcodeJAL & 0x7F);

    return jalInstruction;
}

uint32_t generateJALR(int random_pc) {
    // Định dạng của lệnh JALR: imm[11:0] | rs1(5) | funct3(3) | rd(5) | opcode(7)
    uint32_t opcodeJALR = 0x67;  // Mã opcode cho lệnh JALR
    uint32_t rs1 = 3;  // [x3] = 16
    uint32_t rd = 4;  //x4
    
    // Tính toán offset (imm)
    int imm = random_pc - 8;

    // Xây dựng lệnh JALR
    uint32_t jalrInstruction = (imm & 0xFFF) << 20 | (rs1 & 0x1F) << 15 | (0 << 12) |
                                   (rd & 0x1F) << 7 | (opcodeJALR & 0x7F);

    return jalrInstruction;
}


int main(int argc, char *argv[])
{
  // Mở file để ghi
  FILE *fp = fopen("../mem/instruction_mem.data", "w");
  if (fp == NULL)
  {
    printf("Không thể mở file instr.\n");
    return 1;
  }
  // FILE *fp_reg = fopen("../mem/regfile.data", "w");
  // if (fp_reg == NULL)
  // {
  //   printf("Không thể mở file reg.\n");
  //   return 1;
  // }
  
  int tb_mode = atoi(argv[1]);
  switch (tb_mode)
  {
  case 1: {
    imme = rand_13();
    instr[0] = assign_iformat(imme,(uint32_t)ADDI, 0, 1);
    imme = rand_13();
    instr[1] = assign_iformat(imme,(uint32_t)ADDI, 0, 2);
    imme = rand_5();
    instr[13] = assign_iformat(imme,(uint32_t)SLLI, 1, 13);
    imme = rand_13();
    instr[14] = assign_iformat(imme,(uint32_t)SLTI, 1, 14);
    imme = rand_13();
    instr[15] = assign_iformat(imme,(uint32_t)SLTIU, 1, 15);
    imme = rand_5();
    instr[16] = assign_iformat(imme,(uint32_t)SRLI, 1, 16);
    imme = rand_5();
    instr[17] = assign_iformat(imme,(uint32_t)SRAI, 1, 17);
    imme = rand_13();
    instr[18] = assign_iformat(imme,(uint32_t)XORI, 1, 18);
    imme = rand_13();
    instr[19] = assign_iformat(imme,(uint32_t)ORI, 1, 19);
    imme = rand_13();
    instr[20] = assign_iformat(imme,(uint32_t)ANDI, 1, 20);

    for (int i = 0; i < 25; i++)
    {
      fprintf(fp, "%08X\n", instr[i]);
    }
    break;
  } 
  case 2: {
    uint16_t x1_value = rand_13();
    instr[0] = assign_iformat(x1_value,(uint32_t)ADDI, 0, 1);
    imme = abs(rand_13());
    if (imme > 1000) imme = 1000;
    imme += (4-(imme%4)); 
    instr[1] = assign_iformat(imme,(uint32_t)ADDI, 0, 7);
    for (int i = 0; i < 25; i++)
    {
      fprintf(fp, "%08X\n", instr[i]);
    }
    break;
  }
  case 4: {
    // *x1 = 4 | *x2 = 10 | x3 = 16 | *x4 = 12 | *x5 = 20
    uint32_t random_pc = rand_jump();
    instr[0] = generateJAL(random_pc);
    instr[1] = 0x01000193;  // x3 = 16
    instr[random_pc >> 2] = 0x00A00113;   // x2 = 10
    for (int i = 0; i < 1024; i++)
    {
      fprintf(fp, "%08X\n", instr[i]);
    }
    break;
  }
  case 5: {
    // *x1 = 4 | *x2 = 10 | x3 = 16 | *x4 = 12 | *x5 = 20
    instr[0] = 0x01000193;
    instr[1] = 0x01000193;  // x3 = 16
    uint32_t random_pc_jalr = rand_jump();
    instr[2] = generateJALR(random_pc_jalr);
    instr[(random_pc_jalr - 8 + 16) >> 2] = 0x01400293; // x5 =20
    for (int i = 0; i < 1024; i++)
    {
      fprintf(fp, "%08X\n", instr[i]);
    }
    break;
  }
  
  default:
    break;
  }


  // Đóng file
  fclose(fp);
  // fclose(fp_reg);

  return 0;
}