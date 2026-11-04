// name: FUN_10003a290
// address: 10003a290

ulong FUN_10003a290(uint param_1)

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
  local_50 = ((ulong)(&stack0x4f7b36fc0357fae7 + ((ulong)&local_50 & 0x4f7b36fc0357fb37) * -2) ^
             0x14424636940b21b5) * -0x295bb3 + 0x3d8c459344aa9757;
  local_48 = (int)((ulong)(&stack0x4f7b36fc0357fae7 + ((ulong)&local_50 & 0x4f7b36fc0357fb37) * -2)
                  ^ 0x14424636940b21b5) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x6662f1c4 + -0x6662f1bc;
    local_50 = ((ulong)param_1 ^ 0x7fbc659bd7fa9ff7) + (ulong)(param_1 & 0xd7fa9ff7) * 2 +
               ((ulong)(&stack0x1a13573f7c2420c9 + ((ulong)&local_50 & 0x1a13573f7c242119) * -2) ^
               0x412a27f5eb78fb9b) * -0x295bb3 + -0x42302008935008a1;
    local_48 = (int)((ulong)(&stack0x1a13573f7c2420c9 + ((ulong)&local_50 & 0x1a13573f7c242119) * -2
                            ) ^ 0x412a27f5eb78fb9b) * 0x295bb3 + iVar2 + -0x6d95cfd2;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d8ea0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x10005f8cc);
                    /* WARNING: Could not recover jumptable at 0x00010005f987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d8ea0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4),0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

