// name: caseD_16100
// address: 100016100

void switchD_100016e66::caseD_16100(void)

{
  int iVar1;
  uint uVar2;
  long unaff_RBP;
  uint uVar3;
  long unaff_R12;
  int unaff_R14D;
  long unaff_R15;
  bool bVar4;
  
  uVar2 = *(int *)(unaff_R15 + -0x5a793496016ebdc) + 0x93d6b280;
  uVar3 = *(int *)(unaff_R15 + -0x5a793496016ebe0) + 0xf1684c0c;
  bVar4 = uVar2 < (unaff_R14D - 0x1eU | 0x28) + 0x117b257c;
  if (uVar3 < 0x117b25b7 == bVar4) {
    bVar4 = uVar3 < uVar2;
  }
  iVar1 = *(int *)(unaff_R12 + (long)(int)((uint)bVar4 + unaff_R14D + -2) * 4);
  *(undefined4 *)(unaff_RBP + -0x50) = 0x3165f993;
                    /* WARNING: Could not recover jumptable at 0x000100016184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_16100 + iVar1))();
  return;
}

