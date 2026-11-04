// name: FUN_10001ff10
// address: 10001ff10

void FUN_10001ff10(undefined8 param_1,long param_2)

{
  long unaff_RBP;
  long unaff_R12;
  long unaff_R13;
  undefined4 unaff_R14D;
  int unaff_R15D;
  
  *(undefined4 *)(unaff_RBP + -0xe8) = unaff_R14D;
                    /* WARNING: Could not recover jumptable at 0x00010001ff44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(FUN_10001ff10 +
    *(int *)(unaff_R12 + (long)(int)(unaff_R15D + 0x58e834a9 + (uint)(unaff_R13 == param_2)) * 4)))
            ();
  return;
}

