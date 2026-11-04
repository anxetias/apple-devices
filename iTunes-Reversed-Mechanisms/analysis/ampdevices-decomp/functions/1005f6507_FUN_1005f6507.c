// name: FUN_1005f6507
// address: 1005f6507

void FUN_1005f6507(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100387b5c();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

