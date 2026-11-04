// name: FUN_1001724e6
// address: 1001724e6

void FUN_1001724e6(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067cb96(uVar2);
    }
  }
  else if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067cb20(uVar2);
    }
  }
  else if (param_4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067caaa(uVar2);
    }
  }
  else {
    if (param_5 != 0) {
      _CFPreferencesSetValue();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067ca34(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

