// name: FUN_1000e0130
// address: 1000e0130

ulong FUN_1000e0130(uint param_1)

{
  ulong uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar2 = ((ulong)(&stack0x02d866885f609112 + ((ulong)&local_50 & 0x2d866885f609162) * -2) ^
          0xc59645752efcd3b) * 0x3df53769;
  local_48 = (uint)lVar2;
  local_44 = local_48 + 0xf902f930;
  local_48 = local_48 ^ 8;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)((byte)lVar2 | 0xd6) / 0x2e | 0xfd) - 0x2f) - 0xc4)] + -2))
            (&local_50);
  local_48 = (int)((ulong)(&stack0x760927b808854e47 + ((ulong)&local_50 & 0x760927b808854e97) * -2)
                  ^ 0x2d3057729fd99415) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x760927b808854e47 + ((ulong)&local_50 & 0x760927b808854e97) * -2) ^
              0x2d3057729fd99415) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar3 = (uint)(local_44 == 0x3a3402de) * 0x422ffabc + -0x422ffaba;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xbdbcfff7dfbe9776) + (ulong)(param_1 & 0xdfbe9776) * 2 +
                ((ulong)(&stack0x56b6bb9b2d9ab473 + ((ulong)&local_50 & 0x56b6bb9b2d9ab4c3) * -2) ^
                0xd8fcb51bac66e41) * -0x295bb3 + 0x7fcf459b64ebffe0);
    local_48 = (int)((ulong)(&stack0x56b6bb9b2d9ab473 + ((ulong)&local_50 & 0x56b6bb9b2d9ab4c3) * -2
                            ) ^ 0xd8fcb51bac66e41) * 0x295bb3 + iVar3 + -0x6d95cfcc;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_1000e0285::switchdataD_1006fc420)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar3)] + 0x1000de0e3);
                    /* WARNING: Could not recover jumptable at 0x0001000de19e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_1000e0285::switchdataD_1006fc420)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar3)],0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

