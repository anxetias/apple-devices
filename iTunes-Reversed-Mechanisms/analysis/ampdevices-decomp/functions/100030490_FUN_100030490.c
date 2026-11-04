// name: FUN_100030490
// address: 100030490

ulong FUN_100030490(uint param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  bool bVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar2 = ((ulong)(&stack0x0c07e2b0b7b17d92 + ((ulong)&local_50 & 0xc07e2b0b7b17de2) * -2) ^
          0x286e06fba3e21bb) * 0x3df53769;
  local_48 = (uint)lVar2;
  local_44 = local_48 + 0xb1151680;
  local_48 = local_48 ^ 8;
  cVar1 = (char)lVar2;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((byte)((uint)(byte)(cVar1 + ((char)((uint)(int)(short)(cVar1 * 0x4f) >> 10) -
                                                 (cVar1 >> 7)) * -0xd + 0x89) * 0xbb >> 0xd) | 0x71)
              - 0x69] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x080fbfa6b0523d05 + ((ulong)&local_50 & 0x80fbfa6b0523d55) * -2) ^
                  0x5336cf6c270ee7d7) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x080fbfa6b0523d05 + ((ulong)&local_50 & 0x80fbfa6b0523d55) * -2) ^
              0x5336cf6c270ee7d7) * -0x295bb3 + 0x3d8c459344aa9758);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar4 = (uint)!bVar5 * -0x50b3f9c5 + (uint)bVar5 * -6 + 6;
    local_48 = (int)((ulong)(&stack0x09f8aefac9b60dad + ((ulong)&local_50 & 0x9f8aefac9b60dfd) * -2)
                    ^ 0x52c1de305eead77f) * 0x295bb3 + iVar4 + -0x6d95cfca;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xfd8de7bf66fe9ffe) + (ulong)(param_1 & 0x66fe9ffe) * 2 +
                ((ulong)(&stack0x09f8aefac9b60dad + ((ulong)&local_50 & 0x9f8aefac9b60dfd) * -2) ^
                0x52c1de305eead77f) * -0x295bb3 + 0x3ffe5dd3ddabf758);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d9660 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x100031a75);
                    /* WARNING: Could not recover jumptable at 0x000100031b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d9660 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

