// name: FUN_1001c75be
// address: 1001c75be

void FUN_1001c75be(undefined8 *param_1)

{
  long lVar1;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_10083d0d0;
  local_58 = &PTR_FUN_10083d1e8;
  local_50 = 0x11;
  local_48 = 0;
  local_40 = param_1;
  local_38 = &local_58;
  FUN_1001c7241(param_1 + 1,&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1001c763d;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_1001c763d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

