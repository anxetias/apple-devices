// name: FUN_10022ba82
// address: 10022ba82

void FUN_10022ba82(long *param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = param_1[1] - *param_1 >> 2;
  bVar2 = param_2 < (ulong)(lVar1 * -0x5555555555555555);
  lVar1 = param_2 + lVar1 * 0x5555555555555555;
  if (!bVar2 && lVar1 != 0) {
    FUN_10022bac4(param_1,lVar1);
    return;
  }
  if (bVar2) {
    param_1[1] = *param_1 + param_2 * 0xc;
  }
  return;
}

