// name: FUN_10049fee4
// address: 10049fee4

undefined8 FUN_10049fee4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 local_60 [8];
  undefined **local_58;
  long local_50;
  undefined8 local_48;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10032f0f2();
  FUN_1001a7b90(local_60);
  FUN_10021f0aa(param_1,local_60);
  FUN_1001ab240(local_60);
  local_58 = &PTR_FUN_10085cc18;
  local_50 = param_2;
  local_48 = param_1;
  local_38 = &local_58;
  FUN_100321441(*(undefined1 *)(param_2 + 0x18),&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_10049ff8b;
  }
  (**(code **)((long)*local_38 + lVar1))();
LAB_10049ff8b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

