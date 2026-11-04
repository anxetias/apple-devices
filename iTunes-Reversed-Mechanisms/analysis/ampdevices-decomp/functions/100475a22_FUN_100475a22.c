// name: FUN_100475a22
// address: 100475a22

void FUN_100475a22(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_48,0x20);
  FUN_100538abf(local_48,param_2);
  FUN_1004755ef(param_1,0,local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

