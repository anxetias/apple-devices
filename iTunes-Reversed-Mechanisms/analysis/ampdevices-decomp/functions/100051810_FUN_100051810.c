// name: FUN_100051810
// address: 100051810

ulong FUN_100051810(uint param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined1 local_d8 [136];
  long local_50;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = (int)((ulong)(&stack0x6e27060b71429b7b + ((ulong)&local_50 & 0x6e27060b71429bcb) * -2)
                  ^ 0x351e76c1e61e4149) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x6e27060b71429b7b + ((ulong)&local_50 & 0x6e27060b71429bcb) * -2) ^
             0x351e76c1e61e4149) * -0x295bb3 + 0x3d8c459344aa9757;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x6b3a6153 + -0x6b3a6153;
    local_48 = (int)((ulong)(&stack0x5775e3238a649749 + ((ulong)&local_50 & 0x5775e3238a649799) * -2
                            ) ^ 0xc4c93e91d384d1b) * 0x295bb3 + iVar2 + -0x6d95cfca;
    local_50 = ((ulong)param_1 ^ 0xff9ec5d35dee9fd6) + (ulong)(param_1 & 0x5dee9fd6) * 2 +
               ((ulong)(&stack0x5775e3238a649749 + ((ulong)&local_50 & 0x5775e3238a649799) * -2) ^
               0xc4c93e91d384d1b) * -0x295bb3 + 0x3ded7fbfe6bbf780;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d6ab0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x10003b08a);
                    /* WARNING: Could not recover jumptable at 0x00010003b139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d6ab0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

