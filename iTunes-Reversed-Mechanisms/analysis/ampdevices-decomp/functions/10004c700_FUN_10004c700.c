// name: FUN_10004c700
// address: 10004c700

ulong FUN_10004c700(ulong param_1)

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
  local_44 = (int)((ulong)(&stack0x0c774bf932ba373e + ((ulong)&local_50 & 0xc774bf932ba378e) * -2) ^
                  0x2f649263f356bd7) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0xf4bfc6d;
  bVar1 = (char)((ulong)(&stack0x0c774bf932ba373e + ((ulong)&local_50 & 0xc774bf932ba378e) * -2) ^
                0x2f649263f356bd7) << 2 | 0x52;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((uint)(byte)((char)((uint)(int)(short)((char)bVar1 * 0x29) >>
                                                       0xc) - ((char)bVar1 >> 7) | 0x92) * -0x14 &
                                   0xff) * 0x19 >> 9) & 0xc) * '\t' + 0x62) - 0x7c)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x7866716f18a04faa + ((ulong)&local_50 & 0x7866716f18a04ffa) * -2) ^
              0x235f01a58ffc9578) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x7866716f18a04faa + ((ulong)&local_50 & 0x7866716f18a04ffa) * -2)
                  ^ 0x235f01a58ffc9578) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar4 = local_44 == 0x3a3402de;
  switch(bVar4) {
  case true:
    iVar3 = (uint)!bVar4 * 0x3d47ff15 + (uint)bVar4 * 3 + 4;
    local_48 = (int)((ulong)(&stack0x43a8b47e2cc27ec8 + ((ulong)&local_50 & 0x43a8b47e2cc27f18) * -2
                            ) ^ 0x1891c4b4bb9ea59a) * 0x295bb3 + iVar3 + -0x6d95cfd1;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xffee5ff7cdfeff56) + (param_1 & 0xffee5ff7cdfeff56) * 2 +
                ((ulong)(&stack0x43a8b47e2cc27ec8 + ((ulong)&local_50 & 0x43a8b47e2cc27f18) * -2) ^
                0x1891c4b4bb9ea59a) * -0x295bb3 + 0x3d9de59b76ab9800);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006df470 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4) +
                 0x100058e50);
                    /* WARNING: Could not recover jumptable at 0x000100058f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006df470 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

