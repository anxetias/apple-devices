// name: caseD_0
// address: 100018dbe

void switchD_10001cb4f::caseD_0
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long unaff_R12;
  bool bVar4;
  
  uVar3 = (param_3 + 0x8129e39cU & 0x27 ^ 0x9fffaab9) + *(int *)(param_5 + 0xc);
  uVar1 = *(int *)(param_5 + 8) + 0xdc50a668;
  bVar4 = uVar3 < 0x1260e242;
  bVar2 = uVar1 < uVar3;
  if (uVar1 < 0x1260e242 != bVar4) {
    bVar2 = bVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100018e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R12 + (ulong)((uint)bVar2 + param_3) * 4)))
            (bVar4,caseD_0 + *(int *)(unaff_R12 + (ulong)((uint)bVar2 + param_3) * 4));
  return;
}

