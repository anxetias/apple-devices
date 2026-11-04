// name: caseD_16e2f
// address: 100016e2f

void switchD_100017cdc::caseD_16e2f(undefined8 param_1)

{
  long lVar1;
  long unaff_RBP;
  long unaff_R12;
  uint unaff_R14D;
  
  lVar1 = (long)*(int *)(unaff_R12 +
                        (long)(int)((*(long *)(unaff_RBP + -0x60) == 0x5a793496016ebe8) + unaff_R14D
                                   ) * 4);
  *(undefined4 *)(unaff_RBP + -0x50) = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x000100016e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_16e2f + lVar1))(param_1,caseD_16e2f + lVar1,lVar1,unaff_R14D ^ 6);
  return;
}

