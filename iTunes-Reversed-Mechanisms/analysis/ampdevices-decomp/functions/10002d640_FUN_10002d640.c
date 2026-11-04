// name: FUN_10002d640
// address: 10002d640

ulong FUN_10002d640(uint param_1)

{
  byte bVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  uint uVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar4 = (uint)&local_50;
  local_44 = ((uVar4 & 0x529d39b8) * -2 + uVar4 + 0x529d39b9 ^ 0x5f1265e0) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0xc8d8499;
  bVar1 = (char)&local_50 * '\x04' | 0x52;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((uint)(byte)((char)((uint)(int)(short)((char)bVar1 * 0x29) >>
                                                       0xc) - ((char)bVar1 >> 7) | 0x92) * -0x14 &
                                   0xff) * 0x19 >> 9) & 0xc) * '\t' + 0x62) - 0x7c)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x47f0011b05a6406a + ((ulong)&local_50 & 0x47f0011b05a640ba) * -2) ^
              0x1cc971d192fa9a38) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x47f0011b05a6406a + ((ulong)&local_50 & 0x47f0011b05a640ba) * -2)
                  ^ 0x1cc971d192fa9a38) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar3 = (uint)(local_44 == 0x3a3402de) * 0x54166088 + -0x5416607e;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xffbd65bbdfaad7f7) + (ulong)(param_1 & 0xdfaad7f7) * 2 +
                ((ulong)(&stack0x7e8b5227f472043a + ((ulong)&local_50 & 0x7e8b5227f472048a) * -2) ^
                0x25b222ed632ede08) * -0x295bb3 + 0x3dcedfd764ffbf5f);
    local_48 = (int)((ulong)(&stack0x7e8b5227f472043a + ((ulong)&local_50 & 0x7e8b5227f472048a) * -2
                            ) ^ 0x25b222ed632ede08) * 0x295bb3 + iVar3 + -0x6d95cfd4;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_10002d7a3::switchdataD_1006df9b0)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar3)] + 0x10004edac);
                    /* WARNING: Could not recover jumptable at 0x00010004ee67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_10002d7a3::switchdataD_1006df9b0)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar3)],
                       local_44 == 0x3a3402de,0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

