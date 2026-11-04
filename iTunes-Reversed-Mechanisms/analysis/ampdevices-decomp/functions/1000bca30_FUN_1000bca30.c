// name: FUN_1000bca30
// address: 1000bca30

void FUN_1000bca30(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar4 = (uint)&local_50;
  uVar1 = (uVar4 & 0x60ddf00) * -2 + uVar4 + 0x60ddf04 ^ 0x3ded71a9;
  uVar2 = uVar1 * 0x22116dab;
  local_44 = uVar2 ^ 0x7b1aeb70;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,uVar2 + 0x984301f);
  local_50 = (undefined1 *)(CONCAT44(uVar2,uVar1 * -0x22116dab + 0x2b7d1ca7) ^ 0x42f3bc6600000000);
  FUN_1000ac960(&local_50);
  iVar5 = local_48 + 0x1ece0cab;
  iVar3 = (uint)(0x6cb6fb27 < iVar5) * 0x6dfc364e;
  iVar6 = iVar3 + (uint)(iVar5 < 0x6cb6fb28) * 0x6dfc3650;
  iVar7 = iVar6 + -0x6dfc3648;
  switch(0x6cb6fb27 < iVar5) {
  case false:
    uVar1 = (uint)(param_1 == 2);
                    /* WARNING: Could not recover jumptable at 0x0001000ad3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_1000bcb2b::caseD_0 + *(int *)(&DAT_1006f2980 + (long)(int)(uVar1 + iVar7) * 4)))
              (&DAT_1006f2980,(uint)(param_1 != 2) * -0x6dfc3650 + uVar1 * -2 + iVar7,iVar3,
               switchD_1000bcb2b::caseD_0 +
               *(int *)(&DAT_1006f2980 + (long)(int)(uVar1 + iVar7) * 4));
    return;
  case true:
    local_44 = ((uVar4 & 0x68e9a838) * -2 + uVar4 + 0x68e9a83f ^ 0x6566f466) * 0x3df53769;
    local_48 = iVar6 + 0x9203c9baU ^ local_44;
    local_44 = local_44 + 0x49b64a4f;
    local_50 = local_d8;
    (*(code *)((&PTR_DAT_10082ee00)[iVar6 + -0x6dfc3644] + -2))(&local_50);
    local_48 = (int)((ulong)(&stack0x551a4a2d35e42001 + ((ulong)&local_50 & 0x551a4a2d35e42051) * -2
                            ) ^ 0xe233ae7a2b8fad3) * 0x295bb3 + iVar7 + -0x6d95cfd0;
    local_50 = (undefined1 *)
               (((ulong)(&stack0x551a4a2d35e42001 + ((ulong)&local_50 & 0x551a4a2d35e42051) * -2) ^
                0xe233ae7a2b8fad3) * -0x295bb3 + 0x3d8c459344aa9758);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f2980 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4) +
                 0x1000a1201);
                    /* WARNING: Could not recover jumptable at 0x0001000a1311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (UNRECOVERED_JUMPTABLE,
               (long)*(int *)(&DAT_1006f2980 +
                             (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4),0);
    return;
  }
}

