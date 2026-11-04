// name: FUN_1001f361e
// address: 1001f361e

undefined8 FUN_1001f361e(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 != (undefined2 *)0x0) {
    uVar2 = FUN_1001f2c28(param_1,param_2,param_3 + 1,*param_3);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006c7555(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

