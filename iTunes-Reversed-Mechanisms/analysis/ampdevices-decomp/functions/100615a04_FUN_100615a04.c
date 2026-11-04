// name: FUN_100615a04
// address: 100615a04

void FUN_100615a04(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  uint local_80;
  long *local_78;
  long local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 0x10);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_98._0_2_ = 0;
    __os_log_impl(0x100000000,uVar5,1,"sync> entering backup thread",&local_98,2);
  }
  if (*(char *)(DAT_1008c76a0 + 0x1a94) != '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_98._0_2_ = 0x202;
      local_98._2_2_ = 0x822;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xd9fc;
      local_88 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_98._0_2_ = 0x202;
      local_98._2_2_ = 0x822;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xde6a;
      local_88 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_80 = *(uint *)(lVar2 + 0x28);
    local_98._0_2_ = 0xb30;
    local_98._2_2_ = 0x87;
    local_98._4_4_ = 1;
    local_90 = 0x6160fe;
    uStack_8c = 1;
    uStack_8a = 0;
    local_88 = 0x626b7570;
    uStack_82 = 0;
    uStack_60 = 0;
    uStack_59 = 0;
    uStack_58 = 0;
    uStack_56 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = (long *)0x0;
    local_68 = (ulong)local_80 << 0x20;
    uStack_57 = 1;
    local_78 = &local_98;
    FUN_10017869a(&local_98);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_78 == &local_98) {
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (local_78 == (long *)0x0) goto LAB_100615b91;
    }
    (**(code **)(*local_78 + lVar6))();
  }
LAB_100615b91:
  if ((*(byte *)(param_1 + 0x3b) & 2) != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_98._0_2_ = 0;
      __os_log_impl(0x100000000,uVar5,1,"sync> calling AMSArchiveBackup",&local_98,2);
    }
    FUN_10016bec9(&local_98,*(undefined8 *)(param_1 + 0x50));
    iVar4 = _AMSArchiveBackup(CONCAT44(local_98._4_4_,CONCAT22(local_98._2_2_,(undefined2)local_98))
                             );
    FUN_10016d588(&local_98);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_98._0_2_ = 0;
      __os_log_impl(0x100000000,uVar5,1,"sync> returned from AMSArchiveBackup",&local_98,2);
    }
    if (iVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        local_98._0_2_ = 0x100;
        local_98._2_2_ = 0x400;
        local_98._4_4_ = iVar4;
        __os_log_impl(0x100000000,uVar5,0x10,"AMSArchiveBackup failed (%d)",&local_98,8);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x3b) & 1) != 0) {
    lVar6 = FUN_1001fd053(lVar2);
    if (lVar6 == 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_98._0_2_ = 0x202;
        local_98._2_2_ = 0x822;
        local_98._4_4_ = 0x7a0a90;
        local_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0xdd09;
        local_88 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_98._0_2_ = 0;
        __os_log_impl(0x100000000,uVar5,1,"sync> calling AMSBackupWithOptions",&local_98,2);
      }
      uVar5 = FUN_1005c66d5();
      local_98._0_2_ = (undefined2)uVar5;
      local_98._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
      local_98._4_4_ = (int)((ulong)uVar5 >> 0x20);
      FUN_10016bec9(&local_a0,*(undefined8 *)(param_1 + 0x50));
      iVar4 = _AMSBackupWithOptions(uVar5,local_a0,lVar6,0,FUN_1006162e5,param_1);
      FUN_10016d588(&local_a0);
      FUN_10016d588(&local_98);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_98._0_2_ = 0;
        __os_log_impl(0x100000000,uVar5,1,"sync> returned from AMSBackupWithOptions",&local_98,2);
      }
      if (iVar4 != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 != '\0') {
          local_98._0_2_ = 0x100;
          local_98._2_2_ = 0x400;
          local_98._4_4_ = iVar4;
          __os_log_impl(0x100000000,uVar5,0x10,"AMSBackupWithOptions failed (%d)",&local_98,8);
        }
      }
      FUN_1001fdb3a(lVar2);
      FUN_10017060f(lVar6);
    }
  }
  FUN_1001e9809(param_1 + 0x4c8);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_98._0_2_ = 0;
    __os_log_impl(0x100000000,uVar5,1,"sync> exiting backup thread",&local_98,2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

