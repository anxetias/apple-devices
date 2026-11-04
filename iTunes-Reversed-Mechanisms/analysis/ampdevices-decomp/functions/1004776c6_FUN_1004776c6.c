// name: FUN_1004776c6
// address: 1004776c6

undefined4 FUN_1004776c6(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_1004714e5(param_1,param_2,1);
  FUN_1001c62d9(local_48,0x20);
  FUN_1005389ba(local_48,3);
  FUN_1005389ba(local_48,0x4f);
  FUN_1004755ef(param_1,0,local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

