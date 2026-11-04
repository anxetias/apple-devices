// name: FUN_100180f0c
// address: 100180f0c

undefined8 FUN_100180f0c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
    uVar2 = FUN_100180c2b(param_1,0,param_2,param_3,0);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100688900(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

