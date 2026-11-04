// name: FUN_1005ace32
// address: 1005ace32

undefined8 FUN_1005ace32(long param_1,int *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
LAB_1005acf2f:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_22a = "PlaylistIsValid(playlist)";
LAB_1005acfb5:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (*param_2 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1005acf2f;
    }
    if (param_3 != 0) {
      cVar1 = FUN_10030e2f7(*(undefined8 *)(param_2 + 2));
      uVar2 = 0;
      if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 8) != 0))
      {
        cVar1 = FUN_1005a94bc(param_2);
        if (cVar1 != '\0') {
          FUN_1005a4672(param_1);
          FUN_1004870ae(param_2,&local_238);
          if (*(long *)(param_2 + 0x18) != 0) {
            FUN_1005ad828(param_1,4,*(long *)(param_2 + 0x18),param_3,0x20,1,0);
          }
          FUN_1005a4ae0(param_1);
          uVar2 = 0;
        }
      }
      goto LAB_1005acfe9;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_22a = "ustrNewName != nullptr";
      goto LAB_1005acfb5;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_1005acfe9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

