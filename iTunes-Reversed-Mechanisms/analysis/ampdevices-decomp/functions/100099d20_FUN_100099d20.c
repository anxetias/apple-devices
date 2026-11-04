// name: FUN_100099d20
// address: 100099d20

ulong FUN_100099d20(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  undefined1 local_d8 [136];
  long local_50;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = (int)((ulong)(&stack0x57afbf071d3c3b09 + ((ulong)&local_50 & 0x57afbf071d3c3b59) * -2)
                  ^ 0xc96cfcd8a60e1db) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x57afbf071d3c3b09 + ((ulong)&local_50 & 0x57afbf071d3c3b59) * -2) ^
             0xc96cfcd8a60e1db) * -0x295bb3 + 0x3d8c459344aa9757;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x3fc83393 + -0x3fc8338a;
    local_48 = (int)((ulong)(&stack0x74aa30ddb8ff024e + ((ulong)&local_50 & 0x74aa30ddb8ff029e) * -2
                            ) ^ 0x2f9340172fa3d81c) * 0x295bb3 + iVar2 + -0x6d95cfd3;
    local_50 = (param_1 ^ 0x7f9d5dffdcebfff6) + (param_1 & 0xff9d5dffdcebfff6) * 2 +
               ((ulong)(&stack0x74aa30ddb8ff024e + ((ulong)&local_50 & 0x74aa30ddb8ff029e) * -2) ^
               0x2f9340172fa3d81c) * -0x295bb3 + -0x4211186c984168a0;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar3 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f3840 + (long)(int)((uint)bVar3 + iVar2) * 4) +
                 0x1000c05e2);
                    /* WARNING: Could not recover jumptable at 0x0001000c0693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006f3840 + (long)(int)((uint)bVar3 + iVar2) * 4),
                       UNRECOVERED_JUMPTABLE,bVar3,0,!bVar3);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

