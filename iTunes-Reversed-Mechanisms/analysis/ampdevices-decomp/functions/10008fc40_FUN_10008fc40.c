// name: FUN_10008fc40
// address: 10008fc40

ulong FUN_10008fc40(ulong param_1)

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
  local_50 = ((ulong)(&stack0x1df3f826a9f7f95f + ((ulong)&local_50 & 0x1df3f826a9f7f9af) * -2) ^
             0x46ca88ec3eab232d) * -0x295bb3 + 0x3d8c459344aa9757;
  local_48 = (int)((ulong)(&stack0x1df3f826a9f7f95f + ((ulong)&local_50 & 0x1df3f826a9f7f9af) * -2)
                  ^ 0x46ca88ec3eab232d) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0();
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * -0x5491e5a3 + 0x5491e5ab;
    local_50 = (param_1 ^ 0xffdccdd767afb777) + (param_1 & 0xffdccdd767afb777) * 2 +
               ((ulong)(&stack0x1aa83b066b4fcf2f + ((ulong)&local_50 & 0x1aa83b066b4fcf7f) * -2) ^
               0x41914bccfc1315fd) * -0x295bb3 + 0x3daf77bbdcfadfdf;
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x1aa83b066b4fcf2f + ((ulong)&local_50 & 0x1aa83b066b4fcf7f) * -2
                            ) ^ 0x41914bccfc1315fd) * 0x295bb3 + iVar2 + -0x6d95cfd2;
    FUN_1000a30e0();
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e83f0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x100091ed5);
                    /* WARNING: Could not recover jumptable at 0x000100091f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e83f0 +
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

