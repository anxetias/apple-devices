// name: FUN_10024220c
// address: 10024220c

undefined8 * FUN_10024220c(undefined8 *param_1)

{
  undefined8 in_R8;
  undefined1 local_900 [2272];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10024209c(local_900);
  FUN_100240d22(local_900,param_1,in_R8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

