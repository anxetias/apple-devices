// name: FUN_1002f9b73
// address: 1002f9b73

undefined4 FUN_1002f9b73(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_58);
  uVar1 = FUN_1002f9c1c(param_1,0xff,local_58);
  if (local_38 == local_58) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_1002f9bce;
  }
  (**(code **)(*local_38 + lVar2))();
LAB_1002f9bce:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

