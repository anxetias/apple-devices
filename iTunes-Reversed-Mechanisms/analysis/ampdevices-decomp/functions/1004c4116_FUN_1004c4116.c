// name: FUN_1004c4116
// address: 1004c4116

void FUN_1004c4116(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[0x9e] == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mCoreMediaItem != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((param_3 & 0x10) == 0) {
    plVar1 = (long *)param_1[0xaa];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
    }
    if ((param_3 >> 10 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
                    /* WARNING: Could not recover jumptable at 0x0001004c418a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x280))(param_1);
        return;
      }
      goto LAB_1004c4258;
    }
  }
  else if ((*(char *)((long)param_1 + 0x50a) == '\x01') &&
          (*(char *)((long)param_1 + 0x50b) == '\x01')) {
    *(undefined1 *)((long)param_1 + 0x50b) = 0;
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
                    /* WARNING: Could not recover jumptable at 0x0001004c41eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x380))(param_1);
      return;
    }
    goto LAB_1004c4258;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1004c4258:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

