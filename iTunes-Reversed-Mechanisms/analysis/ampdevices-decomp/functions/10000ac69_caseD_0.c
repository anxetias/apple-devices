// name: caseD_0
// address: 10000ac69

void switchD_100009eb1::caseD_0(void)

{
  int in_EAX;
  long unaff_RBX;
  uint uVar1;
  ulong unaff_R13;
  long unaff_R14;
  uint unaff_R15D;
  byte in_CF;
  
  uVar1 = unaff_R15D + 0x4077ba72 & 0xbf884597;
                    /* WARNING: Could not recover jumptable at 0x00010000acc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(unaff_R14 +
                           (long)(int)(unaff_R15D + (in_EAX + 0x7b6 + (uint)in_CF < unaff_R13)) * 4)
            + 0x10000ac7d))
            (uVar1,((int)unaff_RBX -
                   ((uint)(unaff_RBX << (((byte)uVar1 ^ 0x16) & 0x3f)) &
                   (unaff_R15D ^ 0xe6) + 0xe2846d99)) + -0xebdc8be);
  return;
}

