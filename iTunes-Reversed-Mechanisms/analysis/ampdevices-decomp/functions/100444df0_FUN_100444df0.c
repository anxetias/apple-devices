// name: FUN_100444df0
// address: 100444df0

void FUN_100444df0(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "coreMediaItem != __null";
LAB_100444ee3:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_100444e70:
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)(param_2 + 0x4b0) != param_1) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "inPlayer == mCoreMediaPlayer";
        goto LAB_100444ee3;
      }
      goto LAB_100444e70;
    }
    if (*(long **)(param_2 + 0x488) != (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
                    /* WARNING: Could not recover jumptable at 0x000100444ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 0x488) + 0x20))();
        return;
      }
      goto LAB_100444f0d;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_100444f0d:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

