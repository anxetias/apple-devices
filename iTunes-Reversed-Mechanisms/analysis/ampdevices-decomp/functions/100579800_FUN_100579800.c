// name: FUN_100579800
// address: 100579800

void FUN_100579800(undefined8 *param_1)

{
  long lVar1;
  undefined **local_58;
  ulong local_50;
  undefined4 local_48;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (ulong)CONCAT14(*(undefined1 *)param_1[1],*(undefined4 *)*param_1);
  local_48 = *(undefined4 *)param_1[2];
  local_58 = &PTR_FUN_10086a820;
  local_38 = &local_58;
  FUN_1001edd53(&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_100579874;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_100579874:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

