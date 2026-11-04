// name: FUN_1001e7a68
// address: 1001e7a68

undefined2 FUN_1001e7a68(undefined8 param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_100171d7b();
  lVar3 = FUN_100172170(0,uVar2,0);
  if (lVar3 == 0) {
    uVar1 = 0xfffd;
  }
  else {
    lVar4 = FUN_100172244(lVar3,param_1);
    if (lVar4 == 0) {
      uVar1 = 0xfffd;
    }
    else {
      uVar1 = FUN_10017380b(lVar4,0);
      FUN_10017060f(lVar4);
    }
    FUN_10017060f(lVar3);
  }
  FUN_10017060f(uVar2);
  return uVar1;
}

