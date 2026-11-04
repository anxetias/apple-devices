// name: FUN_10048768a
// address: 10048768a

undefined8 FUN_10048768a(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_238 [16];
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44();
  FUN_10048773a(param_2,local_228,0);
  FUN_1001b8dfc(local_238,local_228);
  FUN_1001b80b2(param_1,local_238);
  FUN_1001b7a50(local_238);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

