// name: FUN_1002ee658
// address: 1002ee658

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1002ee658(undefined8 *param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong unaff_R13;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar15 [16];
  
  uVar3 = ~(param_2 << 0x20) + param_2;
  uVar3 = uVar3 >> 0x16 ^ uVar3;
  uVar3 = ~(uVar3 << 0xd) + uVar3;
  uVar9 = (uVar3 >> 8 ^ uVar3) * 9;
  uVar9 = uVar9 >> 0xf ^ uVar9;
  uVar9 = ~(uVar9 << 0x1b) + uVar9;
  uVar9 = uVar9 >> 0x1f ^ uVar9;
  uVar3 = ((long *)param_1[0x12])[1];
  if (uVar3 != 0) {
    uVar10 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      uVar11 = uVar3 - 1 & uVar9;
    }
    else {
      uVar11 = uVar9;
      if (uVar3 <= uVar9) {
        uVar11 = uVar9 % uVar3;
      }
    }
    plVar13 = *(long **)(*(long *)param_1[0x12] + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      do {
        uVar12 = plVar13[1];
        if (uVar12 == uVar9) {
          if (plVar13[2] == param_2) {
            return plVar13[3];
          }
        }
        else {
          if ((byte)(uVar10 >> 0x38) < 2) {
            uVar12 = uVar12 & uVar3 - 1;
          }
          else if (uVar3 <= uVar12) {
            uVar12 = uVar12 % uVar3;
          }
          if (uVar12 != uVar11) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  lVar4 = FUN_1002edcde(*param_1,param_2);
  plVar13 = (long *)param_1[0x12];
  uVar3 = plVar13[1];
  if (uVar3 != 0) {
    uVar10 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      unaff_R13 = uVar3 - 1 & uVar9;
    }
    else {
      unaff_R13 = uVar9;
      if (uVar3 <= uVar9) {
        unaff_R13 = uVar9 % uVar3;
      }
    }
    plVar5 = *(long **)(*plVar13 + unaff_R13 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar11 = plVar5[1];
        if (uVar11 == uVar9) {
          if (plVar5[2] == param_2) {
            return lVar4;
          }
        }
        else {
          if ((byte)(uVar10 >> 0x38) < 2) {
            uVar11 = uVar11 & uVar3 - 1;
          }
          else if (uVar3 <= uVar11) {
            uVar11 = uVar11 % uVar3;
          }
          if (uVar11 != unaff_R13) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  plVar5 = operator_new(0x20);
  *plVar5 = 0;
  plVar5[1] = uVar9;
  plVar5[2] = param_2;
  plVar5[3] = lVar4;
  auVar15._4_12_ = extraout_XMM0._4_12_;
  if ((uVar3 == 0) || ((float)uVar3 * *(float *)(plVar13 + 4) < (float)(plVar13[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar3) {
      uVar10 = (ulong)((uVar3 & uVar3 - 1) != 0);
    }
    uVar10 = uVar10 | uVar3 * 2;
    auVar15._0_4_ = (float)(plVar13[3] + 1) / *(float *)(plVar13 + 4);
    auVar15 = roundss(auVar15,auVar15,10);
    uVar11 = (ulong)auVar15._0_4_;
    uVar11 = (long)(auVar15._0_4_ - _DAT_10070844c) & (long)uVar11 >> 0x3f | uVar11;
    if (uVar11 < uVar10) {
      uVar11 = uVar10;
    }
    uVar10 = 2;
    if ((uVar11 != 1) && (uVar10 = uVar11, (uVar11 & uVar11 - 1) != 0)) {
      uVar10 = std::__next_prime(uVar11);
      uVar3 = plVar13[1];
    }
    if (uVar3 < uVar10) {
LAB_1002ee99e:
      if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar6 = operator_new(uVar10 * 8);
      pvVar1 = (void *)*plVar13;
      *plVar13 = (long)pvVar6;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      plVar13[1] = uVar10;
      uVar3 = 0;
      do {
        *(undefined8 *)(*plVar13 + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar10 != uVar3);
      plVar8 = (long *)plVar13[2];
      uVar3 = uVar10;
      if (plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
        uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar12 >> 0x38 < 2) {
          uVar11 = uVar11 & uVar10 - 1;
        }
        else if (uVar10 <= uVar11) {
          uVar11 = uVar11 % uVar10;
        }
        *(long **)(*plVar13 + uVar11 * 8) = plVar13 + 2;
        plVar14 = (long *)*plVar8;
        if (plVar14 != (long *)0x0) {
          do {
            uVar7 = plVar14[1];
            if ((byte)(uVar12 >> 0x38) < 2) {
              uVar7 = uVar7 & uVar10 - 1;
            }
            else if (uVar10 <= uVar7) {
              uVar7 = uVar7 % uVar10;
            }
            if (uVar7 != uVar11) {
              if (*(long *)(*plVar13 + uVar7 * 8) == 0) {
                *(long **)(*plVar13 + uVar7 * 8) = plVar8;
                uVar11 = uVar7;
              }
              else {
                *plVar8 = *plVar14;
                *plVar14 = **(long **)(*plVar13 + uVar7 * 8);
                **(undefined8 **)(*plVar13 + uVar7 * 8) = plVar14;
                plVar14 = plVar8;
              }
            }
            plVar8 = plVar14;
            plVar14 = (long *)*plVar8;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    else if (uVar10 < uVar3) {
      auVar15 = roundss(ZEXT416((uint)((float)(ulong)plVar13[3] / *(float *)(plVar13 + 4))),
                        ZEXT416((uint)((float)(ulong)plVar13[3] / *(float *)(plVar13 + 4))),10);
      uVar11 = (ulong)auVar15._0_4_;
      uVar11 = (long)(auVar15._0_4_ - _DAT_10070844c) & (long)uVar11 >> 0x3f | uVar11;
      if ((uVar3 < 3) ||
         (uVar12 = uVar3 - (uVar3 >> 1 & 0x5555555555555555),
         uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
         1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar12 = std::__next_prime(uVar11);
      }
      else {
        lVar2 = 0x3f;
        if (uVar11 - 1 != 0) {
          for (; uVar11 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar12 = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
        if (uVar11 < 2) {
          uVar12 = uVar11;
        }
      }
      if (uVar12 < uVar10) {
        uVar12 = uVar10;
      }
      if (uVar12 < uVar3) {
        uVar10 = uVar12;
        if (uVar12 != 0) goto LAB_1002ee99e;
        pvVar1 = (void *)*plVar13;
        *plVar13 = 0;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
        plVar13[1] = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = plVar13[1];
      }
    }
    if ((uVar3 & uVar3 - 1) == 0) {
      unaff_R13 = uVar9 & uVar3 - 1;
    }
    else {
      unaff_R13 = uVar9;
      if (uVar3 <= uVar9) {
        unaff_R13 = uVar9 % uVar3;
      }
    }
  }
  lVar2 = *plVar13;
  plVar8 = *(long **)(lVar2 + unaff_R13 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar5 = plVar13[2];
    plVar13[2] = (long)plVar5;
    *(long **)(lVar2 + unaff_R13 * 8) = plVar13 + 2;
    if (*plVar5 == 0) goto LAB_1002eeb8a;
    uVar9 = *(ulong *)(*plVar5 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar9 = uVar9 & uVar3 - 1;
    }
    else if (uVar3 <= uVar9) {
      uVar9 = uVar9 % uVar3;
    }
    plVar8 = (long *)(uVar9 * 8 + *plVar13);
  }
  else {
    *plVar5 = *plVar8;
  }
  *plVar8 = (long)plVar5;
LAB_1002eeb8a:
  plVar13[3] = plVar13[3] + 1;
  return lVar4;
}

