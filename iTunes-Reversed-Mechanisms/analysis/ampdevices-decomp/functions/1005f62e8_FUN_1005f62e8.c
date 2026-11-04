// name: FUN_1005f62e8
// address: 1005f62e8

void FUN_1005f62e8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 local_430 [1056];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined1 *)0x0) {
    param_3 = local_430;
  }
  FUN_1003870d4(param_1,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

