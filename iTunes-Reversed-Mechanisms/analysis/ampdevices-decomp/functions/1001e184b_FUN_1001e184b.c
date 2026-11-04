// name: FUN_1001e184b
// address: 1001e184b

undefined2 FUN_1001e184b(void)

{
  undefined1 local_28 [2];
  undefined2 local_26;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e17f8(0,local_28);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return local_26;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

