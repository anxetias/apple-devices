// name: FUN_1000c2d60
// address: 1000c2d60

ulong FUN_1000c2d60(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = (int)((ulong)(&stack0x0221dc76413f6c99 + ((ulong)&local_50 & 0x221dc76413f6ce9) * -2) ^
                  0xca0dea94cb030b0) * 0x3df53769;
  local_44 = local_48 + 0x8f98ab9a;
  local_48 = local_48 ^ 8;
  bVar1 = (char)((ulong)(&stack0x0221dc76413f6c99 + ((ulong)&local_50 & 0x221dc76413f6ce9) * -2) ^
                0xca0dea94cb030b0) << 2 | 0x52;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((uint)(byte)((char)((uint)(int)(short)((char)bVar1 * 0x29) >>
                                                       0xc) - ((char)bVar1 >> 7) | 0x92) * -0x14 &
                                   0xff) * 0x19 >> 9) & 0xc) * '\t' + 0x62) - 0x7c)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x6baba54dda29b48e + ((ulong)&local_50 & 0x6baba54dda29b4de) * -2) ^
              0x3092d5874d756e5c) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x6baba54dda29b48e + ((ulong)&local_50 & 0x6baba54dda29b4de) * -2)
                  ^ 0x3092d5874d756e5c) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar4 = local_44 == 0x3a3402de;
  switch(bVar4) {
  case true:
    iVar3 = (uint)!bVar4 * 0x61f474b6 + (uint)bVar4 * -8 + 10;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xfddc5dd3c4ebffd6) + (param_1 & 0xfddc5dd3c4ebffd6) * 2 +
                ((ulong)(&stack0x55991bb30895e6aa + ((ulong)&local_50 & 0x55991bb30895e6fa) * -2) ^
                0xea06b799fc93c78) * -0x295bb3 + 0x3fafe7bf7fbe9780);
    local_48 = (int)((ulong)(&stack0x55991bb30895e6aa + ((ulong)&local_50 & 0x55991bb30895e6fa) * -2
                            ) ^ 0xea06b799fc93c78) * 0x295bb3 + iVar3 + -0x6d95cfcc;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ed690 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4) +
                 0x10009b789);
                    /* WARNING: Could not recover jumptable at 0x00010009b840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006ed690 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006ed690 + (ulong)(bVar4 + 10) * 4) + 0x1000c2ea8,
                    (long)*(int *)(&DAT_1006ed690 + (ulong)(bVar4 + 10) * 4),0);
}

