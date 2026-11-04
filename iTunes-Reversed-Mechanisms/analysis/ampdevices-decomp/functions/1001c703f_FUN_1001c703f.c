// name: FUN_1001c703f
// address: 1001c703f

undefined4 FUN_1001c703f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_38 = (long *)0x0;
  uVar1 = FUN_1001c70dd(param_1,local_58,param_2,param_3);
  if (local_38 == local_58) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_1001c7094;
  }
  (**(code **)(*local_38 + lVar2))();
LAB_1001c7094:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

