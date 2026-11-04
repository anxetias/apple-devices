// name: FUN_1005a4ae0
// address: 1005a4ae0

void FUN_1005a4ae0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x16b0) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mSessionRefCount != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x16b0) + -1;
    *(int *)(param_1 + 0x16b0) = iVar2;
    if ((iVar2 == 0) && (*(char *)(param_1 + 0x15a0) != '\0')) {
      FUN_1002f5734(*(undefined8 *)(param_1 + 0x1598),*(undefined8 *)(param_1 + 0x16b8));
      *(undefined8 *)(param_1 + 0x16b8) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

