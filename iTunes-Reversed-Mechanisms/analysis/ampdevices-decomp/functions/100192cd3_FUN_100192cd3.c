// name: FUN_100192cd3
// address: 100192cd3

undefined8 FUN_100192cd3(long param_1)

{
  undefined8 uVar1;
  undefined1 local_480 [1052];
  undefined4 local_64;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x41c) == 0) {
    uVar1 = FUN_100192d35(param_1,local_480);
    if ((int)uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x41c) = local_64;
      uVar1 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

