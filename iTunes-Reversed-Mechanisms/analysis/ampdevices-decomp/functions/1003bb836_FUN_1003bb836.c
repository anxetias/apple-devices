// name: FUN_1003bb836
// address: 1003bb836

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1003bb836(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  void *pvVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *extraout_RDX;
  ulong uVar17;
  long *extraout_RDX_00;
  long *extraout_RDX_01;
  long *plVar18;
  undefined8 uVar19;
  long *extraout_RDX_02;
  long *plVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long *local_58;
  
  uVar1 = *param_2;
  plVar14 = (long *)(ulong)uVar1;
  plVar21 = (long *)param_1[1];
  if (plVar21 != (long *)0x0) {
    uVar8 = (long)plVar21 - ((ulong)plVar21 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar8 >> 0x38 < 2) {
      local_58 = (long *)(ulong)(uVar1 & (int)plVar21 - 1U);
    }
    else {
      local_58 = plVar14;
      if (plVar21 <= plVar14) {
        local_58 = (long *)((ulong)plVar14 % ((ulong)plVar21 & 0xffffffff));
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)local_58 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar2, plVar10 != (long *)0x0)) {
      do {
        plVar9 = (long *)plVar10[1];
        if (plVar9 == plVar14) {
          if (*(uint *)(plVar10 + 2) == uVar1) {
            uVar19 = 0;
            goto LAB_1003bbc73;
          }
        }
        else {
          if ((byte)(uVar8 >> 0x38) < 2) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar21 - 1U);
          }
          else if (plVar21 <= plVar9) {
            plVar9 = (long *)((ulong)plVar9 % (ulong)plVar21);
          }
          if (plVar9 != local_58) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  puVar3 = (undefined4 *)*param_4;
  plVar9 = param_1 + 2;
  plVar10 = operator_new(0x30);
  *plVar10 = 0;
  plVar10[1] = (long)plVar14;
  *(undefined4 *)(plVar10 + 2) = *puVar3;
  plVar10[5] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  FUN_1001b7a44(plVar10 + 4);
  if ((plVar21 != (long *)0x0) &&
     (plVar18 = extraout_RDX, (float)(param_1[3] + 1) <= (float)plVar21 * *(float *)(param_1 + 4)))
  goto LAB_1003bbbfe;
  uVar8 = 1;
  if ((long *)0x2 < plVar21) {
    uVar8 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
  }
  uVar8 = uVar8 | (long)plVar21 * 2;
  auVar22 = ZEXT416((uint)((float)(param_1[3] + 1) / *(float *)(param_1 + 4)));
  auVar22 = roundss(auVar22,auVar22,10);
  uVar15 = (ulong)auVar22._0_4_;
  uVar17 = (long)uVar15 >> 0x3f;
  uVar15 = (long)(auVar22._0_4_ - _DAT_10070844c) & uVar17 | uVar15;
  if (uVar15 < uVar8) {
    uVar15 = uVar8;
  }
  auVar6._8_8_ = uVar17;
  auVar6._0_8_ = uVar15;
  auVar22._8_8_ = uVar17;
  auVar22._0_8_ = 2;
  if ((uVar15 != 1) && (auVar22 = auVar6, (uVar15 & uVar15 - 1) != 0)) {
    auVar22 = std::__next_prime(uVar15);
  }
  plVar12 = auVar22._0_8_;
  plVar21 = (long *)param_1[1];
  if (plVar21 < plVar12) {
LAB_1003bba69:
    plVar21 = plVar12;
    if ((ulong)plVar21 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001082d0();
    }
    pvVar11 = operator_new((long)plVar21 * 8);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)pvVar11;
    plVar18 = extraout_RDX_00;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
      plVar18 = extraout_RDX_01;
    }
    param_1[1] = (long)plVar21;
    plVar12 = (long *)0x0;
    do {
      *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
      plVar12 = (long *)((long)plVar12 + 1);
    } while (plVar21 != plVar12);
    plVar12 = (long *)*plVar9;
    if (plVar12 != (long *)0x0) {
      plVar16 = (long *)plVar12[1];
      uVar8 = (long)plVar21 - ((ulong)plVar21 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
      uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar8 >> 0x38 < 2) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar21 - 1U);
      }
      else if (plVar21 <= plVar16) {
        plVar16 = (long *)((ulong)plVar16 % (ulong)plVar21);
      }
      *(long **)(*param_1 + (long)plVar16 * 8) = plVar9;
      plVar20 = (long *)*plVar12;
      plVar18 = plVar9;
      if (plVar20 != (long *)0x0) {
        do {
          plVar13 = (long *)plVar20[1];
          if ((byte)(uVar8 >> 0x38) < 2) {
            plVar13 = (long *)((ulong)plVar13 & (long)plVar21 - 1U);
          }
          else if (plVar21 <= plVar13) {
            plVar13 = (long *)((ulong)plVar13 % (ulong)plVar21);
            plVar18 = plVar13;
          }
          if (plVar13 != plVar16) {
            plVar18 = (long *)*param_1;
            if (plVar18[(long)plVar13] == 0) {
              plVar18[(long)plVar13] = (long)plVar12;
              plVar16 = plVar13;
            }
            else {
              *plVar12 = *plVar20;
              *plVar20 = **(long **)(*param_1 + (long)plVar13 * 8);
              plVar18 = (long *)*param_1;
              *(long **)plVar18[(long)plVar13] = plVar20;
              plVar20 = plVar12;
            }
          }
          plVar12 = plVar20;
          plVar20 = (long *)*plVar12;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  else {
    plVar18 = auVar22._8_8_;
    if (plVar12 < plVar21) {
      auVar22 = roundss(ZEXT416((uint)((float)(ulong)param_1[3] / *(float *)(param_1 + 4))),
                        ZEXT416((uint)((float)(ulong)param_1[3] / *(float *)(param_1 + 4))),10);
      uVar8 = (ulong)auVar22._0_4_;
      uVar8 = (long)(auVar22._0_4_ - _DAT_10070844c) & (long)uVar8 >> 0x3f | uVar8;
      if (plVar21 < (long *)0x3) {
LAB_1003bbd56:
        auVar24 = std::__next_prime(uVar8);
      }
      else {
        uVar15 = (long)plVar21 - ((ulong)plVar21 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        auVar7._8_8_ = uVar15;
        auVar7._0_8_ = uVar8;
        if (1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
        goto LAB_1003bbd56;
        lVar5 = 0x3f;
        if (uVar8 - 1 != 0) {
          for (; uVar8 - 1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        auVar24._8_8_ = uVar15;
        auVar24._0_8_ = 1L << (-((byte)lVar5 ^ 0x3f) & 0x3f);
        if (uVar8 < 2) {
          auVar24 = auVar7;
        }
      }
      plVar18 = auVar24._8_8_;
      plVar16 = auVar24._0_8_;
      if (auVar24._0_8_ < plVar12) {
        plVar16 = plVar12;
      }
      if (plVar16 < plVar21) {
        plVar12 = plVar16;
        if (plVar16 != (long *)0x0) goto LAB_1003bba69;
        pvVar4 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
          plVar18 = extraout_RDX_02;
        }
        param_1[1] = 0;
        plVar21 = (long *)0x0;
      }
      else {
        plVar21 = (long *)param_1[1];
      }
    }
  }
  if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
    local_58 = (long *)(ulong)(uVar1 & (int)plVar21 - 1U);
  }
  else {
    local_58 = plVar14;
    if (plVar21 <= plVar14) {
      plVar18 = (long *)((ulong)plVar14 % (ulong)plVar21);
      local_58 = plVar18;
    }
  }
LAB_1003bbbfe:
  puVar2 = *(undefined8 **)(*param_1 + (long)local_58 * 8);
  if (puVar2 == (undefined8 *)0x0) {
    *plVar10 = param_1[2];
    param_1[2] = (long)plVar10;
    *(long **)(*param_1 + (long)local_58 * 8) = plVar9;
    if (*plVar10 != 0) {
      plVar14 = *(long **)(*plVar10 + 8);
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar21 - 1U);
      }
      else if (plVar21 <= plVar14) {
        plVar14 = (long *)((ulong)plVar14 % (ulong)plVar21);
        plVar18 = plVar14;
      }
      *(long **)(*param_1 + (long)plVar14 * 8) = plVar10;
    }
  }
  else {
    plVar18 = (long *)*puVar2;
    *plVar10 = (long)plVar18;
    *puVar2 = plVar10;
  }
  param_1[3] = param_1[3] + 1;
  uVar19 = CONCAT71((int7)((ulong)plVar18 >> 8),1);
LAB_1003bbc73:
  auVar23._8_8_ = uVar19;
  auVar23._0_8_ = plVar10;
  return auVar23;
}

