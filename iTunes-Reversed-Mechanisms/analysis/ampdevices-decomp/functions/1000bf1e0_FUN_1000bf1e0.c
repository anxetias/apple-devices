// name: FUN_1000bf1e0
// address: 1000bf1e0

uint FUN_1000bf1e0(void)

{
  uint local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_18 = (((uint)&local_18 & 0x6db5c218) * -2 + (uint)&local_18 + 0xedb5c21b ^ 0xd6556cb6) *
             0x22116dab ^ 1;
  FUN_1000f1500();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return local_14 ^ 0x3a3402de;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

