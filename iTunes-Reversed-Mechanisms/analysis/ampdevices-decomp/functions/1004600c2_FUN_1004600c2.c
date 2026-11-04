// name: FUN_1004600c2
// address: 1004600c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1004600c2(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  ulong local_48;
  
  uVar4 = FUN_1001bd420(param_2);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      local_48 = uVar9 - 1 & uVar4;
    }
    else {
      local_48 = uVar4;
      if (uVar9 <= uVar4) {
        local_48 = uVar4 % uVar9;
      }
    }
    plVar10 = *(long **)(*param_1 + local_48 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar6 = plVar10[1];
        if (uVar6 == uVar4) {
          iVar3 = FUN_1001b9c66(plVar10 + 2,param_2);
          if (iVar3 == 0) {
            return plVar10;
          }
        }
        else {
          if ((byte)(uVar5 >> 0x38) < 2) {
            uVar6 = uVar6 & uVar9 - 1;
          }
          else if (uVar9 <= uVar6) {
            uVar6 = uVar6 % uVar9;
          }
          if (uVar6 != local_48) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  uVar1 = *param_3;
  plVar10 = param_1 + 2;
  plVar7 = operator_new(0x30);
  *plVar7 = 0;
  plVar7[1] = uVar4;
  FUN_1001b7a88(plVar7 + 2,uVar1);
  plVar7[4] = 0;
  plVar7[5] = 0;
  if ((uVar9 == 0) || ((float)uVar9 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar9) {
      uVar5 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar5 = uVar5 | uVar9 * 2;
    auVar11 = ZEXT416((uint)((float)(param_1[3] + 1) / *(float *)(param_1 + 4)));
    auVar11 = roundss(auVar11,auVar11,10);
    uVar9 = (ulong)auVar11._0_4_;
    uVar9 = (long)(auVar11._0_4_ - _DAT_10070844c) & (long)uVar9 >> 0x3f | uVar9;
    if (uVar9 < uVar5) {
      uVar9 = uVar5;
    }
    FUN_10046039a(param_1,uVar9);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      local_48 = uVar4 & uVar9 - 1;
    }
    else {
      local_48 = uVar4;
      if (uVar9 <= uVar4) {
        local_48 = uVar4 % uVar9;
      }
    }
  }
  lVar2 = *param_1;
  plVar8 = *(long **)(lVar2 + local_48 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar7 = *plVar10;
    *plVar10 = (long)plVar7;
    *(long **)(lVar2 + local_48 * 8) = plVar10;
    if (*plVar7 == 0) goto LAB_10046036c;
    uVar4 = *(ulong *)(*plVar7 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar4 = uVar4 & uVar9 - 1;
    }
    else if (uVar9 <= uVar4) {
      uVar4 = uVar4 % uVar9;
    }
    plVar8 = (long *)(uVar4 * 8 + *param_1);
  }
  else {
    *plVar7 = *plVar8;
  }
  *plVar8 = (long)plVar7;
LAB_10046036c:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}

