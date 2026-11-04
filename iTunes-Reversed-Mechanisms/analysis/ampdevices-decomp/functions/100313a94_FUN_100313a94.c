// name: FUN_100313a94
// address: 100313a94

undefined8 FUN_100313a94(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_48 [40];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10030c4f9(param_2,local_48,0x20);
  FUN_1001b7b04(param_1,local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

