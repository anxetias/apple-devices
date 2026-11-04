// name: FUN_10058577d
// address: 10058577d

void FUN_10058577d(undefined8 param_1)

{
  long lVar1;
  undefined **local_58 [4];
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58[0] = &PTR_FUN_10086a990;
  local_38 = local_58;
  FUN_10031be80(param_1,local_58);
  if (local_38 == local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1005857d0;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_1005857d0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

