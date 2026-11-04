// name: FUN_1001f1cf6
// address: 1001f1cf6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1001f1cf6(long *param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong unaff_R13;
  undefined1 auVar9 [16];
  long *local_50 [3];
  long *local_38;
  
  local_38 = param_1 + 3;
  uVar2 = FUN_1001f1bf0();
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar3 >> 0x38 < 2) {
      unaff_R13 = uVar6 - 1 & uVar2;
    }
    else {
      unaff_R13 = uVar2;
      if (uVar6 <= uVar2) {
        unaff_R13 = uVar2 % uVar6;
      }
    }
    puVar1 = *(undefined8 **)(*param_1 + unaff_R13 * 8);
    if ((puVar1 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar1, plVar5 != (long *)0x0)) {
      do {
        uVar4 = plVar5[1];
        if (uVar4 == uVar2) {
          if (*param_2 == *(undefined1 (*) [16])(plVar5 + 2)) {
            uVar8 = 0;
            local_50[0] = plVar5;
            goto LAB_1001f1f81;
          }
        }
        else {
          if ((byte)(uVar3 >> 0x38) < 2) {
            uVar4 = uVar4 & uVar6 - 1;
          }
          else if (uVar6 <= uVar4) {
            uVar4 = uVar4 % uVar6;
          }
          if (uVar4 != unaff_R13) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  FUN_1001f1fae(local_50,param_1,uVar2,param_3,param_4);
  if ((uVar6 == 0) || ((float)uVar6 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar6) {
      uVar3 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar3 = uVar3 | uVar6 * 2;
    auVar9 = ZEXT416((uint)((float)(param_1[3] + 1) / *(float *)(param_1 + 4)));
    auVar9 = roundss(auVar9,auVar9,10);
    uVar6 = (ulong)auVar9._0_4_;
    uVar6 = (long)(auVar9._0_4_ - _DAT_10070844c) & (long)uVar6 >> 0x3f | uVar6;
    if (uVar6 < uVar3) {
      uVar6 = uVar3;
    }
    FUN_1001f202e(param_1,uVar6);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_R13 = uVar2 & uVar6 - 1;
    }
    else {
      unaff_R13 = uVar2;
      if (uVar6 <= uVar2) {
        unaff_R13 = uVar2 % uVar6;
      }
    }
  }
  plVar5 = *(long **)(*param_1 + unaff_R13 * 8);
  plVar7 = local_50[0];
  if (plVar5 == (long *)0x0) {
    *local_50[0] = param_1[2];
    param_1[2] = (long)local_50[0];
    *(long **)(*param_1 + unaff_R13 * 8) = param_1 + 2;
    if (*local_50[0] != 0) {
      uVar2 = *(ulong *)(*local_50[0] + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar2 = uVar2 & uVar6 - 1;
      }
      else if (uVar6 <= uVar2) {
        uVar2 = uVar2 % uVar6;
      }
      plVar7 = (long *)*param_1;
      plVar7[uVar2] = (long)local_50[0];
    }
  }
  else {
    *local_50[0] = *plVar5;
    *plVar5 = (long)local_50[0];
  }
  *local_38 = *local_38 + 1;
  uVar8 = CONCAT71((int7)((ulong)plVar7 >> 8),1);
LAB_1001f1f81:
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = local_50[0];
  return auVar9;
}

