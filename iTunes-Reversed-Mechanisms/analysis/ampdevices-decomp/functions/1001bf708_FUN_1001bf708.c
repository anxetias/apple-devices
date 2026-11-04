// name: FUN_1001bf708
// address: 1001bf708

undefined8 FUN_1001bf708(long param_1,ulong param_2,void *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0 || param_3 != (void *)0x0) && (param_2 == 0 || param_3 == (void *)0x0)) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3b32(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3ba8(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3c1e(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  if (param_3 != (void *)0x0 && param_2 != 0) {
    plVar3 = (long *)(param_1 + 0x18);
    if (8 < param_2) {
      plVar3 = (long *)FUN_1001c63e1(param_2);
      *(long *)(param_1 + 0x18) = (long)plVar3;
      if (plVar3 == (long *)0x0) {
        uVar2 = FUN_1001cc310();
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_1006a3c94(uVar2);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar2);
        FUN_1001782e9(0,0);
        return 0xffffff94;
      }
    }
    _memcpy(plVar3,param_3,param_2);
    *(ulong *)(param_1 + 0x20) = param_2;
  }
  return 0;
}

