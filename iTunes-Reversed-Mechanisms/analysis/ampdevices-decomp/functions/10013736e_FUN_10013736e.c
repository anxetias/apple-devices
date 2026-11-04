// name: FUN_10013736e
// address: 10013736e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10013736e(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_R12;
  long *plVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *local_58 [3];
  long *local_40;
  undefined8 local_38;
  
  plVar3 = (long *)FUN_1001bd420(param_2);
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar4 = (long)plVar9 - ((ulong)plVar9 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar4 >> 0x38 < 2) {
      unaff_R12 = (long *)((long)plVar9 - 1U & (ulong)plVar3);
    }
    else {
      unaff_R12 = plVar3;
      if (plVar9 <= plVar3) {
        unaff_R12 = (long *)((ulong)plVar3 % (ulong)plVar9);
      }
    }
    puVar1 = *(undefined8 **)(*param_1 + (long)unaff_R12 * 8);
    local_38 = param_3;
    if ((puVar1 != (undefined8 *)0x0) &&
       (plVar7 = (long *)*puVar1, local_40 = param_1, plVar7 != (long *)0x0)) {
      do {
        plVar5 = (long *)plVar7[1];
        if (plVar5 == plVar3) {
          iVar2 = FUN_1001b9c66(plVar7 + 2,param_2);
          if (iVar2 == 0) {
            uVar8 = 0;
            local_58[0] = plVar7;
            goto LAB_1001375fc;
          }
        }
        else {
          if ((byte)(uVar4 >> 0x38) < 2) {
            plVar5 = (long *)((ulong)plVar5 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar5) {
            plVar5 = (long *)((ulong)plVar5 % (ulong)plVar9);
          }
          param_1 = local_40;
          param_3 = local_38;
          if (plVar5 != unaff_R12) break;
        }
        plVar7 = (long *)*plVar7;
        param_1 = local_40;
        param_3 = local_38;
      } while (plVar7 != (long *)0x0);
    }
  }
  auVar11._0_8_ = FUN_100137628(local_58,param_1,plVar3,param_3);
  auVar11._8_8_ = extraout_XMM0_Qb;
  auVar10._4_12_ = auVar11._4_12_;
  if ((plVar9 == (long *)0x0) || ((float)plVar9 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))
     ) {
    uVar4 = 1;
    if ((long *)0x2 < plVar9) {
      uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar9 * 2;
    auVar10._0_4_ = (float)(param_1[3] + 1) / *(float *)(param_1 + 4);
    auVar11 = roundss(auVar10,auVar10,10);
    uVar6 = (ulong)auVar11._0_4_;
    uVar6 = (long)(auVar11._0_4_ - _DAT_10070844c) & (long)uVar6 >> 0x3f | uVar6;
    if (uVar6 < uVar4) {
      uVar6 = uVar4;
    }
    FUN_1001376ce(param_1,uVar6);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_R12 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
    }
    else {
      unaff_R12 = plVar3;
      if (plVar9 <= plVar3) {
        unaff_R12 = (long *)((ulong)plVar3 % (ulong)plVar9);
      }
    }
  }
  plVar3 = *(long **)(*param_1 + (long)unaff_R12 * 8);
  plVar7 = local_58[0];
  if (plVar3 == (long *)0x0) {
    *local_58[0] = param_1[2];
    param_1[2] = (long)local_58[0];
    *(long **)(*param_1 + (long)unaff_R12 * 8) = param_1 + 2;
    if (*local_58[0] != 0) {
      plVar3 = *(long **)(*local_58[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar3 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar3) {
        plVar3 = (long *)((ulong)plVar3 % (ulong)plVar9);
        plVar7 = plVar3;
      }
      *(long **)(*param_1 + (long)plVar3 * 8) = local_58[0];
    }
  }
  else {
    *local_58[0] = *plVar3;
    *plVar3 = (long)local_58[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar8 = CONCAT71((int7)((ulong)plVar7 >> 8),1);
LAB_1001375fc:
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = local_58[0];
  return auVar12;
}

