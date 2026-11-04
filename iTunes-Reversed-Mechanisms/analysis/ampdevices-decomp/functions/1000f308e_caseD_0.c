// name: caseD_0
// address: 1000f308e

void switchD_1000f3cb5::caseD_0(void)

{
  uint uVar1;
  long unaff_RBP;
  uint uVar2;
  int unaff_R12D;
  
  uVar2 = (int)unaff_RBP - 0x48;
  uVar2 = (uVar2 & 0x446c15b0) * -2 + uVar2 + 0x446c15b6 ^ 0x7f8cbb1b;
  uVar1 = uVar2 * 0x22116dab;
  *(uint *)(unaff_RBP + -0x48) = uVar2 * -0x22116dab + 0x2b7d1ca9;
  *(uint *)(unaff_RBP + -0x38) = uVar1 + 0x9843010;
  *(uint *)(unaff_RBP + -0x44) = unaff_R12D + 0x42f3bc62U ^ uVar1;
  *(uint *)(unaff_RBP + -0x3c) = uVar1 ^ 0x7b1aeb70;
  FUN_1000ac960();
                    /* WARNING: Could not recover jumptable at 0x0001000f311f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(&DAT_1006ff690 + (long)unaff_R12D * 4)))();
  return;
}

