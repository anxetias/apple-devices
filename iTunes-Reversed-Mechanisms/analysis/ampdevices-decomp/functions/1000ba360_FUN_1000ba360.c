// name: FUN_1000ba360
// address: 1000ba360

ulong FUN_1000ba360(uint param_1)

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
  local_50 = ((ulong)(&stack0x0b424b3ce2766a3c + ((ulong)&local_50 & 0xb424b3ce2766a8c) * -2) ^
             0x507b3bf6752ab00e) * -0x295bb3 + 0x3d8c459344aa9758;
  local_48 = (int)((ulong)(&stack0x0b424b3ce2766a3c + ((ulong)&local_50 & 0xb424b3ce2766a8c) * -2) ^
                  0x507b3bf6752ab00e) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x6e99bc2 + -0x6e99bc0;
    local_50 = ((ulong)param_1 ^ 0x7fcdf593f5fe97d7) + (ulong)(param_1 & 0xf5fe97d7) * 2 +
               ((ulong)(&stack0x1bcecf1d2432758c + ((ulong)&local_50 & 0x1bcecf1d243275dc) * -2) ^
               0x40f7bfd7b36eaf5e) * -0x295bb3 + -0x4241b000b1540081;
    local_48 = (int)((ulong)(&stack0x1bcecf1d2432758c + ((ulong)&local_50 & 0x1bcecf1d243275dc) * -2
                            ) ^ 0x40f7bfd7b36eaf5e) * 0x295bb3 + iVar2 + -0x6d95cfcc;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f2d00 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x1000a2e60);
                    /* WARNING: Could not recover jumptable at 0x0001000a2f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f2d00 +
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

