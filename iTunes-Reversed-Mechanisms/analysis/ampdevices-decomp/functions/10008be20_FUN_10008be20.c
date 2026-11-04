// name: FUN_10008be20
// address: 10008be20

void FUN_10008be20(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_1f8 [424];
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_1f8,0,0x80,0x2e8ba2e8ba2e8ba3,param_5,param_6,param_3,param_4,param_5,param_6,
                param_2);
  uVar1 = ((uint)&local_50 & 0x6d9e8050) * -2 + (uint)&local_50 + 0xed9e8055 ^ 0xd67e2ef8;
  local_4c = uVar1 * 0x22116dab;
  local_50 = uVar1 * -0x22116dab + 0x2b7d1ca7;
  local_40 = local_4c + 0x984301f;
  local_44 = local_4c ^ 0x7b1aeb70;
  local_4c = local_4c ^ 0x42f3bc66;
  FUN_1000ac960();
  local_48 = local_48 + -0x1470680c;
  bVar3 = 0x39788670 < local_48;
  iVar2 = (uint)(local_48 < 0x39788671) * 4 + (uint)bVar3 * 6 + 4;
  switch(bVar3) {
  case false:
    bVar3 = param_1 == 2;
                    /* WARNING: Could not recover jumptable at 0x0001000627e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_10008bf48::caseD_0 + *(int *)(&DAT_1006e4ff0 + (long)(int)(iVar2 + (uint)bVar3) * 4))
    )(switchD_10008bf48::caseD_0 + *(int *)(&DAT_1006e4ff0 + (long)(int)(iVar2 + (uint)bVar3) * 4),
      0x701a56d16a64144c,(uint)!bVar3 * 0x1b6d5321 + (uint)bVar3 * 2 + iVar2);
    return;
  case true:
    iVar2 = iVar2 + (uint)(param_1 == 3 && 0x39788670 < local_48);
                    /* WARNING: Could not recover jumptable at 0x000100064c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&DAT_1006e4ff0 + (long)iVar2 * 4) + 0x100064be2))
              ((long)*(int *)(&DAT_1006e4ff0 + (ulong)(bVar3 | 4) * 4) + 0x10008bf04,
               0x701a56d16a64144c,iVar2,
               (code *)((long)*(int *)(&DAT_1006e4ff0 + (long)iVar2 * 4) + 0x100064be2));
    return;
  }
}

