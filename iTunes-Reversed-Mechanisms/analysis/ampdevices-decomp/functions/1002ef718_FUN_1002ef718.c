// name: FUN_1002ef718
// address: 1002ef718

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ef718(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong unaff_R12;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar15 [16];
  
  lVar3 = (**(code **)(*param_1 + 0x50))(param_1,param_3);
  plVar1 = *(long **)(param_2 + 0x30);
  plVar4 = (long *)plVar1[2];
  if (plVar4 != (long *)0x0) {
    bVar11 = false;
    do {
      while (plVar4[2] == lVar3) {
        *(undefined4 *)(plVar4 + 3) = 1;
        plVar4 = (long *)*plVar4;
        bVar11 = true;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    if (bVar11) {
      return;
    }
  }
  uVar5 = ~(lVar3 << 0x20) + lVar3;
  uVar5 = uVar5 >> 0x16 ^ uVar5;
  uVar5 = ~(uVar5 << 0xd) + uVar5;
  uVar12 = (uVar5 >> 8 ^ uVar5) * 9;
  uVar12 = uVar12 >> 0xf ^ uVar12;
  uVar12 = ~(uVar12 << 0x1b) + uVar12;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  uVar5 = plVar1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar6 >> 0x38 < 2) {
      unaff_R12 = uVar5 - 1 & uVar12;
    }
    else {
      unaff_R12 = uVar12;
      if (uVar5 <= uVar12) {
        unaff_R12 = uVar12 % uVar5;
      }
    }
    plVar4 = *(long **)(*plVar1 + unaff_R12 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar13 = plVar4[1];
        if (uVar13 == uVar12) {
          if (plVar4[2] == lVar3) {
            return;
          }
        }
        else {
          if ((byte)(uVar6 >> 0x38) < 2) {
            uVar13 = uVar13 & uVar5 - 1;
          }
          else if (uVar5 <= uVar13) {
            uVar13 = uVar13 % uVar5;
          }
          if (uVar13 != unaff_R12) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  plVar7 = operator_new(0x20);
  *plVar7 = 0;
  plVar7[1] = uVar12;
  plVar7[2] = lVar3;
  *(undefined4 *)(plVar7 + 3) = 1;
  auVar15._4_12_ = extraout_XMM0._4_12_;
  plVar4 = plVar1 + 2;
  if ((uVar5 == 0) || ((float)uVar5 * *(float *)(plVar1 + 4) < (float)(plVar1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 * 2;
    auVar15._0_4_ = (float)(plVar1[3] + 1) / *(float *)(plVar1 + 4);
    auVar15 = roundss(auVar15,auVar15,10);
    uVar13 = (ulong)auVar15._0_4_;
    uVar13 = (long)(auVar15._0_4_ - _DAT_10070844c) & (long)uVar13 >> 0x3f | uVar13;
    if (uVar13 < uVar6) {
      uVar13 = uVar6;
    }
    uVar6 = 2;
    if ((uVar13 != 1) && (uVar6 = uVar13, (uVar13 & uVar13 - 1) != 0)) {
      uVar6 = std::__next_prime(uVar13);
      uVar5 = plVar1[1];
    }
    if (uVar5 < uVar6) {
LAB_1002ef9b4:
      uVar5 = uVar6;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar8 = operator_new(uVar5 * 8);
      pvVar2 = (void *)*plVar1;
      *plVar1 = (long)pvVar8;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      plVar1[1] = uVar5;
      uVar6 = 0;
      do {
        *(undefined8 *)(*plVar1 + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
      plVar10 = (long *)*plVar4;
      if (plVar10 != (long *)0x0) {
        uVar6 = plVar10[1];
        uVar13 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
        uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar13 >> 0x38 < 2) {
          uVar6 = uVar6 & uVar5 - 1;
        }
        else if (uVar5 <= uVar6) {
          uVar6 = uVar6 % uVar5;
        }
        *(long **)(*plVar1 + uVar6 * 8) = plVar4;
        plVar14 = (long *)*plVar10;
        if (plVar14 != (long *)0x0) {
          do {
            uVar9 = plVar14[1];
            if ((byte)(uVar13 >> 0x38) < 2) {
              uVar9 = uVar9 & uVar5 - 1;
            }
            else if (uVar5 <= uVar9) {
              uVar9 = uVar9 % uVar5;
            }
            if (uVar9 != uVar6) {
              if (*(long *)(*plVar1 + uVar9 * 8) == 0) {
                *(long **)(*plVar1 + uVar9 * 8) = plVar10;
                uVar6 = uVar9;
              }
              else {
                *plVar10 = *plVar14;
                *plVar14 = **(long **)(*plVar1 + uVar9 * 8);
                **(undefined8 **)(*plVar1 + uVar9 * 8) = plVar14;
                plVar14 = plVar10;
              }
            }
            plVar10 = plVar14;
            plVar14 = (long *)*plVar10;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    else if (uVar6 < uVar5) {
      auVar15 = roundss(ZEXT416((uint)((float)(ulong)plVar1[3] / *(float *)(plVar1 + 4))),
                        ZEXT416((uint)((float)(ulong)plVar1[3] / *(float *)(plVar1 + 4))),10);
      uVar13 = (ulong)auVar15._0_4_;
      uVar13 = (long)(auVar15._0_4_ - _DAT_10070844c) & (long)uVar13 >> 0x3f | uVar13;
      if ((uVar5 < 3) ||
         (uVar9 = uVar5 - (uVar5 >> 1 & 0x5555555555555555),
         uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
         1 < (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar9 = std::__next_prime(uVar13);
      }
      else {
        lVar3 = 0x3f;
        if (uVar13 - 1 != 0) {
          for (; uVar13 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar9 = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
        if (uVar13 < 2) {
          uVar9 = uVar13;
        }
      }
      if (uVar9 < uVar6) {
        uVar9 = uVar6;
      }
      if (uVar9 < uVar5) {
        uVar6 = uVar9;
        if (uVar9 != 0) goto LAB_1002ef9b4;
        pvVar2 = (void *)*plVar1;
        *plVar1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        plVar1[1] = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = plVar1[1];
      }
    }
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_R12 = uVar12 & uVar5 - 1;
    }
    else {
      unaff_R12 = uVar12;
      if (uVar5 <= uVar12) {
        unaff_R12 = uVar12 % uVar5;
      }
    }
  }
  lVar3 = *plVar1;
  plVar10 = *(long **)(lVar3 + unaff_R12 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar3 + unaff_R12 * 8) = plVar4;
    if (*plVar7 == 0) goto LAB_1002efba8;
    uVar12 = *(ulong *)(*plVar7 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar12 = uVar12 & uVar5 - 1;
    }
    else if (uVar5 <= uVar12) {
      uVar12 = uVar12 % uVar5;
    }
    plVar10 = (long *)(uVar12 * 8 + *plVar1);
  }
  else {
    *plVar7 = *plVar10;
  }
  *plVar10 = (long)plVar7;
LAB_1002efba8:
  plVar1[3] = plVar1[3] + 1;
  return;
}

