// name: FUN_1000b0010
// address: 1000b0010

ulong FUN_1000b0010(uint param_1)

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
  local_50 = ((ulong)(&stack0x41192ab5fe6ff9fc + ((ulong)&local_50 & 0x41192ab5fe6ffa4c) * -2) ^
             0x1a205a7f693320ce) * -0x295bb3 + 0x3d8c459344aa9757;
  local_48 = (int)((ulong)(&stack0x41192ab5fe6ff9fc + ((ulong)&local_50 & 0x41192ab5fe6ffa4c) * -2)
                  ^ 0x1a205a7f693320ce) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * -0x6b57df5 + 0x6b57df5;
    local_50 = ((ulong)param_1 ^ 0x7dee4ff366eff77f) + (ulong)(param_1 & 0x66eff77f) * 2 +
               ((ulong)(&stack0x6680a36698e483e3 + ((ulong)&local_50 & 0x6680a36698e48433) * -2) ^
               0x3db9d3ac0fb85eb1) * -0x295bb3 + -0x40620a6022456029;
    local_48 = (int)((ulong)(&stack0x6680a36698e483e3 + ((ulong)&local_50 & 0x6680a36698e48433) * -2
                            ) ^ 0x3db9d3ac0fb85eb1) * 0x295bb3 + iVar2 + -0x6d95cfca;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar3 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ea670 + (long)(int)((uint)bVar3 + iVar2) * 4) +
                 0x1000bd0c1);
                    /* WARNING: Could not recover jumptable at 0x0001000bd17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006ea670 + (long)(int)((uint)bVar3 + iVar2) * 4),
                       UNRECOVERED_JUMPTABLE,bVar3,0,!bVar3);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

