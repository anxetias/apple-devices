// name: FUN_1001e5e36
// address: 1001e5e36

undefined8 FUN_1001e5e36(long param_1,undefined1 *param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined1 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf42a(uVar2);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006bf3b4(uVar2);
      }
    }
    else {
      if (1 < param_3) {
        cVar1 = FUN_10017393c();
        if (cVar1 == '\0') {
          return 0xffffffce;
        }
        return 0;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006bf33e(uVar2);
      }
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

