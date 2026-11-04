// name: FUN_1000aea30
// address: 1000aea30

ulong FUN_1000aea30(ulong param_1)

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
  local_48 = (int)((ulong)(&stack0x7e004c90eaea245e + ((ulong)&local_50 & 0x7e004c90eaea24ae) * -2)
                  ^ 0x25393c5a7db6fe2c) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x7e004c90eaea245e + ((ulong)&local_50 & 0x7e004c90eaea24ae) * -2) ^
             0x25393c5a7db6fe2c) * -0x295bb3 + 0x3d8c459344aa9757;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * -0x6beb7906 + 0x6beb7908;
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x4f090436521c3217 + ((ulong)&local_50 & 0x4f090436521c3267) * -2
                            ) ^ 0x143074fcc540e8e5) * 0x295bb3 + iVar2 + -0x6d95cfcc;
    local_50 = (param_1 ^ 0x3d9fe5dffcbeff7f) + (param_1 & 0x3d9fe5dffcbeff7f) * 2 +
               ((ulong)(&stack0x4f090436521c3217 + ((ulong)&local_50 & 0x4f090436521c3267) * -2) ^
               0x143074fcc540e8e5) * -0x295bb3 + -0x13a04cb8146829;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f40b0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x1000c9389);
                    /* WARNING: Could not recover jumptable at 0x0001000c9443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f40b0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4),0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

