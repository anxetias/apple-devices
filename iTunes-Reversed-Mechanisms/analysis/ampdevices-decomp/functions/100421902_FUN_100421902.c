// name: FUN_100421902
// address: 100421902

int FUN_100421902(long param_1,undefined1 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
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
  local_5a = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  if (*(int *)(param_1 + 0x548) == 2) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mEvaluationResult.updateVersionCheckResult != kIPodSoftwareLocalHasNewest";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((*(byte *)(param_1 + 0x54c) & 8) != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(mEvaluationResult.updateLocalSearchResult & kIPodSoftwareLatestSoftwareDownloaded) == 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined4 *)(param_1 + 0x1300) = 8;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_68 = (char *)FUN_1001b83ae(param_1 + 0x60);
    cVar3 = FUN_1001df957("setting","",0);
    pcVar6 = "in";
    if (cVar3 == '\0') {
      pcVar6 = "setting";
    }
    local_40 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
    local_58 = 0x8200302;
    local_54 = local_68;
    local_4c = 0x820;
    local_42 = 0x820;
    local_4a = pcVar6;
    __os_log_impl(0x100000000,uVar5,1,"\"%s\" %s state %s",&local_58,0x20);
  }
  FUN_10041dd48(param_1 + 0x1310,param_3);
  iVar4 = FUN_10024f5ea(param_1 + 0x4c8,*(undefined4 *)(param_1 + 0x58),0,param_2,0,0,0,0);
  if (iVar4 != 0) {
    FUN_10041c7bc(param_1,0x10e5,iVar4,0);
    goto LAB_100421b74;
  }
  iVar4 = FUN_10041b42a(param_1,0,1,1,&local_5a);
  if (iVar4 != -0x80) {
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar4 != 0) goto LAB_100421b54;
    }
    if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_78);
    iVar4 = FUN_100419d7e(param_1,0,0,0,local_78,&local_5a);
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
LAB_100421b54:
  FUN_10041aad0(param_1,iVar4,(int)local_5a);
  FUN_10041b42a(param_1,0,0,0,0);
LAB_100421b74:
  FUN_1001ceee0(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

