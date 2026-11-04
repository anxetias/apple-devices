// name: FUN_100346a6d
// address: 100346a6d

void FUN_100346a6d(undefined8 param_1)

{
  undefined1 local_218 [512];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e1c39(param_1,local_218);
  FUN_10032fde1(local_218);
  FUN_1001658f1(DAT_1008c4d90,local_218);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

