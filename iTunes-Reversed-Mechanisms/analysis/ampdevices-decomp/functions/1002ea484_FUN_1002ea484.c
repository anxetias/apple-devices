// name: FUN_1002ea484
// address: 1002ea484

undefined8
FUN_1002ea484(undefined8 *param_1,undefined1 param_2,uint param_3,undefined1 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long local_60;
  undefined2 local_58;
  undefined2 uStack_56;
  int iStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if ((param_3 & 2) == 0) {
LAB_1002ea5c0:
    lVar6 = 0;
  }
  else {
    if (param_5 != '\0') {
      cVar1 = FUN_1001ee056();
      if (cVar1 == '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          iStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "JRIsCurrentThreadCooperative()";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_10016bec9(&local_58,*param_1);
      iVar2 = FUN_1005c726a(0,0,CONCAT44(iStack_54,CONCAT22(uStack_56,local_58)),0x1f,0,
                            FUN_1002ea96c,*(undefined4 *)(param_1 + 1),0);
      FUN_10016d588(&local_58);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          iStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "status == AMSStatus_OK";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x100;
          uStack_56 = 0x400;
          iStack_54 = 3;
          __os_log_impl(0x100000000,uVar3,0x10,"AMSGetDataClassInfoForTargetAsync failed (%d)",
                        &local_58,8);
        }
      }
      *(undefined1 *)((long)param_1 + 0x42) = param_2;
      goto LAB_1002ea5c0;
    }
    cVar1 = FUN_1001ee041();
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x202;
        uStack_56 = 0x822;
        iStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "JRIsCurrentThreadPreemptive()";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_10016bec9(&local_58,*param_1);
    iVar2 = _AMSGetDataClassInfoForTarget
                      (CONCAT44(iStack_54,CONCAT22(uStack_56,local_58)),&local_60);
    FUN_10016d588(&local_58);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x202;
        uStack_56 = 0x822;
        iStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "status == AMSStatus_OK";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      uVar5 = 0xa28;
      if (cVar1 == '\0') goto LAB_1002ea5c9;
      local_58 = 0x100;
      uStack_56 = 0x400;
      pcVar4 = "AMSGetDataClassInfoForTarget failed (%d)";
      uVar7 = 8;
      iStack_54 = iVar2;
LAB_1002ea6ce:
      uVar5 = 0xa28;
      __os_log_impl(0x100000000,uVar3,0x10,pcVar4,&local_58,uVar7);
      goto LAB_1002ea5c9;
    }
    if (local_60 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x202;
        uStack_56 = 0x822;
        iStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "dataClasses != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      uVar5 = 0xa28;
      if (cVar1 == '\0') goto LAB_1002ea5c9;
      local_58 = 0;
      pcVar4 = "AMSGetDataClassInfoForTarget returned NULL";
      uVar7 = 2;
      goto LAB_1002ea6ce;
    }
    *(undefined1 *)((long)param_1 + 0x42) = param_2;
    FUN_1002eab6a(param_1,local_60,param_3,param_4);
    lVar6 = local_60;
  }
  FUN_10017060f(lVar6);
  uVar5 = 0;
LAB_1002ea5c9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

