// name: FUN_1005962c4
// address: 1005962c4

undefined4 FUN_1005962c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_60;
  undefined **local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = &local_60;
  local_58 = &PTR_FUN_10086ab08;
  local_60 = param_1;
  local_48 = param_3;
  local_38 = &local_58;
  uVar1 = FUN_1003a0178(param_2,1,&local_58);
  if (local_38 == &local_58) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_100596330;
  }
  (**(code **)((long)*local_38 + lVar2))();
LAB_100596330:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

