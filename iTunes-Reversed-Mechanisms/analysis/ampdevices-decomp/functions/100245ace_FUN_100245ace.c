// name: FUN_100245ace
// address: 100245ace

void FUN_100245ace(void)

{
  int iVar1;
  undefined8 in_RCX;
  undefined1 local_438 [1056];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1002441f8();
  if (iVar1 == 0) {
    FUN_100189350(local_438,in_RCX);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

