// name: FUN_1002b7a0e
// address: 1002b7a0e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1002b7a0e(long *param_1,uint *param_2,ulong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong in_RAX;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulong local_38;
  
  uVar1 = *param_2;
  uVar7 = (ulong)uVar1;
  uVar9 = param_1[1];
  local_38 = in_RAX;
  if (uVar9 != 0) {
    uVar4 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar4 >> 0x38 < 2) {
      local_38 = (ulong)(uVar1 & (int)uVar9 - 1U);
    }
    else {
      local_38 = uVar7;
      if (uVar9 <= uVar7) {
        local_38 = uVar7 % (uVar9 & 0xffffffff);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + local_38 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (puVar6 = (ulong *)*puVar2, puVar6 != (ulong *)0x0)) {
      do {
        uVar5 = puVar6[1];
        if (uVar5 == uVar7) {
          if ((uint)puVar6[2] == uVar1) {
            uVar10 = 0;
            goto LAB_1002b7c78;
          }
        }
        else {
          if ((byte)(uVar4 >> 0x38) < 2) {
            uVar5 = uVar5 & uVar9 - 1;
          }
          else if (uVar9 <= uVar5) {
            uVar5 = uVar5 % uVar9;
          }
          if (uVar5 != local_38) break;
        }
        puVar6 = (ulong *)*puVar6;
      } while (puVar6 != (ulong *)0x0);
    }
  }
  puVar6 = operator_new(0x20);
  *puVar6 = 0;
  puVar6[1] = uVar7;
  uVar4 = param_3[1];
  puVar6[2] = *param_3;
  puVar6[3] = uVar4;
  if ((uVar9 == 0) ||
     (uVar4 = extraout_RDX, (float)uVar9 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 * 2;
    auVar11 = ZEXT416((uint)((float)(param_1[3] + 1) / *(float *)(param_1 + 4)));
    auVar11 = roundss(auVar11,auVar11,10);
    uVar9 = (ulong)auVar11._0_4_;
    uVar9 = (long)(auVar11._0_4_ - _DAT_10070844c) & (long)uVar9 >> 0x3f | uVar9;
    if (uVar9 < uVar4) {
      uVar9 = uVar4;
    }
    FUN_1002b7ca2(param_1,uVar9);
    uVar9 = param_1[1];
    uVar4 = extraout_RDX_00;
    if ((uVar9 & uVar9 - 1) == 0) {
      local_38 = (ulong)(uVar1 & (int)uVar9 - 1U);
    }
    else {
      local_38 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = uVar7 % uVar9;
        local_38 = uVar4;
      }
    }
  }
  lVar3 = *param_1;
  puVar8 = *(ulong **)(lVar3 + local_38 * 8);
  if (puVar8 == (ulong *)0x0) {
    uVar4 = param_1[2];
    *puVar6 = uVar4;
    param_1[2] = (long)puVar6;
    *(long **)(lVar3 + local_38 * 8) = param_1 + 2;
    if (*puVar6 == 0) goto LAB_1002b7c72;
    uVar7 = *(ulong *)(*puVar6 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar7 = uVar7 & uVar9 - 1;
    }
    else if (uVar9 <= uVar7) {
      uVar7 = uVar7 % uVar9;
      uVar4 = uVar7;
    }
    puVar8 = (ulong *)(uVar7 * 8 + *param_1);
  }
  else {
    *puVar6 = *puVar8;
  }
  *puVar8 = (ulong)puVar6;
LAB_1002b7c72:
  param_1[3] = param_1[3] + 1;
  uVar10 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_1002b7c78:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = puVar6;
  return auVar11;
}

