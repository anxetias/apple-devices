// name: FUN_1005aadae
// address: 1005aadae

undefined8 FUN_1005aadae(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
LAB_1005aae43:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_2 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_228 = 0x8220202;
        local_224 = "Assertion failure (expected to be true)";
        local_21c = 0x822;
        local_21a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1005aae43;
    }
    cVar1 = FUN_1005a94bc(param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      FUN_1004870ae(param_2,&local_228);
      uVar2 = FUN_1005aac3a(param_1,4,*(undefined8 *)(param_2 + 0x18),&local_228);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

