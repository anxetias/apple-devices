// name: FUN_10061f0a6
// address: 10061f0a6

undefined8 FUN_10061f0a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = FUN_1002ba90d(param_2,param_3);
  if (lVar1 == 0) {
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_10048687f(lVar1,local_228);
    FUN_1001b8dfc(param_1,local_228);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

