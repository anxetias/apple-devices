// name: FUN_1001e4608
// address: 1001e4608

void FUN_1001e4608(undefined2 *param_1,undefined2 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bda84(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bdb0c(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001e43b6(param_1 + 1,*param_1,param_2 + 1,*param_2,param_3);
  return;
}

