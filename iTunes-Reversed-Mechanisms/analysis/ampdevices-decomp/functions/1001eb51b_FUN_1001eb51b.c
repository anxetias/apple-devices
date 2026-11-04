// name: FUN_1001eb51b
// address: 1001eb51b

long FUN_1001eb51b(void)

{
  int iVar1;
  long lVar2;
  char local_418 [1032];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = _SCDynamicStoreCopyComputerName(0,0);
  if (lVar2 == 0) {
    iVar1 = _gethostname(local_418,0x400);
    if (iVar1 == 0) {
      lVar2 = FUN_100172473(0,local_418,0x8000100);
    }
    else {
      lVar2 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

