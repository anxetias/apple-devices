// name: FUN_100419852
// address: 100419852

void FUN_100419852(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_78 [8];
  long *local_70;
  char *local_68;
  short local_5a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 != *(long *)(param_1 + 0x1340)) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "timer == mSoftwareUpdateQueueRetryOneShotTimer";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100419c39;
  }
  local_5a = 0;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar4 != '\0') {
    local_68 = (char *)FUN_1001b83ae(param_1 + 0x60);
    cVar4 = FUN_1001df957("","",0);
    local_4a = "in";
    if (cVar4 == '\0') {
      local_4a = "";
    }
    local_40 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
    local_58 = 0x8200302;
    local_54 = local_68;
    local_4c = 0x820;
    local_42 = 0x820;
    __os_log_impl(0x100000000,uVar6,1,"\"%s\" %s state %s",&local_58,0x20);
  }
  FUN_1002188e4(param_1 + 0x1340);
  iVar3 = *(int *)(param_1 + 0x1300);
  if (iVar3 - 3U < 3) {
    if (iVar3 == 5) {
      *(undefined4 *)(param_1 + 0x1300) = 8;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        pcVar7 = (char *)FUN_1001b83ae(param_1 + 0x60);
        cVar4 = FUN_1001df957("setting","",0);
        pcVar8 = "in";
        if (cVar4 == '\0') {
          pcVar8 = "setting";
        }
        local_40 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
        local_54 = pcVar7;
        local_4a = pcVar8;
        goto LAB_100419bb5;
      }
    }
    else if (iVar3 == 4) {
      *(undefined4 *)(param_1 + 0x1300) = 7;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        pcVar7 = (char *)FUN_1001b83ae(param_1 + 0x60);
        cVar4 = FUN_1001df957("setting","",0);
        pcVar8 = "in";
        if (cVar4 == '\0') {
          pcVar8 = "setting";
        }
        local_40 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
        local_54 = pcVar7;
        local_4a = pcVar8;
LAB_100419bb5:
        local_42 = 0x820;
        local_4c = 0x820;
        local_58 = 0x8200302;
        __os_log_impl(0x100000000,uVar6,1,"\"%s\" %s state %s",&local_58,0x20);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1300) = 6;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        pcVar7 = (char *)FUN_1001b83ae(param_1 + 0x60);
        cVar4 = FUN_1001df957("setting","",0);
        pcVar8 = "in";
        if (cVar4 == '\0') {
          pcVar8 = "setting";
        }
        local_40 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
        local_54 = pcVar7;
        local_4a = pcVar8;
        goto LAB_100419bb5;
      }
    }
    if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_78);
    uVar5 = FUN_100419d7e(param_1,0,1,0,local_78,&local_5a);
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(mState == kRestoringWaitingForQueue) || (mState == kUpdatingWaitingForQueue) || (mState == kDownloadOnlyWaitingForQueue)"
      ;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffee;
  }
  FUN_10041aad0(param_1,uVar5,(int)local_5a);
LAB_100419c39:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

