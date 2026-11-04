// name: FUN_10017ffd2
// address: 10017ffd2

int FUN_10017ffd2(int *param_1,long param_2,uint param_3,uint param_4,char param_5,ulong *param_6)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  void *local_38;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100687e40(uVar4);
    }
LAB_100180080:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100687dca(uVar4);
    }
    goto LAB_100180080;
  }
  if (param_4 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100687d54(uVar4);
    }
    goto LAB_100180080;
  }
  if (param_6 != (ulong *)0x0) {
    *param_6 = 0;
  }
  iVar2 = FUN_10017cc65(param_1,0x64617461,3);
  if (iVar2 == -0x80) {
    return -0x80;
  }
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') {
      return iVar2;
    }
    FUN_100687ce8(iVar2,uVar4);
    return iVar2;
  }
  if (param_5 == '\0') {
    iVar2 = FUN_10017ce92(local_40,&local_48);
    if (iVar2 == -0x80) goto LAB_100180409;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100687888(iVar2,uVar4);
      }
      goto LAB_100180409;
    }
  }
  else {
    local_48 = 0;
  }
  iVar2 = FUN_10017d068(local_40,local_48);
  if (iVar2 == -0x80) goto LAB_100180409;
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100687c7c(iVar2,uVar4);
    }
    goto LAB_100180409;
  }
  uVar6 = (ulong)param_4;
  uVar5 = (uVar6 - local_48 % uVar6) % uVar6;
  pvVar3 = (void *)0x0;
  if (uVar5 == 0) {
LAB_100180374:
    if (param_6 != (ulong *)0x0) {
      *param_6 = local_48;
    }
    iVar2 = FUN_10017d230(local_40,param_2,(ulong)param_3,1,&local_50);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = 0;
        if (local_50 != param_3) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_100687b9a(uVar4);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x24;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_100687c10(iVar2,uVar4);
        }
      }
    }
    if (pvVar3 == (void *)0x0) goto LAB_100180409;
  }
  else {
    pvVar3 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar3 == (void *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100687b24(uVar4);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
      goto LAB_100180409;
    }
    FUN_1001c62d9(pvVar3,uVar5);
    local_38 = pvVar3;
    iVar2 = FUN_10017d230(local_40,pvVar3,uVar5,1,&local_50);
    pvVar3 = local_38;
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_50 == uVar5) {
          iVar2 = FUN_10017ce92(local_40,&local_48);
          pvVar3 = local_38;
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              if (local_48 % uVar6 != 0) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  FUN_10068796a(uVar4);
                }
                goto LAB_100180312;
              }
              iVar2 = FUN_10017d068(local_40);
              pvVar3 = local_38;
              if (iVar2 != -0x80) {
                if (iVar2 == 0) goto LAB_100180374;
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                pvVar3 = local_38;
                if (cVar1 != '\0') {
                  FUN_1006879e0(iVar2,uVar4);
                  pvVar3 = local_38;
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              pvVar3 = local_38;
              if (cVar1 != '\0') {
                FUN_100687a4c(iVar2,uVar4);
                pvVar3 = local_38;
              }
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006878f4(uVar4);
          }
LAB_100180312:
          FUN_1001782e9(0,0);
          iVar2 = -0x24;
          pvVar3 = local_38;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        pvVar3 = local_38;
        if (cVar1 != '\0') {
          FUN_100687ab8(iVar2,uVar4);
          pvVar3 = local_38;
        }
      }
    }
  }
  operator_delete__(pvVar3);
LAB_100180409:
  FUN_10017cdfb(local_40);
  return iVar2;
}

