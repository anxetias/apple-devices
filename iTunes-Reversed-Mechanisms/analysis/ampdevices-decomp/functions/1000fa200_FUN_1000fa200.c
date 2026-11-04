// name: FUN_1000fa200
// address: 1000fa200

ulong FUN_1000fa200(ulong param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
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
  local_48 = (int)((ulong)(&stack0x0b7b0e49a6ebb645 + ((ulong)&local_50 & 0xb7b0e49a6ebb695) * -2) ^
                  0x5fa0c96ab64eacc) * 0x3df53769;
  local_44 = local_48 + 0x7389dbda;
  local_48 = local_48 ^ 8;
  bVar2 = (char)((ulong)(&stack0x0b7b0e49a6ebb645 + ((ulong)&local_50 & 0xb7b0e49a6ebb695) * -2) ^
                0x5fa0c96ab64eacc) >> 5 | 3;
  cVar4 = (char)((uint)((char)bVar2 * -0x77) >> 8) + bVar2;
  cVar4 = bVar2 + ((cVar4 >> 3) - (cVar4 >> 7)) * -0xf;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)(cVar4 * cVar4 * -0x80) >> 6) - 0xc) - 0xe8)]
            + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x72938897dd87b7d2 + ((ulong)&local_50 & 0x72938897dd87b822) * -2)
                  ^ 0x29aaf85d4adb62a0) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x72938897dd87b7d2 + ((ulong)&local_50 & 0x72938897dd87b822) * -2) ^
              0x29aaf85d4adb62a0) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar1 = (uint)!bVar5 * 0x26458c13 + (uint)bVar5 * 10;
    local_48 = (int)((ulong)(&stack0x653fecc43b646208 + ((ulong)&local_50 & 0x653fecc43b646258) * -2
                            ) ^ 0x3e069c0eac38b8da) * 0x295bb3 + iVar1 + -0x6d95cfd4;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbd8dc5b34febb776) + (param_1 & 0x3d8dc5b34febb776) * 2 +
                ((ulong)(&stack0x653fecc43b646208 + ((ulong)&local_50 & 0x653fecc43b646258) * -2) ^
                0x3e069c0eac38b8da) * -0x295bb3 + 0x7ffe7fdff4bedfe0);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_1000fa369::switchdataD_1006f7ff0)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar1)] + 0x10010592b);
                    /* WARNING: Could not recover jumptable at 0x0001001059e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_1000fa369::switchdataD_1006f7ff0)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar1)],0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

