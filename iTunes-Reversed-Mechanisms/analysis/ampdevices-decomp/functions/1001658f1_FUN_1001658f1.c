// name: FUN_1001658f1
// address: 1001658f1

undefined8 FUN_1001658f1(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined2 *)0x0) {
    uVar2 = FUN_1001734b1(param_1,param_2 + 1,*param_2);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006730aa(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

