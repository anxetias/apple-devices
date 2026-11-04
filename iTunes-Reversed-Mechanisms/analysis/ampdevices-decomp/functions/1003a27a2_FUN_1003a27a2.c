// name: FUN_1003a27a2
// address: 1003a27a2

undefined8 FUN_1003a27a2(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_60;
  undefined **local_58;
  long *local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if ((*(byte *)(param_1 + 0xf9) & 0x40) == 0) {
    if ((*(long *)(param_1 + 200) == 0) || ((*(byte *)(param_1 + 0xfa) & 4) != 0)) {
      local_58 = &PTR_FUN_100856dc0;
      local_50 = &local_60;
      local_38 = &local_58;
      FUN_1003a0178(param_1,1,&local_58);
      if (local_38 == &local_58) {
        lVar1 = 0x20;
      }
      else {
        lVar1 = 0x28;
        if (local_38 == (undefined ***)0x0) goto LAB_1003a283d;
      }
      (**(code **)((long)*local_38 + lVar1))();
    }
    else {
      local_60 = *(long *)(param_1 + 0xd0);
    }
LAB_1003a283d:
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) | 0x40;
    if (local_60 != *(long *)(param_1 + 0xd8)) {
      *(long *)(param_1 + 0xd8) = local_60;
      FUN_1003a2686(param_1,1);
      uVar2 = 1;
      goto LAB_1003a286b;
    }
  }
  uVar2 = 0;
LAB_1003a286b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

