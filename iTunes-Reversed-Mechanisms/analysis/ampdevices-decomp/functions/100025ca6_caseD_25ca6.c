// name: caseD_25ca6
// address: 100025ca6

void switchD_100023f94::caseD_25ca6(void)

{
  uint uVar1;
  bool bVar2;
  long unaff_RBX;
  long unaff_RBP;
  uint uVar3;
  int unaff_R15D;
  
  *(long *)(unaff_RBP + -0x170) = unaff_RBX + 0xc;
  uVar3 = *(int *)(unaff_RBX + 0xc) + 0x4a309dde;
  uVar1 = *(int *)(unaff_RBX + 8) + 0x6b737ea5;
  bVar2 = uVar3 < 0xa82aab56;
  if (uVar1 < (unaff_R15D + 2U ^ 0xa82aab42) == uVar3 < 0xa82aab56) {
    bVar2 = uVar1 < uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000100025d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_25ca6 + (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(uint)bVar2 + unaff_R15D + 10]))
            ();
  return;
}

