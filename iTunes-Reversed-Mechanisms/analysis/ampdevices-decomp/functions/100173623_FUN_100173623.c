// name: FUN_100173623
// address: 100173623

undefined8 FUN_100173623(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 != 0) {
    uVar2 = _CFStringGetLength(param_2);
    auVar3 = FUN_1001704ce(param_3,param_4,uVar2);
    uVar2 = _CFStringCreateWithSubstring(param_1,param_2,auVar3._0_8_,auVar3._8_8_);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10067ec50(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

