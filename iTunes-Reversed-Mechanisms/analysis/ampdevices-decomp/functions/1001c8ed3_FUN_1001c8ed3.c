// name: FUN_1001c8ed3
// address: 1001c8ed3

int FUN_1001c8ed3(int *param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab38e(uVar3);
    }
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab318(uVar3);
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      if (*(long *)(param_1 + 2) == 0) {
        return 0;
      }
      iVar2 = FUN_10015ce0a();
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006ab236(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab2a2(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

