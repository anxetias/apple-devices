// name: FUN_10052972e
// address: 10052972e

void FUN_10052972e(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100527a20();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "AppProgressBarIsValid(progressBar)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x8e1) = 1;
    if (*(long **)(param_1 + 0x8d0) == (long *)0x0) {
      if (*(code **)(param_1 + 0x8a0) != (code *)0x0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
                    /* WARNING: Could not recover jumptable at 0x0001005297dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_1 + 0x8a0))(param_1,*(undefined8 *)(param_1 + 0x8a8));
          return;
        }
        goto LAB_10052982c;
      }
    }
    else {
      local_38 = (undefined4)param_1;
      uStack_34 = (undefined4)((ulong)param_1 >> 0x20);
      (**(code **)(**(long **)(param_1 + 0x8d0) + 0x30))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_10052982c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

