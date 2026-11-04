// name: FUN_1001e21dd
// address: 1001e21dd

void FUN_1001e21dd(undefined8 param_1)

{
  undefined1 local_218 [512];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e222d(param_1,local_218);
  FUN_1001e215a(local_218);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

