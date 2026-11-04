// name: FUN_100197d52
// address: 100197d52

undefined8 FUN_100197d52(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar2 = FUN_10017478a();
  if (lVar2 == 0) {
    bVar5 = false;
  }
  else {
    cVar1 = FUN_100169eb1(lVar2,&cf_https);
    bVar5 = cVar1 != '\0';
  }
  FUN_10017060f(lVar2);
  lVar2 = FUN_100197cd9(param_1,bVar5);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100170651(lVar2);
    lVar4 = FUN_1001718b2(uVar3,lVar2);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_100166c1b(lVar4,&cf_Cookie);
      FUN_1001705fc(uVar3);
      FUN_10017060f(lVar4);
    }
    FUN_10017060f(lVar2);
  }
  return uVar3;
}

