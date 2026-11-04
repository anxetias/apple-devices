// name: FUN_1001cbd9e
// address: 1001cbd9e

int FUN_1001cbd9e(int *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  long in_RAX;
  undefined8 uVar3;
  long local_28;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006aea06(uVar3);
    }
  }
  else {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
      local_28 = in_RAX;
      iVar2 = FUN_1001c955b(param_1,param_2,0,0,&local_28);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 == 0) {
        if (local_28 != 0) {
          iVar2 = FUN_1001ca7a7(local_28,1,0,param_3);
          if (iVar2 != 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 == '\0') {
              return iVar2;
            }
            FUN_1006ae8b8(iVar2,uVar3);
            return iVar2;
          }
          *param_4 = 1;
        }
        return 0;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006ae924(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ae990(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

