// name: FUN_1005f9ecd
// address: 1005f9ecd

undefined8 FUN_1005f9ecd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_8c8 [512];
  long local_6c8;
  long local_6c0;
  int local_6b8;
  long local_6b0;
  long local_6a8;
  long local_6a0;
  undefined8 local_698;
  long local_690;
  long local_688;
  int local_67c;
  undefined1 local_678 [512];
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_8c8,0x218);
  local_6a0 = FUN_10016ff43(DAT_1008c4d90,param_1);
  if (local_6a0 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "gameDirectoryURL != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    lVar3 = FUN_1005f99a6(param_2);
    if (lVar3 != 0) {
      local_6b0 = FUN_10017076e(lVar3);
      bVar1 = true;
      if (local_6b0 < 1) {
        uVar5 = 0;
      }
      else {
        lVar7 = 0;
        local_698 = param_3;
        local_688 = lVar3;
        do {
          lVar4 = FUN_100164a01(lVar3,lVar7);
          if (lVar4 == 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "protectedFilePath != nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            uVar5 = FUN_1001736b8(DAT_1008c4d90,0,&cf____sinf,lVar4);
            uVar6 = FUN_100174a21(DAT_1008c4d90,local_6a0,uVar5,0);
            cVar2 = FUN_10016ffd2(uVar6,&local_478,0);
            FUN_10017060f(uVar6);
            FUN_10017060f(uVar5);
            if (cVar2 == '\0') {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "securityInfoFileExists";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              lVar3 = local_688;
            }
            else {
              lVar3 = FUN_100165eef(DAT_1008c4d90,&local_478,0,0);
              if (lVar3 == 0) {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                lVar3 = local_688;
                if (cVar2 != '\0') {
                  local_4a = "securityInfoData != __null";
                  goto LAB_1005fa4ea;
                }
                goto LAB_1005fa50f;
              }
              FUN_1005f9c04(lVar3,local_678,&local_690,&local_6a8,&local_67c);
              FUN_10017060f(lVar3);
              lVar3 = local_688;
              if (local_690 != 0) {
                if (local_6c8 != 0) {
                  cVar2 = FUN_1001e3edc(local_678,local_8c8,0);
                  if (cVar2 == '\0') {
                    uVar5 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      local_4a = 
                      "IsEqualUString(securityInfoUserName, gameExtendedInfo->drmUserName)";
LAB_1005fa4ea:
                      local_4c = 0x822;
                      local_54 = "Assertion failure";
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                  }
                  else if (local_6c8 == local_690) {
                    if (local_6c0 == local_6a8) {
                      if (local_6b8 == local_67c) goto LAB_1005fa15e;
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        local_4a = "gameExtendedInfo->drmVersions == securityInfoDRMVersions";
                        goto LAB_1005fa4ea;
                      }
                    }
                    else {
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        local_4a = "gameExtendedInfo->drmKeyID == securityInfoKeyID";
                        goto LAB_1005fa4ea;
                      }
                    }
                  }
                  else {
                    uVar5 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      local_4a = "gameExtendedInfo->drmUserID == securityInfoUserID";
                      goto LAB_1005fa4ea;
                    }
                  }
LAB_1005fa50f:
                  bVar1 = false;
                  FUN_1001782e9(0,0);
                  uVar5 = 0x4b8;
                  param_3 = local_698;
                  goto LAB_1005fa26e;
                }
                FUN_1001e1c39(local_678,local_8c8);
                local_6c8 = local_690;
                local_6c0 = local_6a8;
                local_6b8 = local_67c;
              }
            }
          }
LAB_1005fa15e:
          lVar7 = lVar7 + 1;
        } while (local_6b0 != lVar7);
        uVar5 = 0;
        bVar1 = true;
        param_3 = local_698;
      }
      goto LAB_1005fa26e;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "protectedFilesArray != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0x4b1;
  }
  bVar1 = false;
  lVar3 = 0;
LAB_1005fa26e:
  FUN_10017060f(lVar3);
  FUN_10017060f(local_6a0);
  if ((bVar1) && (local_6c8 != 0)) {
    FUN_100168550(param_3,&cf_DRMUserName,local_8c8,1);
    FUN_100168746(param_3,PTR_cf_DRMUserID_10088fbf8,local_6c8,1);
    FUN_100168746(param_3,PTR_cf_DRMKeyID_10088fc00,local_6c0,1);
    FUN_100168746(param_3,PTR_cf_DRMVersions_10088fc08,local_6b8,1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

