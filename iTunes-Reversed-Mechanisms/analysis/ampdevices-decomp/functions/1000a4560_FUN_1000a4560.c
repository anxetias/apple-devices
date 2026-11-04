// name: FUN_1000a4560
// address: 1000a4560

ulong FUN_1000a4560(ulong param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  bool bVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar2 = ((ulong)(&stack0x0da23b5376d21038 + ((ulong)&local_50 & 0xda23b5376d21088) * -2) ^
          0x323398c7b5d4cd1) * 0x3df53769;
  local_48 = (uint)lVar2;
  local_44 = local_48 + 0x2c20255b;
  local_48 = local_48 ^ 8;
  bVar1 = (byte)lVar2 | 0x2e;
  bVar1 = ((byte)((uint)(0x92 < (byte)((bVar1 >> 2 & bVar1 & bVar1 * '\x17') - 0x30) | 0x66) * 0x39
                 >> 8) & 2) * '@';
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(bVar1 + (bVar1 / 3 & 0xf0) * -3 | 9) - 0x1f)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x6c4aeeb62549fe03 + ((ulong)&local_50 & 0x6c4aeeb62549fe53) * -2) ^
              0x37739e7cb21524d1) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x6c4aeeb62549fe03 + ((ulong)&local_50 & 0x6c4aeeb62549fe53) * -2)
                  ^ 0x37739e7cb21524d1) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar4 = (uint)!bVar5 * -0x3350a685 + (uint)bVar5 * 2;
    local_48 = (int)((ulong)(&stack0x0ebecfd77c76aa62 + ((ulong)&local_50 & 0xebecfd77c76aab2) * -2)
                    ^ 0x5587bf1deb2a7030) * 0x295bb3 + iVar4 + -0x6d95cfcc;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x3fee55d354aab75e) + (param_1 & 0x3fee55d354aab75e) * 2 +
                ((ulong)(&stack0x0ebecfd77c76aa62 + ((ulong)&local_50 & 0xebecfd77c76aab2) * -2) ^
                0x5587bf1deb2a7030) * -0x295bb3 + -0x262104010002008);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_1000a46c9::switchdataD_1006f1540)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar4)] + 0x1000badc8);
                    /* WARNING: Could not recover jumptable at 0x0001000bae7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_1000a46c9::switchdataD_1006f1540)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar4)],
                       local_44 == 0x3a3402de,0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)(int)(&switchD_1000a46c9::switchdataD_1006f1540)[bVar5] + 0x1000a46a5,
                    (long)(int)(&switchD_1000a46c9::switchdataD_1006f1540)[bVar5],0);
}

