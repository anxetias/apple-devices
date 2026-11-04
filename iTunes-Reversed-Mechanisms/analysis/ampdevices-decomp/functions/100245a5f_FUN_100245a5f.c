// name: FUN_100245a5f
// address: 100245a5f

void FUN_100245a5f(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e04f5(param_4,local_238);
  FUN_100245ace(param_1,param_2,param_3,local_238);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

