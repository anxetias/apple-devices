// name: FUN_1000ae640
// address: 1000ae640

uint FUN_1000ae640(uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_18 = (int)((ulong)(&stack0x29e8221e6d34f1d6 + ((ulong)&local_1c & 0x29e8221e6d34f1f2) * -2)
                  ^ 0x5060ec4e9f3efeef) * 0x54361bb5;
  local_1c = (param_1 ^ 0xf679577a) + (param_1 & 0xf679577a) * 2 + 0x1bbff9ee ^ local_18;
  local_18 = local_18 | 2;
  uVar1 = (char)((byte)((ulong)(&stack0x29e8221e6d34f1d6 +
                               ((ulong)&local_1c & 0x29e8221e6d34f1f2) * -2) ^ 0x5060ec4e9f3efeef) &
                0x9c) * -7;
  bVar2 = (char)(((char)((uVar1 & 0xffff) >> 0xf) + (char)(uVar1 >> 9) + 0xa1U ^ 0x85) + 0x6a) >> 7;
  (*(code *)((&PTR_DAT_10082ee00)[(byte)((bVar2 * bVar2 & bVar2 | 0x2e) + 0x7b) + 0x72] + -6))();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return local_14 ^ 0x3a3402de;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

