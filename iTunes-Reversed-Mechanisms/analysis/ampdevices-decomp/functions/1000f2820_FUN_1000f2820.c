// name: FUN_1000f2820
// address: 1000f2820

ulong FUN_1000f2820(ulong param_1)

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
  local_48 = (int)((ulong)(&stack0x50f4d220ace37463 + ((ulong)&local_50 & 0x50f4d220ace374b3) * -2)
                  ^ 0xbcda2ea3bbfae31) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x50f4d220ace37463 + ((ulong)&local_50 & 0x50f4d220ace374b3) * -2) ^
             0xbcda2ea3bbfae31) * -0x295bb3 + 0x3d8c459344aa9757;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * -0x603930ca + 0x603930cf;
    local_48 = (int)((ulong)(&stack0x6bf97b13f243e517 + ((ulong)&local_50 & 0x6bf97b13f243e567) * -2
                            ) ^ 0x30c00bd9651f3fe5) * 0x295bb3 + iVar2 + -0x6d95cfcf;
    local_50 = (param_1 ^ 0xfffdf59fddffd7df) + (param_1 & 0xfffdf59fddffd7df) * 2 +
               ((ulong)(&stack0x6bf97b13f243e517 + ((ulong)&local_50 & 0x6bf97b13f243e567) * -2) ^
               0x30c00bd9651f3fe5) * -0x295bb3 + 0x3d8e4ff366aabf77;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006fb730 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x1000e1307);
                    /* WARNING: Could not recover jumptable at 0x0001000e13b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006fb730 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4),0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

