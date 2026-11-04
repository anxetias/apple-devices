// name: FUN_1000bdf40
// address: 1000bdf40

ulong FUN_1000bdf40(uint param_1)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
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
  local_44 = ((int)&stack0x0d21d5f8b192f180 + ((uint)&local_50 & 0x3192f1d0) * -2 ^ 0xbc1dad89) *
             0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x9a4349d9;
  cVar1 = (char)&stack0x0d21d5f8b192f180;
  cVar3 = (char)((uint)(cVar1 * -0x45) >> 8) + cVar1;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(((byte)((0xa9 < (byte)(cVar1 + ((cVar3 >> 3) - (cVar3 >> 7)) * -0xb) ^ 0xb9U) %
                            0x56) >> 4 | 0xfd) + 0x65) - 0x58] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x03fe80c4f79ad517 + ((ulong)&local_50 & 0x3fe80c4f79ad567) * -2) ^
                  0x58c7f00e60c60fe5) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x03fe80c4f79ad517 + ((ulong)&local_50 & 0x3fe80c4f79ad567) * -2) ^
              0x58c7f00e60c60fe5) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar4 = (uint)(local_44 == 0x3a3402de) * 0x1f7c0f71 + -0x1f7c0f69;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xffce4db746abdf7f) + (ulong)(param_1 & 0x46abdf7f) * 2 +
                ((ulong)(&stack0x64abff6be0d1f906 + ((ulong)&local_50 & 0x64abff6be0d1f956) * -2) ^
                0x3f928fa1778d23d4) * -0x295bb3 + 0x3dbdf7dbfdfeb7d7);
    local_48 = (int)((ulong)(&stack0x64abff6be0d1f906 + ((ulong)&local_50 & 0x64abff6be0d1f956) * -2
                            ) ^ 0x3f928fa1778d23d4) * 0x295bb3 + iVar4 + -0x6d95cfd2;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f1080 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x1000c43e9);
                    /* WARNING: Could not recover jumptable at 0x0001000c44a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f1080 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

