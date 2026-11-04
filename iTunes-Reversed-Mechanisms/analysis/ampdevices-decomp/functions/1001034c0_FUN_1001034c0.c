// name: FUN_1001034c0
// address: 1001034c0

ulong FUN_1001034c0(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_44 = (int)((ulong)(&stack0x04e8ca298d8a4b7f + ((ulong)&local_50 & 0x4e8ca298d8a4bcf) * -2) ^
                  0xa69c8f680051796) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x4a65ac24;
  uVar1 = (char)((byte)((ulong)(&stack0x04e8ca298d8a4b7f +
                               ((ulong)&local_50 & 0x4e8ca298d8a4bcf) * -2) ^ 0xa69c8f680051796) &
                0x98) * -7;
  bVar3 = (char)(((char)((uVar1 & 0xffff) >> 0xf) + (char)(uVar1 >> 9) + 0xa1U ^ 0x85) + 0x6a) >> 7;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)((bVar3 * bVar3 & bVar3 | 0x2e) + 0x7b) - 0xa0)] + -2)
  )(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x4c31d007276ae7eb + ((ulong)&local_50 & 0x4c31d007276ae83b) * -2) ^
              0x1708a0cdb03632b9) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x4c31d007276ae7eb + ((ulong)&local_50 & 0x4c31d007276ae83b) * -2)
                  ^ 0x1708a0cdb03632b9) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar4 = (uint)(local_44 == 0x3a3402de) * 0x4f00ed2c + -0x4f00ed24;
    local_48 = (int)((ulong)(&stack0x12af88ff0bcfc40c + ((ulong)&local_50 & 0x12af88ff0bcfc45c) * -2
                            ) ^ 0x4996f8359c931ede) * 0x295bb3 + iVar4 + -0x6d95cfd2;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               (((ulong)param_1 * 2 & 0x1ff75bfbc) + ((ulong)param_1 ^ 0x7dcd5d9bffbadfde) +
                ((ulong)(&stack0x12af88ff0bcfc40c + ((ulong)&local_50 & 0x12af88ff0bcfc45c) * -2) ^
                0x4996f8359c931ede) * -0x295bb3 + -0x40411808bb104888);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f6130 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x1000ec6e1);
                    /* WARNING: Could not recover jumptable at 0x0001000ec7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f6130 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

