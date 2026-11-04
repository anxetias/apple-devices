// name: caseD_24acf
// address: 100024acf

void switchD_10001da7b::caseD_24acf(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *unaff_R12;
  int unaff_R14D;
  long unaff_R15;
  
  (*unaff_R12)();
  *(undefined8 *)(unaff_R15 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100024afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(param_3 +
                           (long)(int)(unaff_R14D + 0x4815049c +
                                      (uint)(*(long *)(unaff_R15 + 0x40) == 0)) * 4) + 0x10001dc1f))
            ();
  return;
}

