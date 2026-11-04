// name: FUN_1000b34f0
// address: 1000b34f0

void FUN_1000b34f0(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_20;
  int local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = (uint)&local_20;
  local_18 = ((uVar1 & 0x1582fde8) * -2 + uVar1 + 0x1582fde8 ^ 0x82de276a) * 0x295bb3 + -0x1e5ef4b3;
  local_20 = param_1;
  FUN_1000b5b90(&local_20);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

