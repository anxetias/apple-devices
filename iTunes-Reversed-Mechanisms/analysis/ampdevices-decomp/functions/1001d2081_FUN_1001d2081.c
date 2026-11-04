// name: FUN_1001d2081
// address: 1001d2081

undefined8 FUN_1001d2081(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2388(uVar2);
    }
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b2312(uVar2);
      }
    }
    else {
      if (*(int *)(param_1 + 0x20) == 0x44) {
        return **(undefined8 **)(param_1 + 0x18);
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b229c(uVar2);
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2226(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

