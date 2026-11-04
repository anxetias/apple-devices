// name: FUN_10017c0ba
// address: 10017c0ba

void FUN_10017c0ba(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = 0;
    if (param_2 - 1U < 4) {
      uVar1 = *(undefined4 *)(&DAT_10070e530 + (ulong)(param_2 - 1U) * 4);
    }
    _CGContextSetInterpolationQuality(*(long *)(param_1 + 8),uVar1);
    return;
  }
  return;
}

