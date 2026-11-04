// name: FUN_1001f8d50
// address: 1001f8d50

int FUN_1001f8d50(undefined8 param_1,long param_2,char *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_8f8 [24];
  long local_8e0;
  undefined8 local_8d0;
  undefined4 local_8c8;
  undefined8 local_8c0;
  long local_8b8 [5];
  undefined1 *local_890;
  uint local_888;
  uint local_884;
  undefined8 local_880;
  undefined1 local_878 [1024];
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_880 = 0;
  local_8b8[2] = 0;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006ca843(uVar6);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001f7388(param_1,1,&local_880);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_1001f7852(local_880,&local_888);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            if ((param_3 == (char *)0x0) || (sVar4 = _strlen(param_3), sVar4 == 0)) {
              local_8b8[4] = 0;
            }
            else {
              local_8b8[4] = sVar4 - (param_3[sVar4 - 1] == '/');
            }
            local_8d0 = local_880;
            local_8b8[0] = 0;
            local_8b8[1] = 0;
            local_8b8[2] = 0;
            local_8b8[3] = 0;
            local_890 = local_878 + local_8b8[4] + 1;
            if (local_8b8[4] == 0) {
              local_890 = local_878;
            }
            local_884 = (uint)CONCAT71((int7)((ulong)local_890 >> 8),1);
            local_8c8 = param_4;
            local_8c0 = param_5;
            do {
              iVar2 = FUN_1001f7ba5(local_880);
              uVar7 = 1;
              while (iVar2 == 0) {
                cVar1 = FUN_1001f8c53(local_880,param_3,local_8b8[4],local_878,0x400,local_8f8);
                if (cVar1 != '\0') {
                  plVar5 = local_8b8 + 1;
                  if ((local_884 & 1) == 0) {
                    iVar2 = FUN_1001f9145(param_2,local_890,local_478);
                    if (iVar2 != 0) {
                      if (iVar2 != -0x80) {
                        uVar6 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar1 != '\0') {
                          FUN_1006ca627(iVar2,uVar6);
                        }
                      }
                      goto LAB_1001f90c6;
                    }
                    iVar2 = FUN_1001f8334(&local_8d0,local_478,0,0);
                    plVar5 = local_8b8;
                    if (iVar2 != 0) {
                      if (iVar2 != -0x80) {
                        uVar6 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar1 != '\0') {
                          FUN_1006ca5bb(iVar2,uVar6);
                        }
                      }
                      goto LAB_1001f90c6;
                    }
                  }
                  *plVar5 = *plVar5 + local_8e0;
                }
                if (local_888 < uVar7) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "currentEntry <= numEntries";
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                iVar2 = FUN_1001f7c48(local_880);
                uVar7 = uVar7 + 1;
              }
              if (iVar2 == -0x80) break;
              if (iVar2 != -0x27) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  FUN_1006ca693(iVar2,uVar6);
                }
                break;
              }
              iVar2 = 0;
              uVar7 = local_884 & 1;
              local_884 = 0;
            } while (uVar7 != 0);
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              FUN_1006ca6ff(iVar2,uVar6);
            }
          }
        }
LAB_1001f90c6:
        iVar3 = FUN_1001f7652(local_880);
        if (iVar3 != 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            FUN_1006ca76b(iVar3,uVar6);
          }
        }
        if (local_8b8[2] != 0) {
          FUN_1001c652e();
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_1006ca7d7(iVar2,uVar6);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

