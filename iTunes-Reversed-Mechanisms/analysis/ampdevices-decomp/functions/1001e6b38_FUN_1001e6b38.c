// name: FUN_1001e6b38
// address: 1001e6b38

void FUN_1001e6b38(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_128 [264];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e6a9c(param_1,local_128,0x100);
  FUN_1001e04f5(local_128,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

