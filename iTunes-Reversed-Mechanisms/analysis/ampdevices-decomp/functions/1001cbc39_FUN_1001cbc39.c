// name: FUN_1001cbc39
// address: 1001cbc39

int FUN_1001cbc39(int *param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5
                 ,undefined1 *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_40;
  undefined1 local_31;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ae842(uVar3);
    }
  }
  else {
    if (param_3 != 0 && param_6 != (undefined1 *)0x0) {
      *param_6 = 0;
      iVar2 = FUN_1001c955b(param_1,param_2,0,0,&local_40);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006ae7d6(iVar2,uVar3);
        return iVar2;
      }
      if (local_40 == 0) {
        return 0;
      }
      iVar2 = FUN_1001cad10(local_40,1,&local_31,param_3,param_4,param_5);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006ae76a(iVar2,uVar3);
        }
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      *param_6 = 1;
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ae6f4(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

