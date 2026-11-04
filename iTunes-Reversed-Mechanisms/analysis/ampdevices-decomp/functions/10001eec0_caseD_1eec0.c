// name: caseD_1eec0
// address: 10001eec0

void switchD_10001ce9e::caseD_1eec0(void)

{
  long lVar1;
  long unaff_RBP;
  code *unaff_R12;
  int unaff_R14D;
  undefined8 *unaff_R15;
  
  (*unaff_R12)();
  unaff_R15[3] = 0;
  lVar1 = unaff_R15[6];
  *(undefined4 *)((long)unaff_R15 + 0x24) = 0x50a01b4b;
  *(undefined8 *)(unaff_RBP + -0x80) = 0x611c7e149b50062b;
  *unaff_R15 = 0x611c7e149b50062b;
                    /* WARNING: Could not recover jumptable at 0x00010001ef0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)(unaff_R14D + 0x4815048e + (uint)(lVar1 == 0))] + 0x10001da42))();
  return;
}

