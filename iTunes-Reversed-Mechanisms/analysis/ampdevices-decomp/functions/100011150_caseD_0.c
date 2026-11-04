// name: caseD_0
// address: 100011150

void switchD_10000db39::caseD_0(void)

{
  long *in_RAX;
  long lVar1;
  long unaff_RBP;
  long unaff_R12;
  undefined8 unaff_R13;
  uint unaff_R14D;
  code *unaff_R15;
  
  *(undefined8 *)(unaff_RBP + -0x1d0) = unaff_R13;
  *in_RAX = 0;
  in_RAX[1] = 0x5026187e5543df60;
  *(undefined4 *)(in_RAX + 2) = 0;
  *(code **)(unaff_RBP + -0x78) = unaff_R15;
  lVar1 = (*unaff_R15)(0x1000);
  *in_RAX = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0001000111b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R12 + (ulong)((unaff_R14D ^ 0xf) + (uint)(lVar1 == 0)) * 4)))();
  return;
}

