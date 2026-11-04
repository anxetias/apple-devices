// name: FUN_1005aa188
// address: 1005aa188

void FUN_1005aa188(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100476928();
  FUN_1004779ac(param_1,local_228);
  FUN_1005ab3d6(param_2,local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

