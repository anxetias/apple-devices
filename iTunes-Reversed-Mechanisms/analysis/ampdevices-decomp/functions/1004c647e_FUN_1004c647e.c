// name: FUN_1004c647e
// address: 1004c647e

void FUN_1004c647e(undefined8 param_1,undefined4 param_2,int *param_3)

{
  ulong uVar1;
  char local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_3 != (int *)0x0) && (0 < *param_3)) {
    uVar1 = 0;
    do {
      _snprintf(local_58,0x20,"^%d",uVar1 & 0xffffffff);
      FUN_1001e0584(param_1,param_2,local_58,*(undefined8 *)(param_3 + uVar1 * 2 + 2));
      uVar1 = uVar1 + 1;
    } while ((long)uVar1 < (long)*param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

