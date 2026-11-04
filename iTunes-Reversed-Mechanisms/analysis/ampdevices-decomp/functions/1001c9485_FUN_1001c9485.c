// name: FUN_1001c9485
// address: 1001c9485

undefined8 FUN_1001c9485(int *param_1,uint param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006abac6(uVar2);
    }
  }
  else if (param_3 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006aba50(uVar2);
    }
  }
  else {
    *param_3 = 0;
    if (*(long *)(param_1 + 6) == 0) {
      return 0;
    }
    plVar3 = *(long **)(*(long *)(param_1 + 6) + 0x10);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    uVar4 = 0;
    do {
      if (param_2 == uVar4) {
        *param_3 = (long)plVar3;
        return 0;
      }
      uVar4 = uVar4 + 1;
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    if (uVar4 <= param_2) {
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab9da(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

