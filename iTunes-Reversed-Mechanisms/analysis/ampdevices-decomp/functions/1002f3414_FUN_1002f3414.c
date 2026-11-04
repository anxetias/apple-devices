// name: FUN_1002f3414
// address: 1002f3414

void FUN_1002f3414(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_628 [512];
  undefined1 local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e115f(param_2,local_628);
  FUN_1001e5b77(local_628,local_428,0x400);
  FUN_1002f418d(param_1,local_428);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

