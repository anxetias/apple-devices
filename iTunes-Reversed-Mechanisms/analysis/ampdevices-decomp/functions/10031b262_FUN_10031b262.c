// name: FUN_10031b262
// address: 10031b262

undefined8 FUN_10031b262(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_10048604a(param_2);
  FUN_1004870ae(uVar1,local_228);
  FUN_1001b8dfc(param_1,local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

