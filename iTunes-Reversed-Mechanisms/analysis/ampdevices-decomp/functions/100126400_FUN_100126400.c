// name: FUN_100126400
// address: 100126400

void FUN_100126400(int *param_1,int *param_2,uint param_3,ushort *param_4,uint param_5,char param_6,
                  byte param_7)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int *piVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  byte bVar30;
  int iVar31;
  int iVar32;
  int *piVar33;
  int iVar34;
  int *piVar35;
  int iVar36;
  int iVar37;
  int *piVar38;
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  short local_98;
  short local_78;
  short local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  short local_50;
  short local_48;
  short local_38;
  
  iVar27 = 1 << (param_7 - 1 & 0x1f);
  iVar18 = *param_1;
  *param_2 = iVar18;
  if (param_5 == 0) {
    if (param_1 != param_2 && 1 < (int)param_3) {
      _memcpy(param_2 + 1,param_1 + 1,(ulong)(param_3 - 1) << 2);
      return;
    }
  }
  else {
    bVar30 = 0x20 - param_6;
    if (param_5 == 0x1f) {
      if (1 < (int)param_3) {
        lVar25 = 1;
        if (param_3 != 2) {
          do {
            iVar18 = (iVar18 + param_1[lVar25] << (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
            param_2[lVar25] = iVar18;
            iVar18 = (iVar18 + param_1[lVar25 + 1] << (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
            param_2[lVar25 + 1] = iVar18;
            lVar17 = lVar25 - ((ulong)param_3 - 1 & 0xfffffffffffffffe);
            lVar25 = lVar25 + 2;
          } while (lVar17 != -1);
        }
        if (((ulong)param_3 - 1 & 1) != 0) {
          param_2[lVar25] = (iVar18 + param_1[lVar25] << (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
        }
      }
    }
    else {
      uVar14 = param_5 + 1;
      if (0 < (int)param_5) {
        lVar25 = 1;
        if (uVar14 != 2) {
          do {
            iVar18 = (iVar18 + param_1[lVar25] << (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
            param_2[lVar25] = iVar18;
            iVar18 = (iVar18 + param_1[lVar25 + 1] << (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
            param_2[lVar25 + 1] = iVar18;
            lVar17 = lVar25 - ((ulong)uVar14 - 1 & 0xfffffffffffffffe);
            lVar25 = lVar25 + 2;
          } while (lVar17 != -1);
        }
        if (((ulong)uVar14 - 1 & 1) != 0) {
          param_2[lVar25] = (iVar18 + param_1[lVar25] << (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
        }
      }
      if (param_5 == 4) {
        uVar2 = *param_4;
        uVar10 = (uint)uVar2;
        uVar3 = param_4[1];
        uVar11 = (uint)uVar3;
        uVar4 = param_4[2];
        uVar14 = (uint)uVar4;
        uVar22 = param_4[3];
        uVar24 = (uint)uVar22;
        if (5 < (int)param_3) {
          iVar18 = param_2[4];
          uVar26 = 5;
          do {
            iVar29 = param_2[uVar26 - 5];
            iVar15 = iVar29 - param_2[uVar26 - 2];
            iVar13 = iVar29 - iVar18;
            iVar23 = iVar29 - param_2[uVar26 - 3];
            iVar19 = iVar29 - param_2[uVar26 - 4];
            local_48 = (short)uVar10;
            local_50 = (short)uVar11;
            local_38 = (short)uVar14;
            iVar37 = param_1[uVar26];
            iVar18 = (iVar29 + iVar37 +
                      (iVar27 - ((short)uVar24 * iVar19 + local_38 * iVar23 +
                                local_50 * iVar15 + local_48 * iVar13) >> (param_7 & 0x1f)) <<
                     (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
            param_2[uVar26] = iVar18;
            if ((int)((uint)(0 < iVar37) | iVar37 >> 0x1f) < 1) {
              if (iVar37 >> 0x1f < 0) {
                uVar16 = iVar19 >> 0x1f | (uint)(0 < iVar19);
                uVar24 = uVar24 + uVar16;
                iVar37 = iVar37 - ((int)-(uVar16 * iVar19) >> (param_7 & 0x1f));
                if (iVar37 < 0) {
                  uVar16 = iVar23 >> 0x1f | (uint)(0 < iVar23);
                  uVar14 = uVar14 + uVar16;
                  iVar37 = iVar37 + ((int)-(uVar16 * iVar23) >> (param_7 & 0x1f)) * -2;
                  if ((iVar37 < 0) &&
                     (uVar16 = iVar15 >> 0x1f | (uint)(0 < iVar15), uVar11 = uVar11 + uVar16,
                     iVar37 + ((int)-(uVar16 * iVar15) >> (param_7 & 0x1f)) * -3 < 0)) {
                    uVar10 = uVar10 + (iVar13 >> 0x1f | (uint)(0 < iVar13));
                  }
                }
              }
            }
            else {
              uVar16 = iVar19 >> 0x1f | (uint)(0 < iVar19);
              uVar24 = uVar24 - uVar16;
              iVar29 = (int)(uVar16 * iVar19) >> (param_7 & 0x1f);
              iVar19 = iVar37 - iVar29;
              if (iVar19 != 0 && iVar29 <= iVar37) {
                uVar16 = iVar23 >> 0x1f | (uint)(0 < iVar23);
                uVar14 = uVar14 - uVar16;
                iVar29 = (int)(uVar16 * iVar23) >> (param_7 & 0x1f);
                iVar37 = iVar19 + iVar29 * -2;
                if ((iVar37 != 0 && iVar29 * 2 <= iVar19) &&
                   (uVar16 = iVar15 >> 0x1f | (uint)(0 < iVar15), uVar11 = uVar11 - uVar16,
                   0 < iVar37 + ((int)(uVar16 * iVar15) >> (param_7 & 0x1f)) * -3)) {
                  uVar10 = uVar10 - (iVar13 >> 0x1f | (uint)(0 < iVar13));
                }
              }
            }
            uVar4 = (ushort)uVar14;
            uVar3 = (ushort)uVar11;
            uVar2 = (ushort)uVar10;
            uVar22 = (ushort)uVar24;
            uVar26 = uVar26 + 1;
          } while (param_3 != uVar26);
        }
        *param_4 = uVar2;
        param_4[1] = uVar3;
        param_4[2] = uVar4;
        param_4[3] = uVar22;
      }
      else if (param_5 == 8) {
        local_5c = (uint)*param_4;
        local_60 = (uint)param_4[1];
        local_64 = (uint)param_4[2];
        uVar2 = param_4[3];
        uVar24 = (uint)uVar2;
        uVar3 = param_4[4];
        uVar10 = (uint)uVar3;
        uVar4 = param_4[5];
        uVar11 = (uint)uVar4;
        uVar22 = param_4[6];
        uVar14 = (uint)uVar22;
        uVar5 = param_4[7];
        uVar16 = (uint)uVar5;
        uVar6 = *param_4;
        uVar7 = param_4[1];
        uVar8 = param_4[2];
        if (9 < (int)param_3) {
          iVar18 = param_2[8];
          uVar26 = 9;
          do {
            while( true ) {
              iVar29 = param_2[uVar26 - 9];
              iVar36 = iVar29 - param_2[uVar26 - 2];
              iVar31 = iVar29 - param_2[uVar26 - 3];
              iVar23 = iVar29 - param_2[uVar26 - 4];
              iVar34 = iVar29 - param_2[uVar26 - 5];
              iVar13 = iVar29 - param_2[uVar26 - 6];
              iVar15 = iVar29 - iVar18;
              iVar19 = iVar29 - param_2[uVar26 - 7];
              iVar32 = iVar29 - param_2[uVar26 - 8];
              local_98 = (short)uVar24;
              local_70 = (short)uVar10;
              local_78 = (short)uVar11;
              local_48 = (short)uVar14;
              iVar37 = param_1[uVar26];
              iVar18 = (iVar29 + iVar37 +
                        (iVar27 - ((short)uVar16 * iVar32 +
                                  local_48 * iVar19 + local_78 * iVar13 + local_70 * iVar34 +
                                  local_98 * iVar23 + (short)(ushort)local_64 * iVar31 +
                                  (short)(ushort)local_60 * iVar36 +
                                  (short)(ushort)local_5c * iVar15) >> (param_7 & 0x1f)) <<
                       (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
              param_2[uVar26] = iVar18;
              if (0 < (int)((uint)(0 < iVar37) | iVar37 >> 0x1f)) break;
              if (iVar37 >> 0x1f < 0) {
                uVar28 = iVar32 >> 0x1f | (uint)(0 < iVar32);
                uVar16 = uVar16 + uVar28;
                iVar37 = iVar37 - ((int)-(uVar28 * iVar32) >> (param_7 & 0x1f));
                if (iVar37 < 0) {
                  uVar28 = iVar19 >> 0x1f | (uint)(0 < iVar19);
                  uVar14 = uVar14 + uVar28;
                  iVar37 = iVar37 + ((int)-(uVar28 * iVar19) >> (param_7 & 0x1f)) * -2;
                  if (iVar37 < 0) {
                    uVar28 = iVar13 >> 0x1f | (uint)(0 < iVar13);
                    uVar11 = uVar11 + uVar28;
                    iVar37 = iVar37 + ((int)-(uVar28 * iVar13) >> (param_7 & 0x1f)) * -3;
                    if (iVar37 < 0) {
                      uVar28 = iVar34 >> 0x1f | (uint)(0 < iVar34);
                      uVar10 = uVar10 + uVar28;
                      iVar37 = iVar37 + ((int)-(uVar28 * iVar34) >> (param_7 & 0x1f)) * -4;
                      if (iVar37 < 0) {
                        uVar28 = iVar23 >> 0x1f | (uint)(0 < iVar23);
                        uVar24 = uVar24 + uVar28;
                        iVar37 = iVar37 + ((int)-(uVar28 * iVar23) >> (param_7 & 0x1f)) * -5;
                        if (iVar37 < 0) {
                          uVar28 = iVar31 >> 0x1f | (uint)(0 < iVar31);
                          local_64 = local_64 + uVar28;
                          iVar37 = iVar37 + ((int)-(uVar28 * iVar31) >> (param_7 & 0x1f)) * -6;
                          if ((iVar37 < 0) &&
                             (uVar28 = iVar36 >> 0x1f | (uint)(0 < iVar36),
                             local_60 = local_60 + uVar28,
                             iVar37 + ((int)-(uVar28 * iVar36) >> (param_7 & 0x1f)) * -7 < 0)) {
                            local_5c = local_5c + (iVar15 >> 0x1f | (uint)(0 < iVar15));
                          }
                          goto LAB_100126895;
                        }
                      }
                    }
                  }
                }
              }
LAB_100126930:
              uVar5 = (ushort)uVar16;
              uVar22 = (ushort)uVar14;
              uVar4 = (ushort)uVar11;
              uVar3 = (ushort)uVar10;
              uVar2 = (ushort)uVar24;
              uVar26 = uVar26 + 1;
              uVar6 = (ushort)local_5c;
              uVar7 = (ushort)local_60;
              uVar8 = (ushort)local_64;
              if (param_3 == uVar26) goto LAB_100126a3e;
            }
            uVar28 = iVar32 >> 0x1f | (uint)(0 < iVar32);
            uVar16 = uVar16 - uVar28;
            iVar29 = (int)(uVar28 * iVar32) >> (param_7 & 0x1f);
            iVar32 = iVar37 - iVar29;
            if (iVar32 == 0 || iVar37 < iVar29) goto LAB_100126930;
            uVar28 = iVar19 >> 0x1f | (uint)(0 < iVar19);
            uVar14 = uVar14 - uVar28;
            iVar29 = (int)(uVar28 * iVar19) >> (param_7 & 0x1f);
            iVar37 = iVar32 + iVar29 * -2;
            if (iVar37 == 0 || iVar32 < iVar29 * 2) goto LAB_100126930;
            uVar28 = iVar13 >> 0x1f | (uint)(0 < iVar13);
            uVar11 = uVar11 - uVar28;
            iVar37 = iVar37 + ((int)(uVar28 * iVar13) >> (param_7 & 0x1f)) * -3;
            if (iVar37 < 1) goto LAB_100126930;
            uVar28 = iVar34 >> 0x1f | (uint)(0 < iVar34);
            uVar10 = uVar10 - uVar28;
            iVar29 = (int)(uVar28 * iVar34) >> (param_7 & 0x1f);
            iVar13 = iVar37 + iVar29 * -4;
            if (iVar13 == 0 || iVar37 < iVar29 * 4) goto LAB_100126930;
            uVar28 = iVar23 >> 0x1f | (uint)(0 < iVar23);
            uVar24 = uVar24 - uVar28;
            iVar13 = iVar13 + ((int)(uVar28 * iVar23) >> (param_7 & 0x1f)) * -5;
            if (iVar13 < 1) goto LAB_100126930;
            uVar28 = iVar31 >> 0x1f | (uint)(0 < iVar31);
            local_64 = local_64 - uVar28;
            iVar13 = iVar13 + ((int)(uVar28 * iVar31) >> (param_7 & 0x1f)) * -6;
            if ((0 < iVar13) &&
               (uVar28 = iVar36 >> 0x1f | (uint)(0 < iVar36), local_60 = local_60 - uVar28,
               0 < iVar13 + ((int)(uVar28 * iVar36) >> (param_7 & 0x1f)) * -7)) {
              local_5c = local_5c - (iVar15 >> 0x1f | (uint)(0 < iVar15));
            }
LAB_100126895:
            uVar5 = (ushort)uVar16;
            uVar22 = (ushort)uVar14;
            uVar4 = (ushort)uVar11;
            uVar3 = (ushort)uVar10;
            uVar2 = (ushort)uVar24;
            uVar26 = uVar26 + 1;
            uVar6 = (ushort)local_5c;
            uVar7 = (ushort)local_60;
            uVar8 = (ushort)local_64;
          } while (param_3 != uVar26);
        }
LAB_100126a3e:
        local_64._0_2_ = uVar8;
        local_60._0_2_ = uVar7;
        local_5c._0_2_ = uVar6;
        *param_4 = (ushort)local_5c;
        param_4[1] = (ushort)local_60;
        param_4[2] = (ushort)local_64;
        param_4[3] = uVar2;
        param_4[4] = uVar3;
        param_4[5] = uVar4;
        param_4[6] = uVar22;
        param_4[7] = uVar5;
      }
      else if ((int)uVar14 < (int)param_3) {
        lVar20 = (long)(int)param_5;
        lVar17 = (long)(int)uVar14;
        piVar33 = param_2 + lVar17 + -4;
        piVar38 = param_2 + lVar17 + -1;
        piVar21 = param_2 + (lVar17 - lVar20);
        lVar25 = lVar17;
        do {
          iVar18 = param_2[lVar25 - lVar17];
          iVar29 = 0;
          if (0 < (int)param_5) {
            if (param_5 < 8) {
              iVar29 = 0;
              uVar26 = 0;
            }
            else {
              iVar29 = 0;
              iVar37 = 0;
              iVar13 = 0;
              iVar15 = 0;
              lVar12 = 0;
              iVar19 = 0;
              iVar23 = 0;
              iVar31 = 0;
              iVar32 = 0;
              puVar9 = param_4 + 4;
              do {
                in_XMM3 = pmovsxwd(in_XMM3,*(undefined8 *)(puVar9 + -4));
                in_XMM4 = pmovsxwd(in_XMM4,*(undefined8 *)puVar9);
                piVar1 = piVar33 + lVar12 + -4;
                piVar35 = piVar33 + lVar12;
                auVar39._0_4_ = piVar35[3] - iVar18;
                auVar39._4_4_ = piVar35[2] - iVar18;
                auVar39._8_4_ = piVar35[1] - iVar18;
                auVar39._12_4_ = *piVar35 - iVar18;
                auVar40 = pmulld(auVar39,in_XMM3);
                iVar29 = iVar29 + auVar40._0_4_;
                iVar37 = iVar37 + auVar40._4_4_;
                iVar13 = iVar13 + auVar40._8_4_;
                iVar15 = iVar15 + auVar40._12_4_;
                auVar40._0_4_ = piVar1[3] - iVar18;
                auVar40._4_4_ = piVar1[2] - iVar18;
                auVar40._8_4_ = piVar1[1] - iVar18;
                auVar40._12_4_ = *piVar1 - iVar18;
                auVar40 = pmulld(auVar40,in_XMM4);
                iVar19 = iVar19 + auVar40._0_4_;
                iVar23 = iVar23 + auVar40._4_4_;
                iVar31 = iVar31 + auVar40._8_4_;
                iVar32 = iVar32 + auVar40._12_4_;
                puVar9 = puVar9 + 8;
                lVar12 = lVar12 + -8;
              } while (-lVar12 != (ulong)(param_5 & 0x7ffffff8));
              iVar29 = iVar32 + iVar15 + iVar23 + iVar37 + iVar31 + iVar13 + iVar19 + iVar29;
              uVar26 = (ulong)(param_5 & 0x7ffffff8);
              if ((param_5 & 0x7ffffff8) == param_5) goto LAB_100126e7d;
            }
            puVar9 = param_4 + uVar26;
            lVar12 = -uVar26;
            do {
              iVar29 = iVar29 + (piVar38[lVar12] - iVar18) * (int)(short)*puVar9;
              lVar12 = lVar12 + -1;
              puVar9 = puVar9 + 1;
            } while (-lVar12 != (ulong)param_5);
          }
LAB_100126e7d:
          iVar37 = param_1[lVar25];
          param_2[lVar25] =
               ((iVar29 + iVar27 >> (param_7 & 0x1f)) + iVar37 + iVar18 << (bVar30 & 0x1f)) >>
               (bVar30 & 0x1f);
          if ((int)((uint)(0 < iVar37) | iVar37 >> 0x1f) < 1) {
            if (iVar37 >> 0x1f < 0) {
              iVar29 = -1;
              lVar12 = lVar20;
              piVar35 = piVar21;
              do {
                if (lVar12 < 1) break;
                iVar13 = iVar18 - *piVar35;
                uVar14 = iVar13 >> 0x1f | (uint)(0 < iVar13);
                param_4[lVar12 + -1] = param_4[lVar12 + -1] + (short)uVar14;
                lVar12 = lVar12 + -1;
                iVar13 = ((int)-(uVar14 * iVar13) >> (param_7 & 0x1f)) * iVar29;
                piVar35 = piVar35 + 1;
                iVar29 = iVar29 + -1;
                iVar37 = iVar37 + iVar13;
              } while (iVar37 < 0);
            }
          }
          else {
            iVar29 = -1;
            lVar12 = lVar20;
            piVar35 = piVar21;
            do {
              if (lVar12 < 1) break;
              iVar13 = iVar18 - *piVar35;
              uVar14 = iVar13 >> 0x1f | (uint)(0 < iVar13);
              param_4[lVar12 + -1] = param_4[lVar12 + -1] - (short)uVar14;
              lVar12 = lVar12 + -1;
              iVar37 = iVar37 + ((int)(uVar14 * iVar13) >> (param_7 & 0x1f)) * iVar29;
              piVar35 = piVar35 + 1;
              iVar29 = iVar29 + -1;
            } while (0 < iVar37);
          }
          lVar25 = lVar25 + 1;
          piVar33 = piVar33 + 1;
          piVar38 = piVar38 + 1;
          piVar21 = piVar21 + 1;
        } while ((uint)lVar25 != param_3);
      }
    }
  }
  return;
}

