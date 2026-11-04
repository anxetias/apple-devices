// name: FUN_1000aafc0
// address: 1000aafc0

uint FUN_1000aafc0(void)

{
  int local_1c;
  uint local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1c = ((uint)(&stack0x45cda5e3dae85565 + ((ulong)&local_1c & 0x45cda5e3dae85581) * -2) ^
             0x4db48f03) * 0x295bb3;
  local_14 = local_1c + 0x778c63cd;
  local_1c = local_1c + 8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(((byte)((byte)(&stack0x45cda5e3dae85565 +
                                   ((ulong)&local_1c & 0x45cda5e3dae85581) * -2) | 0xd6) / 0x2e |
                     0xfd) - 0x2f) - 0x17] + -0xf))();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return local_18 ^ 0x3a3402de;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

