// name: FUN_1005f3054
// address: 1005f3054

void FUN_1005f3054(long param_1,long param_2)

{
  long lVar1;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined ***local_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_30 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(undefined4 *)(param_1 + 8);
  uStack_3c = *(undefined4 *)(param_1 + 0xc);
  uStack_38 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)(param_1 + 0x14);
  local_48 = &PTR_FUN_10086fe60;
  local_28 = &local_48;
  FUN_1002186ec(&local_48,param_2 + 0x140);
  if (local_28 == &local_48) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_28 == (undefined ***)0x0) goto LAB_1005f30bc;
  }
  (**(code **)((long)*local_28 + lVar1))();
LAB_1005f30bc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

