// name: FUN_1000c5310
// address: 1000c5310

ulong FUN_1000c5310(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  bool bVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar1 = (uint)&local_50;
  uVar1 = (uVar1 & 0x582c9b8) * -2 + uVar1 + 0x8582c9b9 ^ 0x880d95e0;
  local_48 = uVar1 * 0x3df53769;
  local_44 = local_48 + 0xf5e54349;
  local_48 = local_48 ^ 8;
  bVar3 = (char)uVar1 * -9;
  bVar4 = bVar3 + 0x69;
  if (bVar3 < 0x97) {
    bVar4 = bVar3;
  }
  uVar1 = (uint)((byte)(bVar4 * 'l' + 0xf) >> 2 & 7 | 8) * -0x1b & 0xffff;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((char)(uVar1 >> 8) >> 1) + (char)(uVar1 >> 0xf)) >> 1 & 0x7c) +
                           0xb4 | 0x1d) - 0xb3)] + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x03871b5e5a264e4f + ((ulong)&local_50 & 0x3871b5e5a264e9f) * -2) ^
              0x58be6b94cd7a941d) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x03871b5e5a264e4f + ((ulong)&local_50 & 0x3871b5e5a264e9f) * -2) ^
                  0x58be6b94cd7a941d) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  switch(bVar6) {
  case true:
    iVar5 = (uint)!bVar6 * 0xf7bd16 + (uint)bVar6 * 2 + 4;
    local_48 = (int)((ulong)(&stack0x016250e1a3308fa6 + ((ulong)&local_50 & 0x16250e1a3308ff6) * -2)
                    ^ 0x5a5b202b346c5574) * 0x295bb3 + iVar5 + -0x6d95cfd0;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xffde47fbccaedf56) + (ulong)(param_1 & 0xccaedf56) * 2 +
                ((ulong)(&stack0x016250e1a3308fa6 + ((ulong)&local_50 & 0x16250e1a3308ff6) * -2) ^
                0x5a5b202b346c5574) * -0x295bb3 + 0x3dadfd9777fbb800);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f0540 +
                                (ulong)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) + 0x10009a192);
                    /* WARNING: Could not recover jumptable at 0x00010009a24e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f0540 +
                                     (ulong)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006f0540 + (ulong)(bVar6 + 4) * 4) + 0x1000c5446,
                    (long)*(int *)(&DAT_1006f0540 + (ulong)(bVar6 + 4) * 4),0);
}

