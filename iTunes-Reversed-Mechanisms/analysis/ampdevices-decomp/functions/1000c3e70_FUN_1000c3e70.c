// name: FUN_1000c3e70
// address: 1000c3e70

ulong FUN_1000c3e70(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar3 = ((ulong)(&stack0x052a7a75b8fabfa3 + ((ulong)&local_50 & 0x52a7a75b8fabff3) * -2) ^
          0xbab78aab575e3aa) * 0x3df53769;
  local_48 = (uint)lVar3;
  local_44 = local_48 + 0x470f1c05;
  local_48 = local_48 ^ 8;
  bVar1 = (byte)lVar3 | 0x2e;
  bVar1 = ((byte)((uint)(0x92 < (byte)((bVar1 >> 2 & bVar1 & bVar1 * '\x17') - 0x30) | 0x66) * 0x39
                 >> 8) & 2) * '@';
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(bVar1 + (bVar1 / 3 & 0xf0) * -3 | 9) - 0x1f)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x7c03889c7d5fdfde + ((ulong)&local_50 & 0x7c03889c7d5fe02e) * -2) ^
              0x273af856ea033aac) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x7c03889c7d5fdfde + ((ulong)&local_50 & 0x7c03889c7d5fe02e) * -2)
                  ^ 0x273af856ea033aac) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar4 = (uint)(local_44 == 0x3a3402de) * -0x347f0c66 + 0x347f0c66;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x3d8c4f9fd5fadff7) + (param_1 & 0x3d8c4f9fd5fadff7) * 2 +
                ((ulong)(&stack0x48b2bf71ecd8c31e + ((ulong)&local_50 & 0x48b2bf71ecd8c36e) * -2) ^
                0x138bcfbb7b8419ec) * -0x295bb3 + -0xa0c915048a1);
    local_48 = (int)((ulong)(&stack0x48b2bf71ecd8c31e + ((ulong)&local_50 & 0x48b2bf71ecd8c36e) * -2
                            ) ^ 0x138bcfbb7b8419ec) * 0x295bb3 + iVar4 + -0x6d95cfca;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar5 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f4240 + (long)(int)((uint)bVar5 + iVar4) * 4) +
                 0x1000ac500);
                    /* WARNING: Could not recover jumptable at 0x0001000ac5af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006f4240 + (long)(int)((uint)bVar5 + iVar4) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar5,!bVar5);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

