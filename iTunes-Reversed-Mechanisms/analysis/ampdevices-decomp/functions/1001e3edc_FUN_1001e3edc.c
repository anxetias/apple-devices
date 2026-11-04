// name: FUN_1001e3edc
// address: 1001e3edc

undefined1 FUN_1001e3edc(undefined2 *param_1,undefined2 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bd500(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bd588(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  uVar2 = FUN_1001e339d(param_1 + 1,*param_1,param_2 + 1,*param_2,param_3);
  return uVar2;
}

