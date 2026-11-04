// name: FUN_1006157b9
// address: 1006157b9

void FUN_1006157b9(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 local_48;
  undefined2 uStack_46;
  int iStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100601c1f(param_2);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x202;
      uStack_46 = 0x822;
      iStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "IPodSyncContextIsValid(context)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined1 *)(param_1 + 0x8e1) = 0;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar3 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_48 = 0;
    __os_log_impl(0x100000000,uVar3,1,"sync> calling AMSCancelBackupRestore",&local_48,2);
  }
  FUN_10016bec9(&local_48,*(undefined8 *)(param_2 + 0x50));
  iVar2 = _AMSCancelBackupRestore(CONCAT44(iStack_44,CONCAT22(uStack_46,local_48)));
  FUN_10016d588(&local_48);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar3 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_48 = 0;
    __os_log_impl(0x100000000,uVar3,1,"sync> returned from AMSCancelBackupRestore",&local_48,2);
  }
  if (iVar2 != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x100;
      uStack_46 = 0x400;
      iStack_44 = iVar2;
      __os_log_impl(0x100000000,uVar3,0x10,"AMSCancelBackupRestore failed (%d)",&local_48,8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

