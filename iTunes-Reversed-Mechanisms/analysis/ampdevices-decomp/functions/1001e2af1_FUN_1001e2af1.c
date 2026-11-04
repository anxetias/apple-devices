// name: FUN_1001e2af1
// address: 1001e2af1

undefined8 FUN_1001e2af1(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_2e [14];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e2979(param_2,param_3,local_2e,0xe);
  FUN_1001b7b04(param_1,local_2e);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

