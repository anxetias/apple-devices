// name: FUN_10008a350
// address: 10008a350

ulong FUN_10008a350(uint param_1)

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
  local_50 = ((ulong)(&stack0x1a8182e2ff333290 + ((ulong)&local_50 & 0x1a8182e2ff3332e0) * -2) ^
             0x41b8f228686fe862) * -0x295bb3 + 0x3d8c459344aa9757;
  local_48 = (int)((ulong)(&stack0x1a8182e2ff333290 + ((ulong)&local_50 & 0x1a8182e2ff3332e0) * -2)
                  ^ 0x41b8f228686fe862) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x634c8a36 + -0x634c8a2e;
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x7a346efea7109aeb + ((ulong)&local_50 & 0x7a346efea7109b3b) * -2
                            ) ^ 0x210d1e34304c41b9) * 0x295bb3 + iVar2 + -0x6d95cfd2;
    local_50 = ((ulong)param_1 ^ 0x3fad4dd365fadfdf) + (ulong)(param_1 & 0x65fadfdf) * 2 +
               ((ulong)(&stack0x7a346efea7109aeb + ((ulong)&local_50 & 0x7a346efea7109b3b) * -2) ^
               0x210d1e34304c41b9) * -0x295bb3 + -0x221084021504889;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e5a90 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x10008c732);
                    /* WARNING: Could not recover jumptable at 0x00010008c7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e5a90 +
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

