// name: FUN_100057690
// address: 100057690

ulong FUN_100057690(uint param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar2 = (uint)&local_50;
  uVar2 = (uVar2 & 0x54b539b8) * -2 + uVar2 + 0xd4b539b8 ^ 0xd93a65e1;
  local_44 = uVar2 * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0xe087e694;
  bVar4 = (char)uVar2 * -9;
  bVar5 = bVar4 + 0x69;
  if (bVar4 < 0x97) {
    bVar5 = bVar4;
  }
  uVar2 = (uint)((byte)(bVar5 * 'l' + 0xf) >> 2 & 7 | 8) * -0x1b & 0xffff;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((char)(uVar2 >> 8) >> 1) + (char)(uVar2 >> 0xf)) >> 1 & 0x7c) +
                           0xb4 | 0x1d) - 0xb3)] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x429afc02a58aa27d + ((ulong)&local_50 & 0x429afc02a58aa2cd) * -2)
                  ^ 0x19a38cc832d6784f) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x429afc02a58aa27d + ((ulong)&local_50 & 0x429afc02a58aa2cd) * -2) ^
              0x19a38cc832d6784f) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  switch(bVar6) {
  case true:
    iVar1 = (uint)!bVar6 * -0x21f408ac + (uint)bVar6 * 10;
    local_48 = (int)((ulong)(&stack0x4746784f46603b4a + ((ulong)&local_50 & 0x4746784f46603b9a) * -2
                            ) ^ 0x1c7f0885d13ce118) * 0x295bb3 + iVar1 + -0x6d95cfd4;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xbdccfffb47fab7fe) + (ulong)(param_1 & 0x47fab7fe) * 2 +
                ((ulong)(&stack0x4746784f46603b4a + ((ulong)&local_50 & 0x4746784f46603b9a) * -2) ^
                0x1c7f0885d13ce118) * -0x295bb3 + 0x7fbf4597fcafdf58);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_1000577e5::switchdataD_1006dd4b0)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar1)] + 0x10003a3c7);
                    /* WARNING: Could not recover jumptable at 0x00010003a487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_1000577e5::switchdataD_1006dd4b0)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar1)],
                       local_44 == 0x3a3402de,0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

