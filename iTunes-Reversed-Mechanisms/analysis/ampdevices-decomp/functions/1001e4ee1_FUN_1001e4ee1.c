// name: FUN_1001e4ee1
// address: 1001e4ee1

undefined1 FUN_1001e4ee1(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e4abd(param_1,local_228,0xff);
  uVar1 = FUN_1001e3edc(local_228,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

