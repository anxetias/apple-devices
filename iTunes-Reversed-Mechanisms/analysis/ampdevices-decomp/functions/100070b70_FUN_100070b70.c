// name: FUN_100070b70
// address: 100070b70

ulong FUN_100070b70(ulong param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
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
  lVar6 = ((ulong)(&stack0x0a2b8720af5a027c + ((ulong)&local_50 & 0xa2b8720af5a02cc) * -2) ^
          0x4aa85ffa2d55e95) * 0x3df53769;
  local_44 = (uint)lVar6;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x16858741;
  bVar4 = (byte)lVar6;
  bVar2 = (char)bVar4 >> 1;
  bVar3 = bVar2 + 0x32;
  if (bVar2 < 0xce) {
    bVar3 = bVar2;
  }
  bVar4 = (0xf9 < (bVar3 * bVar3 & bVar4)) * '\t' + 0x14;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(-(bVar4 * '\x02' & 0x30) ^ bVar4) - 0xea)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x679987e3ba5204ed + ((ulong)&local_50 & 0x679987e3ba52053d) * -2) ^
              0x3ca0f7292d0edfbf) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x679987e3ba5204ed + ((ulong)&local_50 & 0x679987e3ba52053d) * -2)
                  ^ 0x3ca0f7292d0edfbf) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar7 = local_44 == 0x3a3402de;
  switch(bVar7) {
  case true:
    iVar1 = (uint)!bVar7 * -0x129b57ef + (uint)bVar7 * 10;
    local_48 = (int)((ulong)(&stack0x5aab843e851a9d52 + ((ulong)&local_50 & 0x5aab843e851a9da2) * -2
                            ) ^ 0x192f4f412464720) * 0x295bb3 + iVar1 + -0x6d95cfd4;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x3d9f5f9bccbfbfde) + (param_1 & 0x3d9f5f9bccbfbfde) * 2 +
                ((ulong)(&stack0x5aab843e851a9d52 + ((ulong)&local_50 & 0x5aab843e851a9da2) * -2) ^
                0x192f4f412464720) * -0x295bb3 + -0x131a0888152888);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_100070cd1::switchdataD_1006e3800)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar1)] + 0x100081daf);
                    /* WARNING: Could not recover jumptable at 0x000100081e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_100070cd1::switchdataD_1006e3800)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar1)],0);
    return uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

