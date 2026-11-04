// name: FUN_1002f0fa0
// address: 1002f0fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002f0fa0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong in_RAX;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar8 [16];
  ulong local_38;
  
  uVar2 = ~(param_2 << 0x20) + param_2;
  uVar2 = uVar2 >> 0x16 ^ uVar2;
  uVar2 = ~(uVar2 << 0xd) + uVar2;
  uVar7 = (uVar2 >> 8 ^ uVar2) * 9;
  uVar7 = uVar7 >> 0xf ^ uVar7;
  uVar7 = ~(uVar7 << 0x1b) + uVar7;
  uVar7 = uVar7 >> 0x1f ^ uVar7;
  uVar2 = param_1[1];
  local_38 = in_RAX;
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar3 >> 0x38 < 2) {
      local_38 = uVar2 - 1 & uVar7;
    }
    else {
      local_38 = uVar7;
      if (uVar2 <= uVar7) {
        local_38 = uVar7 % uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + local_38 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar4 = plVar5[1];
        if (uVar4 == uVar7) {
          if (plVar5[2] == param_2) {
            return 0;
          }
        }
        else {
          if ((byte)(uVar3 >> 0x38) < 2) {
            uVar4 = uVar4 & uVar2 - 1;
          }
          else if (uVar2 <= uVar4) {
            uVar4 = uVar4 % uVar2;
          }
          if (uVar4 != local_38) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  plVar5 = operator_new(0x18);
  *plVar5 = 0;
  plVar5[1] = uVar7;
  plVar5[2] = param_3;
  auVar8._4_12_ = extraout_XMM0._4_12_;
  if ((uVar2 == 0) || ((float)uVar2 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar2) {
      uVar3 = (ulong)((uVar2 & uVar2 - 1) != 0);
    }
    uVar3 = uVar3 | uVar2 * 2;
    auVar8._0_4_ = (float)(param_1[3] + 1) / *(float *)(param_1 + 4);
    auVar8 = roundss(auVar8,auVar8,10);
    uVar2 = (ulong)auVar8._0_4_;
    uVar2 = (long)(auVar8._0_4_ - _DAT_10070844c) & (long)uVar2 >> 0x3f | uVar2;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
    FUN_1002f1266(param_1,uVar2);
    uVar2 = param_1[1];
    if ((uVar2 & uVar2 - 1) == 0) {
      local_38 = uVar7 & uVar2 - 1;
    }
    else {
      local_38 = uVar7;
      if (uVar2 <= uVar7) {
        local_38 = uVar7 % uVar2;
      }
    }
  }
  lVar1 = *param_1;
  plVar6 = *(long **)(lVar1 + local_38 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar5 = param_1[2];
    param_1[2] = (long)plVar5;
    *(long **)(lVar1 + local_38 * 8) = param_1 + 2;
    plVar6 = (long *)0x0;
    if (*plVar5 == 0) goto LAB_1002f123a;
    uVar7 = *(ulong *)(*plVar5 + 8);
    if ((uVar2 & uVar2 - 1) == 0) {
      uVar7 = uVar7 & uVar2 - 1;
    }
    else if (uVar2 <= uVar7) {
      uVar7 = uVar7 % uVar2;
    }
    plVar6 = (long *)(uVar7 * 8 + *param_1);
  }
  else {
    *plVar5 = *plVar6;
  }
  *plVar6 = (long)plVar5;
LAB_1002f123a:
  param_1[3] = param_1[3] + 1;
  return CONCAT71((int7)((ulong)plVar6 >> 8),1);
}

