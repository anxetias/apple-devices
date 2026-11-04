// name: FUN_100450dd2
// address: 100450dd2

undefined8 FUN_100450dd2(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    local_38 = (long *)0x0;
  }
  else if (plVar1 == param_2) {
    local_38 = local_58;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_38 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  FUN_1002186ec(local_58,param_1);
  if (local_38 == local_58) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_100450e4f;
  }
  (**(code **)(*local_38 + lVar2))();
LAB_100450e4f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

