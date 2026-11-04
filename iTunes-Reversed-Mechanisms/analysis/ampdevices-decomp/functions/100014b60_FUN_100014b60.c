// name: FUN_100014b60
// address: 100014b60

undefined8 FUN_100014b60(void)

{
  undefined8 local_20;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_14 = ((-0xdb9b549 - ((uint)&local_20 | 0xf2464ab7)) + ((uint)&local_20 | 0xdb9b548) ^
             0xd3614414) * 0x312888c7 ^ 0x485e0111;
  local_20 = 0;
  FUN_10001b430();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

