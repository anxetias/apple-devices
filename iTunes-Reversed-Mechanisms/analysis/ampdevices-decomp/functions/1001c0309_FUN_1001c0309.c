// name: FUN_1001c0309
// address: 1001c0309

undefined8 FUN_1001c0309(ulong param_1,void *param_2,ulong param_3,void *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a462b(uVar2);
    }
  }
  else if (param_2 == (void *)0x0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a45b5(uVar2);
    }
  }
  else if (param_3 < param_1) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a453f(uVar2);
    }
  }
  else {
    if (param_4 != (void *)0x0) {
      _memcpy(param_4,param_2,param_1);
      return 0;
    }
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a44c9(uVar2);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

