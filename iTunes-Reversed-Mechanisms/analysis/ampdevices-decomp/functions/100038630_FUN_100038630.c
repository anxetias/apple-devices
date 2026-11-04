// name: FUN_100038630
// address: 100038630

ulong FUN_100038630(uint param_1)

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
  local_48 = (int)((ulong)(&stack0x4c0770a8f6b0154b + ((ulong)&local_50 & 0x4c0770a8f6b0159b) * -2)
                  ^ 0x173e006261eccf19) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x4c0770a8f6b0154b + ((ulong)&local_50 & 0x4c0770a8f6b0159b) * -2) ^
             0x173e006261eccf19) * -0x295bb3 + 0x3d8c459344aa9757;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x2d3ac6de + -0x2d3ac6d6;
    local_48 = (int)((ulong)(&stack0x607eb8d68499ca93 + ((ulong)&local_50 & 0x607eb8d68499cae3) * -2
                            ) ^ 0x3b47c81c13c51061) * 0x295bb3 + iVar2 + -0x6d95cfd2;
    local_50 = ((ulong)param_1 ^ 0xbdfe77f347fbffd6) + (ulong)(param_1 & 0x47fbffd6) * 2 +
               ((ulong)(&stack0x607eb8d68499ca93 + ((ulong)&local_50 & 0x607eb8d68499cae3) * -2) ^
               0x3b47c81c13c51061) * -0x295bb3 + 0x7f8dcd9ffcae9780;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d74d0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x1000590b2);
                    /* WARNING: Could not recover jumptable at 0x000100059168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d74d0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4),0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

