// name: FUN_1001ee1da
// address: 1001ee1da

undefined4
FUN_1001ee1da(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1003da7e0(local_68,param_1);
  uVar1 = FUN_1001ee2a0(local_68,0,0,param_2,param_3,param_4,param_5);
  if (local_48 == local_68) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_1001ee24e;
  }
  (**(code **)(*local_48 + lVar2))();
LAB_1001ee24e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

