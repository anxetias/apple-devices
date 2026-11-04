// name: FUN_1005fc3d8
// address: 1005fc3d8

void FUN_1005fc3d8(long param_1)

{
  long lVar1;
  undefined **local_58;
  long local_50;
  undefined4 local_48;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0xa0);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x34) != '\0')) {
    local_48 = *(undefined4 *)(param_1 + 0x30);
    local_58 = &PTR_FUN_100870890;
    local_50 = lVar1;
    local_38 = &local_58;
    FUN_100308bbf(lVar1,*(char *)(param_1 + 0x34),&local_58);
    if (local_38 == &local_58) {
      lVar1 = 0x20;
    }
    else {
      lVar1 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_1005fc44e;
    }
    (**(code **)((long)*local_38 + lVar1))();
  }
LAB_1005fc44e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

