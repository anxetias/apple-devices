// name: FUN_1003a30de
// address: 1003a30de

undefined1 FUN_1003a30de(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 local_59;
  undefined **local_58;
  undefined1 *local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_59 = 1;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    local_58 = &PTR_FUN_100856bc0;
    local_50 = &local_59;
    local_38 = &local_58;
    FUN_1003a0178(param_1,0,&local_58);
    if (local_38 == &local_58) {
      lVar2 = 0x20;
    }
    else {
      lVar2 = 0x28;
      uVar1 = local_59;
      if (local_38 == (undefined ***)0x0) goto LAB_1003a314c;
    }
    (**(code **)((long)*local_38 + lVar2))();
    uVar1 = local_59;
  }
LAB_1003a314c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

