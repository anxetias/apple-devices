// name: FUN_10021bfdc
// address: 10021bfdc

void FUN_10021bfdc(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1[1];
  uVar4 = param_2[1];
  uVar3 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar3 >> 0x38 < 2) {
    uVar4 = uVar4 & uVar1 - 1;
  }
  else if (uVar1 <= uVar4) {
    uVar4 = uVar4 % uVar1;
  }
  bVar2 = (byte)(uVar3 >> 0x38);
  if (param_3 == (long *)0x0) {
    *param_2 = param_1[2];
    param_1[2] = (long)param_2;
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    if (*param_2 == 0) goto LAB_10021c0e6;
    uVar3 = *(ulong *)(*param_2 + 8);
    if (bVar2 < 2) {
      uVar3 = uVar3 & uVar1 - 1;
    }
    else if (uVar1 <= uVar3) {
      uVar3 = uVar3 % uVar1;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10021c0e6;
    uVar3 = *(ulong *)(*param_2 + 8);
    if (bVar2 < 2) {
      uVar3 = uVar3 & uVar1 - 1;
    }
    else if (uVar1 <= uVar3) {
      uVar3 = uVar3 % uVar1;
    }
    if (uVar3 == uVar4) goto LAB_10021c0e6;
  }
  *(long **)(*param_1 + uVar3 * 8) = param_2;
LAB_10021c0e6:
  param_1[3] = param_1[3] + 1;
  return;
}

