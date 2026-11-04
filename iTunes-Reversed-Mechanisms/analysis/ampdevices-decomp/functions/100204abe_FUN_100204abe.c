// name: FUN_100204abe
// address: 100204abe

void FUN_100204abe(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined2 uStack_46;
  int iStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x202;
      uStack_46 = 0x822;
      iStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      uStack_3a = 0x7adda2;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x670);
    if (((((uVar3 & 1) != 0) || (*(char *)(DAT_1008c76a0 + 0x1a94) != '\0')) ||
        (*(char *)(DAT_1008c76a0 + 0x1a92) != '\0')) || (*(char *)(DAT_1008c76a0 + 0x1a93) != '\0'))
    {
      FUN_100168b0b(lVar5,&cf_RestoreDontCopyBackup,1,1);
      uVar3 = *(uint *)(param_1 + 0x670);
    }
    if ((uVar3 & 8) != 0) {
      FUN_100168b0b(lVar5,&cf_RestorePreserveSettings,1,1);
      uVar3 = *(uint *)(param_1 + 0x670);
    }
    cVar2 = (char)uVar3;
    if ((uVar3 & 0x40) != 0) {
      FUN_100168b0b(lVar5,&cf_RestoreSystemFiles,0,1);
      cVar2 = (char)*(undefined4 *)(param_1 + 0x670);
    }
    if (cVar2 < '\0') {
      FUN_100168b0b(lVar5,&cf_ShouldPerformSplitRestore,1,1);
    }
    if (*(long *)(param_1 + 0x658) != 0) {
      FUN_100171502(lVar5,&cf_Password);
    }
    if (*(char *)(DAT_1008c76a0 + 0x1a92) != '\0') {
      FUN_100168b0b(lVar5,&cf_BackupAfterMigrate,0,1);
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar2 != '\0') {
      local_48 = 0x102;
      uStack_46 = 0x842;
      iStack_44 = (int)lVar5;
      uStack_40 = (undefined2)((ulong)lVar5 >> 0x20);
      uStack_3e = (undefined2)((ulong)lVar5 >> 0x30);
      __os_log_impl(0x100000000,uVar6,2,"restore> restoreOptions = %{public}@",&local_48,0xc);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_48 = 0;
      __os_log_impl(0x100000000,uVar6,1,"restore> calling AMSRestoreWithApplications",&local_48,2);
    }
    uVar6 = FUN_1005c66d5();
    local_48 = (undefined2)uVar6;
    uStack_46 = (undefined2)((ulong)uVar6 >> 0x10);
    iStack_44 = (int)((ulong)uVar6 >> 0x20);
    FUN_10016bec9(&local_58,*(undefined8 *)(param_1 + 0x660));
    FUN_10016bec9(&local_50,*(undefined8 *)(param_1 + 0x668));
    iVar4 = _AMSRestoreWithApplications(uVar6,local_58,local_50,0,lVar5,FUN_100205844,param_1);
    FUN_10016d588(&local_50);
    FUN_10016d588(&local_58);
    FUN_10016d588(&local_48);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_48 = 0;
      __os_log_impl(0x100000000,uVar6,1,"restore> returned from AMSRestoreWithApplications",
                    &local_48,2);
    }
    FUN_10017060f(lVar5);
    if (iVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x660);
        local_48 = 0x202;
        uStack_46 = 0x400;
        uStack_40 = 0x842;
        uStack_3e = (undefined2)uVar1;
        uStack_3c = (undefined2)((ulong)uVar1 >> 0x10);
        uStack_3a = (undefined4)((ulong)uVar1 >> 0x20);
        iStack_44 = iVar4;
        __os_log_impl(0x100000000,uVar6,0x10,
                      "AMSRestoreWithApplications failed (%d) for device %{public}@",&local_48,0x12)
        ;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x690) = 1;
  FUN_10020598b(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

