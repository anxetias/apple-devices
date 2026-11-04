// name: FUN_1003a7f56
// address: 1003a7f56

undefined1 FUN_1003a7f56(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_1003a7fba:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "PlaylistItemIsValid(playlistItem)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
    if (param_1 == (undefined8 *)0x0) goto LAB_1003a7ffa;
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003a7fba;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_1003a7fba;
  }
  if (param_1[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1004746c0();
  }
LAB_1003a7ffa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

