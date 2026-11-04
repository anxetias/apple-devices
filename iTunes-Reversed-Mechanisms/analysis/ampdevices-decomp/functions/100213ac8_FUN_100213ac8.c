// name: FUN_100213ac8
// address: 100213ac8

void FUN_100213ac8(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x2aec) == '\x01') {
    *(undefined4 *)(param_1 + 0x2ad8) = 0x10cc00fe;
    iVar3 = FUN_1001e944c(param_1 + 0x2b00);
    if (iVar3 != -0x80) {
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        if (iVar3 != 0) goto LAB_100213c2f;
      }
      iVar3 = *(int *)(param_1 + 0x2af0);
      if (iVar3 != -0x80) {
        if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
          if (iVar3 != 0) goto LAB_100213c2f;
        }
        lVar5 = FUN_100166c1b(*(undefined8 *)(param_1 + 11000),&cf_Status);
        if (lVar5 == 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "statusString != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          cVar2 = FUN_100169eb1(lVar5,&cf_UP);
          if (cVar2 == '\0') {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            iVar3 = 0x667;
            if (cVar2 != '\0') {
              local_48 = local_48 & 0xffff0000;
              __os_log_impl(0x100000000,uVar4,0x10,"Activation server reported status not up!",
                            &local_48,2);
            }
            lVar5 = 0;
            goto LAB_100213c3f;
          }
        }
      }
    }
  }
LAB_100213c2f:
  if (*(long *)(param_1 + 0x2888) != 0) {
    lVar5 = 0;
    iVar3 = 0;
    goto LAB_100213c3f;
  }
  iVar3 = 0;
  lVar5 = FUN_10021182e(param_1,0);
  if (lVar5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "optionsDictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
    iVar3 = -0x6c;
    goto LAB_100213c3f;
  }
  lVar6 = FUN_100171475(lVar5,&cf_AuthInstallRestoreBehavior);
  if (lVar6 == 0) goto LAB_100213c3f;
  plVar1 = (long *)(param_1 + 0x2820);
  if (*(long *)(param_1 + 0x2820) == 0) {
    lVar6 = 0;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "thisController->mOptionsDictionary == nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar6 = *plVar1;
  }
  FUN_10017060f(lVar6);
  *(undefined8 *)(param_1 + 0x2820) = 0;
  lVar6 = *(long *)(param_1 + 0x2878);
  if (*(long *)(param_1 + 0x2870) == 0) {
    lVar7 = *(long *)(param_1 + 0x2868);
    if (lVar6 == 0) {
      if (lVar7 != 0) {
        lVar6 = 0;
        goto LAB_100213d6d;
      }
    }
    else if (lVar7 == 0) goto LAB_100213d62;
  }
  else if ((lVar6 == 0) && (*(long *)(param_1 + 0x2868) == 0)) {
    lVar6 = 0;
LAB_100213d62:
    lVar7 = 0;
LAB_100213d6d:
    iVar3 = 0x10cc00c9;
    if (*(int *)(param_1 + 0x2ad4) != 0xe) {
      iVar3 = 0x10cc00ca - (uint)*(byte *)(param_1 + 0x2852);
    }
    *(int *)(param_1 + 0x2ad8) = iVar3;
    if (lVar7 == 0) {
      if (lVar6 == 0) {
        iVar3 = _AMDFUModeDeviceCopyAuthInstallPreflightOptions
                          (*(long *)(param_1 + 0x2870),lVar5,plVar1);
      }
      else {
        iVar3 = _AMRecoveryModeDeviceCopyAuthInstallPreflightOptions(lVar6,lVar5,plVar1);
      }
    }
    else {
      iVar3 = _AMDeviceCopyAuthInstallPreflightOptions(lVar7,lVar5,plVar1);
    }
    if ((iVar3 - 0xbbcU < 0x11) && ((0x10201U >> (iVar3 - 0xbbcU & 0x1f) & 1) != 0)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      iVar3 = 0x666;
      if (cVar2 != '\0') {
        local_48 = local_48 & 0xffff0000;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "AM*CopyAuthInstallPreflightOptions server not reachable",&local_48,2);
      }
    }
    else if ((iVar3 == 0) && (iVar3 = 0, *plVar1 == 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "error != kAMRestoreNoError || thisController->mOptionsDictionary != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      iVar3 = 0;
      FUN_1001782e9(0,0);
    }
    goto LAB_100213c3f;
  }
  uVar4 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar4,0x10);
  if (cVar2 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = 
    "((thisController->mPreemptiveDFUDeviceRef != nullptr) && (thisController->mPreemptiveRecoveryDeviceRef == nullptr) && (thisController->mPreemptiveMobileDeviceRef == nullptr)) || ((thisController->mPreemptiveDFUDeviceRef == nullptr) && (thisController->mPreemptiveRecoveryDeviceRef != nullptr) && (thisController->mPreemptiveMobileDeviceRef == nullptr)) || ((thisController->mPreemptiveDFUDeviceRef == nullptr) && (thisController->mPreemptiveRecoveryDeviceRef == nullptr) && (thisController->mPreemptiveMobileDeviceRef != nullptr))"
    ;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  iVar3 = 0x66a;
LAB_100213c3f:
  FUN_10017060f(lVar5);
  *(undefined4 *)(param_1 + 0x2ad8) = 0;
  *(int *)(param_1 + 0x2acc) = iVar3;
  *(undefined1 *)(param_1 + 0x28a0) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

