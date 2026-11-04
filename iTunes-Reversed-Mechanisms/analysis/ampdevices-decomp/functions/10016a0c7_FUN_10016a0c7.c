// name: FUN_10016a0c7
// address: 10016a0c7

undefined8
FUN_10016a0c7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar2 = FUN_1001726ca(DAT_1008c4d90);
  uVar7 = DAT_1008c4d90;
  if (lVar2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_100677ef4(uVar7);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  uVar3 = FUN_100170f3b(lVar2);
  uVar4 = FUN_100170ef7(lVar2);
  lVar5 = FUN_100173ab4(uVar7,uVar3,uVar4,0x8000100,0);
  if (lVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_100677e7e(uVar7);
    }
  }
  else {
    lVar6 = FUN_100173d62(lVar5,param_3,0);
    auVar8 = FUN_100173d62(lVar5,param_4,4);
    if (lVar6 < auVar8._0_8_) {
      uVar7 = FUN_100173623(param_1,lVar5,lVar6,(auVar8._8_8_ - lVar6) + auVar8._0_8_);
      goto LAB_10016a1de;
    }
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_100677e08(uVar7);
    }
  }
  uVar7 = 0;
  FUN_1001782e9(0,0);
LAB_10016a1de:
  FUN_10017060f(lVar2);
  FUN_10017060f(lVar5);
  return uVar7;
}

