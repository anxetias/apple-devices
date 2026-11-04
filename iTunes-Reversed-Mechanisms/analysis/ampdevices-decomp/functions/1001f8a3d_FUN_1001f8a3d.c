// name: FUN_1001f8a3d
// address: 1001f8a3d

int FUN_1001f8a3d(undefined8 param_1,char *param_2,uint param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 local_70 [24];
  long local_58;
  ulong local_48;
  long local_40;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_4 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006ca4d9(uVar5);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  *param_4 = 0;
  if ((param_2 == (char *)0x0) || (sVar4 = _strlen(param_2), sVar4 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = sVar4 - (param_2[sVar4 - 1] == '/');
  }
  iVar2 = FUN_1001f7388(param_1,1,&local_38);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar3 = FUN_1001f7ba5(local_38);
      if (iVar3 == 0) {
        local_40 = (ulong)param_3 - 1;
        local_48 = (ulong)param_3;
        do {
          cVar1 = FUN_1001f8c53(local_38,param_2,lVar7,0,0,0);
          if (cVar1 != '\0') {
            iVar2 = FUN_1001f7dcb(local_38,0,0,local_70,0,0,0,0);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  FUN_1006ca329(iVar2,uVar5);
                }
              }
              goto LAB_1001f8bf3;
            }
            lVar6 = local_58;
            if (param_3 != 0) {
              lVar6 = (local_58 + local_40) - (ulong)(local_58 + local_40) % local_48;
            }
            *param_4 = *param_4 + lVar6;
          }
          iVar3 = FUN_1001f7c48(local_38);
        } while (iVar3 == 0);
      }
      iVar2 = 0;
      if (iVar3 != -0x27) {
        iVar2 = iVar3;
      }
      if (iVar2 != -0x80 && iVar3 != -0x27) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006ca395(iVar2,uVar5);
        }
      }
LAB_1001f8bf3:
      iVar3 = FUN_1001f7652(local_38);
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006ca401(iVar3,uVar5);
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006ca46d(iVar2,uVar5);
      }
    }
  }
  return iVar2;
}

