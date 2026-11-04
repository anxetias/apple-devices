// name: FUN_100073130
// address: 100073130

ulong FUN_100073130(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = ((uint)(&stack0x03c026f8f2c72002 + ((ulong)&local_50 & 0x3c026f8f2c72052) * -2) ^
             0xff487c0b) * 0x3df53769;
  local_44 = local_48 + 0xcf7d66cc;
  local_48 = local_48 ^ 8;
  bVar2 = (byte)(&stack0x03c026f8f2c72002 + ((ulong)&local_50 & 0x3c026f8f2c72052) * -2) | 0x2e;
  bVar2 = ((byte)((uint)(0x92 < (byte)((bVar2 >> 2 & bVar2 & bVar2 * '\x17') - 0x30) | 0x66) * 0x39
                 >> 8) & 2) * '@';
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(bVar2 + (bVar2 / 3 & 0xf0) * -3 | 9) - 0x1f)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x6494b74d08355087 + ((ulong)&local_50 & 0x6494b74d083550d7) * -2) ^
              0x3fadc7879f698a55) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x6494b74d08355087 + ((ulong)&local_50 & 0x6494b74d083550d7) * -2)
                  ^ 0x3fadc7879f698a55) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar3 = (uint)(local_44 == 0x3a3402de) * 0x557b984d + -0x557b984b;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbfcdd5f3fcbab756) + (param_1 & 0x3fcdd5f3fcbab756) * 2 +
                ((ulong)(&stack0x7e15f828c64c22d8 + ((ulong)&local_50 & 0x7e15f828c64c2328) * -2) ^
                0x252c88e25110f9aa) * -0x295bb3 + 0x7dbe6f9f47efe000);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x7e15f828c64c22d8 + ((ulong)&local_50 & 0x7e15f828c64c2328) * -2
                            ) ^ 0x252c88e25110f9aa) * 0x295bb3 + iVar3 + -0x6d95cfcc;
    FUN_1000a30e0(&local_50);
    bVar4 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e3e90 + (long)(int)((uint)bVar4 + iVar3) * 4) +
                 0x100060ffa);
                    /* WARNING: Could not recover jumptable at 0x0001000610b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006e3e90 + (long)(int)((uint)bVar4 + iVar3) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar4,!bVar4);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

