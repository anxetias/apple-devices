// name: FUN_1001d1f8e
// address: 1001d1f8e

undefined8 FUN_1001d1f8e(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b21b0(uVar2);
    }
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b213a(uVar2);
    }
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b20c4(uVar2);
      }
    }
    else {
      if (*(int *)(param_1 + 0x20) == 0x44) {
        *param_2 = **(undefined8 **)(param_1 + 0x18);
        return 0;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b204e(uVar2);
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b1fd8(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

