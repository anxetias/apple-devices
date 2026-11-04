// name: FUN_10057b498
// address: 10057b498

undefined8 FUN_10057b498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_428 [512];
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_1001bb41a(param_2,local_228);
  FUN_10057b18f(uVar1,local_428);
  FUN_1001b8dfc(param_1,local_428);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

