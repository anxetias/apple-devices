// name: FUN_1003a4c8c
// address: 1003a4c8c

undefined1 FUN_1003a4c8c(undefined8 param_1)

{
  long lVar1;
  undefined1 local_59;
  undefined **local_58;
  undefined1 *local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = &local_59;
  local_59 = 0;
  local_58 = &PTR_FUN_100856e40;
  local_38 = &local_58;
  FUN_1003a0178(param_1,0,&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1003a4cec;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_1003a4cec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_59;
}

