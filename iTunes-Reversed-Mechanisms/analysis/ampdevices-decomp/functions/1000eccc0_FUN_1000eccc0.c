// name: FUN_1000eccc0
// address: 1000eccc0

ulong FUN_1000eccc0(uint param_1)

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
  local_44 = ((int)&stack0x06400f3434040356 + ((uint)&local_50 & 0x340403a0) * -2 ^ 0x398b5fff) *
             0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x6d1684b2;
  bVar1 = (char)&stack0x06400f3434040356 << 2 | 0x52;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((uint)(byte)((char)((uint)(int)(short)((char)bVar1 * 0x29) >>
                                                       0xc) - ((char)bVar1 >> 7) | 0x92) * -0x14 &
                                   0xff) * 0x19 >> 9) & 0xc) * '\t' + 0x62) - 0x7c)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x7b7f3653a2980c68 + ((ulong)&local_50 & 0x7b7f3653a2980cb8) * -2) ^
              0x2046469935c4d63a) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x7b7f3653a2980c68 + ((ulong)&local_50 & 0x7b7f3653a2980cb8) * -2)
                  ^ 0x2046469935c4d63a) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar4 = local_44 == 0x3a3402de;
  switch(bVar4) {
  case true:
    iVar3 = (uint)!bVar4 * 0x2c63c652 + (uint)bVar4 * -8 + 10;
    local_48 = (int)((ulong)(&stack0x1bdadc27fd283ae7 + ((ulong)&local_50 & 0x1bdadc27fd283b37) * -2
                            ) ^ 0x40e3aced6a74e1b5) * 0x295bb3 + iVar3 + -0x6d95cfcc;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7ddc6797e5fed757) + (ulong)(param_1 & 0xe5fed757) * 2 +
                ((ulong)(&stack0x1bdadc27fd283ae7 + ((ulong)&local_50 & 0x1bdadc27fd283b37) * -2) ^
                0x40e3aced6a74e1b5) * -0x295bb3 + -0x40502204a1544001);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ff080 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4) +
                 0x1000d9aa8);
                    /* WARNING: Could not recover jumptable at 0x0001000d9b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006ff080 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006ff080 + (ulong)(bVar4 + 10) * 4) + 0x1000ece07,
                    (long)*(int *)(&DAT_1006ff080 + (ulong)(bVar4 + 10) * 4),0);
}

