// name: FUN_1000c0d60
// address: 1000c0d60

ulong FUN_1000c0d60(uint param_1)

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
  local_50 = ((ulong)(&stack0x1604e408e3e65e35 + ((ulong)&local_50 & 0x1604e408e3e65e85) * -2) ^
             0x4d3d94c274ba8407) * -0x295bb3 + 0x3d8c459344aa9757;
  local_48 = (int)((ulong)(&stack0x1604e408e3e65e35 + ((ulong)&local_50 & 0x1604e408e3e65e85) * -2)
                  ^ 0x4d3d94c274ba8407) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * -0x7657b99 + 0x7657b9b;
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x70acd5b070f5d547 + ((ulong)&local_50 & 0x70acd5b070f5d597) * -2
                            ) ^ 0x2b95a57ae7a90f15) * 0x295bb3 + iVar2 + -0x6d95cfcc;
    local_50 = ((ulong)param_1 * 2 & 0x1db5f7fbc) + ((ulong)param_1 ^ 0x3d9ffd97edafbfde) +
               ((ulong)(&stack0x70acd5b070f5d547 + ((ulong)&local_50 & 0x70acd5b070f5d597) * -2) ^
               0x2b95a57ae7a90f15) * -0x295bb3 + -0x13b804a9052888;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_1000c0e31::switchdataD_1006ee380)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar2)] + 0x1000ac162);
                    /* WARNING: Could not recover jumptable at 0x0001000ac232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_1000c0e31::switchdataD_1006ee380)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar2)],0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

