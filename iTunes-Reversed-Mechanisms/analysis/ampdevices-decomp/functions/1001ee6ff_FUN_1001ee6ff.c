// name: FUN_1001ee6ff
// address: 1001ee6ff

undefined4
FUN_1001ee6ff(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_38 = (long *)0x0;
  uVar1 = FUN_1001ee2a0(local_58,param_1,param_2,param_3,param_4,param_5,param_6);
  if (local_38 == local_58) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_1001ee763;
  }
  (**(code **)(*local_38 + lVar2))();
LAB_1001ee763:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

