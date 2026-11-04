// name: FUN_100243f40
// address: 100243f40

void FUN_100243f40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e04f5(param_2,local_238);
  FUN_100243fb1(param_1,local_238,param_3,param_4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

