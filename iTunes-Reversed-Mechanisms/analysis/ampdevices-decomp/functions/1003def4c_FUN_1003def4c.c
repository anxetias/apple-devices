// name: FUN_1003def4c
// address: 1003def4c

undefined8 FUN_1003def4c(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong local_440;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      uVar2 = 0x400;
      if (param_2 < 0x400) {
        uVar2 = param_2;
      }
      local_440 = uVar2;
      uVar1 = (**(code **)(*(long *)*param_1 + 0xb8))((long *)*param_1,&local_440,local_438,param_3)
      ;
      if ((int)uVar1 != 0) goto LAB_1003defd3;
      if (local_440 != uVar2) {
        uVar1 = 0xffffffdc;
        goto LAB_1003defd3;
      }
      param_2 = param_2 - uVar2;
    } while (param_2 != 0);
    uVar1 = 0;
  }
LAB_1003defd3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

