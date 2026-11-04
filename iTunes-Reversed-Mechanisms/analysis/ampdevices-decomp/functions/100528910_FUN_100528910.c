// name: FUN_100528910
// address: 100528910

void FUN_100528910(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100528162();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

