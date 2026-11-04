// name: FUN_10002baa0
// address: 10002baa0

undefined8 FUN_10002baa0(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long in_R8;
  long in_R9;
  uint uVar7;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar7 = (uint)&local_50;
  uVar3 = (uVar7 & 0x80455a8) * -2 + uVar7 + 0x880455a8 ^ 0xb3e4fb05;
  local_44 = uVar3 * 0x22116dab;
  local_50 = (undefined1 *)
             (CONCAT44(local_44,uVar3 * -0x22116dab + 0x2b7d1ca9) ^ 0x42f3bc6600000000);
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,local_44 + 0x9843013);
  local_44 = local_44 ^ 0x7b1aeb70;
  FUN_1000ac960(&local_50);
  iVar6 = local_48 + -0x30bba4e4;
  bVar2 = in_R9 == 0 || in_R8 == 0;
  switch(bVar2) {
  case false:
    iVar1 = (uint)bVar2 * -0x42cc364b + (uint)(in_R9 != 0 && in_R8 != 0) * 2;
    uVar3 = iVar1 + 6;
    local_48 = ((uVar7 & 0x61ea5960) * -2 + uVar7 + 0x61ea5963 ^ 0x6c65053a) * 0x3df53769;
    local_44 = local_48 + 0x9747fb36;
    local_48 = local_48 ^ uVar3;
    local_50 = local_d8;
    (*(code *)((&PTR_DAT_10082ee00)[iVar1 + 8] + -2))(&local_50);
    uVar5 = (ulong)(0x1d2d4998 < iVar6) + 1;
    local_50 = (undefined1 *)
               ((uVar5 ^ 0x3d8fd7dfeebabff6) +
                ((ulong)(&stack0x025cb005c25f7166 + ((ulong)&local_50 & 0x25cb005c25f71b6) * -2) ^
                0x5965c0cf5503ab34) * -0x295bb3 + (ulong)((uint)uVar5 & 0xfffffffe) * 2 +
               -0x3924caa1028a0);
    local_48 = (int)((ulong)(&stack0x025cb005c25f7166 + ((ulong)&local_50 & 0x25cb005c25f71b6) * -2)
                    ^ 0x5965c0cf5503ab34) * 0x295bb3 + uVar3 + -0x6d95cfd2;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
                    /* WARNING: Could not recover jumptable at 0x0001000462cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(switchD_10002bb87::caseD_0 +
              *(int *)(&DAT_1006d48d0 + (long)(int)((local_44 == 0x3a3402de) + uVar3) * 4)))
                      (switchD_10002bb87::caseD_0 +
                       *(int *)(&DAT_1006d48d0 + (long)(int)((local_44 == 0x3a3402de) + uVar3) * 4),
                       (long)*(int *)(&DAT_1006d48d0 +
                                     (long)(int)((local_44 == 0x3a3402de) + uVar3) * 4),0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bd9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

