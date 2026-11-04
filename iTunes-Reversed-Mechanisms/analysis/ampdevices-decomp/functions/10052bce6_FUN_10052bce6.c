// name: FUN_10052bce6
// address: 10052bce6

void FUN_10052bce6(long param_1)

{
  long lVar1;
  undefined1 local_438 [1056];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x5a0);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x5c8) == '\x01') {
      FUN_10017d35c(lVar1,local_438);
      lVar1 = *(long *)(param_1 + 0x5a0);
    }
    FUN_10017cdfb(lVar1);
    *(undefined8 *)(param_1 + 0x5a0) = 0;
    *(undefined8 *)(param_1 + 0x510) = 0;
    if (*(char *)(param_1 + 0x5c8) == '\x01') {
      FUN_100182d4d(local_438);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

