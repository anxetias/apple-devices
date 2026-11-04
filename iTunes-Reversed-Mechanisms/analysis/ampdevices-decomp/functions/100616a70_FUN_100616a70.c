// name: FUN_100616a70
// address: 100616a70

void FUN_100616a70(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  int local_474;
  uint local_470;
  char local_46b;
  byte local_46a;
  byte local_469;
  undefined2 local_468;
  undefined2 uStack_466;
  uint uStack_464;
  undefined2 local_460;
  ushort local_45e;
  undefined2 uStack_45c;
  int iStack_45a;
  undefined4 uStack_456;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar11 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_468 = 0;
    __os_log_impl(0x100000000,uVar11,1,"sync> entering sync thread",&local_468,2);
  }
  uVar7 = *(ulong *)(param_1 + 0x38);
  if (((uint)uVar7 >> 0x1a & 1) == 0) {
LAB_100616e19:
    if ((uVar7 & 0xf000000000) != 0) {
      uVar11 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
      uVar7 = *(ulong *)(param_1 + 0x38);
      if ((uVar7 >> 0x24 & 1) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_468 = 0;
          __os_log_impl(0x100000000,uVar6,1,"sync> deleting contacts",&local_468,2);
        }
        FUN_1001709a5(uVar11,&cf_com_apple_Contacts);
        uVar7 = *(ulong *)(param_1 + 0x38);
      }
      if ((uVar7 >> 0x25 & 1) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_468 = 0;
          __os_log_impl(0x100000000,uVar6,1,"sync> deleting calendars",&local_468,2);
        }
        FUN_1001709a5(uVar11,&cf_com_apple_Calendars);
        uVar7 = *(ulong *)(param_1 + 0x38);
      }
      if ((uVar7 >> 0x26 & 1) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_468 = 0;
          __os_log_impl(0x100000000,uVar6,1,"sync> deleting bookmarks",&local_468,2);
        }
        FUN_1001709a5(uVar11,&cf_com_apple_Bookmarks);
        uVar7 = *(ulong *)(param_1 + 0x38);
      }
      if ((uVar7 >> 0x27 & 1) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_468 = 0;
          __os_log_impl(0x100000000,uVar6,1,"sync> deleting notes",&local_468,2);
        }
        FUN_1001709a5(uVar11,&cf_com_apple_Notes);
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_468 = 0;
        __os_log_impl(0x100000000,uVar6,1,"sync> calling AMSClearDataClasses",&local_468,2);
      }
      uVar6 = FUN_1005c66d5();
      local_468 = (undefined2)uVar6;
      uStack_466 = (undefined2)((ulong)uVar6 >> 0x10);
      uStack_464 = (uint)((ulong)uVar6 >> 0x20);
      FUN_10016bec9(&local_48,*(undefined8 *)(param_1 + 0x50));
      uVar4 = _AMSClearDataClasses(uVar6,CONCAT44(uStack_44,local_48),uVar11,FUN_10061811b,param_1);
      FUN_10016d588(&local_48);
      FUN_10016d588(&local_468);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_468 = 0;
        __os_log_impl(0x100000000,uVar6,1,"sync> returned from AMSClearDataClasses",&local_468,2);
      }
      if (uVar4 != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 != '\0') {
          local_468 = 0x202;
          uStack_466 = 0x400;
          local_460 = 0x842;
          local_45e = (ushort)uVar11;
          uStack_45c = (undefined2)((ulong)uVar11 >> 0x10);
          iStack_45a = (int)((ulong)uVar11 >> 0x20);
          uStack_464 = uVar4;
          __os_log_impl(0x100000000,uVar6,0x10,"AMSClearDataClasses failed (%d) for %{public}@",
                        &local_468,0x12);
        }
      }
      FUN_10017060f(uVar11);
      iVar5 = FUN_100601f45(param_1);
      iVar2 = iStack_45a;
      if (iVar5 == -0x80) goto LAB_100617412;
      if (iVar5 != 0) {
        uVar11 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar11,0x10);
        iVar2 = iStack_45a;
        goto joined_r0x00010061740c;
      }
      uVar7 = *(ulong *)(param_1 + 0x38);
    }
    iVar2 = iStack_45a;
    if (((uint)uVar7 >> 0x17 & 1) == 0) goto LAB_100617412;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_468 = 0;
      __os_log_impl(0x100000000,uVar11,1,"sync> syncing structured data",&local_468,2);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
    }
    uVar11 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_468 = 0;
      __os_log_impl(0x100000000,uVar11,1,"sync> calling AMSBeginSync",&local_468,2);
    }
    uVar11 = FUN_1005c66d5();
    local_468 = (undefined2)uVar11;
    uStack_466 = (undefined2)((ulong)uVar11 >> 0x10);
    uStack_464 = (uint)((ulong)uVar11 >> 0x20);
    FUN_10016bec9(&local_48,*(undefined8 *)(param_1 + 0x50));
    uVar4 = _AMSBeginSync(uVar11,CONCAT44(uStack_44,local_48),FUN_10061831b,param_1);
    FUN_10016d588(&local_48);
    FUN_10016d588(&local_468);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_468 = 0;
      __os_log_impl(0x100000000,uVar11,1,"sync> returned from AMSBeginSync",&local_468,2);
    }
    if (uVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        local_468 = 0x100;
        uStack_466 = 0x400;
        uStack_464 = uVar4;
        __os_log_impl(0x100000000,uVar11,0x10,"AMSBeginSync failed (%d)",&local_468,8);
      }
    }
    iVar5 = FUN_100601f45(param_1);
    iVar2 = iStack_45a;
    if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_100617412;
    uVar11 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar11,0x10);
    iVar2 = iStack_45a;
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_468 = 0;
      __os_log_impl(0x100000000,uVar11,1,"sync> copying crash logs",&local_468,2);
    }
    local_46a = 0;
    local_469 = 0;
    local_470 = 0xffffffff;
    local_474 = 0;
    uVar11 = FUN_1001ebd46();
    *(undefined8 *)(param_1 + 0x470) = uVar11;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_468 = 0;
      __os_log_impl(0x100000000,uVar11,1,"sync> calling AMSConnectToCrashReportCopyTarget",
                    &local_468,2);
    }
    FUN_10016bec9(&local_468,*(undefined8 *)(param_1 + 0x50));
    uVar4 = _AMSConnectToCrashReportCopyTarget
                      (CONCAT44(uStack_464,CONCAT22(uStack_466,local_468)),0);
    FUN_10016d588(&local_468);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_468 = 0;
      __os_log_impl(0x100000000,uVar11,1,"sync> returned from AMSConnectToCrashReportCopyTarget",
                    &local_468,2);
    }
    if (uVar4 == 0) {
      FUN_10016bec9(&local_468,*(undefined8 *)(param_1 + 0x50));
      uVar4 = _AMSGetNumberOfCrashReportsToCopy
                        (CONCAT44(uStack_464,CONCAT22(uStack_466,local_468)),&local_470,0);
      FUN_10016d588(&local_468);
      if (uVar4 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar11 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_468 = 0x100;
          uStack_466 = 0x400;
          uStack_464 = local_470;
          __os_log_impl(0x100000000,uVar11,1,"sync> %d crash reports to copy",&local_468,8);
        }
        if (0 < (int)local_470) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar3 != '\0') {
            local_468 = 0;
            __os_log_impl(0x100000000,uVar11,1,"sync> calling AMSCopyCrashReportsFromTarget",
                          &local_468,2);
          }
          FUN_10016bec9(&local_468,*(undefined8 *)(param_1 + 0x50));
          uVar4 = _AMSCopyCrashReportsFromTarget
                            (CONCAT44(uStack_464,CONCAT22(uStack_466,local_468)),FUN_1006187d9,
                             &local_474,param_1);
          FUN_10016d588(&local_468);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar3 != '\0') {
            local_468 = 0;
            __os_log_impl(0x100000000,uVar11,1,"sync> returned from AMSCopyCrashReportsFromTarget",
                          &local_468,2);
          }
          if (uVar4 != 0) {
            uVar11 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar11,0x10);
            if (cVar3 != '\0') {
              local_468 = 0x202;
              uStack_466 = 0x822;
              uStack_464 = 0x7a0a90;
              local_460 = 1;
              local_45e = 0;
              uStack_45c = 0x822;
              iStack_45a = 0x7adb24;
              uStack_456 = 1;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_468,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar11 = DAT_1008c75b8;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar3 != '\0') {
              pcVar9 = "AMSCopyCrashReportsFromTarget failed (%d)";
              uStack_464 = uVar4;
              goto LAB_100616d5d;
            }
            goto LAB_100616d70;
          }
          if (local_474 != 0) {
            *(int *)(*(long *)(param_1 + 0x28) + 0x48) = local_474;
          }
        }
        FUN_10016bec9(&local_468,*(undefined8 *)(param_1 + 0x50));
        uVar4 = _AMSGetNumberOfCrashReportsToSubmit
                          (CONCAT44(uStack_464,CONCAT22(uStack_466,local_468)),&local_470,0);
        FUN_10016d588(&local_468);
        if (uVar4 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar3 != '\0') {
            local_468 = 0x100;
            uStack_466 = 0x400;
            uStack_464 = local_470;
            __os_log_impl(0x100000000,uVar11,1,"sync> %d crash reports to submit",&local_468,8);
          }
          if ((int)local_470 < 1) {
            uVar4 = 0;
          }
          else {
            FUN_10016bec9(&local_468,*(undefined8 *)(param_1 + 0x50));
            uVar4 = _AMSGetCrashReportCopyPreferencesForTarget
                              (CONCAT44(uStack_464,CONCAT22(uStack_466,local_468)),&local_46a,
                               &local_469,0);
            FUN_10016d588(&local_468);
            if (uVar4 == 0) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar11 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar3 != '\0') {
                local_468 = 0x200;
                uStack_466 = 0x400;
                uStack_464 = (uint)local_46a;
                local_460 = 0x400;
                local_45e = (ushort)local_469;
                uStack_45c = 0;
                __os_log_impl(0x100000000,uVar11,1,"sync> should prompt = %u, should submit = %u",
                              &local_468,0xe);
              }
              if ((DAT_1008c784d == '\0') && ((*(byte *)(param_1 + 0x38) & 1) != 0)) {
                if (local_46a == 0) goto LAB_100617976;
                local_46b = '\x01';
                uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x66b0);
                cVar3 = FUN_100618a2e(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x152c8),
                                      &local_468);
                puVar10 = &local_468;
                if (cVar3 == '\0') {
                  puVar10 = (undefined2 *)0x0;
                }
                local_469 = FUN_1005442d0(uVar1,puVar10,&local_46b);
                local_46a = local_46b == '\0';
                FUN_10016bec9(&local_48,*(undefined8 *)(param_1 + 0x50));
                uVar4 = _AMSSetCrashReportCopyPreferencesForTarget
                                  (CONCAT44(uStack_44,local_48),local_46a,local_469,0);
                FUN_10016d588(&local_48);
                if (uVar4 != 0) {
                  uVar11 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar3 != '\0') {
                    local_48 = 0x8220202;
                    uStack_44 = 0x7a0a90;
                    uStack_40 = 1;
                    local_3c = 0x822;
                    local_3a = "amsStatus == AMSStatus_OK";
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_48
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar11 = DAT_1008c75b8;
                  cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                  if (cVar3 != '\0') {
                    local_48 = 0x4000100;
                    uStack_44 = uVar4;
                    __os_log_impl(0x100000000,uVar11,0x10,
                                  "AMSSetCrashReportCopyPreferencesForTarget failed (%d)",&local_48,
                                  8);
                  }
                }
              }
              else {
                local_46a = 0;
LAB_100617976:
                uVar4 = 0;
              }
              if (local_469 != 0) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar11 = DAT_1008c75b8;
                cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar3 != '\0') {
                  local_468 = 0;
                  __os_log_impl(0x100000000,uVar11,1,"sync> calling AMSSubmitCrashReportsFromTarget"
                                ,&local_468,2);
                }
                FUN_10016bec9(&local_468,*(undefined8 *)(param_1 + 0x50));
                uVar4 = _AMSSubmitCrashReportsFromTarget
                                  (CONCAT44(uStack_464,CONCAT22(uStack_466,local_468)),FUN_1006187d9
                                   ,&local_474,param_1);
                FUN_10016d588(&local_468);
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar11 = DAT_1008c75b8;
                cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar3 != '\0') {
                  local_468 = 0;
                  __os_log_impl(0x100000000,uVar11,1,
                                "sync> returned from AMSSubmitCrashReportsFromTarget",&local_468,2);
                }
                if (uVar4 != 0) {
                  uVar11 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar3 != '\0') {
                    local_468 = 0x202;
                    uStack_466 = 0x822;
                    uStack_464 = 0x7a0a90;
                    local_460 = 1;
                    local_45e = 0;
                    uStack_45c = 0x822;
                    iStack_45a = 0x7adb24;
                    uStack_456 = 1;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                        &local_468,0x16);
                  }
                  FUN_1001782e9(0,0);
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar11 = DAT_1008c75b8;
                  cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                  if (cVar3 != '\0') {
                    pcVar9 = "AMSSubmitCrashReportsFromTarget failed (%d)";
                    uStack_464 = uVar4;
                    goto LAB_100616d5d;
                  }
                  goto LAB_100616d70;
                }
                uVar4 = 0;
                if (local_474 != 0) {
                  *(int *)(*(long *)(param_1 + 0x28) + 0x48) = local_474;
                }
              }
              puVar8 = (undefined8 *)PTR__kCFBooleanTrue_10082e038;
              if (local_469 == 0) {
                puVar8 = (undefined8 *)PTR__kCFBooleanFalse_10082e030;
              }
              FUN_1005bbb13(*(undefined8 *)(param_1 + 0x48),&cf_com_apple_mobile_user_preferences,
                            &cf_DiagnosticsAllowed,*puVar8);
            }
            else {
              uVar11 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar11,0x10);
              if (cVar3 != '\0') {
                local_468 = 0x202;
                uStack_466 = 0x822;
                uStack_464 = 0x7a0a90;
                local_460 = 1;
                local_45e = 0;
                uStack_45c = 0x822;
                iStack_45a = 0x7adb24;
                uStack_456 = 1;
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_468,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar11 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar3 != '\0') {
                pcVar9 = "AMSGetCrashReportCopyPreferencesForTarget failed (%d)";
                uStack_464 = uVar4;
                goto LAB_100616d5d;
              }
            }
          }
        }
        else {
          uVar11 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar11,0x10);
          if (cVar3 != '\0') {
            local_468 = 0x202;
            uStack_466 = 0x822;
            uStack_464 = 0x7a0a90;
            local_460 = 1;
            local_45e = 0;
            uStack_45c = 0x822;
            iStack_45a = 0x7adb24;
            uStack_456 = 1;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar3 != '\0') {
            pcVar9 = "AMSGetNumberOfCrashReportsToSubmit failed (%d)";
            uStack_464 = uVar4;
            goto LAB_100616d5d;
          }
        }
      }
      else {
        uVar11 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar11,0x10);
        if (cVar3 != '\0') {
          local_468 = 0x202;
          uStack_466 = 0x822;
          uStack_464 = 0x7a0a90;
          local_460 = 1;
          local_45e = 0;
          uStack_45c = 0x822;
          iStack_45a = 0x7adb24;
          uStack_456 = 1;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar11 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 == '\0') goto LAB_100616d70;
        pcVar9 = "AMSGetNumberOfCrashReportsToCopy failed (%d)";
        uStack_464 = uVar4;
LAB_100616d5d:
        uVar4 = uStack_464;
        uStack_466 = 0x400;
        local_468 = 0x100;
        __os_log_impl(0x100000000,uVar11,0x10,pcVar9,&local_468,8);
      }
LAB_100616d70:
      FUN_10016bec9(&local_468,*(undefined8 *)(param_1 + 0x50));
      _AMSDisconnectFromCrashReportCopyTarget(CONCAT44(uStack_464,CONCAT22(uStack_466,local_468)),0)
      ;
      FUN_10016d588(&local_468);
      if (uVar4 != 0) goto LAB_100616d9f;
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        local_468 = 0x100;
        uStack_466 = 0x400;
        uStack_464 = uVar4;
        __os_log_impl(0x100000000,uVar11,0x10,"AMSConnectToCrashReportCopyTarget failed (%d)",
                      &local_468,8);
      }
LAB_100616d9f:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        local_468 = 0x100;
        uStack_466 = 0x400;
        uStack_464 = uVar4;
        __os_log_impl(0x100000000,uVar11,0x10,"sync> failed to copy crash logs (%d)",&local_468,8);
      }
    }
    iVar5 = FUN_100601f45(param_1);
    iVar2 = iStack_45a;
    if (iVar5 == -0x80) goto LAB_100617412;
    if (iVar5 == 0) {
      uVar7 = *(ulong *)(param_1 + 0x38);
      goto LAB_100616e19;
    }
    uVar11 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar11,0x10);
    iVar2 = iStack_45a;
  }
joined_r0x00010061740c:
  iStack_45a = iVar5;
  if (cVar3 != '\0') {
    uStack_45c = 0x400;
    local_45e = 0;
    local_460 = 1;
    uStack_464 = 0x7a0a90;
    uStack_466 = 0x822;
    local_468 = 0x202;
    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_468,0x12);
    iVar2 = iStack_45a;
  }
LAB_100617412:
  iStack_45a = iVar2;
  FUN_1001e9809(param_1 + 0x4c8);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar11 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_468 = 0;
    __os_log_impl(0x100000000,uVar11,1,"sync> exiting sync thread",&local_468,2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

