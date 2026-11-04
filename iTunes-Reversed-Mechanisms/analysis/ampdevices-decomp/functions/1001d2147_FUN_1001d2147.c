// name: FUN_1001d2147
// address: 1001d2147

undefined8 FUN_1001d2147(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b25d6(uVar2);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2560(uVar2);
    }
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    if (*(long **)(param_1 + 0x18) == (long *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b24ea(uVar2);
      }
    }
    else {
      if (*(int *)(param_1 + 0x20) == 0x44) {
        *(bool *)param_2 = **(long **)(param_1 + 0x18) != 0;
        return 0;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b2474(uVar2);
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b23fe(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

