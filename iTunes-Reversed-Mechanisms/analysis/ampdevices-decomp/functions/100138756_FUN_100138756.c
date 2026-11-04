// name: FUN_100138756
// address: 100138756

undefined8 * FUN_100138756(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = param_2[1];
  uVar6 = param_3[1];
  uVar4 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar4 >> 0x38 < 2) {
    uVar6 = uVar6 & uVar1 - 1;
  }
  else if (uVar1 <= uVar6) {
    uVar6 = uVar6 % uVar1;
  }
  plVar3 = *(long **)(*param_2 + uVar6 * 8);
  do {
    plVar5 = plVar3;
    plVar3 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  bVar2 = (byte)(uVar4 >> 0x38);
  if (plVar5 != param_2 + 2) {
    uVar4 = plVar5[1];
    if (bVar2 < 2) {
      uVar4 = uVar4 & uVar1 - 1;
    }
    else if (uVar1 <= uVar4) {
      uVar4 = uVar4 % uVar1;
    }
    if (uVar4 == uVar6) goto LAB_100138856;
  }
  if (*param_3 != 0) {
    uVar4 = *(ulong *)(*param_3 + 8);
    if (bVar2 < 2) {
      uVar4 = uVar4 & uVar1 - 1;
    }
    else if (uVar1 <= uVar4) {
      uVar4 = uVar4 % uVar1;
    }
    if (uVar4 == uVar6) goto LAB_100138856;
  }
  *(undefined8 *)(*param_2 + uVar6 * 8) = 0;
LAB_100138856:
  lVar7 = *param_3;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    uVar4 = *(ulong *)(lVar7 + 8);
    if (bVar2 < 2) {
      uVar4 = uVar4 & uVar1 - 1;
    }
    else if (uVar1 <= uVar4) {
      uVar4 = uVar4 % uVar1;
    }
    if (uVar4 != uVar6) {
      *(long **)(*param_2 + uVar4 * 8) = plVar5;
      lVar7 = *param_3;
    }
  }
  *plVar5 = lVar7;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}

