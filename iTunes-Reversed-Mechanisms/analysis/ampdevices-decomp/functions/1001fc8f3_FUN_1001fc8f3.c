// name: FUN_1001fc8f3
// address: 1001fc8f3

undefined1 FUN_1001fc8f3(long param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 uStack_4c;
  undefined4 uStack_4a;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c = 0;
  if (param_1 == 0) {
LAB_1001fca1c:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      local_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7ad2b2;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        local_50 = 1;
        local_4e = 0;
        uStack_4c = 0x822;
        uStack_4a = 0x7ad710;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1001fca1c;
    }
    FUN_10016bec9(&local_58,*(undefined8 *)(param_1 + 0x152c8));
    iVar3 = _AMSChangeBackupPassword(CONCAT44(uStack_54,local_58),param_2,param_3,&local_5c);
    FUN_10016d588(&local_58);
    if (iVar3 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x152c8);
        local_58 = 0x4000202;
        uStack_54 = local_5c;
        local_50 = 0x842;
        local_4e = (undefined2)uVar1;
        uStack_4c = (undefined2)((ulong)uVar1 >> 0x10);
        uStack_4a = (undefined4)((ulong)uVar1 >> 0x20);
        __os_log_impl(0x100000000,uVar4,0x10,
                      "AMSChangeBackupPassword failed (%d) for device %{public}@",&local_58,0x12);
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_5c;
    }
    if (iVar3 != 0) {
      uVar5 = 0;
      goto LAB_1001fca45;
    }
    FUN_1005bbcf4(*(undefined8 *)(param_1 + 0x7168),&cf_com_apple_mobile_backup,&cf_WillEncrypt,
                  (char *)(param_1 + 0x667f));
    uVar5 = 1;
    if ((bool)*(char *)(param_1 + 0x667f) == (param_3 != 0)) goto LAB_1001fca45;
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    uVar5 = 1;
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      local_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7ad341;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1001fca45:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

