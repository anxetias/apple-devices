// name: FUN_100066a30
// address: 100066a30

ulong FUN_100066a30(uint param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  uint uVar3;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar3 = (uint)&local_50;
  local_48 = ((uVar3 & 0x7e41de8) * -2 + uVar3 + 0x87e41deb ^ 0x8a6b41b2) * 0x3df53769;
  local_44 = local_48 + 0x1867d92f;
  local_48 = local_48 ^ 8;
  local_50 = local_d8;
  (*(code *)(PTR_LAB_100053fa1_1_10082ee50 + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x7f51ec856db7bdf5 + ((ulong)&local_50 & 0x7f51ec856db7be45) * -2)
                  ^ 0x24689c4ffaeb64c7) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x7f51ec856db7bdf5 + ((ulong)&local_50 & 0x7f51ec856db7be45) * -2) ^
              0x24689c4ffaeb64c7) * -0x295bb3 + 0x3d8c459344aa9758);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * -0x2523cbbb + 0x2523cbc3;
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x6e2bfd4ac17ddbd7 + ((ulong)&local_50 & 0x6e2bfd4ac17ddc27) * -2
                            ) ^ 0x35128d80562106a5) * 0x295bb3 + iVar2 + -0x6d95cfd2;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xfdeccdff5efebff6) + (ulong)(param_1 & 0x5efebff6) * 2 +
                ((ulong)(&stack0x6e2bfd4ac17ddbd7 + ((ulong)&local_50 & 0x6e2bfd4ac17ddc27) * -2) ^
                0x35128d80562106a5) * -0x295bb3 + 0x3f9f7793e5abd760);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e7ad0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x10008302a);
                    /* WARNING: Could not recover jumptable at 0x0001000830e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e7ad0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4),0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

