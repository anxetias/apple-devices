// name: caseD_24099
// address: 100024099

void switchD_10001dc3f::caseD_24099(void)

{
  long lVar1;
  long unaff_RBP;
  code *unaff_R12;
  long unaff_R13;
  uint unaff_R14D;
  long unaff_R15;
  
  (*unaff_R12)();
  *(undefined8 *)(unaff_R15 + 0x40) = 0;
  *(undefined4 *)(unaff_R15 + 0x4c) = 0x50a01b4b;
  *(long *)(unaff_RBP + -0x118) = unaff_R15;
  *(undefined8 *)(unaff_R15 + 0x28) = *(undefined8 *)(unaff_RBP + -0x80);
  lVar1 = (**(code **)(unaff_R13 + (long)(int)(unaff_R14D ^ 0xb7eafb73) * 8))(0x18);
                    /* WARNING: Could not recover jumptable at 0x000100024103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)(unaff_R14D + 0x48150497 + (uint)(lVar1 == 0))] + 0x1000240a4))();
  return;
}

