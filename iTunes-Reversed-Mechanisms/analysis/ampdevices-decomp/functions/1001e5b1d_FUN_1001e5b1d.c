// name: FUN_1001e5b1d
// address: 1001e5b1d

undefined8 FUN_1001e5b1d(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined2 *)0x0) {
    uVar2 = FUN_1001734b1(DAT_1008c4d90,param_1 + 1,*param_1);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006beea2(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

