// name: FUN_1000a77a0
// address: 1000a77a0

ulong FUN_1000a77a0(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
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
  lVar3 = ((ulong)(&stack0x0b97a7d4c4c4af90 + ((ulong)&local_50 & 0xb97a7d4c4c4afe0) * -2) ^
          0x516a50bc94bf3b9) * 0x3df53769;
  local_48 = (uint)lVar3;
  local_44 = local_48 + 0x3c80dee;
  local_48 = local_48 ^ 8;
  uVar2 = (char)lVar3 * -0x4d & 0xffff;
  bVar1 = ((byte)((char)(((char)(uVar2 >> 8) >> 5) + (char)(uVar2 >> 0xf)) >> 5 ^ 0x1bU) % 0x53 &
          0xc) << 4 | 0x27;
  uVar2 = (char)bVar1 * 0x6f & 0xffff;
  bVar1 = bVar1 + (((char)(uVar2 >> 8) >> 4) + (char)(uVar2 >> 0xf)) * -0x25;
  bVar1 = bVar1 + (char)((uint)bVar1 * 0x4f >> 0xd) * -0x68;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((((byte)(((char)(bVar1 + (char)((uint)bVar1 * 0xb9 >> 0xe) * -0x59 + 'o') >> 4)
                             + 0x3bU) >> 1 | 0x4f) + 0x4f & 0x66) - 0xe) - 0xe] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x509bb0c3086c1577 + ((ulong)&local_50 & 0x509bb0c3086c15c7) * -2)
                  ^ 0xba2c0099f30cf45) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x509bb0c3086c1577 + ((ulong)&local_50 & 0x509bb0c3086c15c7) * -2) ^
              0xba2c0099f30cf45) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar5 = (uint)(local_44 == 0x3a3402de) * -0x2b19a670 + 0x2b19a676;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x7d8d7f9bf4bfb7f7) + (param_1 & 0xfd8d7f9bf4bfb7f7) * 2 +
                ((ulong)(&stack0x62cabe1829121058 + ((ulong)&local_50 & 0x62cabe18291210a8) * -2) ^
                0x39f3ced2be4eca2a) * -0x295bb3 + -0x40013a08b01520a1);
    local_48 = (int)((ulong)(&stack0x62cabe1829121058 + ((ulong)&local_50 & 0x62cabe18291210a8) * -2
                            ) ^ 0x39f3ced2be4eca2a) * 0x295bb3 + iVar5 + -0x6d95cfd0;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f36f0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x1000b6145);
                    /* WARNING: Could not recover jumptable at 0x0001000b6205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f36f0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

