// name: FUN_1001a9e22
// address: 1001a9e22

undefined8 FUN_1001a9e22(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = &PTR_FUN_10083c960;
  local_50 = param_1;
  local_38 = &local_58;
  FUN_1001a96bc(param_2,&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1001a9e7f;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_1001a9e7f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

