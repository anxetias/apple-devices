// name: FUN_1001e64e4
// address: 1001e64e4

undefined1 FUN_1001e64e4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e04f5(param_2,local_228);
  uVar1 = FUN_1001e6435(param_1,local_228,param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

