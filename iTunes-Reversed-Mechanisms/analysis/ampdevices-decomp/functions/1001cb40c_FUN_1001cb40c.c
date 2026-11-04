// name: FUN_1001cb40c
// address: 1001cb40c

int FUN_1001cb40c(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *in_stack_00000008;
  undefined8 local_20;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006adfee(uVar3);
    }
  }
  else {
    if (in_stack_00000008 != (undefined2 *)0x0) {
      *in_stack_00000008 = 0;
      iVar2 = FUN_1001c97e8();
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006adf0c(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = FUN_1001cb315(local_20,in_stack_00000008);
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
      FUN_1006adea0(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006adf78(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

