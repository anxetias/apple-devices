// name: FUN_1001d8042
// address: 1001d8042

int FUN_1001d8042(undefined8 param_1,ulong param_2,long param_3,ulong param_4,code *param_5,
                 undefined8 param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  ulong local_90;
  float local_84;
  long local_80;
  code *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    local_80 = param_3;
    local_78 = param_5;
    iVar3 = FUN_1001d7456(param_1,&local_90);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        iVar3 = -0x27;
        if (param_2 <= local_90) {
          lVar4 = FUN_1001c63e1(1000000);
          if (lVar4 == 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              FUN_1006b63c6(uVar5);
            }
            FUN_1001782e9(0,0);
            iVar3 = -0x6c;
          }
          else {
            iVar3 = FUN_1001d767c(param_1,local_90 + param_4);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) {
                uVar9 = local_90 - param_2;
                uVar6 = param_4;
                if (local_80 == 0) {
                  uVar6 = 0;
                }
                uVar6 = uVar6 + uVar9;
                uVar7 = 0;
                if (uVar9 != 0) {
                  local_84 = (float)uVar6;
                  local_70 = 0;
                  do {
                    local_68 = 1000000;
                    if (uVar9 < 1000000) {
                      local_68 = uVar9;
                    }
                    local_70 = local_70 + local_68;
                    lVar8 = local_90 - local_70;
                    local_60 = local_68;
                    iVar3 = FUN_1001d7378(param_1,lVar8);
                    if (iVar3 != 0) {
                      if (iVar3 != -0x80) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          FUN_1006b6134(iVar3,uVar5);
                        }
                      }
                      goto LAB_1001d81b3;
                    }
                    iVar3 = FUN_1001d6a08(param_1,&local_60,lVar4,2);
                    if (iVar3 != 0) {
                      if (iVar3 != -0x80) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          FUN_1006b60c8(iVar3,uVar5);
                        }
                      }
                      goto LAB_1001d81b3;
                    }
                    if (local_60 != local_68) {
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        FUN_1006b5e98(uVar5);
                      }
                      goto LAB_1001d871c;
                    }
                    iVar3 = FUN_1001d7378(param_1,lVar8 + param_4);
                    if (iVar3 != 0) {
                      if (iVar3 != -0x80) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          FUN_1006b605c(iVar3,uVar5);
                        }
                      }
                      goto LAB_1001d81b3;
                    }
                    iVar3 = FUN_1001d717d(param_1,&local_60,lVar4,2);
                    pcVar1 = local_78;
                    if (iVar3 != 0) {
                      if (iVar3 != -0x80) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          FUN_1006b5ff0(iVar3,uVar5);
                        }
                      }
                      goto LAB_1001d81b3;
                    }
                    if (local_60 != local_68) {
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        FUN_1006b5f0e(uVar5);
                      }
                      goto LAB_1001d871c;
                    }
                    if (local_78 != (code *)0x0) {
                      fVar10 = ((float)local_70 * DAT_10070bcf0) / local_84;
                      if (DAT_10070bcf0 < fVar10) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x822;
                          local_4a = "pctComplete <= 100.0f";
                          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      iVar3 = (*pcVar1)((int)fVar10 & 0xffff,param_6);
                      if (iVar3 != 0) {
                        if (iVar3 != -0x80) {
                          uVar5 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar5,0x10);
                          if (cVar2 != '\0') {
                            FUN_1006b5f84(iVar3,uVar5);
                          }
                        }
                        goto LAB_1001d81b3;
                      }
                    }
                    uVar9 = uVar9 - local_68;
                    uVar7 = local_70;
                  } while (uVar9 != 0);
                }
                if (local_80 != 0) {
                  local_68 = CONCAT44(local_68._4_4_,(float)uVar6);
                  lVar8 = local_80;
                  do {
                    uVar6 = 0x7fffffff;
                    if (param_4 < 0x7fffffff) {
                      uVar6 = param_4;
                    }
                    local_80 = lVar8;
                    local_70 = uVar7;
                    local_60 = uVar6;
                    iVar3 = FUN_1001d7378(param_1,param_2);
                    if (iVar3 != 0) {
                      if (iVar3 != -0x80) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          FUN_1006b62ee(iVar3,uVar5);
                        }
                      }
                      goto LAB_1001d81b3;
                    }
                    iVar3 = FUN_1001d717d(param_1,&local_60,local_80,2);
                    if (iVar3 != 0) {
                      if (iVar3 != -0x80) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          FUN_1006b6282(iVar3,uVar5);
                        }
                      }
                      goto LAB_1001d81b3;
                    }
                    if (local_60 != uVar6) {
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        FUN_1006b61a0(uVar5);
                      }
LAB_1001d871c:
                      FUN_1001782e9(0,0);
                      iVar3 = -0x24;
                      goto LAB_1001d81b3;
                    }
                    uVar7 = local_70 + uVar6;
                    if (local_78 != (code *)0x0) {
                      local_70 = uVar7;
                      iVar3 = (*local_78)((int)(((float)uVar7 * DAT_10070bcf0) / (float)local_68) &
                                          0xffff,param_6);
                      uVar7 = local_70;
                      if (iVar3 == 0) goto LAB_1001d84ba;
                      if (iVar3 != -0x80) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          FUN_1006b6216(iVar3,uVar5);
                        }
                      }
                      goto LAB_1001d81b3;
                    }
LAB_1001d84ba:
                    param_4 = param_4 - uVar6;
                    param_2 = param_2 + uVar6;
                    lVar8 = local_80 + uVar6;
                  } while (param_4 != 0);
                }
                iVar3 = 0;
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  FUN_1006b635a(iVar3,uVar5);
                }
              }
            }
LAB_1001d81b3:
            FUN_1001c64c1(lVar4);
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_1006b643c(iVar3,uVar5);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

