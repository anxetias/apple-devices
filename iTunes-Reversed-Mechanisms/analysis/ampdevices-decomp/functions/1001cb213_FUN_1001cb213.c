// name: FUN_1001cb213
// address: 1001cb213

int FUN_1001cb213(long param_1,undefined8 param_2,undefined2 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ade2a(uVar3);
    }
  }
  else {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = 0;
      iVar2 = FUN_1001c955b(param_1,param_2,0,0,&local_20);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006add48(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = FUN_1001cb315(local_20,param_3);
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
      FUN_1006adcdc(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006addb4(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

