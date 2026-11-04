// name: caseD_1a6ec
// address: 10001a6ec

void switchD_100019e65::caseD_1a6ec(void)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long in_R11;
  long unaff_R13;
  uint unaff_R15D;
  bool bVar4;
  
  uVar3 = (unaff_R15D ^ 10) + *(int *)(unaff_R13 + 0xc) + 0x16f1d983;
  uVar1 = *(int *)(unaff_R13 + 8) + 0x36205c7f;
  bVar4 = uVar3 < 0x83f2f871;
  bVar2 = uVar1 < uVar3;
  if (uVar1 < ((unaff_R15D ^ 2) + 2 ^ 0x83f2f875) != bVar4) {
    bVar2 = bVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001a75e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_1a6ec + *(int *)(in_R11 + (long)(int)((uint)bVar2 + (unaff_R15D ^ 2)) * 4)))
            (bVar4,caseD_1a6ec + *(int *)(in_R11 + (long)(int)((uint)bVar2 + (unaff_R15D ^ 2)) * 4))
  ;
  return;
}

