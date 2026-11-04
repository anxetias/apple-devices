// name: FUN_1004649f0
// address: 1004649f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1004649f0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  ulong local_50;
  
  uVar5 = FUN_1001bd420(param_2);
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar6 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar6 >> 0x38 < 2) {
      local_50 = uVar12 - 1 & uVar5;
    }
    else {
      local_50 = uVar5;
      if (uVar12 <= uVar5) {
        local_50 = uVar5 % uVar12;
      }
    }
    plVar14 = *(long **)(*param_1 + local_50 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      do {
        uVar9 = plVar14[1];
        if (uVar9 == uVar5) {
          iVar4 = FUN_1001b9c66(plVar14 + 2,param_2);
          if (iVar4 == 0) {
            return plVar14;
          }
        }
        else {
          if ((byte)(uVar6 >> 0x38) < 2) {
            uVar9 = uVar9 & uVar12 - 1;
          }
          else if (uVar12 <= uVar9) {
            uVar9 = uVar9 % uVar12;
          }
          if (uVar9 != local_50) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  uVar1 = *param_3;
  plVar14 = param_1 + 2;
  plVar7 = operator_new(0x38);
  *plVar7 = 0;
  plVar7[1] = uVar5;
  FUN_1001b7a5c(plVar7 + 2,uVar1);
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  if ((uVar12 == 0) || ((float)uVar12 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar12) {
      uVar6 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar6 = uVar6 | uVar12 * 2;
    auVar15 = ZEXT416((uint)((float)(param_1[3] + 1) / *(float *)(param_1 + 4)));
    auVar15 = roundss(auVar15,auVar15,10);
    uVar12 = (ulong)auVar15._0_4_;
    uVar12 = (long)(auVar15._0_4_ - _DAT_10070844c) & (long)uVar12 >> 0x3f | uVar12;
    if (uVar12 < uVar6) {
      uVar12 = uVar6;
    }
    uVar6 = 2;
    if ((uVar12 != 1) && (uVar6 = uVar12, (uVar12 & uVar12 - 1) != 0)) {
      uVar6 = std::__next_prime(uVar12);
    }
    uVar12 = param_1[1];
    if (uVar12 < uVar6) {
LAB_100464c6c:
      uVar12 = uVar6;
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar8 = operator_new(uVar12 * 8);
      pvVar2 = (void *)*param_1;
      *param_1 = (long)pvVar8;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      param_1[1] = uVar12;
      uVar6 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar12 != uVar6);
      plVar11 = (long *)*plVar14;
      if (plVar11 != (long *)0x0) {
        uVar6 = plVar11[1];
        uVar9 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
        uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar9 >> 0x38 < 2) {
          uVar6 = uVar6 & uVar12 - 1;
        }
        else if (uVar12 <= uVar6) {
          uVar6 = uVar6 % uVar12;
        }
        *(long **)(*param_1 + uVar6 * 8) = plVar14;
        plVar13 = (long *)*plVar11;
        if (plVar13 != (long *)0x0) {
          do {
            uVar10 = plVar13[1];
            if ((byte)(uVar9 >> 0x38) < 2) {
              uVar10 = uVar10 & uVar12 - 1;
            }
            else if (uVar12 <= uVar10) {
              uVar10 = uVar10 % uVar12;
            }
            if (uVar10 != uVar6) {
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar11;
                uVar6 = uVar10;
              }
              else {
                *plVar11 = *plVar13;
                *plVar13 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar13;
                plVar13 = plVar11;
              }
            }
            plVar11 = plVar13;
            plVar13 = (long *)*plVar11;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    else if (uVar6 < uVar12) {
      auVar15 = roundss(ZEXT416((uint)((float)(ulong)param_1[3] / *(float *)(param_1 + 4))),
                        ZEXT416((uint)((float)(ulong)param_1[3] / *(float *)(param_1 + 4))),10);
      uVar9 = (ulong)auVar15._0_4_;
      uVar9 = (long)(auVar15._0_4_ - _DAT_10070844c) & (long)uVar9 >> 0x3f | uVar9;
      if ((uVar12 < 3) ||
         (uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
         uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
         1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar10 = std::__next_prime(uVar9);
      }
      else {
        lVar3 = 0x3f;
        if (uVar9 - 1 != 0) {
          for (; uVar9 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar10 = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
        if (uVar9 < 2) {
          uVar10 = uVar9;
        }
      }
      if (uVar10 < uVar6) {
        uVar10 = uVar6;
      }
      if (uVar10 < uVar12) {
        uVar6 = uVar10;
        if (uVar10 != 0) goto LAB_100464c6c;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar12 = 0;
      }
      else {
        uVar12 = param_1[1];
      }
    }
    if ((uVar12 & uVar12 - 1) == 0) {
      local_50 = uVar5 & uVar12 - 1;
    }
    else {
      local_50 = uVar5;
      if (uVar12 <= uVar5) {
        local_50 = uVar5 % uVar12;
      }
    }
  }
  plVar11 = *(long **)(*param_1 + local_50 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar7 = param_1[2];
    param_1[2] = (long)plVar7;
    *(long **)(*param_1 + local_50 * 8) = plVar14;
    if (*plVar7 == 0) goto LAB_100464e5b;
    uVar5 = *(ulong *)(*plVar7 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar5 = uVar5 & uVar12 - 1;
    }
    else if (uVar12 <= uVar5) {
      uVar5 = uVar5 % uVar12;
    }
    plVar11 = (long *)(uVar5 * 8 + *param_1);
  }
  else {
    *plVar7 = *plVar11;
  }
  *plVar11 = (long)plVar7;
LAB_100464e5b:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}

