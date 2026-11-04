// name: caseD_0
// address: 100006449

void switchD_1000040b8::caseD_0(undefined8 param_1,long param_2)

{
  long unaff_RBX;
  code *unaff_R14;
  int unaff_R15D;
  
  (*unaff_R14)();
  *(undefined8 *)(unaff_RBX + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100006479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(param_2 +
                           (long)(int)(unaff_R15D + 4 + (uint)(*(long *)(unaff_RBX + 0x40) == 0)) *
                           4) + 0x1000067b3))();
  return;
}

