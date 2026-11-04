// name: caseD_0
// address: 10000ef83

void switchD_10000d217::caseD_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long unaff_RBX;
  long unaff_RBP;
  undefined8 unaff_R12;
  long unaff_R13;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RBP + -0x1c8) = unaff_R12;
  *(undefined8 *)(unaff_RBP + -0x100) = unaff_R15;
  *(undefined8 *)(unaff_RBP + -0x68) = param_3;
  *(undefined4 *)(unaff_RBX + 8) = 0x3677bb7f;
  iVar1 = *(int *)(unaff_R13 + (ulong)((unaff_RBX == 0) + 2) * 4);
  *(undefined8 *)(unaff_RBP + -0xe0) = param_2;
  *(undefined8 *)(unaff_RBP + -0xd8) = param_2;
  *(undefined8 *)(unaff_RBP + -0xf0) = param_2;
  *(undefined8 *)(unaff_RBP + -0x60) = 0x650a959f740c42c3;
  *(undefined8 *)(unaff_RBP + -0xe8) = 0x650a959f740c42c3;
  *(undefined8 *)(unaff_RBP + -200) = 0x650a959f740c42c3;
  *(undefined8 *)(unaff_RBP + -0xa0) = 0x650a959f740c42c3;
  *(undefined8 *)(unaff_RBP + -0xd0) = 0x650a959f740c42c3;
  *(undefined8 *)(unaff_RBP + -0xc0) = 0x650a959f740c42c3;
                    /* WARNING: Could not recover jumptable at 0x00010000f016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + iVar1))();
  return;
}

