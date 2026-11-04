// name: FUN_1001708fc
// address: 1001708fc

undefined8 FUN_1001708fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100679b30(uVar2);
    }
  }
  else {
    if (param_4 != 0) {
      uVar2 = _CFArrayGetCount();
      auVar3 = FUN_1001704ce(param_2,param_3,uVar2);
      uVar2 = _CFArrayGetFirstIndexOfValue(param_1,auVar3._0_8_,auVar3._8_8_,param_4);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100679aba(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffffffffffff;
}

