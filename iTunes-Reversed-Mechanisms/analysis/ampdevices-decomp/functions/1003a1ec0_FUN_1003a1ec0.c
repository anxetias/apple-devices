// name: FUN_1003a1ec0
// address: 1003a1ec0

undefined4 FUN_1003a1ec0(long param_1)

{
  long lVar1;
  undefined **local_58;
  long local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x78) == 0) {
    local_58 = &PTR_FUN_100856a40;
    local_50 = param_1;
    local_38 = &local_58;
    FUN_1003a0178(param_1,0,&local_58);
    if (local_38 == &local_58) {
      lVar1 = 0x20;
    }
    else {
      lVar1 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_1003a1f25;
    }
    (**(code **)((long)*local_38 + lVar1))();
  }
LAB_1003a1f25:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return *(undefined4 *)(param_1 + 0x78);
}

