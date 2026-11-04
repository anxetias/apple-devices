// name: FUN_100050180
// address: 100050180

void FUN_100050180(int *param_1)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)param_1;
  iVar1 = *param_1 + ((uVar3 & 0xfd0dc13) * -2 + uVar3 + 0xfd0dc13 ^ 0xdfbced08) * -0x29e509e3;
  bVar4 = *(int *)(*(long *)(param_1 + 4) + 4) == 0x41927043;
  uVar2 = (uint)bVar4;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(&DAT_1006da160 + (long)(int)(iVar1 + uVar2) * 4) + 0x10005023a);
                    /* WARNING: Could not recover jumptable at 0x000100050274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (uVar3,UNRECOVERED_JUMPTABLE,
             (long)*(int *)(&DAT_1006da160 + (long)(int)(iVar1 + uVar2) * 4),
             uVar2 * 0x31 + (uint)!bVar4 * -4 + iVar1,*(undefined8 *)(param_1 + 8));
  return;
}

