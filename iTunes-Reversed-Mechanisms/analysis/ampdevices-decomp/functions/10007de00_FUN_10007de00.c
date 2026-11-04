// name: FUN_10007de00
// address: 10007de00

ulong FUN_10007de00(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  bool bVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar4 = (uint)&local_50;
  local_44 = ((uVar4 & 0x5f0a7aa8) * -2 + uVar4 + 0x5f0a7aaf ^ 0x528526f6) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x77ad31f7;
  cVar1 = (char)local_48;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((byte)((uint)(byte)(cVar1 + ((char)((uint)(int)(short)(cVar1 * 0x4f) >> 10) -
                                                 (cVar1 >> 7)) * -0xd + 0x89) * 0xbb >> 0xd) | 0x71)
              - 0x69] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x42bf74abd77fbce8 + ((ulong)&local_50 & 0x42bf74abd77fbd38) * -2)
                  ^ 0x19860461402367ba) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x42bf74abd77fbce8 + ((ulong)&local_50 & 0x42bf74abd77fbd38) * -2) ^
              0x19860461402367ba) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar3 = (uint)!bVar5 * 0x67c9b554 + (uint)bVar5 * -2 + 8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xfdee5fb77cfaff7f) + (param_1 & 0xfdee5fb77cfaff7f) * 2 +
                ((ulong)(&stack0x57b1664eb1f653e0 + ((ulong)&local_50 & 0x57b1664eb1f65430) * -2) ^
                0xc88168426aa8eb2) * -0x295bb3 + 0x3f9de5dbc7af97d7);
    local_48 = (int)((ulong)(&stack0x57b1664eb1f653e0 + ((ulong)&local_50 & 0x57b1664eb1f65430) * -2
                            ) ^ 0xc88168426aa8eb2) * 0x295bb3 + iVar3 + -0x6d95cfd0;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar5 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e0d90 + (long)(int)((uint)bVar5 + iVar3) * 4) +
                 0x100082978);
                    /* WARNING: Could not recover jumptable at 0x000100082a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006e0d90 + (long)(int)((uint)bVar5 + iVar3) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar5,!bVar5);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006e0d90 + (ulong)(bVar5 + 8) * 4) + 0x10007df23,
                    (long)*(int *)(&DAT_1006e0d90 + (ulong)(bVar5 + 8) * 4),0);
}

