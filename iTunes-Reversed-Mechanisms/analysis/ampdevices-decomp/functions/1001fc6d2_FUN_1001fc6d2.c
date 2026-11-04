// name: FUN_1001fc6d2
// address: 1001fc6d2

undefined1 FUN_1001fc6d2(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_49;
  undefined4 local_48;
  int iStack_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1001fc7d9:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      iStack_44 = 0x7a0a90;
      local_40 = 1;
      local_3e = 0;
      uStack_3c = 0x822;
      uStack_3a = 0x7ad2b2;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        iStack_44 = 0x7ab58c;
        local_40 = 1;
        local_3e = 0;
        uStack_3c = 0x822;
        uStack_3a = 0x7ad710;
        uStack_36 = 1;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1001fc7d9;
    }
    local_49 = 0;
    FUN_10016bec9(&local_48,*(undefined8 *)(param_1 + 0x152c8));
    iVar4 = _AMSSetBackupPasswordInKeychain(CONCAT44(iStack_44,local_48),param_2,&local_49);
    FUN_10016d588(&local_48);
    uVar3 = local_49;
    if (iVar4 == 0) goto LAB_1001fc7fd;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x152c8);
      local_48 = 0x4000202;
      local_40 = 0x842;
      local_3e = (undefined2)uVar1;
      uStack_3c = (undefined2)((ulong)uVar1 >> 0x10);
      uStack_3a = (undefined4)((ulong)uVar1 >> 0x20);
      iStack_44 = iVar4;
      __os_log_impl(0x100000000,uVar5,0x10,
                    "AMSSetBackupPasswordInKeychain failed (%d) for device %{public}@",&local_48,
                    0x12);
    }
  }
  uVar3 = 0;
LAB_1001fc7fd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

