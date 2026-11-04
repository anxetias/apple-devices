// name: FUN_10061edcf
// address: 10061edcf

undefined8 FUN_10061edcf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = FUN_1004cfdd1(param_2,param_3);
  if (lVar1 == 0) {
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1005e654e(lVar1,0,local_228);
    FUN_1001b8dfc(param_1,local_228);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

