// name: FUN_100081120
// address: 100081120

void FUN_100081120(uint param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  int local_44;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar2 = ((ulong)(&stack0x0da47ad7bee4dbaf + ((ulong)&local_50 & 0xda47ad7bee4dbff) * -2) ^
          0x3257808b36b87a6) * 0x3df53769;
  local_48 = (uint)lVar2;
  local_44 = local_48 + 0x8872f44a;
  local_48 = local_48 ^ 8;
  bVar1 = (byte)lVar2 | 0x2e;
  bVar1 = ((byte)((uint)(0x92 < (byte)((bVar1 >> 2 & bVar1 & bVar1 * '\x17') - 0x30) | 0x66) * 0x39
                 >> 8) & 2) * '@';
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(bVar1 + (bVar1 / 3 & 0xf0) * -3 | 9) - 0x1f)] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x1573b4b0a42a5adf + ((ulong)&local_50 & 0x1573b4b0a42a5b2f) * -2) ^
              0x4e4ac47a337681ad) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x1573b4b0a42a5adf + ((ulong)&local_50 & 0x1573b4b0a42a5b2f) * -2)
                  ^ 0x4e4ac47a337681ad) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar4 = local_44 == 0x3a3402de;
  iVar3 = (uint)!bVar4 * 4 + (uint)bVar4 * 8 + 1;
  switch(bVar4) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00010007e9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_1000812b3::caseD_0 +
      *(int *)(&DAT_1006e02e0 + (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4)))
              (switchD_1000812b3::caseD_0 +
               *(int *)(&DAT_1006e02e0 + (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4),
               (long)*(int *)(&DAT_1006e02e0 +
                             (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4),
               local_44 == 0x3a3402de,0);
    return;
  case true:
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x3dcc67b34ebbb7df) + (ulong)(param_1 & 0x4ebbb7df) * 2 +
                ((ulong)(&stack0x4a20b384380bd766 + ((ulong)&local_50 & 0x4a20b384380bd7b6) * -2) ^
                0x1119c34eaf570d34) * -0x295bb3 + -0x4022200a112089);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x4a20b384380bd766 + ((ulong)&local_50 & 0x4a20b384380bd7b6) * -2
                            ) ^ 0x1119c34eaf570d34) * 0x295bb3 + iVar3 + -0x6d95cfd3;
    FUN_1000a30e0(&local_50);
                    /* WARNING: Could not recover jumptable at 0x00010008b19f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&DAT_1006e02e0 + (ulong)((uint)(local_44 == 0x3a3402de) + iVar3) * 4)
              + 0x10008b0e5))();
    return;
  }
}

