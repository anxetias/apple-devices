// name: FUN_10016b310
// address: 10016b310

ulong FUN_10016b310(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long local_20;
  
  lVar2 = param_1[9];
  if (lVar2 == 0) {
    uVar3 = CONCAT71((int7)((ulong)param_1 >> 8),(int)param_1[2] == 1);
  }
  else {
    if (*param_1 != 0) {
      _CFRelease();
      lVar2 = param_1[9];
    }
    *param_1 = param_1[1];
    param_1[1] = 0;
    local_20 = param_1[3];
    param_1[3] = 0;
    uVar3 = (param_1[8] + lVar2) - 1;
    FUN_10016b026(param_1 + 1,(uVar3 % 0xaa) * 0x18 + *(long *)(param_1[5] + (uVar3 / 0xaa) * 8));
    FUN_10016fe18(param_1 + 4);
    uVar1 = FUN_10016b236(param_1,local_20);
    uVar3 = (ulong)uVar1;
    FUN_10016f5f2(&local_20);
  }
  return uVar3 & 0xffffffff;
}

