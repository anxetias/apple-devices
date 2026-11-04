// name: FUN_10004d810
// address: 10004d810

ulong FUN_10004d810(uint param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  iVar5 = (int)((ulong)(&stack0x0c97d17ae715e837 + ((ulong)&local_50 & 0xc97d17ae715e887) * -2) ^
               0x216d3a5ea9ab4de) * 0x245dc5af;
  lVar3 = ((ulong)(&stack0x0c97d17ae715e837 + ((ulong)&local_50 & 0xc97d17ae715e887) * -2) ^
          0x216d3a5ea9ab4de) * 0x199771ba;
  iVar6 = (int)lVar3;
  local_48 = iVar5 + iVar6 ^ 8;
  local_44 = iVar5 + iVar6 + 0xbee9dd6a;
  bVar1 = (char)lVar3 >> 5 | 3;
  cVar4 = (char)((uint)((char)bVar1 * -0x77) >> 8) + bVar1;
  cVar4 = bVar1 + ((cVar4 >> 3) - (cVar4 >> 7)) * -0xf;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)(cVar4 * cVar4 * -0x80) >> 6) - 0xc) - 0xe8)]
            + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x43d0bce2ad90f8e7 + ((ulong)&local_50 & 0x43d0bce2ad90f937) * -2) ^
              0x18e9cc283acc23b5) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x43d0bce2ad90f8e7 + ((ulong)&local_50 & 0x43d0bce2ad90f937) * -2)
                  ^ 0x18e9cc283acc23b5) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar7 = local_44 == 0x3a3402de;
  switch(bVar7) {
  case true:
    iVar6 = (uint)!bVar7 * -0x36c0dcdd + (uint)bVar7 * 2;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x3dadefbfcfaf9777) + (ulong)(param_1 & 0xcfaf9777) * 2 +
                ((ulong)(&stack0x55a9c4eed2a955b5 + ((ulong)&local_50 & 0x55a9c4eed2a95605) * -2) ^
                0xe90b42445f58c87) * -0x295bb3 + -0x21aa2c8b050021);
    local_48 = (int)((ulong)(&stack0x55a9c4eed2a955b5 + ((ulong)&local_50 & 0x55a9c4eed2a95605) * -2
                            ) ^ 0xe90b42445f58c87) * 0x295bb3 + iVar6 + -0x6d95cfcc;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar7 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_10004d970::switchdataD_1006d6870)[(int)((uint)bVar7 + iVar6)]
                 + 0x100048fdf);
                    /* WARNING: Could not recover jumptable at 0x000100049089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      ((long)(int)(&switchD_10004d970::switchdataD_1006d6870)
                                  [(int)((uint)bVar7 + iVar6)],UNRECOVERED_JUMPTABLE,0,bVar7,!bVar7)
    ;
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)(int)(&switchD_10004d970::switchdataD_1006d6870)[bVar7] + 0x10004d94c,
                    (long)(int)(&switchD_10004d970::switchdataD_1006d6870)[bVar7],0);
}

