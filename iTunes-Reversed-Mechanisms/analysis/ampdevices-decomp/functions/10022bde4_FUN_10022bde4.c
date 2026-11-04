// name: FUN_10022bde4
// address: 10022bde4

void FUN_10022bde4(long *param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = param_1[1] - *param_1 >> 2;
  bVar2 = param_2 < (ulong)(lVar1 * -0x7f01fc07f01fc07f);
  lVar1 = param_2 + lVar1 * 0x7f01fc07f01fc07f;
  if (!bVar2 && lVar1 != 0) {
    FUN_10022be2c(param_1,lVar1);
    return;
  }
  if (bVar2) {
    param_1[1] = *param_1 + param_2 * 0x204;
  }
  return;
}

