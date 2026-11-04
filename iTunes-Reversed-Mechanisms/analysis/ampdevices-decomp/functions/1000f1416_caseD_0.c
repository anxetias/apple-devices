// name: caseD_0
// address: 1000f1416

void switchD_1000f8512::caseD_0(void)

{
  uint uVar1;
  long unaff_RBP;
  uint uVar2;
  long unaff_R12;
  int unaff_R15D;
  
  uVar2 = (int)unaff_RBP - 0x48;
  uVar2 = (uVar2 & 0x2009e478) * -2 + uVar2 + 0xa009e47c ^ 0x9be94ad1;
  uVar1 = uVar2 * 0x22116dab;
  *(uint *)(unaff_RBP + -0x48) = uVar2 * -0x22116dab + 0x2b7d1cab;
  *(uint *)(unaff_RBP + -0x3c) = uVar1 ^ 0x7b1aeb70;
  *(uint *)(unaff_RBP + -0x44) = unaff_R15D + 0x42f3bc62U ^ uVar1;
  *(uint *)(unaff_RBP + -0x38) = uVar1 + 0x984301f;
  FUN_1000ac960();
                    /* WARNING: Could not recover jumptable at 0x0001000f14a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R12 + (long)unaff_R15D * 4)))();
  return;
}

