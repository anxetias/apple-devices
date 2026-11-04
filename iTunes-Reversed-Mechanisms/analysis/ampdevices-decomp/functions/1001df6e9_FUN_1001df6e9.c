// name: FUN_1001df6e9
// address: 1001df6e9

bool FUN_1001df6e9(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_3 & 2) != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba0c9(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba1b5(uVar3);
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      iVar2 = FUN_1001df3ce(param_1 + 1,*param_1,param_2 + 1,*param_2,param_3);
      return iVar2 == 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba13f(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return false;
}

