// name: FUN_1001e26e1
// address: 1001e26e1

void FUN_1001e26e1(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e4a2e(param_1,local_228);
  FUN_1001e1890(local_228,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

