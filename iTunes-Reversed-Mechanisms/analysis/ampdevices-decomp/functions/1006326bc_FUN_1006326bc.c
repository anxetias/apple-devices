// name: FUN_1006326bc
// address: 1006326bc

void FUN_1006326bc(undefined4 param_1)

{
  undefined1 local_40 [4];
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_38 [4];
  undefined1 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_38,0x10);
  FUN_1001c62d9(local_40,8);
  local_38[0] = 0x15;
  local_34 = 8;
  local_3c = 0x220;
  local_3a = 1;
  FUN_1006343f6(param_1,FUN_100637128);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

