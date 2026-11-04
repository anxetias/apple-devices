// name: FUN_100164b00
// address: 100164b00

undefined1 FUN_100164b00(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006723c6(uVar3);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100672350(uVar3);
    }
  }
  else {
    lVar2 = FUN_100164a01();
    if (lVar2 == 0) goto LAB_100164bab;
    cVar1 = _CFStringGetCString(lVar2,param_3,param_4,0x8000100);
    if (cVar1 != '\0') {
      return 1;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006722da(uVar3);
    }
  }
  FUN_1001782e9(0,0);
LAB_100164bab:
  *param_3 = 0;
  return 0;
}

