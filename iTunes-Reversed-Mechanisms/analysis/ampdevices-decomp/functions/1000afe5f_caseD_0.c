// name: caseD_0
// address: 1000afe5f

void switchD_1000b184d::caseD_0(void)

{
  uint uVar1;
  long unaff_RBP;
  uint uVar2;
  long unaff_R12;
  uint unaff_R14D;
  
  uVar2 = (int)unaff_RBP - 0x48;
  uVar2 = (uVar2 & 0x78dc5cd0) * -2 + uVar2 + 0x78dc5cd0 ^ 0x433cf27d;
  uVar1 = uVar2 * 0x22116dab;
  *(uint *)(unaff_RBP + -0x48) = uVar2 * -0x22116dab + 0x2b7d1ca5;
  *(uint *)(unaff_RBP + -0x38) = uVar1 + 0x9843014;
  *(uint *)(unaff_RBP + -0x44) = unaff_R14D + 0x42f3bc5c ^ uVar1;
  *(uint *)(unaff_RBP + -0x3c) = uVar1 ^ 0x7b1aeb70;
  FUN_1000ac960();
                    /* WARNING: Could not recover jumptable at 0x0001000afeeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R12 + (ulong)unaff_R14D * 4)))();
  return;
}

