// name: FUN_1004af5a7
// address: 1004af5a7

void FUN_1004af5a7(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 < 1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "maxDownloads > 0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(char *)(param_1 + 0x628) == '\0') && (*(char *)(param_1 + 0x629) == '\0')) {
    FUN_1004bb3a4(*(undefined8 *)(param_1 + 0x150));
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      FUN_1004bb3a4(*(undefined8 *)(param_1 + 0x158),param_2);
      return;
    }
    goto LAB_1004af698;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1004af698:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

