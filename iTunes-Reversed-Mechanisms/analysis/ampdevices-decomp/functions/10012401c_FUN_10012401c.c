// name: FUN_10012401c
// address: 10012401c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10012401c(ushort *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ushort *puVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ushort *local_190;
  float local_188 [5];
  float local_174;
  float local_170;
  float local_16c;
  float afStack_114 [3];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  float afStack_8c [21];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar1 = *(byte *)((long)param_1 + 0x1e11);
  if ((ulong)bVar1 != 0) {
    lVar6 = *(long *)(param_1 + (ulong)(byte)param_1[0xf08] * 4 + 0x690);
    uVar3 = *param_1;
    uVar15 = 0;
    local_190 = param_1;
    do {
      uVar9 = param_1[uVar15 * 0x28 + 0xf30];
      if ((byte)uVar9 != 0) {
        uVar10 = param_1[uVar15 * 2 + 0xef6];
        puVar21 = param_1 + uVar15 * 0x28 + 0xf0c;
        lVar13 = uVar15 * uVar3;
        uVar12 = 0;
        do {
          bVar2 = (byte)*puVar21;
          uVar18 = (ulong)bVar2;
          if (uVar18 != 0) {
            lVar14 = *(long *)(puVar21 + 4);
            uVar22 = 0;
            do {
              uVar11 = (uint)*(short *)(lVar14 + uVar22 * 2);
              fVar24 = (float)_sinf((float)(int)uVar11 /
                                    (float)((*(double *)(&DAT_100707af0 + (uVar11 >> 0xc & 8)) +
                                            (double)(1 << ((char)uVar10 - 1U & 0x1f))) /
                                           _DAT_100707b00));
              afStack_8c[uVar22 + 1] = fVar24;
              uVar22 = uVar22 + 1;
            } while (uVar18 != uVar22);
            local_188[0] = 1.0;
            uVar22 = 1;
            uVar23 = 0;
            do {
              local_108 = CONCAT44(local_108._4_4_,local_188[0]);
              fVar24 = afStack_8c[uVar22];
              if (1 < uVar22) {
                lVar14 = 1;
                uVar16 = uVar23;
                do {
                  *(float *)((long)&local_108 + lVar14 * 4) =
                       local_188[uVar16 & 0xffffffff] * fVar24 + local_188[lVar14];
                  lVar14 = lVar14 + 1;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              *(float *)((long)&local_108 + uVar22 * 4) = fVar24;
              _memcpy(local_188,&local_108,uVar23 * 4 + 8);
              uVar22 = uVar22 + 1;
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar18);
            if (*(byte *)((long)puVar21 + 3) == 0) {
              uVar4 = *(ushort *)(lVar6 + (ulong)*(byte *)((long)puVar21 + 1) * 2);
              uVar5 = *(ushort *)(lVar6 + (ulong)(byte)puVar21[1] * 2);
              if (uVar4 < uVar5) {
                uVar11 = (uint)uVar5 - (uint)uVar4;
                if ((uVar11 & 3) == 0) {
                  uVar22 = (ulong)(uint)uVar4;
                  pfVar17 = (float *)(param_1 + lVar13 * 2 + uVar22 * 2 + 0x6b8);
                  uVar19 = bVar2 - 1;
                  switch((ulong)uVar19) {
                  case 0:
                    fVar36 = pfVar17[1] - *pfVar17 * local_188[1];
                    fVar37 = pfVar17[2] - local_188[1] * fVar36;
                    fVar38 = pfVar17[3] - local_188[1] * fVar37;
                    fVar24 = pfVar17[4];
                    fVar39 = pfVar17[5];
                    fVar40 = pfVar17[6];
                    fVar42 = pfVar17[7];
                    pfVar17[1] = fVar36;
                    pfVar17[2] = fVar37;
                    pfVar17[3] = fVar38;
                    if (4 < uVar11) {
                      fVar36 = (float)((uint)local_188[1] ^ _DAT_100700430);
                      lVar14 = 0x364;
                      do {
                        fVar24 = fVar38 * fVar36 + fVar24;
                        fVar39 = fVar36 * fVar24 + fVar39;
                        fVar40 = fVar36 * fVar39 + fVar40;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -8) = fVar24;
                        fVar38 = fVar36 * fVar40 + fVar42;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -6) = fVar39;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -4) = fVar40;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -2) = fVar38;
                        pfVar17 = (float *)(local_190 + uVar22 * 2 + lVar14 * 2);
                        fVar24 = *pfVar17;
                        fVar39 = pfVar17[1];
                        fVar40 = pfVar17[2];
                        fVar42 = pfVar17[3];
                        uVar18 = lVar14 - 0x35c;
                        lVar14 = lVar14 + 4;
                      } while (uVar18 < uVar11);
                    }
                    break;
                  case 1:
                    fVar37 = pfVar17[1] - local_188[1] * *pfVar17;
                    fVar38 = (pfVar17[2] - *pfVar17 * local_188[2]) - local_188[1] * fVar37;
                    fVar36 = (pfVar17[3] - local_188[2] * fVar37) - local_188[1] * fVar38;
                    fVar24 = pfVar17[4];
                    fVar39 = pfVar17[5];
                    fVar40 = pfVar17[6];
                    fVar42 = pfVar17[7];
                    pfVar17[1] = fVar37;
                    pfVar17[2] = fVar38;
                    pfVar17[3] = fVar36;
                    if (4 < uVar11) {
                      fVar37 = (float)((uint)local_188[1] ^ _DAT_100700430);
                      fVar26 = (float)((uint)local_188[2] ^ _DAT_100700430);
                      lVar14 = 0x364;
                      do {
                        fVar24 = fVar37 * fVar36 + fVar38 * fVar26 + fVar24;
                        fVar39 = fVar37 * fVar24 + fVar36 * fVar26 + fVar39;
                        fVar38 = fVar37 * fVar39 + fVar26 * fVar24 + fVar40;
                        fVar36 = fVar37 * fVar38 + fVar26 * fVar39 + fVar42;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -8) = fVar24;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -6) = fVar39;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -4) = fVar38;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -2) = fVar36;
                        pfVar17 = (float *)(local_190 + uVar22 * 2 + lVar14 * 2);
                        fVar24 = *pfVar17;
                        fVar39 = pfVar17[1];
                        fVar40 = pfVar17[2];
                        fVar42 = pfVar17[3];
                        uVar18 = lVar14 - 0x35c;
                        lVar14 = lVar14 + 4;
                      } while (uVar18 < uVar11);
                    }
                    break;
                  case 2:
                    fVar24 = *pfVar17;
                    fVar38 = pfVar17[1] - local_188[1] * fVar24;
                    fVar36 = (pfVar17[2] - local_188[2] * fVar24) - local_188[1] * fVar38;
                    fVar37 = ((pfVar17[3] - fVar24 * local_188[3]) - local_188[2] * fVar38) -
                             local_188[1] * fVar36;
                    fVar24 = pfVar17[4];
                    fVar39 = pfVar17[5];
                    fVar40 = pfVar17[6];
                    fVar42 = pfVar17[7];
                    pfVar17[1] = fVar38;
                    pfVar17[2] = fVar36;
                    pfVar17[3] = fVar37;
                    if (4 < uVar11) {
                      fVar26 = (float)((uint)local_188[1] ^ _DAT_100700430);
                      fVar27 = (float)((uint)local_188[2] ^ _DAT_100700430);
                      fVar25 = (float)((uint)local_188[3] ^ _DAT_100700430);
                      lVar14 = 0x364;
                      do {
                        fVar24 = fVar26 * fVar37 + fVar27 * fVar36 + fVar38 * fVar25 + fVar24;
                        fVar38 = fVar26 * fVar24 + fVar27 * fVar37 + fVar36 * fVar25 + fVar39;
                        fVar36 = fVar26 * fVar38 + fVar27 * fVar24 + fVar37 * fVar25 + fVar40;
                        fVar37 = fVar26 * fVar36 + fVar27 * fVar38 + fVar25 * fVar24 + fVar42;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -8) = fVar24;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -6) = fVar38;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -4) = fVar36;
                        *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -2) = fVar37;
                        pfVar17 = (float *)(local_190 + uVar22 * 2 + lVar14 * 2);
                        fVar24 = *pfVar17;
                        fVar39 = pfVar17[1];
                        fVar40 = pfVar17[2];
                        fVar42 = pfVar17[3];
                        uVar18 = lVar14 - 0x35c;
                        lVar14 = lVar14 + 4;
                      } while (uVar18 < uVar11);
                    }
                    break;
                  case 3:
                    fVar24 = *pfVar17;
                    fVar40 = pfVar17[1] - local_188[1] * fVar24;
                    fVar39 = (pfVar17[2] - local_188[2] * fVar24) - local_188[1] * fVar40;
                    fVar38 = ((pfVar17[3] - local_188[3] * fVar24) - local_188[2] * fVar40) -
                             local_188[1] * fVar39;
                    pfVar17[1] = fVar40;
                    pfVar17[2] = fVar39;
                    pfVar17[3] = fVar38;
                    fVar42 = (((pfVar17[4] - fVar24 * local_188[4]) - local_188[3] * fVar40) -
                             local_188[2] * fVar39) - local_188[1] * fVar38;
                    fVar40 = (((pfVar17[5] - fVar40 * local_188[4]) - local_188[3] * fVar39) -
                             local_188[2] * fVar38) - local_188[1] * fVar42;
                    fVar39 = (((pfVar17[6] - fVar39 * local_188[4]) - local_188[3] * fVar38) -
                             local_188[2] * fVar42) - local_188[1] * fVar40;
                    fVar24 = (((pfVar17[7] - fVar38 * local_188[4]) - local_188[3] * fVar42) -
                             local_188[2] * fVar40) - local_188[1] * fVar39;
                    if (uVar11 < 8) {
                      pfVar17[4] = fVar42;
                      pfVar17[5] = fVar40;
                      pfVar17[6] = fVar39;
                      pfVar17[7] = fVar24;
                    }
                    else {
                      fVar38 = pfVar17[8];
                      fVar36 = pfVar17[9];
                      fVar37 = pfVar17[10];
                      fVar26 = pfVar17[0xb];
                      pfVar17[4] = fVar42;
                      pfVar17[5] = fVar40;
                      pfVar17[6] = fVar39;
                      pfVar17[7] = fVar24;
                      if (uVar11 != 8) {
                        fVar27 = (float)((uint)local_188[1] ^ _DAT_100700430);
                        fVar25 = (float)((uint)local_188[2] ^ _DAT_100700430);
                        fVar28 = (float)((uint)local_188[3] ^ _DAT_100700430);
                        fVar29 = (float)((uint)local_188[4] ^ _DAT_100700430);
                        lVar14 = 0x368;
                        do {
                          fVar42 = fVar27 * fVar24 +
                                   fVar25 * fVar39 + fVar28 * fVar40 + fVar42 * fVar29 + fVar38;
                          fVar40 = fVar27 * fVar42 +
                                   fVar25 * fVar24 + fVar28 * fVar39 + fVar40 * fVar29 + fVar36;
                          fVar39 = fVar27 * fVar40 +
                                   fVar25 * fVar42 + fVar28 * fVar24 + fVar39 * fVar29 + fVar37;
                          fVar24 = fVar27 * fVar39 +
                                   fVar25 * fVar40 + fVar28 * fVar42 + fVar24 * fVar29 + fVar26;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -8) = fVar42;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -6) = fVar40;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -4) = fVar39;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -2) = fVar24;
                          pfVar17 = (float *)(local_190 + uVar22 * 2 + lVar14 * 2);
                          fVar38 = *pfVar17;
                          fVar36 = pfVar17[1];
                          fVar37 = pfVar17[2];
                          fVar26 = pfVar17[3];
                          uVar18 = lVar14 - 0x35c;
                          lVar14 = lVar14 + 4;
                        } while (uVar18 < uVar11);
                      }
                    }
                    break;
                  case 4:
                    fVar24 = *pfVar17;
                    fVar36 = pfVar17[1] - local_188[1] * fVar24;
                    fVar38 = (pfVar17[2] - local_188[2] * fVar24) - local_188[1] * fVar36;
                    fVar40 = ((pfVar17[3] - local_188[3] * fVar24) - local_188[2] * fVar36) -
                             local_188[1] * fVar38;
                    pfVar17[1] = fVar36;
                    pfVar17[2] = fVar38;
                    pfVar17[3] = fVar40;
                    fVar42 = (((pfVar17[4] - local_188[4] * fVar24) - local_188[3] * fVar36) -
                             local_188[2] * fVar38) - local_188[1] * fVar40;
                    fVar39 = ((((pfVar17[5] - fVar24 * local_174) - local_188[4] * fVar36) -
                              local_188[3] * fVar38) - local_188[2] * fVar40) -
                             local_188[1] * fVar42;
                    fVar24 = ((((pfVar17[6] - fVar36 * local_174) - local_188[4] * fVar38) -
                              local_188[3] * fVar40) - local_188[2] * fVar42) -
                             local_188[1] * fVar39;
                    fVar38 = ((((pfVar17[7] - fVar38 * local_174) - local_188[4] * fVar40) -
                              local_188[3] * fVar42) - local_188[2] * fVar39) -
                             local_188[1] * fVar24;
                    if (uVar11 < 8) {
                      pfVar17[4] = fVar42;
                      pfVar17[5] = fVar39;
                      pfVar17[6] = fVar24;
                      pfVar17[7] = fVar38;
                    }
                    else {
                      fVar36 = pfVar17[8];
                      fVar37 = pfVar17[9];
                      fVar26 = pfVar17[10];
                      fVar27 = pfVar17[0xb];
                      pfVar17[4] = fVar42;
                      pfVar17[5] = fVar39;
                      pfVar17[6] = fVar24;
                      pfVar17[7] = fVar38;
                      if (uVar11 != 8) {
                        fVar25 = (float)((uint)local_188[1] ^ _DAT_100700430);
                        fVar28 = (float)((uint)local_188[2] ^ _DAT_100700430);
                        fVar29 = (float)((uint)local_188[3] ^ _DAT_100700430);
                        fVar30 = (float)((uint)local_188[4] ^ _DAT_100700430);
                        fVar31 = (float)((uint)local_174 ^ _DAT_100700430);
                        lVar14 = 0x368;
                        do {
                          fVar33 = fVar25 * fVar38 +
                                   fVar28 * fVar24 +
                                   fVar29 * fVar39 + fVar30 * fVar42 + fVar40 * fVar31 + fVar36;
                          fVar40 = fVar25 * fVar33 +
                                   fVar28 * fVar38 +
                                   fVar29 * fVar24 + fVar30 * fVar39 + fVar42 * fVar31 + fVar37;
                          fVar39 = fVar25 * fVar40 +
                                   fVar28 * fVar33 +
                                   fVar29 * fVar38 + fVar30 * fVar24 + fVar39 * fVar31 + fVar26;
                          fVar32 = fVar25 * fVar39 +
                                   fVar28 * fVar40 +
                                   fVar29 * fVar33 + fVar30 * fVar38 + fVar24 * fVar31 + fVar27;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -8) = fVar33;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -6) = fVar40;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -4) = fVar39;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -2) = fVar32;
                          pfVar17 = (float *)(local_190 + uVar22 * 2 + lVar14 * 2);
                          fVar36 = *pfVar17;
                          fVar37 = pfVar17[1];
                          fVar26 = pfVar17[2];
                          fVar27 = pfVar17[3];
                          uVar18 = lVar14 - 0x35c;
                          lVar14 = lVar14 + 4;
                          fVar24 = fVar39;
                          fVar39 = fVar40;
                          fVar40 = fVar38;
                          fVar42 = fVar33;
                          fVar38 = fVar32;
                        } while (uVar18 < uVar11);
                      }
                    }
                    break;
                  case 5:
                    fVar24 = *pfVar17;
                    fVar40 = pfVar17[1] - local_188[1] * fVar24;
                    fVar42 = (pfVar17[2] - local_188[2] * fVar24) - local_188[1] * fVar40;
                    fVar38 = ((pfVar17[3] - local_188[3] * fVar24) - local_188[2] * fVar40) -
                             local_188[1] * fVar42;
                    pfVar17[1] = fVar40;
                    pfVar17[2] = fVar42;
                    pfVar17[3] = fVar38;
                    fVar36 = (((pfVar17[4] - local_188[4] * fVar24) - local_188[3] * fVar40) -
                             local_188[2] * fVar42) - local_188[1] * fVar38;
                    fVar39 = ((((pfVar17[5] - local_174 * fVar24) - local_188[4] * fVar40) -
                              local_188[3] * fVar42) - local_188[2] * fVar38) -
                             local_188[1] * fVar36;
                    fVar24 = (((((pfVar17[6] - fVar24 * local_170) - local_174 * fVar40) -
                               local_188[4] * fVar42) - local_188[3] * fVar38) -
                             local_188[2] * fVar36) - local_188[1] * fVar39;
                    fVar40 = (((((pfVar17[7] - fVar40 * local_170) - local_174 * fVar42) -
                               local_188[4] * fVar38) - local_188[3] * fVar36) -
                             local_188[2] * fVar39) - local_188[1] * fVar24;
                    if (uVar11 < 8) {
                      pfVar17[4] = fVar36;
                      pfVar17[5] = fVar39;
                      pfVar17[6] = fVar24;
                      pfVar17[7] = fVar40;
                    }
                    else {
                      fVar37 = pfVar17[8];
                      fVar26 = pfVar17[9];
                      fVar27 = pfVar17[10];
                      fVar25 = pfVar17[0xb];
                      pfVar17[4] = fVar36;
                      pfVar17[5] = fVar39;
                      pfVar17[6] = fVar24;
                      pfVar17[7] = fVar40;
                      if (uVar11 != 8) {
                        fVar28 = (float)((uint)local_188[1] ^ _DAT_100700430);
                        fVar29 = (float)((uint)local_188[2] ^ _DAT_100700430);
                        fVar30 = (float)((uint)local_188[3] ^ _DAT_100700430);
                        fVar31 = (float)((uint)local_188[4] ^ _DAT_100700430);
                        fVar32 = (float)((uint)local_174 ^ _DAT_100700430);
                        fVar33 = (float)((uint)local_170 ^ _DAT_100700430);
                        lVar14 = 0x368;
                        do {
                          fVar35 = fVar40;
                          fVar34 = fVar24;
                          fVar41 = fVar28 * fVar35 +
                                   fVar29 * fVar34 +
                                   fVar30 * fVar39 +
                                   fVar31 * fVar36 + fVar32 * fVar38 + fVar42 * fVar33 + fVar37;
                          fVar42 = fVar28 * fVar41 +
                                   fVar29 * fVar35 +
                                   fVar30 * fVar34 +
                                   fVar31 * fVar39 + fVar32 * fVar36 + fVar38 * fVar33 + fVar26;
                          fVar24 = fVar28 * fVar42 +
                                   fVar29 * fVar41 +
                                   fVar30 * fVar35 +
                                   fVar31 * fVar34 + fVar32 * fVar39 + fVar36 * fVar33 + fVar27;
                          fVar40 = fVar28 * fVar24 +
                                   fVar29 * fVar42 +
                                   fVar30 * fVar41 +
                                   fVar31 * fVar35 + fVar32 * fVar34 + fVar39 * fVar33 + fVar25;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -8) = fVar41;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -6) = fVar42;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -4) = fVar24;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -2) = fVar40;
                          pfVar17 = (float *)(local_190 + uVar22 * 2 + lVar14 * 2);
                          fVar37 = *pfVar17;
                          fVar26 = pfVar17[1];
                          fVar27 = pfVar17[2];
                          fVar25 = pfVar17[3];
                          uVar18 = lVar14 - 0x35c;
                          lVar14 = lVar14 + 4;
                          fVar39 = fVar42;
                          fVar42 = fVar34;
                          fVar38 = fVar35;
                          fVar36 = fVar41;
                        } while (uVar18 < uVar11);
                      }
                    }
                    break;
                  case 6:
                    fVar24 = *pfVar17;
                    fVar39 = pfVar17[1] - local_188[1] * fVar24;
                    fVar38 = (pfVar17[2] - local_188[2] * fVar24) - local_188[1] * fVar39;
                    fVar36 = ((pfVar17[3] - local_188[3] * fVar24) - local_188[2] * fVar39) -
                             local_188[1] * fVar38;
                    pfVar17[1] = fVar39;
                    pfVar17[2] = fVar38;
                    pfVar17[3] = fVar36;
                    fVar37 = (((pfVar17[4] - local_188[4] * fVar24) - local_188[3] * fVar39) -
                             local_188[2] * fVar38) - local_188[1] * fVar36;
                    fVar40 = ((((pfVar17[5] - local_174 * fVar24) - local_188[4] * fVar39) -
                              local_188[3] * fVar38) - local_188[2] * fVar36) -
                             local_188[1] * fVar37;
                    fVar42 = (((((pfVar17[6] - local_170 * fVar24) - local_174 * fVar39) -
                               local_188[4] * fVar38) - local_188[3] * fVar36) -
                             local_188[2] * fVar37) - local_188[1] * fVar40;
                    fVar24 = ((((((pfVar17[7] - fVar24 * local_16c) - local_170 * fVar39) -
                                local_174 * fVar38) - local_188[4] * fVar36) - local_188[3] * fVar37
                              ) - local_188[2] * fVar40) - local_188[1] * fVar42;
                    if (uVar11 < 8) {
                      pfVar17[4] = fVar37;
                      pfVar17[5] = fVar40;
                      pfVar17[6] = fVar42;
                      pfVar17[7] = fVar24;
                    }
                    else {
                      fVar26 = pfVar17[8];
                      fVar27 = pfVar17[9];
                      fVar25 = pfVar17[10];
                      fVar28 = pfVar17[0xb];
                      pfVar17[4] = fVar37;
                      pfVar17[5] = fVar40;
                      pfVar17[6] = fVar42;
                      pfVar17[7] = fVar24;
                      if (uVar11 != 8) {
                        fVar29 = (float)((uint)local_188[1] ^ _DAT_100700430);
                        fVar30 = (float)((uint)local_188[2] ^ _DAT_100700430);
                        fVar31 = (float)((uint)local_188[3] ^ _DAT_100700430);
                        fVar32 = (float)((uint)local_188[4] ^ _DAT_100700430);
                        fVar33 = (float)((uint)local_174 ^ _DAT_100700430);
                        fVar34 = (float)((uint)local_170 ^ _DAT_100700430);
                        fVar35 = (float)((uint)local_16c ^ _DAT_100700430);
                        lVar14 = 0x368;
                        do {
                          fVar43 = fVar24;
                          fVar41 = fVar42;
                          fVar44 = fVar29 * fVar43 +
                                   fVar30 * fVar41 +
                                   fVar31 * fVar40 +
                                   fVar32 * fVar37 +
                                   fVar33 * fVar36 + fVar34 * fVar38 + fVar39 * fVar35 + fVar26;
                          fVar38 = fVar29 * fVar44 +
                                   fVar30 * fVar43 +
                                   fVar31 * fVar41 +
                                   fVar32 * fVar40 +
                                   fVar33 * fVar37 + fVar34 * fVar36 + fVar38 * fVar35 + fVar27;
                          fVar42 = fVar29 * fVar38 +
                                   fVar30 * fVar44 +
                                   fVar31 * fVar43 +
                                   fVar32 * fVar41 +
                                   fVar33 * fVar40 + fVar34 * fVar37 + fVar36 * fVar35 + fVar25;
                          fVar24 = fVar29 * fVar42 +
                                   fVar30 * fVar38 +
                                   fVar31 * fVar44 +
                                   fVar32 * fVar43 +
                                   fVar33 * fVar41 + fVar34 * fVar40 + fVar37 * fVar35 + fVar28;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -8) = fVar44;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -6) = fVar38;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -4) = fVar42;
                          *(float *)(local_190 + uVar22 * 2 + lVar14 * 2 + -2) = fVar24;
                          pfVar17 = (float *)(local_190 + uVar22 * 2 + lVar14 * 2);
                          fVar26 = *pfVar17;
                          fVar27 = pfVar17[1];
                          fVar25 = pfVar17[2];
                          fVar28 = pfVar17[3];
                          uVar18 = lVar14 - 0x35c;
                          lVar14 = lVar14 + 4;
                          fVar39 = fVar40;
                          fVar40 = fVar38;
                          fVar38 = fVar41;
                          fVar36 = fVar43;
                          fVar37 = fVar44;
                        } while (uVar18 < uVar11);
                      }
                    }
                    break;
                  default:
                    uStack_98 = 0;
                    uStack_94 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    local_9c = 0;
                    local_b8 = 0;
                    uStack_b0 = 0;
                    local_c8 = 0;
                    uStack_c0 = 0;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_e8 = 0;
                    uStack_e0 = 0;
                    local_f8 = 0;
                    uStack_f0 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    uVar20 = 0;
                    do {
                      fVar24 = *pfVar17;
                      uVar22 = 0;
                      do {
                        lVar8 = uVar22 + 1;
                        lVar14 = uVar22 * 4;
                        uVar22 = uVar22 + 1;
                        fVar24 = fVar24 - local_188[lVar8] * *(float *)((long)&local_108 + lVar14);
                        uVar23 = (ulong)uVar19;
                        uVar7 = uVar19;
                      } while (uVar18 != uVar22);
                      while (uVar7 != 0) {
                        uVar23 = uVar23 - 1;
                        *(undefined4 *)((long)&local_108 + uVar23 * 4 + 4) =
                             *(undefined4 *)((long)&local_108 + (uVar23 & 0xffffffff) * 4);
                        uVar7 = (uint)uVar23;
                      }
                      local_108 = CONCAT44(local_108._4_4_,fVar24);
                      *pfVar17 = fVar24;
                      pfVar17 = pfVar17 + 1;
                      uVar20 = uVar20 + 1;
                    } while (uVar20 != uVar11);
                  }
                }
              }
            }
            else {
              uVar4 = *(ushort *)(lVar6 + (ulong)*(byte *)((long)puVar21 + 1) * 2);
              uVar5 = *(ushort *)(lVar6 + (ulong)(byte)puVar21[1] * 2);
              if (uVar4 < uVar5) {
                uVar11 = (uint)uVar5 - (uint)uVar4;
                if ((uVar11 & 3) == 0) {
                  uStack_98 = 0;
                  uStack_94 = 0;
                  uStack_a8 = 0;
                  uStack_a0 = 0;
                  local_9c = 0;
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_d8 = 0;
                  uStack_d0 = 0;
                  local_e8 = 0;
                  uStack_e0 = 0;
                  local_f8 = 0;
                  uStack_f0 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  if (0 < (int)uVar11) {
                    pfVar17 = (float *)(param_1 +
                                       lVar13 * 2 +
                                       (ulong)(uint)uVar4 * 2 + (ulong)uVar11 * 2 + 0x6b8);
                    uVar19 = 0;
                    do {
                      fVar24 = pfVar17[-1];
                      pfVar17 = pfVar17 + -1;
                      uVar22 = 0;
                      do {
                        lVar8 = uVar22 + 1;
                        lVar14 = uVar22 * 4;
                        uVar22 = uVar22 + 1;
                        fVar24 = fVar24 - local_188[lVar8] * *(float *)((long)&local_108 + lVar14);
                      } while (uVar18 != uVar22);
                      lVar14 = uVar18 + 1;
                      if (bVar2 != 1) {
                        do {
                          afStack_114[lVar14 + 1] = afStack_114[lVar14];
                          lVar14 = lVar14 + -1;
                        } while (2 < lVar14);
                      }
                      local_108 = CONCAT44(local_108._4_4_,fVar24);
                      *pfVar17 = fVar24;
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != uVar11);
                  }
                }
              }
            }
          }
          puVar21 = puVar21 + 0xc;
          uVar12 = uVar12 + 1;
        } while (uVar12 != (byte)uVar9);
      }
      uVar15 = uVar15 + 1;
      local_190 = local_190 + (ulong)uVar3 * 2;
    } while (uVar15 != bVar1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

