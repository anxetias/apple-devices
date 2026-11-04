// name: FUN_1003a2088
// address: 1003a2088

undefined1 FUN_1003a2088(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined **local_58;
  long local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(byte *)(*(long *)(param_1 + 0x48) + 0x1bb4) & 0x40) == 0) {
    uVar1 = 0;
    goto LAB_1003a210a;
  }
  if (*(char *)(param_1 + 0xe5) == '\0') {
    local_58 = &PTR_FUN_100856ac0;
    local_50 = param_1;
    local_38 = &local_58;
    FUN_1003a0178(param_1,1,&local_58);
    if (local_38 == &local_58) {
      lVar2 = 0x20;
    }
    else {
      lVar2 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_1003a2104;
    }
    (**(code **)((long)*local_38 + lVar2))();
  }
LAB_1003a2104:
  uVar1 = *(undefined1 *)(param_1 + 0xe5);
LAB_1003a210a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

