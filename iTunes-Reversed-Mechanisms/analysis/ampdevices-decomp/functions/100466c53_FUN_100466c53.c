// name: FUN_100466c53
// address: 100466c53

void FUN_100466c53(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0x3ff;
    if (uVar1 < 0x3ff) {
      uVar2 = uVar1;
    }
    FUN_1001c631b(param_1 + 1,local_428,(ulong)uVar2);
    local_428[uVar2] = 0;
    FUN_100466e48(local_428,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

