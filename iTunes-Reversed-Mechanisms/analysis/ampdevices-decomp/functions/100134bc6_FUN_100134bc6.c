// name: FUN_100134bc6
// address: 100134bc6

void FUN_100134bc6(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_38 = (long *)0x0;
  FUN_10013459e(*(undefined8 *)(param_1 + 8),param_2,param_3,local_58);
  if (local_38 == local_58) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_100134c17;
  }
  (**(code **)(*local_38 + lVar1))();
LAB_100134c17:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

