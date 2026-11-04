// name: FUN_1000b16d0
// address: 1000b16d0

void FUN_1000b16d0(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 local_d8 [136];
  undefined8 local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  iVar5 = (int)((ulong)(&stack0x0a77cbc05794735e + ((ulong)&local_50 & 0xa77cbc0579473ae) * -2) ^
               0x4f6c91f5a1b2ff7) * 0x18c5494a;
  lVar3 = ((ulong)(&stack0x0a77cbc05794735e + ((ulong)&local_50 & 0xa77cbc0579473ae) * -2) ^
          0x4f6c91f5a1b2ff7) * 0x252fee1f;
  iVar2 = (int)lVar3;
  local_44 = iVar5 + iVar2 + 0x758589d;
  local_48 = iVar5 + iVar2 ^ 8;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)((byte)lVar3 | 0xd6) / 0x2e | 0xfd) - 0x2f) - 0xc4)] + -2))
            (&local_50);
  uVar1 = (uint)&local_50;
  uVar1 = (uVar1 & 0x7742fbc0) * -2 + uVar1 + 0xf742fbc0 ^ 0xcca2556d;
  local_44 = uVar1 * 0x22116dab;
  local_50 = (undefined1 *)
             (CONCAT44(local_44,uVar1 * -0x22116dab + 0x2b7d1cba) ^ 0x42f3bc6600000000);
  local_40._0_4_ = local_44 + 0x9843014;
  local_44 = local_44 ^ 0x7b1aeb70;
  FUN_1000ac960(&local_50);
  iVar2 = local_48 + 0x3007c2a8;
  iVar5 = (uint)(iVar2 < 0x7df0b125) * 8 + (uint)(0x7df0b124 < iVar2) * 2;
  uVar1 = iVar5 + 2;
  switch(0x7df0b124 < iVar2) {
  case false:
    uVar4 = ((uint)&local_50 & 0x78dc5cd0) * -2 + (uint)&local_50 + 0x78dc5cd0 ^ 0x433cf27d;
    local_44 = uVar4 * 0x22116dab;
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,local_44 + 0x9843014);
    local_50 = (undefined1 *)
               CONCAT44(iVar5 + 0x42f3bc5eU ^ local_44,uVar4 * -0x22116dab + 0x2b7d1ca5);
    local_44 = local_44 ^ 0x7b1aeb70;
    FUN_1000ac960();
                    /* WARNING: Could not recover jumptable at 0x0001000afeeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_1000b184d::caseD_0 + *(int *)(&DAT_1006f06a0 + (ulong)uVar1 * 4)))();
    return;
  case true:
    local_48 = (int)((ulong)(&stack0x1e9f182d4e99ea5f + ((ulong)&local_50 & 0x1e9f182d4e99eaaf) * -2
                            ) ^ 0x45a668e7d9c5302d) * 0x295bb3 + uVar1 + -0x6d95cfce;
    local_50 = (undefined1 *)
               (((ulong)(&stack0x1e9f182d4e99ea5f + ((ulong)&local_50 & 0x1e9f182d4e99eaaf) * -2) ^
                0x45a668e7d9c5302d) * -0x295bb3 + 0x3d8c459344aa9759);
    local_40 = local_d8;
    FUN_1000a30e0();
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f06a0 + (long)(int)((local_44 == 0x3a3402de) + uVar1) * 4)
                 + 0x1000a63e5);
                    /* WARNING: Could not recover jumptable at 0x0001000a6471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (UNRECOVERED_JUMPTABLE,
               (long)*(int *)(&DAT_1006f06a0 + (long)(int)((local_44 == 0x3a3402de) + uVar1) * 4),0)
    ;
    return;
  }
}

