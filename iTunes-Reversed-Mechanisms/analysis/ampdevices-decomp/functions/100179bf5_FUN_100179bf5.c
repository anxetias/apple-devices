// name: FUN_100179bf5
// address: 100179bf5

void FUN_100179bf5(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100179ae2(param_1,local_68,param_2,param_3);
  FUN_100172473(0,local_68,0x600);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

