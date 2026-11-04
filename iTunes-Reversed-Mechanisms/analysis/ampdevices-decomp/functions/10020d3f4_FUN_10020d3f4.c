// name: FUN_10020d3f4
// address: 10020d3f4

bool FUN_10020d3f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint *puVar7;
  bool bVar8;
  byte local_ca0;
  char local_c98 [4];
  char *local_c94;
  undefined2 local_c8c;
  char *local_c8a;
  uint local_898;
  char *local_894;
  undefined2 local_88c;
  int local_88a;
  undefined1 local_498 [1024];
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  int local_8a;
  uint local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  uint local_58;
  undefined8 local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10020bf57(param_1,local_498);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      cVar1 = FUN_100167064(param_2,&cf_CFBundleExecutable,&local_898,0x400);
      if (cVar1 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          builtin_strncpy(local_c98,"\x02\x02\"\b",4);
          local_c94 = "Assertion failure";
          local_c8c = 0x822;
          local_c8a = 
          "JRCFDictionaryGetCString(bundleInfoDict, kIPhoneApplicationBundleExecutableKey, executableFileName, sizeof(executableFileName))"
          ;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_c98,0x16);
        }
        bVar8 = false;
        FUN_1001782e9(0,0);
        goto LAB_10020d54c;
      }
      bVar8 = false;
      _snprintf(local_c98,0x400,"Payload/%s/%s",local_498,&local_898);
      iVar2 = FUN_1001f7ceb(param_1,local_c98);
      if (iVar2 == -0x80) goto LAB_10020d54c;
      if (iVar2 == 0) {
        iVar2 = FUN_1001f805a(param_1);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            bVar8 = false;
            iVar2 = FUN_1001f8126(param_1,&local_58,8,0);
            if (iVar2 == -0x80) goto LAB_10020d54c;
            if (iVar2 == 0) {
              if (local_58 == 0xbebafeca) {
                if ((uint)local_54 == 0xffffffff) {
                  bVar6 = 0;
                  local_ca0 = 0;
                }
                else {
                  iVar2 = ((uint)local_54 >> 0x18 | ((uint)local_54 & 0xff0000) >> 8 |
                           ((uint)local_54 & 0xff00) << 8 | (uint)local_54 << 0x18) + 1;
                  local_ca0 = 0;
                  bVar6 = 0;
                  do {
                    iVar3 = FUN_1001f8126(param_1,&local_78,0x14,0);
                    if (iVar3 != 0) {
                      if (iVar3 != -0x80) {
                        uVar5 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar1 != '\0') {
                          local_98 = 0x8220202;
                          local_94 = "Assertion failure";
                          local_8c = 0x400;
                          local_8a = iVar3;
                          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                              &local_98,0x12);
                        }
                      }
                      break;
                    }
                    uVar4 = local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8
                            | local_78 << 0x18;
                    if (uVar4 == 0xc) {
                      local_ca0 = 1;
                    }
                    else if (uVar4 == 0x100000c) {
                      bVar6 = 1;
                    }
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                }
                bVar8 = (bool)((bVar6 ^ 1) & local_ca0);
                goto LAB_10020d54c;
              }
              if (local_58 == 0xfeedface) {
                bVar8 = false;
                iVar2 = FUN_1001f8126(param_1,(long)&local_54 + 4,0x14,0);
                if (iVar2 == -0x80) goto LAB_10020d54c;
                if (iVar2 == 0) {
                  bVar8 = (uint)local_54 == 0xc;
                  goto LAB_10020d54c;
                }
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  puVar7 = &local_78;
                  local_78 = 0x8220202;
                  local_74 = "Assertion failure";
                  local_6c = 0x400;
                  local_6a = iVar2;
                  goto LAB_10020d674;
                }
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                puVar7 = &local_78;
                local_78 = 0x8220202;
                local_74 = "Assertion failure";
                local_6c = 0x400;
                local_6a = iVar2;
                goto LAB_10020d674;
              }
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              puVar7 = &local_58;
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = iVar2;
              goto LAB_10020d674;
            }
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          puVar7 = &local_58;
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
LAB_10020d674:
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",puVar7,0x12);
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        puVar7 = &local_898;
        local_898 = 0x8220202;
        local_894 = "Assertion failure";
        local_88c = 0x400;
        local_88a = iVar2;
        goto LAB_10020d674;
      }
    }
  }
  bVar8 = false;
LAB_10020d54c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar8;
}

