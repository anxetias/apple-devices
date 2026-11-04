// name: FUN_10046d2e2
// address: 10046d2e2

undefined8 FUN_10046d2e2(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
LAB_10046d373:
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "PlaylistIsValid( inPlaylist )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,1);
    FUN_10032f0f2(param_1,0);
  }
  else {
    if (*param_2 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar2);
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10046d373;
    }
    FUN_1002e5cf1(&local_48,param_2);
    if (CONCAT44(uStack_44,local_48) == 0) {
      FUN_10032f0f2(param_1,0);
    }
    else {
      FUN_10046cfe6(param_1,*(undefined8 *)(param_2 + 2),&local_48);
    }
    FUN_1001ab006(&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

