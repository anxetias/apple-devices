// name: FUN_1005a47d0
// address: 1005a47d0

void FUN_1005a47d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 9) == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mSyncFiberRunning";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_100230408(*(undefined8 *)(param_1 + 0x1698));
  *(long *)(param_1 + 0x1690) = param_1 + 0x1698;
  *(undefined8 *)(param_1 + 0x1698) = 0;
  *(undefined8 *)(param_1 + 0x16a0) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_1005a48c0(param_1);
  }
  FUN_1005a4ae0(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

