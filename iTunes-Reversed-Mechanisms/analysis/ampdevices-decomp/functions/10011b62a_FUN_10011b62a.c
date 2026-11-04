// name: FUN_10011b62a
// address: 10011b62a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10011b62a(long param_1,long *param_2,float *param_3,long param_4,long param_5,long param_6)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar27;
  uint uVar28;
  float *pfVar29;
  undefined4 *puVar30;
  ulong uVar31;
  float *pfVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float *local_3d8;
  float *local_3a0;
  float local_338 [48];
  float local_278 [48];
  float local_1b8 [48];
  float afStack_f8 [48];
  long local_38;
  ulong uVar26;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar2 = *(byte *)((long)param_3 + 0xbbd);
  if ((ulong)bVar2 != 0) {
    lVar9 = *(long *)(param_6 + 0x18);
    uVar15 = (ulong)*(byte *)(lVar9 + 8);
    bVar3 = *(byte *)(lVar9 + 10);
    bVar4 = *(byte *)(lVar9 + 0xb);
    uVar25 = (ulong)((uint)bVar4 - (uint)bVar3);
    fVar1 = *(float *)(&DAT_100705e30 + (ulong)*(byte *)(param_6 + 0x10) * 4);
    pfVar29 = param_3 + 0xf0;
    local_3a0 = param_3 + 500;
    local_3d8 = param_3 + 0x1e0;
    uVar31 = 0;
    pfVar32 = param_3;
    do {
      uVar17 = (uint)*(byte *)((long)param_3 + uVar31 + 0xbbe) * (uint)*(byte *)(param_1 + 0x41);
      uVar19 = (ulong)uVar17;
      uVar24 = (uint)*(byte *)((long)param_3 + uVar31 + 0xbbf) * (uint)*(byte *)(param_1 + 0x41);
      uVar26 = (ulong)uVar24;
      pbVar10 = *(byte **)(lVar9 + 0x20 + (ulong)(uint)param_3[uVar31 + 0x2f1] * 8);
      if (*(char *)(param_6 + 0x11) == '\0') {
        FUN_10011cdce(param_1,param_4,param_5,
                      *(undefined1 *)(lVar9 + (ulong)(uint)param_3[uVar31 + 0x2f1]),pbVar10,uVar19,
                      uVar26,local_338);
      }
      else {
        FUN_10011cca4(param_1,param_4,param_5,bVar3,(uint)bVar4,uVar19,uVar26,local_338);
      }
      bVar5 = *(byte *)((long)param_3 + uVar31 + 0xe97);
      uVar14 = uVar17 + bVar5;
      if (0x29 < uVar14) {
        uVar16 = 0xfffffffe;
        goto LAB_10011bf6d;
      }
      bVar6 = *(byte *)((long)param_3 + uVar31 + 0xe8d);
      local_3d8 = local_3d8 + bVar6;
      local_3a0 = local_3a0 + bVar6;
      cVar7 = *(char *)((long)param_3 + uVar31 + 0xe92);
      if (cVar7 == '\0') {
        if (uVar15 != 0) {
          uVar23 = (uint)*pbVar10;
          uVar20 = 0;
          uVar22 = 0;
          uVar27 = 0;
          do {
            bVar6 = *(byte *)(lVar9 + 0x7b + uVar20);
            if (uVar23 < bVar6) {
              fVar33 = local_3a0[uVar20];
              uVar28 = uVar23;
              do {
                uVar27 = (ulong)((int)uVar27 + 1);
                bVar8 = pbVar10[uVar27];
                uVar23 = (uint)bVar8;
                iVar18 = uVar23 - uVar28;
                if (uVar28 <= uVar23 && iVar18 != 0) {
                  fVar34 = *pfVar29;
                  fVar35 = local_3d8[uVar20];
                  do {
                    afStack_f8[uVar22] = *pfVar32;
                    local_1b8[uVar22] = fVar34 * fVar33;
                    local_278[uVar22] =
                         (local_338[uVar22] + DAT_100700b5c) * (fVar35 + DAT_100700b50);
                    uVar22 = (ulong)((int)uVar22 + 1);
                    iVar18 = iVar18 + -1;
                  } while (iVar18 != 0);
                }
                pfVar32 = pfVar32 + 1;
                pfVar29 = pfVar29 + 1;
                uVar28 = uVar23;
              } while (bVar8 < bVar6);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar15);
        }
        bVar6 = *(byte *)(lVar9 + 0x19);
        if ((ulong)bVar6 != 0) {
          uVar22 = 0;
          uVar20 = (ulong)*(byte *)(lVar9 + 0xc);
          do {
            bVar8 = *(byte *)(lVar9 + 0xd + uVar22);
            uVar21 = (ulong)bVar8;
            uVar27 = uVar20;
            fVar33 = DAT_100700b50;
            fVar34 = DAT_100700b50;
            if ((uint)uVar20 < (uint)bVar8) {
              do {
                fVar33 = fVar33 + afStack_f8[uVar27];
                fVar34 = fVar34 + local_338[uVar27];
                uVar27 = uVar27 + 1;
              } while (uVar21 != uVar27);
              fVar34 = (fVar33 / fVar34) * fVar1;
              if (DAT_100705ebc <= fVar34) {
                fVar34 = DAT_100705ebc;
              }
              fVar35 = 0.0;
              uVar27 = uVar20;
              do {
                fVar37 = fVar34 * local_278[uVar27];
                fVar36 = afStack_f8[uVar27];
                if (fVar36 <= fVar37) {
                  fVar36 = fVar36 / local_278[uVar27];
                  fVar37 = local_1b8[uVar27];
                }
                else {
                  fVar37 = SQRT(fVar37 / fVar36) * local_1b8[uVar27];
                  local_1b8[uVar27] = fVar37;
                  fVar36 = fVar34;
                }
                local_278[uVar27] = fVar36;
                fVar35 = fVar37 * fVar37 + fVar35 + fVar36 * local_338[uVar27];
                uVar27 = uVar27 + 1;
              } while (uVar21 != uVar27);
              fVar33 = fVar33 / (fVar35 + DAT_100705ec0);
              if (_DAT_100705ec4 <= fVar33) {
                fVar33 = _DAT_100705ec4;
              }
              do {
                local_278[uVar20] = SQRT(local_278[uVar20]) * SQRT(fVar33);
                local_1b8[uVar20] = local_1b8[uVar20] * SQRT(fVar33);
                uVar20 = uVar20 + 1;
              } while (uVar21 != uVar20);
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar21;
          } while (uVar22 != bVar6);
        }
      }
      else {
        if (uVar15 != 0) {
          uVar23 = (uint)*pbVar10;
          uVar20 = 0;
          uVar22 = 0;
          uVar27 = 0;
          do {
            bVar6 = *(byte *)(lVar9 + 0x7b + uVar20);
            if (uVar23 < bVar6) {
              fVar33 = local_3a0[uVar20];
              uVar28 = uVar23;
              do {
                uVar22 = (ulong)((int)uVar22 + 1);
                bVar8 = pbVar10[uVar22];
                uVar23 = (uint)bVar8;
                iVar18 = bVar8 - uVar28;
                if (uVar28 <= bVar8 && iVar18 != 0) {
                  fVar34 = *pfVar29;
                  iVar13 = (int)uVar27;
                  do {
                    afStack_f8[uVar27] = *pfVar32;
                    local_1b8[uVar27] = fVar34 * fVar33;
                    local_278[uVar27] = local_338[uVar27] + DAT_100700b5c;
                    uVar27 = (ulong)((int)uVar27 + 1);
                    iVar18 = iVar18 + -1;
                  } while (iVar18 != 0);
                  uVar27 = (ulong)((iVar13 + (uint)bVar8) - uVar28);
                }
                pfVar32 = pfVar32 + 1;
                pfVar29 = pfVar29 + 1;
                uVar28 = (uint)bVar8;
              } while (bVar8 < bVar6);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar15);
        }
        bVar6 = *(byte *)(lVar9 + 0x19);
        if ((ulong)bVar6 != 0) {
          uVar22 = 0;
          uVar20 = (ulong)*(byte *)(lVar9 + 0xc);
          do {
            bVar8 = *(byte *)(lVar9 + 0xd + uVar22);
            uVar21 = (ulong)bVar8;
            uVar27 = uVar20;
            fVar33 = DAT_100700b50;
            fVar34 = DAT_100700b50;
            if ((uint)uVar20 < (uint)bVar8) {
              do {
                fVar33 = fVar33 + afStack_f8[uVar27];
                fVar34 = fVar34 + local_338[uVar27];
                uVar27 = uVar27 + 1;
              } while (uVar21 != uVar27);
              fVar34 = (fVar33 / fVar34) * fVar1;
              if (DAT_100705ebc <= fVar34) {
                fVar34 = DAT_100705ebc;
              }
              fVar35 = 0.0;
              uVar27 = uVar20;
              do {
                fVar37 = fVar34 * local_278[uVar27];
                fVar36 = afStack_f8[uVar27];
                if (fVar36 <= fVar37) {
                  fVar36 = fVar36 / local_278[uVar27];
                }
                else {
                  local_1b8[uVar27] = SQRT(fVar37 / fVar36) * local_1b8[uVar27];
                  fVar36 = fVar34;
                }
                local_278[uVar27] = fVar36;
                fVar35 = fVar35 + fVar36 * local_338[uVar27];
                uVar27 = uVar27 + 1;
              } while (uVar21 != uVar27);
              fVar33 = fVar33 / (fVar35 + DAT_100705ec0);
              if (_DAT_100705ec4 <= fVar33) {
                fVar33 = _DAT_100705ec4;
              }
              do {
                local_278[uVar20] = SQRT(local_278[uVar20]) * SQRT(fVar33);
                local_1b8[uVar20] = local_1b8[uVar20] * SQRT(fVar33);
                uVar20 = uVar20 + 1;
              } while (uVar21 != uVar20);
            }
            uVar22 = uVar22 + 1;
            uVar20 = uVar21;
          } while (uVar22 != bVar6);
        }
      }
      lVar11 = *param_2;
      lVar12 = param_2[1];
      if (bVar5 == 0) {
        if (uVar17 < uVar24) {
          do {
            FUN_10011ced6(local_278,*(long *)(param_4 + uVar19 * 8) + (ulong)((uint)bVar3 * 4),
                          (ulong)((uint)bVar3 * 4) + *(long *)(param_5 + uVar19 * 8),local_278,
                          local_1b8,param_2 + 3,uVar25,cVar7,param_2 + 2);
            uVar19 = uVar19 + 1;
          } while (uVar26 != uVar19);
        }
      }
      else {
        if (*(int *)((long)param_2 + 0x14) != 0) {
          if (bVar4 != bVar3) {
            uVar20 = 0;
            do {
              *(float *)(lVar12 + uVar20 * 4) = local_1b8[uVar20];
              *(float *)(lVar11 + uVar20 * 4) = local_278[uVar20];
              uVar20 = uVar20 + 1;
            } while (uVar25 != uVar20);
          }
          *(undefined4 *)((long)param_2 + 0x14) = 0;
        }
        puVar30 = &DAT_100705e40;
        do {
          uVar19 = uVar19 + 1;
          FUN_10011cf6e(*puVar30);
          puVar30 = puVar30 + 1;
        } while (uVar19 < uVar14);
        if ((uint)uVar19 < uVar24) {
          do {
            FUN_10011ced6();
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar26);
        }
      }
      if (bVar4 != bVar3) {
        uVar19 = 0;
        do {
          *(float *)(lVar11 + uVar19 * 4) = local_278[uVar19];
          *(float *)(lVar12 + uVar19 * 4) = local_1b8[uVar19];
          uVar19 = uVar19 + 1;
        } while (uVar25 != uVar19);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != bVar2);
  }
  uVar16 = 0;
LAB_10011bf6d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}

