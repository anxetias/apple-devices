// name: FUN_100478315
// address: 100478315

undefined8 FUN_100478315(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1002fb8c8(param_2,3,local_228);
  FUN_1001b8dfc(param_1,local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

