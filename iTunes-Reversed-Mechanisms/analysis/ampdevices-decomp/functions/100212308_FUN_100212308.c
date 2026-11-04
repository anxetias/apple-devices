// name: FUN_100212308
// address: 100212308

void FUN_100212308(long param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "pvData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10021258a;
  }
  uVar1 = *(uint *)(param_1 + 0x2ad4);
  if (*(char *)(param_1 + 0x2856) == '\x01') {
    if (uVar1 != 0xd) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_4a = "mState == kRestoringWaitingForMobileRestoreCommitStashBag";
LAB_100212529:
        local_4c = 0x822;
        uStack_50 = 1;
        uStack_54 = 0x7a0a90;
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_10021254e:
      FUN_1001782e9(0,0);
      iVar4 = -0x32;
      goto LAB_100212560;
    }
    if ((((*(long *)(param_1 + 0x2870) != 0) || (*(long *)(param_1 + 0x2878) != 0)) ||
        (*(long *)(param_1 + 0x2880) != 0)) || (*(long *)(param_1 + 0x2888) == 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_4a = 
        "mPreemptiveDFUDeviceRef == nullptr && mPreemptiveRecoveryDeviceRef == nullptr && mPreemptiveRestoreDeviceRef == nullptr && mPreemptiveRestorableDeviceRef != nullptr"
        ;
        goto LAB_100212529;
      }
      goto LAB_10021254e;
    }
    *(undefined4 *)(param_1 + 0x2ae8) = 0;
    iVar4 = _AMRestorableCommitStashBagWithManifest
                      (*(long *)(param_1 + 0x2888),*(undefined8 *)(param_1 + 0x2828),FUN_10021134c,
                       param_1);
    iVar5 = FUN_1001e9de0(param_1 + 0x2110);
    if (iVar5 == -0x80) goto LAB_10021258a;
    if (iVar5 != 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_10021258a;
    }
    iVar5 = -0x80;
    if (iVar4 != 0xfc5) {
      iVar5 = iVar4;
    }
    lVar7 = 0;
    if (iVar4 == -4) {
      iVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x2ac9) = 0;
    FUN_1001e9eb9(param_1 + 0x2110);
    bVar2 = true;
    iVar4 = 0;
  }
  else {
    if ((9 < uVar1) || ((0x2aaU >> (uVar1 & 0x1f) & 1) == 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_4a = 
        "(mState == kRestoringWaitingForDFUToSecondDFURestore) || (mState == kRestoringWaitingForSecondDFUToRecoveryModeRestore) || (mState == kRestoringWaitingForRecoveryToSecondRecoveryModeRestore) || (mState == kRestoringWaitingForSecondRecoveryToRestoreModeRestore) || (mState == kRestoringWaitingForRestoreModeRestore)"
        ;
        goto LAB_100212529;
      }
      goto LAB_10021254e;
    }
    if (*(long *)(param_1 + 0x2888) != 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_4a = "mPreemptiveRestorableDeviceRef == nullptr";
        goto LAB_100212529;
      }
      goto LAB_10021254e;
    }
    if (*(long *)(param_1 + 0x2870) == 0) {
      if ((*(long *)(param_1 + 0x2880) == 0) == (*(long *)(param_1 + 0x2878) == 0))
      goto LAB_1002124bb;
LAB_1002125c6:
      *(undefined4 *)(param_1 + 0x2ae8) = 0;
      if (*(long *)(param_1 + 0x2820) == 0) {
        lVar7 = FUN_10021182e(param_1,0);
        if (lVar7 == 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x822;
            local_4a = "optionsDictionary != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar4 = -0x6c;
          goto LAB_100212560;
        }
      }
      else {
        lVar7 = FUN_1001705fc();
      }
      if (*(long *)(param_1 + 0x2870) == 0) {
        if (*(long *)(param_1 + 0x2878) == 0) {
          local_5c = 0;
          iVar5 = _AMRestorePerformRestoreModeRestore
                            (*(undefined8 *)(param_1 + 0x2880),lVar7,FUN_10021181c,param_1);
          local_58 = 0;
          uStack_54 = 0;
          _AMRestoreModeGetLastFailureLog
                    (*(undefined8 *)(param_1 + 0x2880),&local_58,&local_5c,param_1 + 0x2860);
          uVar6 = FUN_1001705fc(CONCAT44(uStack_54,local_58));
          *(undefined8 *)(param_1 + 0x2858) = uVar6;
          if (local_5c != 2) {
            FUN_10017060f(uVar6);
            *(undefined8 *)(param_1 + 0x2858) = 0;
            FUN_10017060f(*(undefined8 *)(param_1 + 0x2860));
            *(undefined8 *)(param_1 + 0x2860) = 0;
          }
        }
        else {
          iVar5 = _AMRestorePerformRecoveryModeRestore
                            (*(long *)(param_1 + 0x2878),lVar7,FUN_10021180a,param_1);
        }
      }
      else {
        iVar5 = _AMRestorePerformDFURestore(*(long *)(param_1 + 0x2870),lVar7,FUN_1002117f8,param_1)
        ;
      }
      iVar4 = 0;
      bVar2 = true;
      goto LAB_100212566;
    }
    if ((*(long *)(param_1 + 0x2878) == 0) && (*(long *)(param_1 + 0x2880) == 0))
    goto LAB_1002125c6;
LAB_1002124bb:
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = 
      "((mPreemptiveDFUDeviceRef != nullptr) && (mPreemptiveRecoveryDeviceRef == nullptr) && (mPreemptiveRestoreDeviceRef == nullptr)) || ((mPreemptiveDFUDeviceRef == nullptr) && (mPreemptiveRecoveryDeviceRef != nullptr) && (mPreemptiveRestoreDeviceRef == nullptr)) || ((mPreemptiveDFUDeviceRef == nullptr) && (mPreemptiveRecoveryDeviceRef == nullptr) && (mPreemptiveRestoreDeviceRef != nullptr))"
      ;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = 0x66a;
LAB_100212560:
    lVar7 = 0;
    iVar5 = 0;
    bVar2 = false;
  }
LAB_100212566:
  FUN_10017060f(lVar7);
  if (iVar5 == 0) {
    iVar5 = iVar4;
  }
  if (!bVar2) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x2acc) = iVar5;
  *(undefined1 *)(param_1 + 0x28a0) = 0;
LAB_10021258a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

