// name: FUN_1001fbb79
// address: 1001fbb79

int FUN_1001fbb79(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006cce1d(uVar3);
    }
  }
  else {
    if (param_3 != 0) {
      iVar2 = FUN_1001f975b(param_1,param_2,0,0,0);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 == 0) {
        iVar2 = FUN_1001f9964(param_1,param_3,param_4,0);
        FUN_1001f9a8d(param_1);
        return iVar2;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006ccd3b(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ccda7(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

