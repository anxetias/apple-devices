// name: FUN_1004ed4f6
// address: 1004ed4f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004ed4f6(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004ed68e:
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_1004ed6ba;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure (expected to be true)";
      local_46c = 0x822;
      local_46a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 == '\0') goto LAB_1004ed68e;
  }
  iVar4 = *(int *)(param_1 + 0x15204);
  *(int *)(param_1 + 0x15204) = iVar4 + 1;
  if (iVar4 != 0) {
    iVar4 = 0;
    if ((*(long *)(param_1 + 0x7168) != 0) && (iVar4 = 0, *(char *)(param_1 + 0x3a2) == '\0')) {
      if (*(int *)(param_1 + 0x14cc8) == 1) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_478 = local_478 & 0xffff0000;
          __os_log_impl(0x100000000,uVar6,1,
                        "sync> start waiting for com.apple.itunes.lock_sync lock",&local_478,2);
        }
        do {
          iVar4 = FUN_1001b19b0();
          iVar5 = FUN_1001b1a0f();
          if (iVar4 == iVar5) {
            FUN_1001b0d8d(0);
            FUN_1001ee7b6(0x32);
          }
          else {
            FUN_1001b0d8d(DAT_10070e568);
          }
        } while (*(int *)(param_1 + 0x14cc8) == 1);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_478 = local_478 & 0xffff0000;
          __os_log_impl(0x100000000,uVar6,1,"sync> end waiting for com.apple.itunes.lock_sync lock",
                        &local_478,2);
        }
      }
      iVar4 = *(int *)(param_1 + 0x14cc8);
    }
    goto LAB_1004ed6ba;
  }
  uVar6 = FUN_1001ebd46();
  *(undefined8 *)(param_1 + 0x15208) = uVar6;
  FUN_1001cc3a4(4);
  iVar4 = FUN_1004dccf5(param_1,"");
  if ((iVar4 != -0x80) && (iVar4 != 0)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x400;
      local_46a = (char *)CONCAT44(local_46a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12);
    }
  }
  if ((*(long *)(param_1 + 0x7168) == 0) || (*(char *)(param_1 + 0x3a2) != '\0'))
  goto LAB_1004ed6ba;
  dVar7 = (double)FUN_1001ebd46();
  *(undefined4 *)(param_1 + 0x14cc8) = 1;
  if (*(long *)(param_1 + 0x15210) == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "handlerData->notificationProxyConnection != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_478 = local_478 & 0xffff0000;
    __os_log_impl(0x100000000,uVar6,1,
                  "sync> posting com.apple.itunes-mobdev.syncWillStart notification",&local_478,2);
  }
  iVar4 = _AMDSecurePostNotification
                    (*(undefined8 *)(param_1 + 0x15210),&cf_com_apple_itunes_mobdev_syncWillStart,0)
  ;
  if ((iVar4 != -0x80) && (iVar4 != 0)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x400;
      local_46a = (char *)CONCAT44(local_46a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12);
    }
  }
  lVar1 = param_1 + 0x6b40;
  iVar4 = FUN_1001888ba(lVar1,"com.apple.itunes.lock_sync",&local_478,0);
  if ((iVar4 == 0) ||
     (iVar4 = FUN_100189206(lVar1,"com.apple.itunes.lock_sync",&local_478), iVar4 == 0)) {
    plVar2 = (long *)(param_1 + 0x14cc0);
    if (*(long *)(param_1 + 0x14cc0) == 0) {
LAB_1004edae1:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_58 = local_58 & 0xffff0000;
        __os_log_impl(0x100000000,uVar6,1,"sync> opening com.apple.itunes.lock_sync file",&local_58,
                      2);
      }
      iVar4 = FUN_10017cc65(&local_478,0x64617461,2,plVar2);
      if (iVar4 == 0) {
        dVar8 = (double)FUN_1001ebd46();
        dVar8 = dVar8 + DAT_10070d3a0;
        while( true ) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar3 != '\0') {
            local_58 = local_58 & 0xffff0000;
            __os_log_impl(0x100000000,uVar6,1,"sync> locking com.apple.itunes.lock_sync file",
                          &local_58,2);
          }
          iVar4 = FUN_100188255(*plVar2,1);
          if (iVar4 != -0xca2) {
            if (iVar4 != 0) goto LAB_1004edf0b;
            goto LAB_1004ed8ae;
          }
          dVar9 = (double)FUN_1001ebd46();
          if (dVar8 <= dVar9) break;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar3 != '\0') {
            local_58 = local_58 & 0xffff0000;
            __os_log_impl(0x100000000,uVar6,1,
                          "sync> posting com.apple.itunes-mobdev.syncLockRequest notification",
                          &local_58,2);
          }
          iVar4 = _AMDSecurePostNotification
                            (*(undefined8 *)(param_1 + 0x15210),
                             &cf_com_apple_itunes_mobdev_syncLockRequest,0);
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          iVar4 = FUN_1001b19b0();
          iVar5 = FUN_1001b1a0f();
          if (iVar4 == iVar5) {
            FUN_1001b0d8d(0);
            FUN_1001ee7b6(0x32);
          }
          else {
            FUN_1001b0d8d(DAT_10070e568);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 != '\0') {
          local_58 = local_58 & 0xffff0000;
          __os_log_impl(0x100000000,uVar6,0x10,
                        "sync> timed out waiting for com.apple.itunes.lock_sync lock",&local_58,2);
LAB_1004edf0b:
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
        }
        uVar6 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_58 = local_58 & 0xffff0000;
          __os_log_impl(0x100000000,uVar6,1,"sync> closing com.apple.itunes.lock_sync file",
                        &local_58,2);
        }
        FUN_10017cdfb(*plVar2);
        *plVar2 = 0;
      }
      goto LAB_1004edb56;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->iTunesSyncLockFileRefNum == ((JRFileRefNum) 0)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (*plVar2 == 0) goto LAB_1004edae1;
LAB_1004ed8ae:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar6,1,
                    "sync> posting com.apple.itunes-mobdev.syncDidStart notification",&local_58,2);
    }
    iVar4 = 0;
    iVar5 = _AMDSecurePostNotification
                      (*(undefined8 *)(param_1 + 0x15210),&cf_com_apple_itunes_mobdev_syncDidStart,0
                      );
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar5 = FUN_1001888ba(lVar1,"com.apple.itunes.syncing",&local_478,0);
    if (iVar5 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_58 = local_58 & 0xffff0000;
        __os_log_impl(0x100000000,uVar6,1,"sync> creating com.apple.itunes.syncing file",&local_58,2
                     );
      }
      iVar5 = FUN_100189206(lVar1,"com.apple.itunes.syncing",&local_478);
      if ((iVar5 != -0x80) && (iVar5 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  else {
LAB_1004edb56:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar6,1,
                    "sync> posting com.apple.itunes-mobdev.syncFailedToStart notification",&local_58
                    ,2);
    }
    iVar5 = _AMDSecurePostNotification
                      (*(undefined8 *)(param_1 + 0x15210),
                       &cf_com_apple_itunes_mobdev_syncFailedToStart,0);
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if (iVar4 == 1) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "status != kIOPendingStatus";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar4 = 1;
    }
  }
  *(int *)(param_1 + 0x14cc8) = iVar4;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    dVar8 = (double)FUN_1001ebd46();
    local_54 = (char *)((dVar8 - dVar7) * _DAT_100708b48);
    local_58 = 0x8000100;
    __os_log_impl(0x100000000,uVar6,1,"perf> NotifyIPodSyncStarted() took %.2f ms",&local_58,0xc);
  }
LAB_1004ed6ba:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

