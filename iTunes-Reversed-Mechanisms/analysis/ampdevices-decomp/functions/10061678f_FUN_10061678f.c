// name: FUN_10061678f
// address: 10061678f

void FUN_10061678f(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined2 local_38;
  undefined2 uStack_36;
  int iStack_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_58);
  FUN_1001b7a44(local_48);
  if (*(int *)(param_2 + 0x30) == 0) {
    *(undefined4 *)(param_2 + 0x30) = 0xffffff80;
  }
  FUN_100231b73(*(undefined8 *)(param_2 + 0x10),0x63616e63,local_58,local_48,0);
  FUN_1005295b5(DAT_100700af8,param_1,local_58,local_48,0x84);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_38 = 0;
    __os_log_impl(0x100000000,uVar1,1,"sync> calling AMSCancelCrashReportCopy",&local_38,2);
  }
  FUN_10016bec9(&local_38,*(undefined8 *)(param_2 + 0x50));
  iVar3 = _AMSCancelCrashReportCopy(CONCAT44(iStack_34,CONCAT22(uStack_36,local_38)),local_5c);
  FUN_10016d588(&local_38);
  if (iVar3 != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 == '\0') goto LAB_1006168e5;
    local_38 = 0x100;
    uStack_36 = 0x400;
    iStack_34 = iVar3;
    __os_log_impl(0x100000000,uVar1,0x10,"AMSCancelCrashReportCopy failed (%d)",&local_38,8);
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
LAB_1006168e5:
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_38 = 0;
    __os_log_impl(0x100000000,uVar1,1,"sync> calling AMSCancelSync",&local_38,2);
  }
  FUN_10016bec9(&local_38,*(undefined8 *)(param_2 + 0x50));
  iVar3 = _AMSCancelSync(CONCAT44(iStack_34,CONCAT22(uStack_36,local_38)));
  FUN_10016d588(&local_38);
  if (iVar3 != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x100;
      uStack_36 = 0x400;
      iStack_34 = iVar3;
      __os_log_impl(0x100000000,uVar1,0x10,"AMSCancelSync failed (%d)",&local_38,8);
    }
  }
  FUN_1001b7a50(local_48);
  FUN_1001b7a50(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

