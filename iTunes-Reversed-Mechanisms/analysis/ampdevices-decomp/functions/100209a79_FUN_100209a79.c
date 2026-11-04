// name: FUN_100209a79
// address: 100209a79

long FUN_100209a79(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_1001c1ec5();
    uVar2 = FUN_100171d85(DAT_1008c4d90,uVar1);
    lVar3 = FUN_100166c1b(param_1,uVar2);
    FUN_10017060f(uVar2);
    FUN_10017060f(uVar1);
    if (lVar3 == 0) {
      uVar1 = FUN_1001c1d9c();
      lVar3 = FUN_100166c1b(param_1,uVar1);
      FUN_10017060f(uVar1);
    }
  }
  return lVar3;
}

