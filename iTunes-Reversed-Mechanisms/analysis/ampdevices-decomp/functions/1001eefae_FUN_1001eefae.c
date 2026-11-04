// name: FUN_1001eefae
// address: 1001eefae

undefined8 FUN_1001eefae(undefined8 param_1)

{
  long lVar1;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_58);
  FUN_1001ef022(local_58,param_1);
  if (local_38 == local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_1001ef001;
  }
  (**(code **)(*local_38 + lVar1))();
LAB_1001ef001:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

