// name: FUN_1001656af
// address: 1001656af

undefined8 FUN_1001656af(undefined8 param_1,undefined2 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined2 *)0x0) {
    uVar2 = FUN_1001735df(param_1,param_2 + 1,*param_2,param_3);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100673034(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

