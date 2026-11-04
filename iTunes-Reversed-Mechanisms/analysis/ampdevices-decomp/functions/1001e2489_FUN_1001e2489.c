// name: FUN_1001e2489
// address: 1001e2489

undefined8 FUN_1001e2489(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e24eb(param_2,param_3,local_228);
  FUN_1001b8dfc(param_1,local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

