// name: FUN_10053877e
// address: 10053877e

undefined8 FUN_10053877e(undefined8 param_1)

{
  long *plVar1;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = (long *)FUN_1005cea50();
  (**(code **)(*plVar1 + 0x38))(plVar1,0);
  plVar1 = (long *)FUN_1005cea50();
  (**(code **)(*plVar1 + 0x20))(plVar1,local_228);
  FUN_1001b8dfc(param_1,local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

