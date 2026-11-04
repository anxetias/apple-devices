// name: FUN_1003d75e2
// address: 1003d75e2

void FUN_1003d75e2(long param_1)

{
  int iVar1;
  undefined1 local_850 [1056];
  undefined1 local_430 [1056];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x70696374,0,local_430);
  if (iVar1 == 0) {
    iVar1 = FUN_1001888ba(local_430,"com.apple.iPhoto.plist",local_850,0);
    if (iVar1 == 0) {
      FUN_100182d4d(local_850);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

