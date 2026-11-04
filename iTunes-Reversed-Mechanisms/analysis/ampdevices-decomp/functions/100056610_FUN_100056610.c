// name: FUN_100056610
// address: 100056610

ulong FUN_100056610(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = ((int)&stack0x0674268b88814ce7 + ((uint)&local_50 & 0x8814d30) * -2 ^ 0x850e116e) *
             0x3df53769;
  local_44 = local_48 + 0xf5e54349;
  local_48 = local_48 ^ 8;
  bVar3 = (byte)&stack0x0674268b88814ce7;
  bVar1 = (char)bVar3 >> 1;
  bVar2 = bVar1 + 0x32;
  if (bVar1 < 0xce) {
    bVar2 = bVar1;
  }
  bVar3 = (0xf9 < (bVar2 * bVar2 & bVar3)) * '\t' + 0x14;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(-(bVar3 * '\x02' & 0x30) ^ bVar3) - 0xea)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x7ffb1b2acd5e870a + ((ulong)&local_50 & 0x7ffb1b2acd5e875a) * -2) ^
              0x24c26be05a025dd8) * -0x295bb3 + 0x3d8c459344aa9758);
  local_48 = (int)((ulong)(&stack0x7ffb1b2acd5e870a + ((ulong)&local_50 & 0x7ffb1b2acd5e875a) * -2)
                  ^ 0x24c26be05a025dd8) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar5 = (uint)(local_44 == 0x3a3402de) * 0x45e78a47 + -0x45e78a3d;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x3fbe559bd5abbfd7) + (ulong)(param_1 & 0xd5abbfd7) * 2 +
                ((ulong)(&stack0x663221f4b9f8b231 + ((ulong)&local_50 & 0x663221f4b9f8b281) * -2) ^
                0x3d0b513e2ea46803) * -0x295bb3 + -0x232100891012881);
    local_48 = (int)((ulong)(&stack0x663221f4b9f8b231 + ((ulong)&local_50 & 0x663221f4b9f8b281) * -2
                            ) ^ 0x3d0b513e2ea46803) * 0x295bb3 + iVar5 + -0x6d95cfd4;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006db210 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x10004bc61);
                    /* WARNING: Could not recover jumptable at 0x00010004bd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006db210 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

