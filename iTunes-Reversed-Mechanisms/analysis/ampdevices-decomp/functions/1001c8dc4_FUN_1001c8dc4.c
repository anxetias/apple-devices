// name: FUN_1001c8dc4
// address: 1001c8dc4

undefined8 FUN_1001c8dc4(int *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab0d4(uVar2);
    }
  }
  else {
    if (*(long *)(param_1 + 2) != 0) {
      uVar2 = FUN_10015d357(param_2,*(long *)(param_1 + 2),0);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab05e(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

