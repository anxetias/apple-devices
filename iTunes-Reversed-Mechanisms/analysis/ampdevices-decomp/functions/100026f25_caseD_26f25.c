// name: caseD_26f25
// address: 100026f25

void switchD_100025805::caseD_26f25(void)

{
  code *unaff_R12;
  int unaff_R14D;
  long unaff_R15;
  
  (*unaff_R12)();
  *(undefined8 *)(unaff_R15 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100026f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)((unaff_R14D + 0x21288818U | 0x96c27354) + 0x48150491 +
                              (uint)(*(long *)(unaff_R15 + 0x18) == 0))] + 0x10001ce77))();
  return;
}

