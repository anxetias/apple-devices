// name: FUN_100065f20
// address: 100065f20

ulong FUN_100065f20(uint param_1)

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
  local_48 = (int)((ulong)(&stack0x7a02793fad3fd35d + ((ulong)&local_50 & 0x7a02793fad3fd3ad) * -2)
                  ^ 0x213b09f53a63092f) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x7a02793fad3fd35d + ((ulong)&local_50 & 0x7a02793fad3fd3ad) * -2) ^
             0x213b09f53a63092f) * -0x295bb3 + 0x3d8c459344aa9758;
  local_40 = local_d8;
  FUN_1000a30e0();
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x77d7f80a + -0x77d7f808;
    local_50 = ((ulong)param_1 ^ 0x7d8f5f934fbb9fde) + (ulong)(param_1 & 0x4fbb9fde) * 2 +
               ((ulong)(&stack0x53732fb0368a7d5b + ((ulong)&local_50 & 0x53732fb0368a7dab) * -2) ^
               0x84a5f7aa1d6a729) * -0x295bb3 + -0x40031a000b110888;
    local_48 = (int)((ulong)(&stack0x53732fb0368a7d5b + ((ulong)&local_50 & 0x53732fb0368a7dab) * -2
                            ) ^ 0x84a5f7aa1d6a729) * 0x295bb3 + iVar2 + -0x6d95cfcc;
    local_40 = local_d8;
    FUN_1000a30e0();
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_100065ff3::switchdataD_1006e88b0)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar2)] + 0x10008d90b);
                    /* WARNING: Could not recover jumptable at 0x00010008d9c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_100065ff3::switchdataD_1006e88b0)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar2)],0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

