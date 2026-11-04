// name: FUN_100027a40
// address: 100027a40

ulong FUN_100027a40(uint param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  bool bVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar2 = ((ulong)(&stack0x02de17c3fef3b2a9 + ((ulong)&local_50 & 0x2de17c3fef3b2f9) * -2) ^
          0xc5f151cf37ceea0) * 0x3df53769;
  local_48 = (uint)lVar2;
  local_44 = local_48 + 0x4fac264b;
  local_48 = local_48 ^ 8;
  bVar1 = (char)lVar2 >> 5 | 3;
  cVar4 = (char)((uint)((char)bVar1 * -0x77) >> 8) + bVar1;
  cVar4 = bVar1 + ((cVar4 >> 3) - (cVar4 >> 7)) * -0xf;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)(cVar4 * cVar4 * -0x80) >> 6) - 0xc) - 0xe8)]
            + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x10c75795e12086b0 + ((ulong)&local_50 & 0x10c75795e1208700) * -2) ^
              0x4bfe275f767c5d82) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x10c75795e12086b0 + ((ulong)&local_50 & 0x10c75795e1208700) * -2)
                  ^ 0x4bfe275f767c5d82) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  switch(bVar6) {
  case true:
    iVar5 = (uint)!bVar6 * 0x1695b9a7 + (uint)bVar6 * -2 + 2;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xbfecef9fdffef75e) + (ulong)(param_1 & 0xdffef75e) * 2 +
                ((ulong)(&stack0x74a50af538bdfd92 + ((ulong)&local_50 & 0x74a50af538bdfde2) * -2) ^
                0x2f9c7a3fafe12760) * -0x295bb3 + 0x7d9f55f364ab9ff8);
    local_48 = (int)((ulong)(&stack0x74a50af538bdfd92 + ((ulong)&local_50 & 0x74a50af538bdfde2) * -2
                            ) ^ 0x2f9c7a3fafe12760) * 0x295bb3 + iVar5 + -0x6d95cfca;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d4690 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x10002f1d6);
                    /* WARNING: Could not recover jumptable at 0x00010002f28f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d4690 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006d4690 + (ulong)(bVar6 + 2) * 4) + 0x100027b81,
                    (long)*(int *)(&DAT_1006d4690 + (ulong)(bVar6 + 2) * 4),0);
}

