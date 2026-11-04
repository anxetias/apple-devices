// name: FUN_100323632
// address: 100323632

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100323632(long *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong in_RAX;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  ulong local_38;
  
  uVar6 = *param_2;
  uVar8 = param_1[1];
  local_38 = in_RAX;
  if (uVar8 != 0) {
    uVar3 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar3 >> 0x38 < 2) {
      local_38 = uVar8 - 1 & uVar6;
    }
    else {
      local_38 = uVar6;
      if (uVar8 <= uVar6) {
        local_38 = uVar6 % uVar8;
      }
    }
    puVar1 = *(undefined8 **)(*param_1 + local_38 * 8);
    if ((puVar1 != (undefined8 *)0x0) && (puVar5 = (ulong *)*puVar1, puVar5 != (ulong *)0x0)) {
      do {
        uVar4 = puVar5[1];
        if (uVar4 == uVar6) {
          if (puVar5[2] == uVar6) {
            uVar9 = 0;
            goto LAB_100323891;
          }
        }
        else {
          if ((byte)(uVar3 >> 0x38) < 2) {
            uVar4 = uVar4 & uVar8 - 1;
          }
          else if (uVar8 <= uVar4) {
            uVar4 = uVar4 % uVar8;
          }
          if (uVar4 != local_38) break;
        }
        puVar5 = (ulong *)*puVar5;
      } while (puVar5 != (ulong *)0x0);
    }
  }
  puVar5 = operator_new(0x20);
  *puVar5 = 0;
  puVar5[1] = uVar6;
  uVar3 = param_3[1];
  puVar5[2] = *param_3;
  puVar5[3] = uVar3;
  if ((uVar8 == 0) ||
     (uVar3 = extraout_RDX, (float)uVar8 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 * 2;
    auVar10 = ZEXT416((uint)((float)(param_1[3] + 1) / *(float *)(param_1 + 4)));
    auVar10 = roundss(auVar10,auVar10,10);
    uVar8 = (ulong)auVar10._0_4_;
    uVar8 = (long)(auVar10._0_4_ - _DAT_10070844c) & (long)uVar8 >> 0x3f | uVar8;
    if (uVar8 < uVar3) {
      uVar8 = uVar3;
    }
    FUN_1003238ba(param_1,uVar8);
    uVar8 = param_1[1];
    uVar3 = extraout_RDX_00;
    if ((uVar8 & uVar8 - 1) == 0) {
      local_38 = uVar6 & uVar8 - 1;
    }
    else {
      local_38 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = uVar6 % uVar8;
        local_38 = uVar3;
      }
    }
  }
  lVar2 = *param_1;
  puVar7 = *(ulong **)(lVar2 + local_38 * 8);
  if (puVar7 == (ulong *)0x0) {
    uVar3 = param_1[2];
    *puVar5 = uVar3;
    param_1[2] = (long)puVar5;
    *(long **)(lVar2 + local_38 * 8) = param_1 + 2;
    if (*puVar5 == 0) goto LAB_10032388a;
    uVar6 = *(ulong *)(*puVar5 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar6 = uVar6 & uVar8 - 1;
    }
    else if (uVar8 <= uVar6) {
      uVar6 = uVar6 % uVar8;
      uVar3 = uVar6;
    }
    puVar7 = (ulong *)(uVar6 * 8 + *param_1);
  }
  else {
    *puVar5 = *puVar7;
  }
  *puVar7 = (ulong)puVar5;
LAB_10032388a:
  param_1[3] = param_1[3] + 1;
  uVar9 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_100323891:
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = puVar5;
  return auVar10;
}

