// name: FUN_1005841c8
// address: 1005841c8

undefined1 FUN_1005841c8(int *param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10058424b:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10058424b;
    }
    if ((*(byte *)(param_1 + 0xa6) & 1) != 0) {
      cVar1 = FUN_10030e2f7(*(undefined8 *)(param_1 + 2));
      if ((cVar1 == '\0') && (*(int *)(*(long *)(param_1 + 2) + 0x2cc4) == 0)) {
        uVar2 = 0;
        FUN_100584aa2(*(long *)(param_1 + 2),0);
        if (*(char *)((long)param_1 + 0x299) == '\x01') {
          uVar2 = FUN_100584358(param_1,param_2);
        }
        goto LAB_100584270;
      }
    }
    uVar2 = 0;
  }
LAB_100584270:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

