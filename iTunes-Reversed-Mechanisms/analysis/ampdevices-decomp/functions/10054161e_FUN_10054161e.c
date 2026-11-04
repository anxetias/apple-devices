// name: FUN_10054161e
// address: 10054161e

undefined8 FUN_10054161e(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0xfe0) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mCoreMediaItem != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100440388();
    if (cVar1 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar2 = FUN_1004444e4(*(undefined8 *)(param_1 + 0xfe0));
        return uVar2;
      }
      goto LAB_1005416f9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0;
  }
LAB_1005416f9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

