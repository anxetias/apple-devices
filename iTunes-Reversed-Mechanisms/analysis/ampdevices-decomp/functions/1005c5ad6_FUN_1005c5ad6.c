// name: FUN_1005c5ad6
// address: 1005c5ad6

bool FUN_1005c5ad6(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  lVar1 = FUN_1001cd685(&cf_MobileDeviceWakeupTokens,0,0);
  if (lVar1 != 0) {
    lVar2 = FUN_100171426(lVar1);
    bVar3 = 0 < lVar2;
  }
  FUN_10017060f(lVar1);
  return bVar3;
}

