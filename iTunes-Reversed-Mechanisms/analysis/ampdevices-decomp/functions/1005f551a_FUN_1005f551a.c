// name: FUN_1005f551a
// address: 1005f551a

void FUN_1005f551a(int *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "versionInfo != nullptr";
LAB_1005f5613:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*param_1 == 0x77766369) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      FUN_1005f4acc(*(undefined8 *)(param_1 + 0x14a));
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        operator_delete(param_1);
        return;
      }
      goto LAB_1005f563a;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "versionInfo->magic == \'wvci\'";
      goto LAB_1005f5613;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_1005f563a:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

