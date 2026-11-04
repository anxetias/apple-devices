// name: FUN_1000b8430
// address: 1000b8430

ulong FUN_1000b8430(uint param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  bool bVar3;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = (int)((ulong)(&stack0x040546ea0adda465 + ((ulong)&local_50 & 0x40546ea0adda4b5) * -2) ^
                  0xa8444350752f8ec) * 0x3df53769;
  local_44 = local_48 + 0xbc113791;
  local_48 = local_48 ^ 8;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)((byte)((ulong)(&stack0x040546ea0adda465 +
                                                 ((ulong)&local_50 & 0x40546ea0adda4b5) * -2) ^
                                         0xa8444350752f8ec) | 0xd6) / 0x2e | 0xfd) - 0x2f) - 0xc4)]
            + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x0cd2b24e28e380ad + ((ulong)&local_50 & 0xcd2b24e28e380fd) * -2) ^
              0x57ebc284bfbf5a7f) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x0cd2b24e28e380ad + ((ulong)&local_50 & 0xcd2b24e28e380fd) * -2) ^
                  0x57ebc284bfbf5a7f) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar3 = local_44 == 0x3a3402de;
  switch(bVar3) {
  case true:
    iVar2 = (uint)!bVar3 * -0x4ee2cab2 + (uint)bVar3 * 4 + 6;
    local_48 = (int)((ulong)(&stack0x688537260e9bf81f + ((ulong)&local_50 & 0x688537260e9bf86f) * -2
                            ) ^ 0x33bc47ec99c722ed) * 0x295bb3 + iVar2 + -0x6d95cfd4;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7dedefbb6eeef777) + (ulong)(param_1 & 0x6eeef777) * 2 +
                ((ulong)(&stack0x688537260e9bf81f + ((ulong)&local_50 & 0x688537260e9bf86f) * -2) ^
                0x33bc47ec99c722ed) * -0x295bb3 + -0x4061aa282a446021);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ee8d0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x1000bafb9);
                    /* WARNING: Could not recover jumptable at 0x0001000bb072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006ee8d0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006ee8d0 + (ulong)(bVar3 + 6) * 4) + 0x1000b8551,
                    (long)*(int *)(&DAT_1006ee8d0 + (ulong)(bVar3 + 6) * 4),0);
}

