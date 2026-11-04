// name: FUN_1001738c9
// address: 1001738c9

undefined8 FUN_1001738c9(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067ef14(uVar2);
    }
  }
  else {
    if (param_4 != -1) {
      uVar2 = _CFStringGetPascalString();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067ee9e(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

