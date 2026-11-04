// name: FUN_1003a4a76
// address: 1003a4a76

undefined4 FUN_1003a4a76(undefined8 param_1)

{
  long lVar1;
  undefined4 local_5c;
  undefined **local_58;
  undefined4 *local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = &local_5c;
  local_5c = 0;
  local_58 = &PTR_FUN_100856c40;
  local_38 = &local_58;
  FUN_1003a0178(param_1,0,&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1003a4ad9;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_1003a4ad9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

