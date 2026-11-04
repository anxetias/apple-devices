// name: FUN_1002b532a
// address: 1002b532a

void FUN_1002b532a(undefined8 param_1,undefined4 param_2)

{
  undefined1 local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_48,0x20);
  FUN_1005389ba(local_48,param_2);
  FUN_1002b3aba(param_1,local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

