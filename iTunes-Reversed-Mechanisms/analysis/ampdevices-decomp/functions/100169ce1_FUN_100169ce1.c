// name: FUN_100169ce1
// address: 100169ce1

undefined1 FUN_100169ce1(long param_1,undefined8 param_2,long param_3,undefined2 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0 || param_4 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067796a(uVar2);
    }
  }
  else {
    if (param_3 < 0x100) {
      uVar2 = _CFStringGetLength();
      auVar3 = FUN_1001704c4(param_2,param_3,uVar2);
      _CFStringGetCharacters(param_1,auVar3._0_8_,auVar3._8_8_,param_4 + 1);
      *param_4 = auVar3._8_2_;
      return 1;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006779e0(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

