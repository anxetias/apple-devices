// name: FUN_10020c453
// address: 10020c453

void FUN_10020c453(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_10017076e(param_3);
  if (0 < lVar1) {
    lVar3 = 0;
    do {
      uVar2 = FUN_100164a01(param_3,lVar3);
      FUN_10020c0a8(param_1,param_2,uVar2,param_4);
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}

