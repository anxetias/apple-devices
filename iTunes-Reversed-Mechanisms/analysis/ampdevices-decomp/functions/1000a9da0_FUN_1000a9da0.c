// name: FUN_1000a9da0
// address: 1000a9da0

ulong FUN_1000a9da0(uint param_1)

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
  local_48 = (int)((ulong)(&stack0x147d765ef706a215 + ((ulong)&local_50 & 0x147d765ef706a265) * -2)
                  ^ 0x4f440694605a78e7) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x147d765ef706a215 + ((ulong)&local_50 & 0x147d765ef706a265) * -2) ^
             0x4f440694605a78e7) * -0x295bb3 + 0x3d8c459344aa9757;
  local_40 = local_d8;
  FUN_1000a30e0();
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x7be130ee + -0x7be130e4;
    local_48 = (int)((ulong)(&stack0x7ee24e649a03c571 + ((ulong)&local_50 & 0x7ee24e649a03c5c1) * -2
                            ) ^ 0x25db3eae0d5f1f43) * 0x295bb3 + iVar2 + -0x6d95cfd4;
    local_40 = local_d8;
    local_50 = ((ulong)param_1 ^ 0x7d8d75db6fbbff5f) + (ulong)(param_1 & 0x6fbbff5f) * 2 +
               ((ulong)(&stack0x7ee24e649a03c571 + ((ulong)&local_50 & 0x7ee24e649a03c5c1) * -2) ^
               0x25db3eae0d5f1f43) * -0x295bb3 + -0x400130482b116809;
    FUN_1000a30e0();
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f02e0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x1000b7962);
                    /* WARNING: Could not recover jumptable at 0x0001000b7a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f02e0 +
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

