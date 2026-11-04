// name: FUN_1000e1eb0
// address: 1000e1eb0

ulong FUN_1000e1eb0(uint param_1)

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
  local_48 = (int)((ulong)(&stack0x6d51313c03a72883 + ((ulong)&local_50 & 0x6d51313c03a728d3) * -2)
                  ^ 0x366841f694fbf251) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x6d51313c03a72883 + ((ulong)&local_50 & 0x6d51313c03a728d3) * -2) ^
             0x366841f694fbf251) * -0x295bb3 + 0x3d8c459344aa9758;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x602270c6 + -0x602270c2;
    local_50 = ((ulong)param_1 ^ 0x3fbdddf766bad777) + (ulong)(param_1 & 0x66bad777) * 2 +
               ((ulong)(&stack0x5ba50ee91147ae4d + ((ulong)&local_50 & 0x5ba50ee91147ae9d) * -2) ^
               0x9c7e23861b741f) * -0x295bb3 + -0x231986422104021;
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x5ba50ee91147ae4d + ((ulong)&local_50 & 0x5ba50ee91147ae9d) * -2
                            ) ^ 0x9c7e23861b741f) * 0x295bb3 + iVar2 + -0x6d95cfce;
    FUN_1000a30e0(&local_50);
    bVar3 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ff530 + (long)(int)((uint)bVar3 + iVar2) * 4) +
                 0x1000fb7fa);
                    /* WARNING: Could not recover jumptable at 0x0001000fb8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006ff530 + (long)(int)((uint)bVar3 + iVar2) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar3,!bVar3);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

