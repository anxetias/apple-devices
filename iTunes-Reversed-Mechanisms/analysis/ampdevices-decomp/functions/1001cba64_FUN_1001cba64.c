// name: FUN_1001cba64
// address: 1001cba64

int FUN_1001cba64(int *param_1,ulong param_2,undefined1 param_3,long param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_38;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ae67e(uVar3);
    }
  }
  else {
    if (param_4 != 0) {
      iVar2 = FUN_1001c955b(param_1,param_2,0,0,&local_38);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006ae59c(iVar2,uVar3);
        return iVar2;
      }
      if (local_38 == 0) {
        iVar2 = FUN_1001c9b1d(param_1,&local_38);
        if (iVar2 == -0x80) {
          return -0x80;
        }
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') {
            return iVar2;
          }
          FUN_1006ae530(iVar2,uVar3);
          return iVar2;
        }
        iVar2 = FUN_1001c9f0c(local_38,param_2 & 0xffffffff,0,0);
        if (iVar2 == -0x80) {
          return -0x80;
        }
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') {
            return iVar2;
          }
          FUN_1006ae4c4(iVar2,uVar3);
          return iVar2;
        }
      }
      iVar2 = FUN_1001cacbc(local_38,1,param_3,param_4,param_5);
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
      FUN_1006ae458(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ae608(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

