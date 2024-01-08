testcase:    Test the RISCV processor. 
    add, sub, and, or, slt, addi, la, SW, beg, jal 
    If successful, it should write the value 71 to address 84 

        #       Assembly                Description             Address machine code
    main:   addi x2, x0, 5          # initialize x2 = 5         0
            addi x3, x0, 12         # initialize x3 = 12        4
            addi x7, x3, -9         # initialize x7 = 3         8
            or   x4, x7, x2         # x4 = (3 OR 5) = 7         C
            and  x5, x3, x4         # x5 = (12 AND 7) = 4       10
            add  x5, x5, x4         # x5 = 4 + 7 = 11           14
            beq  x5, x7, end        # shouldn't be taken        18
            slt  x4, x3, x4         # x4 = (12 < 7) = 0         1C
            beq  x4, x0, around     # shouldn't be taken        20
            addi x5, x0, 0          # shouldn't happen          24
    around: slt  x4, x7, x2         # x4 = (3 < 5) = 1          28
            add  x7, x4, x5         # x7 = 1 + 11 = 12          2C
            sub  x7, x7, x2         # x7 = 12 - 5 = 7           30
            SW   x7, 68(x3)         # [80] = 7                  34
            lw   x2, 80(x0)         # x2 = [80] = 7             38
            jal  x3, end            # save 64 in x3             3C
            addi x2, x0, 1          # shouldn't happen          40
    end:    add  x2, x2, x3         # x2 = 7 + 64 = 71          44
            SW   x2, 84(x0)         # write mem[84] = 71        48
    
    instr_mem:
        0x00500113
        0x00C00193
        0xFF718393
        0x0023E233
        0x0041F2B3
        0x004282B3
        0x02728663
        0x0041A233
        0x00020463
        0x00000293
        0x0023A233
        0x005203B3
        0x402383B3
        0x0471A223
        0x05002103
        0x008001EF
        0x00100113
        0x00310133
        0x04202A23