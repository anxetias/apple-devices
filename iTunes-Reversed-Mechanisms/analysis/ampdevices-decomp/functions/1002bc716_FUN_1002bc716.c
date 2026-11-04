// name: FUN_1002bc716
// address: 1002bc716

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1002bc716(ulong *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong *puVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong extraout_RDX;
  ulong uVar15;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined8 uVar16;
  ulong extraout_RDX_02;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong local_40;
  
  uVar1 = *param_2;
  uVar12 = (ulong)uVar1;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar7 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      local_40 = (ulong)(uVar1 & (int)uVar10 - 1U);
    }
    else {
      local_40 = uVar12;
      if (uVar10 <= uVar12) {
        local_40 = uVar12 % (uVar10 & 0xffffffff);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + local_40 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (puVar8 = (ulong *)*puVar2, puVar8 != (ulong *)0x0)) {
      do {
        uVar14 = puVar8[1];
        if (uVar14 == uVar12) {
          if ((uint)puVar8[2] == uVar1) {
            uVar16 = 0;
            goto LAB_1002bcb20;
          }
        }
        else {
          if ((byte)(uVar7 >> 0x38) < 2) {
            uVar14 = uVar14 & uVar10 - 1;
          }
          else if (uVar10 <= uVar14) {
            uVar14 = uVar14 % uVar10;
          }
          if (uVar14 != local_40) break;
        }
        puVar8 = (ulong *)*puVar8;
      } while (puVar8 != (ulong *)0x0);
    }
  }
  puVar8 = operator_new(0x20);
  *puVar8 = 0;
  puVar8[1] = uVar12;
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)*param_4;
  puVar8[3] = 0;
  auVar20._4_12_ = extraout_XMM0._4_12_;
  if ((uVar10 == 0) ||
     (uVar7 = extraout_RDX, (float)uVar10 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar10) {
      uVar7 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar7 = uVar7 | uVar10 * 2;
    auVar20._0_4_ = (float)(param_1[3] + 1) / *(float *)(param_1 + 4);
    auVar20 = roundss(auVar20,auVar20,10);
    uVar14 = (ulong)auVar20._0_4_;
    uVar15 = (long)uVar14 >> 0x3f;
    uVar14 = (long)(auVar20._0_4_ - _DAT_10070844c) & uVar15 | uVar14;
    if (uVar14 < uVar7) {
      uVar14 = uVar7;
    }
    auVar5._8_8_ = uVar15;
    auVar5._0_8_ = uVar14;
    auVar21._8_8_ = uVar15;
    auVar21._0_8_ = 2;
    if ((uVar14 != 1) && (auVar21 = auVar5, (uVar14 & uVar14 - 1) != 0)) {
      auVar21 = std::__next_prime(uVar14);
      uVar10 = param_1[1];
    }
    uVar7 = auVar21._8_8_;
    uVar14 = auVar21._0_8_;
    if (uVar10 < uVar14) {
LAB_1002bc924:
      if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar9 = operator_new(uVar14 * 8);
      pvVar3 = (void *)*param_1;
      *param_1 = (ulong)pvVar9;
      uVar7 = extraout_RDX_00;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
        uVar7 = extraout_RDX_01;
      }
      param_1[1] = uVar14;
      uVar10 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (uVar14 != uVar10);
      plVar17 = (long *)param_1[2];
      uVar10 = uVar14;
      if (plVar17 != (long *)0x0) {
        uVar15 = plVar17[1];
        uVar7 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
        uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
        uVar7 = (uVar7 >> 4) + uVar7;
        uVar18 = (uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar18 >> 0x38 < 2) {
          uVar15 = uVar15 & uVar14 - 1;
        }
        else if (uVar14 <= uVar15) {
          uVar15 = uVar15 % uVar14;
          uVar7 = uVar15;
        }
        *(ulong **)(*param_1 + uVar15 * 8) = param_1 + 2;
        plVar19 = (long *)*plVar17;
        if (plVar19 != (long *)0x0) {
          do {
            uVar11 = plVar19[1];
            if ((byte)(uVar18 >> 0x38) < 2) {
              uVar11 = uVar11 & uVar14 - 1;
            }
            else if (uVar14 <= uVar11) {
              uVar11 = uVar11 % uVar14;
              uVar7 = uVar11;
            }
            if (uVar11 != uVar15) {
              uVar7 = *param_1;
              if (*(long *)(uVar7 + uVar11 * 8) == 0) {
                *(long **)(uVar7 + uVar11 * 8) = plVar17;
                uVar15 = uVar11;
              }
              else {
                *plVar17 = *plVar19;
                *plVar19 = **(long **)(*param_1 + uVar11 * 8);
                uVar7 = *param_1;
                **(undefined8 **)(uVar7 + uVar11 * 8) = plVar19;
                plVar19 = plVar17;
              }
            }
            plVar17 = plVar19;
            plVar19 = (long *)*plVar17;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    else if (uVar14 < uVar10) {
      auVar20 = roundss(ZEXT416((uint)((float)param_1[3] / *(float *)(param_1 + 4))),
                        ZEXT416((uint)((float)param_1[3] / *(float *)(param_1 + 4))),10);
      uVar7 = (ulong)auVar20._0_4_;
      uVar7 = (long)(auVar20._0_4_ - _DAT_10070844c) & (long)uVar7 >> 0x3f | uVar7;
      if (uVar10 < 3) {
LAB_1002bcc03:
        auVar23 = std::__next_prime(uVar7);
      }
      else {
        uVar15 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        auVar6._8_8_ = uVar15;
        auVar6._0_8_ = uVar7;
        if (1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
        goto LAB_1002bcc03;
        lVar4 = 0x3f;
        if (uVar7 - 1 != 0) {
          for (; uVar7 - 1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        auVar23._8_8_ = uVar15;
        auVar23._0_8_ = 1L << (-((byte)lVar4 ^ 0x3f) & 0x3f);
        if (uVar7 < 2) {
          auVar23 = auVar6;
        }
      }
      uVar7 = auVar23._8_8_;
      uVar15 = auVar23._0_8_;
      if (auVar23._0_8_ < uVar14) {
        uVar15 = uVar14;
      }
      if (uVar15 < uVar10) {
        uVar14 = uVar15;
        if (uVar15 != 0) goto LAB_1002bc924;
        pvVar3 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
          uVar7 = extraout_RDX_02;
        }
        param_1[1] = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = param_1[1];
      }
    }
    if ((uVar10 & uVar10 - 1) == 0) {
      local_40 = (ulong)(uVar1 & (int)uVar10 - 1U);
    }
    else {
      local_40 = uVar12;
      if (uVar10 <= uVar12) {
        local_40 = uVar12 % uVar10;
        uVar7 = local_40;
      }
    }
  }
  uVar12 = *param_1;
  puVar13 = *(ulong **)(uVar12 + local_40 * 8);
  if (puVar13 == (ulong *)0x0) {
    uVar7 = param_1[2];
    *puVar8 = uVar7;
    param_1[2] = (ulong)puVar8;
    *(ulong **)(uVar12 + local_40 * 8) = param_1 + 2;
    if (*puVar8 == 0) goto LAB_1002bcb1a;
    uVar12 = *(ulong *)(*puVar8 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar12 = uVar12 & uVar10 - 1;
    }
    else if (uVar10 <= uVar12) {
      uVar12 = uVar12 % uVar10;
      uVar7 = uVar12;
    }
    puVar13 = (ulong *)(uVar12 * 8 + *param_1);
  }
  else {
    *puVar8 = *puVar13;
  }
  *puVar13 = (ulong)puVar8;
LAB_1002bcb1a:
  param_1[3] = param_1[3] + 1;
  uVar16 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_1002bcb20:
  auVar22._8_8_ = uVar16;
  auVar22._0_8_ = puVar8;
  return auVar22;
}

