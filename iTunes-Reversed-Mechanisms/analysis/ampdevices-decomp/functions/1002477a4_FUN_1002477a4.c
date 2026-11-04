// name: FUN_1002477a4
// address: 1002477a4

undefined8 FUN_1002477a4(undefined8 param_1,undefined8 param_2)

{
  undefined2 local_428 [516];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_428[0] = 0;
  FUN_10017e137(param_2,0,local_428);
  FUN_1001b8dfc(param_1,local_428);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

