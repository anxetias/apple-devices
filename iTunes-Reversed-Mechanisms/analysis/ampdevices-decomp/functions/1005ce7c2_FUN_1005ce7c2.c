// name: FUN_1005ce7c2
// address: 1005ce7c2

undefined8 FUN_1005ce7c2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_440;
  undefined1 local_438 [1056];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_1001888ba(param_2,param_3,local_438,0);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_100180f0c(local_438,DAT_1008c4d90,&local_440,0);
    if ((int)uVar1 == 0) {
      FUN_1005ce40c(param_1,local_440);
      FUN_10017060f(local_440);
      uVar1 = 0;
      goto LAB_1005ce824;
    }
  }
  param_1[1] = *param_1;
LAB_1005ce824:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

