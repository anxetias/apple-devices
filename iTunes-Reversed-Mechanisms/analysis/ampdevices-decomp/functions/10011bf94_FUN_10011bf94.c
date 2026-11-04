// name: FUN_10011bf94
// address: 10011bf94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10011bf94(long param_1,long *param_2,float *param_3,long param_4,long param_5,long param_6)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  float *pfVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar27;
  uint uVar28;
  ulong uVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float *local_440;
  float *local_438;
  float local_3f8 [48];
  float local_338 [48];
  float local_278 [48];
  float local_1b8 [48];
  float afStack_f8 [48];
  long local_38;
  ulong uVar26;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar2 = *(byte *)((long)param_3 + 0xbbd);
  if ((ulong)bVar2 != 0) {
    lVar10 = *(long *)(param_6 + 0x18);
    uVar12 = (ulong)*(byte *)(lVar10 + 8);
    bVar3 = *(byte *)(lVar10 + 10);
    bVar4 = *(byte *)(lVar10 + 0xb);
    uVar28 = (uint)bVar4 - (uint)bVar3;
    fVar1 = *(float *)(&DAT_100705e30 + (ulong)*(byte *)(param_6 + 0x10) * 4);
    local_440 = param_3 + 0x1ea;
    local_438 = param_3 + 0x1e0;
    uVar29 = (ulong)uVar28;
    uVar32 = 0;
    pfVar23 = param_3;
    do {
      uVar15 = (uint)*(byte *)((long)param_3 + uVar32 + 0xbbe) * (uint)*(byte *)(param_1 + 0x41);
      uVar31 = (ulong)uVar15;
      uVar24 = (uint)*(byte *)((long)param_3 + uVar32 + 0xbbf) * (uint)*(byte *)(param_1 + 0x41);
      uVar26 = (ulong)uVar24;
      pbVar11 = *(byte **)(lVar10 + 0x20 + (ulong)(uint)param_3[uVar32 + 0x2f1] * 8);
      if (*(char *)(param_6 + 0x11) == '\0') {
        FUN_10011cdce(param_1,param_4,param_5,
                      *(undefined1 *)(lVar10 + (ulong)(uint)param_3[uVar32 + 0x2f1]),pbVar11,uVar31,
                      uVar26,local_3f8);
      }
      else {
        FUN_10011cca4(param_1,param_4,param_5,bVar3,(uint)bVar4,uVar31,uVar26,local_3f8);
      }
      bVar5 = *(byte *)((long)param_3 + uVar32 + 0xe97);
      uVar15 = uVar15 + bVar5;
      if (0x29 < uVar15) {
        uVar14 = 0xfffffffe;
        goto LAB_10011c908;
      }
      bVar6 = *(byte *)((long)param_3 + uVar32 + 0xe8d);
      local_438 = local_438 + bVar6;
      local_440 = local_440 + bVar6;
      cVar7 = *(char *)((long)param_3 + uVar32 + 0xe92);
      lVar16 = uVar32 * 0x30 + 0xd94;
      uVar17 = (uint)*pbVar11;
      if (cVar7 == '\0') {
        if (uVar12 != 0) {
          uVar19 = 0;
          uVar25 = 0;
          uVar20 = 0;
          do {
            bVar6 = *(byte *)(lVar10 + 0x7b + uVar19);
            if (uVar17 < bVar6) {
              fVar33 = local_438[uVar19];
              fVar35 = local_440[uVar19];
              uVar13 = uVar20;
              uVar18 = uVar17;
              do {
                uVar20 = (ulong)((int)uVar13 + 1);
                bVar8 = pbVar11[uVar20];
                uVar17 = (uint)bVar8;
                fVar34 = *pfVar23 * fVar33 * fVar35;
                if (*(char *)((long)param_3 + uVar13 + lVar16) == '\0') {
                  iVar30 = bVar8 - uVar18;
                  if (uVar18 <= bVar8 && iVar30 != 0) {
                    do {
                      fVar36 = *pfVar23;
                      afStack_f8[uVar25] = fVar36;
                      local_338[uVar25] = 0.0;
                      local_1b8[uVar25] = fVar34;
                      local_278[uVar25] =
                           fVar36 / ((local_3f8[uVar25] + DAT_100700b5c) * (fVar33 + DAT_100700b50))
                      ;
                      uVar25 = uVar25 + 1;
                      iVar30 = iVar30 + -1;
                    } while (iVar30 != 0);
                  }
                }
                else {
                  iVar30 = bVar8 - uVar18;
                  if (uVar18 <= bVar8 && iVar30 != 0) {
                    do {
                      fVar36 = *pfVar23;
                      afStack_f8[uVar25] = fVar36;
                      local_338[uVar25] = 0.0;
                      local_1b8[uVar25] = fVar34;
                      local_278[uVar25] = fVar34 / (local_3f8[uVar25] + DAT_100700b5c);
                      if (param_3[(ulong)uVar25 + 0x335] != 0.0) {
                        local_338[uVar25] = fVar36 * fVar35;
                      }
                      uVar25 = uVar25 + 1;
                      iVar30 = iVar30 + -1;
                    } while (iVar30 != 0);
                  }
                }
                pfVar23 = pfVar23 + 1;
                uVar13 = uVar20;
                uVar18 = uVar17;
              } while (bVar8 < bVar6);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar12);
        }
      }
      else if (uVar12 != 0) {
        uVar19 = 0;
        uVar20 = 0;
        uVar13 = 0;
        do {
          bVar6 = *(byte *)(lVar10 + 0x7b + uVar19);
          if (uVar17 < bVar6) {
            fVar33 = local_440[uVar19];
            fVar35 = local_438[uVar19];
            uVar22 = uVar13;
            uVar25 = uVar17;
            do {
              uVar13 = (ulong)((int)uVar22 + 1);
              bVar8 = pbVar11[uVar13];
              uVar17 = (uint)bVar8;
              fVar34 = *pfVar23 * fVar35 * fVar33;
              if (*(char *)((long)param_3 + uVar22 + lVar16) == '\0') {
                iVar30 = bVar8 - uVar25;
                if (uVar25 <= bVar8 && iVar30 != 0) {
                  uVar25 = ((int)uVar20 + (uint)bVar8) - uVar25;
                  do {
                    fVar36 = *pfVar23;
                    afStack_f8[uVar20] = fVar36;
                    local_338[uVar20] = 0.0;
                    local_1b8[uVar20] = fVar34;
                    local_278[uVar20] = fVar36 / (local_3f8[uVar20] + DAT_100700b5c);
                    uVar20 = (ulong)((int)uVar20 + 1);
                    iVar30 = iVar30 + -1;
                  } while (iVar30 != 0);
                  goto LAB_10011c2fc;
                }
              }
              else {
                iVar30 = bVar8 - uVar25;
                if (uVar25 <= bVar8 && iVar30 != 0) {
                  uVar25 = ((int)uVar20 + (uint)bVar8) - uVar25;
                  do {
                    fVar36 = *pfVar23;
                    afStack_f8[uVar20] = fVar36;
                    local_338[uVar20] = 0.0;
                    local_1b8[uVar20] = fVar34;
                    local_278[uVar20] = fVar34 / (local_3f8[uVar20] + DAT_100700b5c);
                    if (param_3[uVar20 + 0x335] != 0.0) {
                      local_338[uVar20] = fVar36 * fVar33;
                    }
                    uVar20 = (ulong)((int)uVar20 + 1);
                    iVar30 = iVar30 + -1;
                  } while (iVar30 != 0);
LAB_10011c2fc:
                  uVar20 = (ulong)uVar25;
                }
              }
              pfVar23 = pfVar23 + 1;
              uVar22 = uVar13;
              uVar25 = uVar17;
            } while (bVar8 < bVar6);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar12);
      }
      bVar6 = *(byte *)(lVar10 + 0x19);
      if ((ulong)bVar6 != 0) {
        uVar20 = 0;
        uVar19 = (ulong)*(byte *)(lVar10 + 0xc);
        bVar8 = *(byte *)(lVar10 + 0xc);
        do {
          uVar13 = (ulong)bVar8;
          bVar9 = *(byte *)(lVar10 + 0xd + uVar20);
          fVar33 = DAT_100700b50;
          fVar35 = DAT_100700b50;
          if (bVar8 < bVar9) {
            do {
              fVar33 = fVar33 + afStack_f8[uVar13];
              fVar35 = fVar35 + local_3f8[uVar13];
              uVar13 = uVar13 + 1;
            } while (bVar9 != uVar13);
          }
          fVar35 = (fVar33 / fVar35) * fVar1;
          if (DAT_100705ebc <= fVar35) {
            fVar35 = DAT_100705ebc;
          }
          uVar17 = (uint)bVar9;
          if ((uint)uVar19 < uVar17) {
            fVar34 = 0.0;
            uVar13 = uVar19;
            do {
              fVar36 = local_278[uVar13];
              if (fVar35 < fVar36) {
                local_1b8[uVar13] = (fVar35 / fVar36) * local_1b8[uVar13];
                local_278[uVar13] = fVar35;
                fVar36 = fVar35;
              }
              fVar34 = fVar34 + fVar36 * local_3f8[uVar13];
              fVar36 = local_338[uVar13];
              if ((fVar36 != 0.0) || (NAN(fVar36))) {
                fVar34 = fVar34 + fVar36;
              }
              else if (cVar7 == '\0') {
                fVar34 = fVar34 + local_1b8[uVar13];
              }
              uVar13 = uVar13 + 1;
            } while (uVar17 != uVar13);
            fVar33 = fVar33 / (fVar34 + DAT_100705ec0);
            if (_DAT_100705ec4 <= fVar33) {
              fVar33 = _DAT_100705ec4;
            }
            do {
              local_278[uVar19] = local_278[uVar19] * fVar33;
              local_338[uVar19] = local_338[uVar19] * fVar33;
              local_1b8[uVar19] = local_1b8[uVar19] * fVar33;
              uVar19 = uVar19 + 1;
            } while (uVar17 != uVar19);
          }
          uVar20 = uVar20 + 1;
          uVar19 = (ulong)bVar9;
          bVar8 = bVar9;
        } while (uVar20 != bVar6);
      }
      if (bVar4 == bVar3) {
        lVar16 = *param_2;
        lVar21 = param_2[1];
        if (*(int *)((long)param_2 + 0x14) != 0) {
LAB_10011c707:
          *(undefined4 *)((long)param_2 + 0x14) = 0;
        }
      }
      else {
        uVar19 = 0;
        do {
          local_338[uVar19] = SQRT(local_338[uVar19]);
          local_278[uVar19] = SQRT(local_278[uVar19]);
          local_1b8[uVar19] = SQRT(local_1b8[uVar19]);
          uVar19 = uVar19 + 1;
        } while (uVar29 != uVar19);
        lVar16 = *param_2;
        lVar21 = param_2[1];
        if (*(int *)((long)param_2 + 0x14) != 0) {
          if (bVar4 != bVar3) {
            uVar19 = 0;
            do {
              *(float *)(lVar21 + uVar19 * 4) = local_1b8[uVar19];
              *(float *)(lVar16 + uVar19 * 4) = local_278[uVar19];
              uVar19 = uVar19 + 1;
            } while (uVar29 != uVar19);
          }
          goto LAB_10011c707;
        }
      }
      if (bVar5 != 0) {
        puVar27 = &DAT_100705e40;
        do {
          FUN_10011d058(*puVar27,param_4,*(long *)(param_4 + uVar31 * 8) + (ulong)((uint)bVar3 * 4),
                        (ulong)((uint)bVar3 * 4) + *(long *)(param_5 + uVar31 * 8),lVar16,lVar21,
                        local_278,local_1b8,local_338,param_2 + 3,bVar3,uVar28,cVar7,param_2 + 2);
          uVar31 = uVar31 + 1;
          puVar27 = puVar27 + 1;
        } while (uVar31 < uVar15);
      }
      if ((uint)uVar31 < uVar24) {
        uVar31 = uVar31 & 0xffffffff;
        do {
          FUN_10011d1ec(param_4,*(long *)(param_4 + uVar31 * 8) + (ulong)((uint)bVar3 * 4),
                        (ulong)((uint)bVar3 * 4) + *(long *)(param_5 + uVar31 * 8),local_278,
                        local_1b8,local_338,param_2 + 3,bVar3,uVar28,cVar7,param_2 + 2);
          uVar31 = uVar31 + 1;
        } while (uVar26 != uVar31);
      }
      if (bVar4 != bVar3) {
        uVar31 = 0;
        do {
          *(float *)(lVar16 + uVar31 * 4) = local_278[uVar31];
          *(float *)(lVar21 + uVar31 * 4) = local_1b8[uVar31];
          uVar31 = uVar31 + 1;
        } while (uVar29 != uVar31);
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != bVar2);
  }
  uVar14 = 0;
LAB_10011c908:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

