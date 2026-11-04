// name: FUN_10007b650
// address: 10007b650

ulong FUN_10007b650(uint param_1)

{
  byte bVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
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
  uVar3 = (uint)&local_50;
  local_44 = ((uVar3 & 0x7e26f0f0) * -2 + uVar3 + 0xfe26f0f7 ^ 0xf3a9acae) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x10a5aaf;
  bVar1 = (byte)&local_50 | 0x2e;
  bVar1 = ((byte)((uint)(0x92 < (byte)((bVar1 >> 2 & bVar1 & bVar1 * '\a' - 0x20) - 0x30) | 0x66) *
                  0x39 >> 8) & 2) * '@';
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(bVar1 + (bVar1 / 3 & 0xf0) * -3 | 9) - 0x1f)] + -2))
            (&local_50);
  local_48 = (int)((ulong)(&stack0x63f7732266dfc9d8 + ((ulong)&local_50 & 0x63f7732266dfca28) * -2)
                  ^ 0x38ce03e8f18310aa) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x63f7732266dfc9d8 + ((ulong)&local_50 & 0x63f7732266dfca28) * -2) ^
              0x38ce03e8f18310aa) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar4 = (uint)!bVar5 * 0x6c939ccd + (uint)bVar5 * -10 + 10;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xffcc6fffd7fb97ff) + (ulong)(param_1 & 0xd7fb97ff) * 2 +
                ((ulong)(&stack0x43d8b09f0a49ca89 + ((ulong)&local_50 & 0x43d8b09f0a49cad9) * -2) ^
                0x18e1c0559d15105b) * -0x295bb3 + 0x3dbfd5936caeff57);
    local_48 = (int)((ulong)(&stack0x43d8b09f0a49ca89 + ((ulong)&local_50 & 0x43d8b09f0a49cad9) * -2
                            ) ^ 0x18e1c0559d15105b) * 0x295bb3 + iVar4 + -0x6d95cfca;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e3340 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x100089b50);
                    /* WARNING: Could not recover jumptable at 0x000100089c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e3340 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

