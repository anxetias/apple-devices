// name: FUN_100173cc6
// address: 100173cc6

undefined8
FUN_100173cc6(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 != 0) {
    uVar2 = _CFStringGetLength();
    auVar3 = FUN_1001704ce(param_3,param_4,uVar2);
    uVar2 = _CFStringFindCharacterFromSet(param_1,param_2,auVar3._0_8_,auVar3._8_8_,param_5,param_6)
    ;
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10067f512(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

