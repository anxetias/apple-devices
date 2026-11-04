// name: FUN_1004acb38
// address: 1004acb38

void FUN_1004acb38(undefined8 param_1)

{
  int iVar1;
  undefined1 local_a68 [1056];
  undefined1 local_648 [520];
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1004b013c(param_1,0,local_440);
  if (iVar1 == 0) {
    iVar1 = FUN_10017d477(local_440,0,0);
    if (iVar1 == 0) {
      FUN_1001e04f5("Info.plist",local_648);
      iVar1 = FUN_10017ecc9(local_440,local_648,local_a68,0);
      if (iVar1 == 0) {
        FUN_1004ac737(param_1,local_a68);
      }
      FUN_1001e04f5("ArtworkInfo.plist",local_648);
      iVar1 = FUN_10017ecc9(local_440,local_648,local_a68,0);
      if (iVar1 == 0) {
        FUN_1004ac737(param_1,local_a68);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

