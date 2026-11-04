// name: FUN_1000b42a0
// address: 1000b42a0

ulong FUN_1000b42a0(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  int iVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar4 = (uint)&local_50;
  local_44 = ((uVar4 & 0x74dee450) * -2 + uVar4 + 0xf4dee453 ^ 0xf951b80a) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x2e988878;
  bVar2 = (char)&local_50 + 0xab;
  bVar3 = bVar2 >> 2;
  bVar2 = ((char)(((byte)((char)bVar2 >> 7) >> 6) +
                 ((byte)((uint)bVar3 + ((uint)bVar3 + (uint)bVar3 * 8) * 4 >> 8) ^ bVar2)) >> 2) -
          0x27U & 0x86;
  bVar2 = ((byte)(bVar2 + (char)((uint)bVar2 * 0xb3 >> 0xe) * -0x5c + 0x71) >> 4) + 0xa4;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(byte)((bVar2 + (bVar2 / 5 & 0xfc) * -5) - 8) + 5] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x501e0c38c30583cc + ((ulong)&local_50 & 0x501e0c38c305841c) * -2) ^
              0xb277cf254595e9e) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x501e0c38c30583cc + ((ulong)&local_50 & 0x501e0c38c305841c) * -2)
                  ^ 0xb277cf254595e9e) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar5 = (uint)(local_44 == 0x3a3402de) * 0x62d614f3 + -0x62d614ed;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbd8f579f7ffb9fff) + (param_1 & 0x3d8f579f7ffb9fff) * 2 +
                ((ulong)(&stack0x6da7dec415ce5924 + ((ulong)&local_50 & 0x6da7dec415ce5974) * -2) ^
                0x369eae0e829283f6) * -0x295bb3 + 0x7ffcedf3c4aef757);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x6da7dec415ce5924 + ((ulong)&local_50 & 0x6da7dec415ce5974) * -2
                            ) ^ 0x369eae0e829283f6) * 0x295bb3 + iVar5 + -0x6d95cfd0;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ede30 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x1000bd5dc);
                    /* WARNING: Could not recover jumptable at 0x0001000bd69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006ede30 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

