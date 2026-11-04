// name: FUN_1000c8cf0
// address: 1000c8cf0

ulong FUN_1000c8cf0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar2 = ((ulong)(&stack0x0a9a37944e8105f1 + ((ulong)&local_50 & 0xa9a37944e810641) * -2) ^
          0x41b354b430e5a18) * 0x3df53769;
  local_48 = (uint)lVar2;
  local_44 = local_48 + 0x8d44072a;
  local_48 = local_48 ^ 8;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)((byte)lVar2 | 0xd6) / 0x2e | 0xfd) - 0x2f) - 0xc4)] + -2))
            (&local_50);
  local_48 = (int)((ulong)(&stack0x1f69933c972efa71 + ((ulong)&local_50 & 0x1f69933c972efac1) * -2)
                  ^ 0x4450e3f600722043) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x1f69933c972efa71 + ((ulong)&local_50 & 0x1f69933c972efac1) * -2) ^
              0x4450e3f600722043) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar3 = (uint)(local_44 == 0x3a3402de) * -0x24000bce + 0x24000bd2;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x7dfc55f3eebeffde) + (param_1 & 0xfdfc55f3eebeffde) * 2 +
                ((ulong)(&stack0x1b8684f06174f9da + ((ulong)&local_50 & 0x1b8684f06174fa2a) * -2) ^
                0x40bff43af62820a8) * -0x295bb3 + -0x40701060aa146888);
    local_48 = (int)((ulong)(&stack0x1b8684f06174f9da + ((ulong)&local_50 & 0x1b8684f06174fa2a) * -2
                            ) ^ 0x40bff43af62820a8) * 0x295bb3 + iVar3 + -0x6d95cfce;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar4 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006edcd0 + (long)(int)((uint)bVar4 + iVar3) * 4) +
                 0x1000a333c);
                    /* WARNING: Could not recover jumptable at 0x0001000a33f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006edcd0 + (long)(int)((uint)bVar4 + iVar3) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar4,!bVar4);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

