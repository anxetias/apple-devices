// name: FUN_100014ce0
// address: 100014ce0

undefined8 FUN_100014ce0(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_20;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = (uint)&local_20 ^ 0xc48cb6a5;
  local_14 = ((-0x11618d46 - (uVar1 | 0xee9e72ba)) + (uVar1 | 0x11618d45) ^ 0xb35cabc) * 0x312888c7
             ^ 0x485e0111;
  local_20 = param_1;
  FUN_10001b430(&local_20);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

