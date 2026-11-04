// name: FUN_1001739f3
// address: 1001739f3

undefined8
FUN_1001739f3(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined1 param_5,
             undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067f162(uVar2);
    }
  }
  else {
    if (param_4 != -1) {
      uVar2 = _CFStringGetLength();
      auVar3 = FUN_1001704ce(param_2,param_3,uVar2);
      uVar2 = _CFStringGetBytes(param_1,auVar3._0_8_,auVar3._8_8_,param_4,param_5,param_6);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067f0ec(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

