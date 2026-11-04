// name: FUN_1001e58b2
// address: 1001e58b2

undefined8 FUN_1001e58b2(long param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006beaf2(uVar2);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != 0) {
      uVar2 = FUN_1001e5932(param_1,param_2,0xff);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bea7c(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

