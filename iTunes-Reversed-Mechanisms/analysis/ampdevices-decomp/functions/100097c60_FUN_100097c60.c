// name: FUN_100097c60
// address: 100097c60

ulong FUN_100097c60(uint param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = ((int)&stack0x022648957646aa00 + ((uint)&local_50 & 0x7646aa50) * -2 ^ 0x7bc9f609) *
             0x3df53769;
  local_44 = local_48 + 0xfe9535cf;
  local_48 = local_48 ^ 8;
  local_50 = local_d8;
  (*(code *)(PTR_LAB_100053fa1_1_10082ee50 + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x1160c046783d3bc1 + ((ulong)&local_50 & 0x1160c046783d3c11) * -2) ^
              0x4a59b08cef61e693) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x1160c046783d3bc1 + ((ulong)&local_50 & 0x1160c046783d3c11) * -2)
                  ^ 0x4a59b08cef61e693) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * -0x7ee9e887 + 0x7ee9e88f;
    local_48 = (int)((ulong)(&stack0x760016abd4f18708 + ((ulong)&local_50 & 0x760016abd4f18758) * -2
                            ) ^ 0x2d39666143ad5dda) * 0x295bb3 + iVar2 + -0x6d95cfd2;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7dbfe7ff65bad77f) + (ulong)(param_1 & 0x65bad77f) * 2 +
                ((ulong)(&stack0x760016abd4f18708 + ((ulong)&local_50 & 0x760016abd4f18758) * -2) ^
                0x2d39666143ad5dda) * -0x295bb3 + -0x4033a26c21104029);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ead60 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x1000c40b5);
                    /* WARNING: Could not recover jumptable at 0x0001000c4173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006ead60 +
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

