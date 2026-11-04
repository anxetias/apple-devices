// name: FUN_10046039a
// address: 10046039a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046039a(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_XMM0 [16];
  undefined1 auVar12 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar12 = in_XMM0._4_12_;
  uVar3 = 2;
  if ((param_2 != 1) && (uVar3 = param_2, (param_2 & param_2 - 1) != 0)) {
    uVar3 = std::__next_prime(param_2);
    auVar11._8_8_ = extraout_XMM0_Qb;
    auVar11._0_8_ = extraout_XMM0_Qa;
    auVar12 = auVar11._4_12_;
  }
  uVar5 = param_1[1];
  if (uVar3 <= uVar5) {
    if (uVar5 <= uVar3) {
      return;
    }
    auVar10._0_4_ = (float)(ulong)param_1[3] / *(float *)(param_1 + 4);
    auVar10._4_12_ = auVar12;
    auVar11 = roundss(auVar10,auVar10,10);
    uVar6 = (ulong)auVar11._0_4_;
    uVar6 = (long)(auVar11._0_4_ - _DAT_10070844c) & (long)uVar6 >> 0x3f | uVar6;
    if ((uVar5 < 3) ||
       (uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555),
       uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333),
       1 < (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      uVar7 = std::__next_prime(uVar6);
    }
    else {
      lVar2 = 0x3f;
      if (uVar6 - 1 != 0) {
        for (; uVar6 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar7 = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
      if (uVar6 < 2) {
        uVar7 = uVar6;
      }
    }
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
    if (uVar5 <= uVar7) {
      return;
    }
    uVar3 = uVar7;
    if (uVar7 == 0) {
      pvVar1 = (void *)*param_1;
      *param_1 = 0;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      param_1[1] = 0;
      return;
    }
  }
  if (uVar3 >> 0x3d == 0) {
    pvVar4 = operator_new(uVar3 * 8);
    pvVar1 = (void *)*param_1;
    *param_1 = (long)pvVar4;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    param_1[1] = uVar3;
    uVar5 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
      uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar6 >> 0x38 < 2) {
        uVar5 = uVar5 & uVar3 - 1;
      }
      else if (uVar3 <= uVar5) {
        uVar5 = uVar5 % uVar3;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar8;
      if (plVar9 != (long *)0x0) {
        do {
          uVar7 = plVar9[1];
          if ((byte)(uVar6 >> 0x38) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar7 = uVar7 % uVar3;
          }
          if (uVar7 != uVar5) {
            if (*(long *)(*param_1 + uVar7 * 8) == 0) {
              *(long **)(*param_1 + uVar7 * 8) = plVar8;
              uVar5 = uVar7;
            }
            else {
              *plVar8 = *plVar9;
              *plVar9 = **(long **)(*param_1 + uVar7 * 8);
              **(undefined8 **)(*param_1 + uVar7 * 8) = plVar9;
              plVar9 = plVar8;
            }
          }
          plVar8 = plVar9;
          plVar9 = (long *)*plVar8;
        } while (plVar9 != (long *)0x0);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001082d0();
}

