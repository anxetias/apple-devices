// name: caseD_0
// address: 100024e0f

void switchD_100024186::caseD_0(void)

{
  undefined8 *unaff_RBX;
  long unaff_RBP;
  long unaff_R13;
  int unaff_R14D;
  code *unaff_R15;
  
  *unaff_RBX = 0;
  *(undefined8 *)(unaff_R13 + -0x2cc289762f9fc82a) = 0x729fead46507e9cb;
  (*unaff_R15)();
                    /* WARNING: Could not recover jumptable at 0x000100024e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d2600 +
                           (long)(int)((uint)(*(long *)(unaff_RBP + -0x150) == 0x3a5a9c416583c527) +
                                      unaff_R14D) * 4) + 0x100024e3e))();
  return;
}

