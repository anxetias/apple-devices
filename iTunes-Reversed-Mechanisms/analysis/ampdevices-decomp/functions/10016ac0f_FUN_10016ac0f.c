// name: FUN_10016ac0f
// address: 10016ac0f

long FUN_10016ac0f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = FUN_1001704bb();
  lVar3 = FUN_10016ff43(uVar2,param_2);
  if (lVar3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100678890(uVar2);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = FUN_1001e5b1d(param_3);
    if (lVar4 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_10067881a(uVar2);
      }
      lVar5 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar5 = FUN_100174a21(uVar2,lVar3,lVar4,param_4);
      if (lVar5 == 0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_1006787a4(uVar2);
        }
        FUN_1001782e9(0,0);
      }
      FUN_10017060f(lVar4);
    }
    FUN_10017060f(lVar3);
  }
  return lVar5;
}

