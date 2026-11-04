// name: FUN_100179ff4
// address: 100179ff4

int FUN_100179ff4(long param_1,ulong param_2,ulong param_3,long *param_4,ulong *param_5,
                 undefined1 param_6,long param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  
  local_40 = 0;
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100684676(uVar3);
    }
LAB_10017a1c7:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_7 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100684600(uVar3);
    }
    goto LAB_10017a1c7;
  }
  local_38 = param_3;
  iVar2 = FUN_100179732(param_6,&local_50);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_10017cc65(param_1,0x64617461,0x201,&local_40);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = FUN_10017ce92(local_40,&local_48);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              iVar2 = FUN_10017d068(local_40,param_2);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) {
                  if (local_48 < param_2) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      FUN_10068420c(uVar3);
                    }
                    FUN_1001782e9(0,0);
                    param_2 = local_48;
                  }
                  uVar5 = local_38;
                  if (local_38 == 0xffffffffffffffff) {
                    uVar5 = local_48;
                  }
                  if (local_48 < uVar5) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      FUN_100684282(uVar3);
                    }
                    FUN_1001782e9(0,0);
                    uVar5 = local_48;
                  }
                  uVar6 = uVar5 - param_2;
                  if (param_2 <= uVar5) {
                    uVar5 = 0x200000;
                    if (param_4 != (long *)0x0) {
                      uVar5 = uVar6;
                    }
                    lVar4 = FUN_1001c63e1(uVar5);
                    if (lVar4 == 0) {
                      uVar3 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar3,0x10);
                      if (cVar1 != '\0') {
                        FUN_100684364(uVar3);
                      }
                      lVar4 = 0;
                      FUN_1001782e9(0,0);
                      iVar2 = -0x6c;
                    }
                    else {
                      for (; local_38 = uVar5, uVar6 != 0; uVar6 = uVar6 - local_58) {
                        uVar5 = uVar6;
                        if (local_38 < uVar6) {
                          uVar5 = local_38;
                        }
                        iVar2 = FUN_10017d186(local_40,lVar4,uVar5 & 0xffffffff,0,&local_58);
                        if (iVar2 != 0) {
                          uVar5 = local_38;
                          if (iVar2 != -0x80) {
                            uVar3 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar3,0x10);
                            uVar5 = local_38;
                            if (cVar1 != '\0') {
                              FUN_1006842f8(iVar2,uVar3);
                              uVar5 = local_38;
                            }
                          }
                          goto LAB_10017a2a4;
                        }
                        FUN_10017983e(local_50,lVar4,local_58);
                        uVar5 = local_38;
                      }
                      FUN_1001799f1(local_50,param_7);
                      iVar2 = 0;
                      uVar5 = local_38;
                    }
                    goto LAB_10017a2a4;
                  }
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    FUN_1006843da(uVar3);
                  }
                  FUN_1001782e9(0,0);
                  iVar2 = -0x32;
                }
                else {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    FUN_100684450(iVar2,uVar3);
                  }
                }
              }
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_1006844bc(iVar2,uVar3);
              }
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_100684528(iVar2,uVar3);
          }
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100684594(iVar2,uVar3);
      }
    }
  }
  lVar4 = 0;
  uVar5 = 0;
LAB_10017a2a4:
  FUN_100179a7b(local_50);
  if (local_40 != 0) {
    FUN_10017cdfb();
  }
  if (lVar4 == 0) {
    return iVar2;
  }
  if (param_4 == (long *)0x0) {
    FUN_1001c64c1(lVar4);
    return iVar2;
  }
  *param_4 = lVar4;
  if (param_5 == (ulong *)0x0) {
    return iVar2;
  }
  *param_5 = uVar5;
  return iVar2;
}

