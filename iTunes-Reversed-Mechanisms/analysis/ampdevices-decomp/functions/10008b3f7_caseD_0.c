// name: caseD_0
// address: 10008b3f7

void switchD_100084fbb::caseD_0(undefined8 param_1)

{
  bool bVar1;
  int unaff_EBX;
  long unaff_RBP;
  uint uVar2;
  uint uVar3;
  long unaff_R13;
  
  uVar3 = (int)param_1 + 0x99d8b7b1;
  uVar2 = (int)*(undefined8 *)(unaff_RBP + -0x270) + 0xae0ce8c6;
  bVar1 = uVar2 < 0x9ba37bc;
  if (uVar3 < 0x9ba37bc == uVar2 < 0x9ba37bc) {
    bVar1 = uVar3 < uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008b466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R13 + (long)(int)((uint)bVar1 + unaff_EBX) * 4)))
            (param_1,uVar2,(ulong)bVar1 << 7,
             caseD_0 + *(int *)(unaff_R13 + (long)(int)((uint)bVar1 + unaff_EBX) * 4));
  return;
}

