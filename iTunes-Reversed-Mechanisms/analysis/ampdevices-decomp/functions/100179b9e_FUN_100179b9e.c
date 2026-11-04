// name: FUN_100179b9e
// address: 100179b9e

undefined8 FUN_100179b9e(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_68 [72];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100179ae2(param_2,local_68);
  FUN_1001b7b04(param_1,local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

