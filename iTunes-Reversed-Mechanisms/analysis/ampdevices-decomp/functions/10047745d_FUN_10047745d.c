// name: FUN_10047745d
// address: 10047745d

undefined8 FUN_10047745d(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_238 [16];
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44();
  iVar1 = FUN_1004772c4(param_2,local_228);
  if (iVar1 == 0) {
    FUN_1001b8dfc(local_238,local_228);
    FUN_1001b80b2(param_1,local_238);
    FUN_1001b7a50(local_238);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

