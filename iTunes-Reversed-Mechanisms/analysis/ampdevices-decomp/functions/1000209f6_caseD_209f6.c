// name: caseD_209f6
// address: 1000209f6

void switchD_100020322::caseD_209f6(void)

{
  int in_EAX;
  long unaff_RBP;
  long unaff_R12;
  
  *(undefined8 *)(unaff_RBP + -0x128) = 0x51861bf27a116f3;
  *(undefined8 *)(unaff_RBP + -0xf0) = 0x611c7e149b500624;
                    /* WARNING: Could not recover jumptable at 0x000100020a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_100021c75 +
            *(int *)(&DAT_1006d2600 +
                    (long)(int)(in_EAX + 0x58e83459 +
                               (uint)(**(long **)(unaff_RBP + -0x100) - unaff_R12 ==
                                     ((ulong)(in_EAX + 0xc21fbc23U & 0x96c8783f) ^
                                     *(ulong *)(unaff_RBP + -0xf0)))) * 4)))();
  return;
}

