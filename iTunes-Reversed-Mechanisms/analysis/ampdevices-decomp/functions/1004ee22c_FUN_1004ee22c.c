// name: FUN_1004ee22c
// address: 1004ee22c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ee22c(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  uint local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  uint local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004ee57b:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_43a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1004ee601:
      local_43c = 0x822;
      local_444 = "Assertion failure";
      local_448 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_448 = 0x8220202;
        local_444 = "Assertion failure (expected to be true)";
        local_43c = 0x822;
        local_43a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004ee57b;
    }
    if (*(int *)(param_1 + 0x15204) != 0) {
      iVar2 = *(int *)(param_1 + 0x15204) + -1;
      *(int *)(param_1 + 0x15204) = iVar2;
      if (iVar2 == 0) {
        FUN_1004e7a5c(param_1);
        if ((*(long *)(param_1 + 0x7168) != 0) && (*(char *)(param_1 + 0x3a2) == '\0')) {
          dVar4 = (double)FUN_1001ebd46();
          if (*(long *)(param_1 + 0x14cc0) != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar3 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_448 = local_448 & 0xffff0000;
              __os_log_impl(0x100000000,uVar3,1,"sync> deleting com.apple.itunes.syncing file",
                            &local_448,2);
            }
            iVar2 = FUN_1001888ba(param_1 + 0x6b40,"com.apple.itunes.syncing",&local_448,0);
            if (iVar2 == 0) {
              iVar2 = FUN_100182d4d(&local_448);
              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_468 = 0x8220202;
                  local_464 = "Assertion failure";
                  local_45c = 0x400;
                  local_45a = iVar2;
                  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,
                                      0x12);
                }
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar3 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_468 = local_468 & 0xffff0000;
              __os_log_impl(0x100000000,uVar3,1,"sync> unlocking com.apple.itunes.lock_sync file",
                            &local_468,2);
            }
            iVar2 = FUN_1001882eb(*(undefined8 *)(param_1 + 0x14cc0));
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x400;
                local_45a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,0x12
                                   );
              }
            }
            iVar2 = FUN_10017cdfb(*(undefined8 *)(param_1 + 0x14cc0));
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x400;
                local_45a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,0x12
                                   );
              }
            }
            *(undefined8 *)(param_1 + 0x14cc0) = 0;
          }
          if (*(long *)(param_1 + 0x15210) == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_448 = 0x8220202;
              local_444 = "Assertion failure";
              local_43c = 0x822;
              local_43a = "handlerData->notificationProxyConnection != nullptr";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar3 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            local_448 = local_448 & 0xffff0000;
            __os_log_impl(0x100000000,uVar3,1,
                          "sync> posting com.apple.itunes-mobdev.syncDidFinish notification",
                          &local_448,2);
          }
          iVar2 = _AMDSecurePostNotification
                            (*(undefined8 *)(param_1 + 0x15210),
                             &cf_com_apple_itunes_mobdev_syncDidFinish,0);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_448 = 0x8220202;
              local_444 = "Assertion failure";
              local_43c = 0x400;
              local_43a = (char *)CONCAT44(local_43a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_448,0x12);
            }
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar3 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            dVar5 = (double)FUN_1001ebd46();
            local_444 = (char *)((dVar5 - dVar4) * _DAT_100708b48);
            local_448 = 0x8000100;
            __os_log_impl(0x100000000,uVar3,1,"perf> NotifyIPodSyncFinished() took %.2f ms",
                          &local_448,0xc);
          }
        }
        FUN_1004dd69c(param_1,"");
        FUN_1001cc4fc(4);
      }
      goto LAB_1004ee62f;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_43a = "handlerData->syncRefCount != 0";
      goto LAB_1004ee601;
    }
  }
  FUN_1001782e9(0,0);
LAB_1004ee62f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

