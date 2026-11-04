// name: FUN_1005f6edb
// address: 1005f6edb

int FUN_1005f6edb(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_8c0 [512];
  long local_6c0;
  long local_6b8;
  int local_6b0;
  long local_6a8;
  undefined8 local_6a0;
  long local_698;
  undefined8 local_690;
  long local_688;
  undefined8 local_680;
  undefined8 local_678;
  int local_66c;
  undefined8 local_668;
  long local_660;
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_678 = 0;
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "gameInfo != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005f76a8;
  }
  *param_2 = 0;
  iVar2 = FUN_1001f7388(param_1,1,&local_678);
  uVar4 = local_678;
  if (iVar2 == -0x80) goto LAB_1005f76a8;
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x400;
      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
    }
    goto LAB_1005f76a8;
  }
  local_668 = 0;
  local_680 = 0;
  *param_2 = 0;
  iVar3 = FUN_1001fbd49(local_678,"Manifest.plist",0);
  iVar2 = 0x4b1;
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = FUN_1005f9507(local_680,&local_668);
      uVar6 = local_680;
      if (iVar3 == 0) {
        local_6a0 = local_668;
        FUN_1001c62d9(local_8c0,0x218);
        lVar5 = FUN_1005f99a6(uVar6);
        if (lVar5 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "protectedFilesArray != __null";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          local_6a8 = FUN_10017076e(lVar5);
          if (0 < local_6a8) {
            lVar7 = 0;
            local_660 = lVar5;
            do {
              lVar5 = FUN_100164a01(lVar5,lVar7);
              if (lVar5 == 0) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "protectedFilePath != nullptr";
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                lVar5 = local_660;
              }
              else {
                lVar5 = FUN_1001736b8(DAT_1008c4d90,0,&cf____sinf,lVar5);
                if (lVar5 == 0) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "securityInfoFilePath != __null";
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar2 = -0x6c;
                  lVar5 = local_660;
                  goto LAB_1005f7584;
                }
                FUN_10017393c(lVar5,&local_458,0x400,0x8000100);
                FUN_10017060f(lVar5);
                iVar3 = FUN_1001fbb12(uVar4,&local_458,&local_690);
                if (iVar3 != 0) {
                  if (iVar3 == -0x80) {
                    iVar2 = 0x4b8;
                    lVar5 = local_660;
                  }
                  else {
                    uVar4 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                    iVar2 = 0x4b8;
                    lVar5 = local_660;
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                      lVar5 = local_660;
                    }
                  }
                  goto LAB_1005f7584;
                }
                FUN_1005f9c04(local_690,local_658,&local_688,&local_698,&local_66c);
                FUN_10017060f(local_690);
                lVar5 = local_660;
                local_690 = 0;
                if (local_688 != 0) {
                  if (local_6c0 != 0) {
                    cVar1 = FUN_1001e3edc(local_658,local_8c0,0);
                    if (cVar1 == '\0') {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_4a = 
                        "IsEqualUString(securityInfoUserName, gameExtendedInfo->drmUserName)";
LAB_1005f7550:
                        local_4c = 0x822;
                        local_54 = "Assertion failure";
                        local_58 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                    }
                    else if (local_6c0 == local_688) {
                      if (local_6b8 == local_698) {
                        if (local_6b0 == local_66c) goto LAB_1005f72f1;
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        if (cVar1 != '\0') {
                          local_4a = "gameExtendedInfo->drmVersions == securityInfoDRMVersions";
                          goto LAB_1005f7550;
                        }
                      }
                      else {
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        if (cVar1 != '\0') {
                          local_4a = "gameExtendedInfo->drmKeyID == securityInfoKeyID";
                          goto LAB_1005f7550;
                        }
                      }
                    }
                    else {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_4a = "gameExtendedInfo->drmUserID == securityInfoUserID";
                        goto LAB_1005f7550;
                      }
                    }
                    FUN_1001782e9(0,0);
                    iVar2 = 0x4b8;
                    goto LAB_1005f7584;
                  }
                  FUN_1001e1c39(local_658,local_8c0);
                  local_6c0 = local_688;
                  local_6b8 = local_698;
                  local_6b0 = local_66c;
                }
              }
LAB_1005f72f1:
              lVar7 = lVar7 + 1;
            } while (local_6a8 != lVar7);
          }
          iVar2 = 0;
        }
LAB_1005f7584:
        FUN_10017060f(lVar5);
        uVar4 = local_6a0;
        if ((iVar2 == 0) && (local_6c0 != 0)) {
          FUN_100168550(local_6a0,&cf_DRMUserName,local_8c0,1);
          FUN_100168746(uVar4,PTR_cf_DRMUserID_10088fbf8,local_6c0,1);
          FUN_100168746(uVar4,PTR_cf_DRMKeyID_10088fc00,local_6b8,1);
          FUN_100168746(uVar4,PTR_cf_DRMVersions_10088fc08,local_6b0,1);
        }
        else if (iVar2 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
            goto LAB_1005f70e2;
          }
          goto LAB_1005f7684;
        }
        *param_2 = local_668;
        local_668 = 0;
        iVar2 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        iVar2 = iVar3;
        if (cVar1 != '\0') {
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
          goto LAB_1005f70e2;
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
LAB_1005f70e2:
        local_44c = 0x400;
        local_454 = "Assertion failure";
        local_458 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
  }
LAB_1005f7684:
  FUN_10017060f(local_680);
  FUN_10017060f(local_668);
  FUN_1001f7652(local_678);
LAB_1005f76a8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

