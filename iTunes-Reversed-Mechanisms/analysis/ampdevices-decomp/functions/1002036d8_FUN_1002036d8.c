// name: FUN_1002036d8
// address: 1002036d8

void FUN_1002036d8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_60;
  undefined4 local_58;
  int iStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined4 uStack_4a;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_1;
  if (lVar1 == 0) {
LAB_10020399d:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      iStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7ad2b2;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar1 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        iStack_54 = 0x7ab58c;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        uStack_4a = 0x7ad710;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10020399d;
    }
    lVar6 = FUN_1001fd053(lVar1);
    if (lVar6 == 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        iStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        uStack_4a = 0x7adac1;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar3 != '\0') {
      local_58 = 0x8400102;
      iStack_54 = (int)lVar6;
      uStack_50 = (undefined2)((ulong)lVar6 >> 0x20);
      uStack_4e = (undefined2)((ulong)lVar6 >> 0x30);
      __os_log_impl(0x100000000,uVar5,2,"backup> deviceDict = %@",&local_58,0xc);
    }
    lVar7 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar7 == 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        iStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        uStack_4a = 0x7adad7;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        FUN_100171502(lVar7,&cf_ForceFullBackup,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        uVar2 = *(undefined8 *)(lVar1 + 0x152c8);
        local_58 = 0x8420102;
        iStack_54 = (int)uVar2;
        uStack_50 = (undefined2)((ulong)uVar2 >> 0x20);
        uStack_4e = (undefined2)((ulong)uVar2 >> 0x30);
        __os_log_impl(0x100000000,uVar5,1,
                      "backup> calling AMSBackupWithOptions for device %{public}@",&local_58,0xc);
      }
      uVar5 = FUN_1005c66d5();
      local_58 = (undefined4)uVar5;
      iStack_54 = (int)((ulong)uVar5 >> 0x20);
      FUN_10016bec9(&local_60,*(undefined8 *)(lVar1 + 0x152c8));
      iVar4 = _AMSBackupWithOptions(uVar5,local_60,lVar6,lVar7,FUN_100203bea,param_1);
      FUN_10016d588(&local_60);
      FUN_10016d588(&local_58);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        uVar2 = *(undefined8 *)(lVar1 + 0x152c8);
        local_58 = 0x8420102;
        iStack_54 = (int)uVar2;
        uStack_50 = (undefined2)((ulong)uVar2 >> 0x20);
        uStack_4e = (undefined2)((ulong)uVar2 >> 0x30);
        __os_log_impl(0x100000000,uVar5,1,
                      "backup> returned from AMSBackupWithOptions for device %{public}@",&local_58,
                      0xc);
      }
      if (iVar4 != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 != '\0') {
          uVar2 = *(undefined8 *)(lVar1 + 0x152c8);
          local_58 = 0x4000202;
          uStack_50 = 0x842;
          uStack_4e = (undefined2)uVar2;
          uStack_4c = (undefined2)((ulong)uVar2 >> 0x10);
          uStack_4a = (undefined4)((ulong)uVar2 >> 0x20);
          iStack_54 = iVar4;
          __os_log_impl(0x100000000,uVar5,0x10,
                        "AMSBackupWithOptions failed (%d) for device %{public}@",&local_58,0x12);
        }
      }
      FUN_1001fdb3a(lVar1);
    }
    FUN_10017060f(lVar7);
    FUN_10017060f(lVar6);
    *(undefined1 *)(param_1 + 5) = 1;
    FUN_100203d2b(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

