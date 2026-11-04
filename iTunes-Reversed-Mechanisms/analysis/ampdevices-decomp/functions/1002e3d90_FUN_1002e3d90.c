// name: FUN_1002e3d90
// address: 1002e3d90

void FUN_1002e3d90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long **)(param_1 + 0x2cf8) != (long *)0x0) {
    local_58 = &PTR_FUN_1008530c8;
    local_50 = param_4;
    local_38 = &local_58;
    (**(code **)(**(long **)(param_1 + 0x2cf8) + 0x48))();
    if (local_38 == &local_58) {
      lVar1 = 0x20;
    }
    else {
      lVar1 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_1002e3df4;
    }
    (**(code **)((long)*local_38 + lVar1))();
  }
LAB_1002e3df4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

