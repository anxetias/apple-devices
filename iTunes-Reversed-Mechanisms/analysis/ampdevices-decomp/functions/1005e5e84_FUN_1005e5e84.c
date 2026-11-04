// name: FUN_1005e5e84
// address: 1005e5e84

undefined4 FUN_1005e5e84(undefined8 param_1)

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
  local_58 = &PTR_FUN_10086faf8;
  local_38 = &local_58;
  FUN_1005e405e(param_1,0,&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1005e5ee7;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_1005e5ee7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

