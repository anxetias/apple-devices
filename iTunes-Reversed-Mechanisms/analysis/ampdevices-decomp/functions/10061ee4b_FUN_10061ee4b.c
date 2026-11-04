// name: FUN_10061ee4b
// address: 10061ee4b

undefined8 FUN_10061ee4b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = FUN_1003a3354(param_2,param_3);
  if (lVar1 == 0) {
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1003a1a42(lVar1,0,local_228);
    FUN_1001b8dfc(param_1,local_228);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

