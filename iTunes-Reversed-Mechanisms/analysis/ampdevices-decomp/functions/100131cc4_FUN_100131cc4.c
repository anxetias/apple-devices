// name: FUN_100131cc4
// address: 100131cc4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100131cc4(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *extraout_RDX;
  long *extraout_RDX_00;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  long *local_40;
  
  uVar5 = *param_2;
  uVar6 = ((ulong)(uint)((int)uVar5 * 8) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar6 >> 0x2f ^ uVar5 >> 0x20 ^ uVar6) * -0x622015f714c7d297;
  plVar10 = (long *)((uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297);
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar6 = (long)plVar9 - ((ulong)plVar9 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar6 >> 0x38 < 2) {
      local_40 = (long *)((long)plVar9 - 1U & (ulong)plVar10);
    }
    else {
      local_40 = plVar10;
      if (plVar9 <= plVar10) {
        local_40 = (long *)((ulong)plVar10 % (ulong)plVar9);
      }
    }
    puVar1 = *(undefined8 **)(*param_1 + (long)local_40 * 8);
    if ((puVar1 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar1, plVar4 != (long *)0x0)) {
      do {
        plVar3 = (long *)plVar4[1];
        if (plVar3 == plVar10) {
          if (plVar4[2] == uVar5) {
            uVar8 = 0;
            goto LAB_100131f95;
          }
        }
        else {
          if ((byte)(uVar6 >> 0x38) < 2) {
            plVar3 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar3) {
            plVar3 = (long *)((ulong)plVar3 % (ulong)plVar9);
          }
          if (plVar3 != local_40) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  plVar3 = param_1 + 2;
  plVar4 = operator_new(0x50);
  *plVar4 = 0;
  plVar4[1] = (long)plVar10;
  plVar4[2] = *(long *)*param_4;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  if ((plVar9 == (long *)0x0) ||
     (plVar7 = extraout_RDX, (float)plVar9 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if ((long *)0x2 < plVar9) {
      uVar5 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar5 = uVar5 | (long)plVar9 * 2;
    auVar11 = ZEXT416((uint)((float)(param_1[3] + 1) / *(float *)(param_1 + 4)));
    auVar11 = roundss(auVar11,auVar11,10);
    uVar6 = (ulong)auVar11._0_4_;
    uVar6 = (long)(auVar11._0_4_ - _DAT_10070844c) & (long)uVar6 >> 0x3f | uVar6;
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
    FUN_100131fca(param_1,uVar6);
    plVar9 = (long *)param_1[1];
    plVar7 = extraout_RDX_00;
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      local_40 = (long *)((ulong)plVar10 & (long)plVar9 - 1U);
    }
    else {
      local_40 = plVar10;
      if (plVar9 <= plVar10) {
        plVar7 = (long *)((ulong)plVar10 % (ulong)plVar9);
        local_40 = plVar7;
      }
    }
  }
  lVar2 = *param_1;
  plVar10 = *(long **)(lVar2 + (long)local_40 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar2 + (long)local_40 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_100131f8f;
    plVar10 = *(long **)(*plVar4 + 8);
    plVar7 = plVar3;
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      plVar10 = (long *)((ulong)plVar10 & (long)plVar9 - 1U);
    }
    else if (plVar9 <= plVar10) {
      plVar10 = (long *)((ulong)plVar10 % (ulong)plVar9);
      plVar7 = plVar10;
    }
    plVar10 = (long *)((long)plVar10 * 8 + *param_1);
  }
  else {
    *plVar4 = *plVar10;
  }
  *plVar10 = (long)plVar4;
  plVar3 = plVar7;
LAB_100131f8f:
  param_1[3] = param_1[3] + 1;
  uVar8 = CONCAT71((int7)((ulong)plVar3 >> 8),1);
LAB_100131f95:
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = plVar4;
  return auVar11;
}

