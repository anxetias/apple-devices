// name: FUN_1000cc160
// address: 1000cc160

ulong FUN_1000cc160(uint param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  bool bVar7;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar3 = ((ulong)(&stack0x07f2bded1724fe98 + ((ulong)&local_50 & 0x7f2bded1724fee8) * -2) ^
          0x973bf321aaba2b1) * 0x3df53769;
  local_48 = (uint)lVar3;
  local_44 = local_48 + 0x3a0ba82e;
  local_48 = local_48 ^ 8;
  cVar1 = (char)lVar3;
  cVar5 = (char)((uint)(cVar1 * -0x45) >> 8) + cVar1;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(((byte)((0xa9 < (byte)(cVar1 + ((cVar5 >> 3) - (cVar5 >> 7)) * -0xb) ^ 0xb9U) %
                            0x56) >> 4 | 0xfd) + 0x65) - 0x58] + -2))(&local_50);
  uVar2 = (uint)&local_50;
  uVar2 = (uVar2 & 0x698f15a0) * -2 + uVar2 + 0x698f15a7 ^ 0x526fbb0a;
  local_44 = uVar2 * 0x22116dab;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,local_44 + 0x984301e);
  local_50 = (undefined1 *)
             (CONCAT44(local_44,uVar2 * -0x22116dab + 0x2b7d1caf) ^ 0x42f3bc6600000000);
  local_44 = local_44 ^ 0x7b1aeb73;
  FUN_1000ac960(&local_50);
  lVar3 = 0x3d8c459344aa9758;
  if ((int)(local_48 + 0x1fc4d8ca) < 0x6dadc747) {
    lVar3 = 0x3d8c459344aa9757;
  }
  local_50 = (undefined1 *)
             (lVar3 + ((ulong)(&stack0x71fc6ad2be6d40f7 +
                              ((ulong)&local_50 & 0x71fc6ad2be6d4147) * -2) ^ 0x2ac51a1829319bc5) *
                      -0x295bb3);
  local_48 = (int)((ulong)(&stack0x71fc6ad2be6d40f7 + ((ulong)&local_50 & 0x71fc6ad2be6d4147) * -2)
                  ^ 0x2ac51a1829319bc5) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar7 = local_44 == 0x3a3402de;
  switch(bVar7) {
  case true:
    iVar6 = (uint)!bVar7 * -0x2a063a3 + (uint)bVar7 * -2 + 6;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xbded7fb3cebe9777) + (ulong)(param_1 & 0xcebe9777) * 2 +
                ((ulong)(&stack0x667afc416773e981 + ((ulong)&local_50 & 0x667afc416773e9d1) * -2) ^
                0x3d438c8bf02f3353) * -0x295bb3 + 0x7f9ec5df75ebffdf);
    local_48 = (int)((ulong)(&stack0x667afc416773e981 + ((ulong)&local_50 & 0x667afc416773e9d1) * -2
                            ) ^ 0x3d438c8bf02f3353) * 0x295bb3 + iVar6 + -0x6d95cfce;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006fb960 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4) +
                 0x1000f9a02);
                    /* WARNING: Could not recover jumptable at 0x0001000f9ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006fb960 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4),0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006fb960 + (ulong)(bVar7 + 6) * 4) + 0x1000cc318,
                    (long)*(int *)(&DAT_1006fb960 + (ulong)(bVar7 + 6) * 4),0);
}

