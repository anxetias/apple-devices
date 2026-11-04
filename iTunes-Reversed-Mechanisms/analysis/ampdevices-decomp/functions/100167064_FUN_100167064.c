// name: FUN_100167064
// address: 100167064

undefined1 FUN_100167064(long param_1,long param_2,undefined1 *param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067446a(uVar3);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006743f4(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067437e(uVar3);
    }
  }
  else {
    lVar2 = FUN_100166c1b();
    if (lVar2 == 0) goto LAB_100167143;
    cVar1 = _CFStringGetCString(lVar2,param_3,param_4,0x8000100);
    if (cVar1 != '\0') {
      return 1;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100674308(uVar3);
    }
  }
  FUN_1001782e9(0,0);
LAB_100167143:
  *param_3 = 0;
  return 0;
}

