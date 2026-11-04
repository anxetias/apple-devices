// name: FUN_1001d1e7a
// address: 1001d1e7a

undefined8 FUN_1001d1e7a(long param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b1f62(uVar2);
    }
  }
  else if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b1eec(uVar2);
    }
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b1e76(uVar2);
      }
    }
    else {
      if (*(uint *)(param_1 + 0x20) < 0x1ff) {
        *param_2 = (short)(*(uint *)(param_1 + 0x20) >> 1);
        FUN_1001c631b(*(undefined8 *)(param_1 + 0x18),param_2 + 1,*(undefined4 *)(param_1 + 0x20));
        return 0;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b1e00(uVar2);
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b1d8a(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

