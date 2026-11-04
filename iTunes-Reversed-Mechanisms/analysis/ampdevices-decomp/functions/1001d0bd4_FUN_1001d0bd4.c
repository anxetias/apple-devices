// name: FUN_1001d0bd4
// address: 1001d0bd4

int FUN_1001d0bd4(long param_1,long param_2,int param_3,code *param_4,undefined8 param_5,
                 char *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 local_70 [8];
  char local_68;
  char local_67;
  undefined8 local_58;
  undefined8 local_48;
  code *local_40;
  char *local_38;
  
  if (param_2 == 0 || param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b10e4(uVar3);
    }
  }
  else {
    if (param_4 != (code *)0x0 && param_6 != (char *)0x0) {
      local_48 = param_5;
      local_40 = param_4;
      iVar2 = FUN_1001cf1e5();
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006b11d0(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = FUN_1001cf3f5(param_1);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006b123c(iVar2,uVar3);
        return iVar2;
      }
      *param_6 = '\0';
      local_38 = param_6;
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar4 = 0;
        do {
          iVar2 = FUN_1001cf495(param_1,uVar4,local_70);
          if ((iVar2 == 0) && (local_67 != '\0')) {
            if (local_68 == '\0') {
              iVar2 = (*local_40)(local_70,param_2,param_3,local_48,local_38);
            }
            else {
              iVar2 = FUN_1001d0bd4(local_58,param_2,param_3,local_40,local_48,local_38);
            }
            if (iVar2 != 0) goto LAB_1001d0d95;
            if ((*local_38 == '\0') == ((*(byte *)(param_1 + 0xc) & 1) == 0)) break;
          }
          else if (iVar2 != 0) goto LAB_1001d0d95;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x10));
      }
      iVar2 = 0;
      if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
        *local_38 = *local_38 == '\0';
      }
LAB_1001d0d95:
      FUN_1001cf778(param_1);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b115a(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

