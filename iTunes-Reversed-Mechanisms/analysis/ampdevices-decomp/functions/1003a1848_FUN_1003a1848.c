// name: FUN_1003a1848
// address: 1003a1848

undefined8 FUN_1003a1848(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_60;
  undefined **local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = &local_60;
  local_60 = 0;
  local_58 = &PTR_FUN_100856940;
  local_48 = param_2;
  local_38 = &local_58;
  FUN_1003a0178(param_1,0,&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1003a18b0;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_1003a18b0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_60;
}

