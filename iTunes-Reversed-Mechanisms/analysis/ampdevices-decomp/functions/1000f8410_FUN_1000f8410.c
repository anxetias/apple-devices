// name: FUN_1000f8410
// address: 1000f8410

void FUN_1000f8410(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  undefined1 local_d8 [136];
  undefined8 local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar2 = ((uint)&local_50 & 0x220e4998) * -2 + (uint)&local_50 + 0xa20e4999 ^ 0x99eee734;
  uVar3 = uVar2 * 0x22116dab;
  local_40._0_4_ = uVar3 + 0x984301f;
  local_44 = uVar3 ^ 0x7b1aeb70;
  local_50 = (undefined1 *)(CONCAT44(uVar3,uVar2 * -0x22116dab + 0x2b7d1caf) ^ 0x42f3bc6600000000);
  FUN_1000ac960();
  iVar4 = local_48 + 0x4d5c421;
  iVar1 = (uint)(0x52beb29d < iVar4) * 0x656e9ab9 + (uint)(iVar4 < 0x52beb29e) * 0x656e9ab8;
  iVar5 = iVar1 + -0x656e9ab4;
  switch(0x52beb29d < iVar4) {
  case false:
    uVar2 = ((uint)&local_50 & 0x2009e478) * -2 + (uint)&local_50 + 0xa009e47c ^ 0x9be94ad1;
    uVar3 = uVar2 * 0x22116dab;
    local_44 = uVar3 ^ 0x7b1aeb70;
    local_50 = (undefined1 *)CONCAT44(iVar1 + 0xdd8521aeU ^ uVar3,uVar2 * -0x22116dab + 0x2b7d1cab);
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,uVar3 + 0x984301f);
    FUN_1000ac960();
                    /* WARNING: Could not recover jumptable at 0x0001000f14a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_1000f8512::caseD_0 + *(int *)(&DAT_1006fd100 + (long)iVar5 * 4)))();
    return;
  case true:
    uVar2 = (uint)&local_50;
    local_48 = ((uVar2 & 0x4e085980) * -2 + uVar2 + 0xce085987 ^ 0xc38705de) * 0x3df53769;
    local_44 = local_48 + 0x1a067df8;
    local_48 = local_48 ^ iVar1 + 0x9a91654fU;
    local_50 = local_d8;
    (*(code *)((&PTR_DAT_10082ee00)[iVar1 + -0x656e9aaf] + -2))(&local_50);
    local_48 = (int)((ulong)(&stack0x79d2e7ce280dc053 + ((ulong)&local_50 & 0x79d2e7ce280dc0a3) * -2
                            ) ^ 0x22eb9704bf511a21) * 0x295bb3 + iVar5 + -0x6d95cfcf;
    local_50 = (undefined1 *)
               (((ulong)(&stack0x79d2e7ce280dc053 + ((ulong)&local_50 & 0x79d2e7ce280dc0a3) * -2) ^
                0x22eb9704bf511a21) * -0x295bb3 + 0x3d8c459344aa9759);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006fd100 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x100103b16);
                    /* WARNING: Could not recover jumptable at 0x000100103bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (UNRECOVERED_JUMPTABLE,
               (long)*(int *)(&DAT_1006fd100 +
                             (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),
               local_44 == 0x3a3402de,0);
    return;
  }
}

