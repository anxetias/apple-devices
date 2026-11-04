// name: FUN_10000ea96
// address: 10000ea96

void FUN_10000ea96(int param_1,ulong param_2,int param_3)

{
  ulong in_RAX;
  uint unaff_R12D;
  long unaff_R13;
  
                    /* WARNING: Could not recover jumptable at 0x00010000de82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(unaff_R13 + (long)(int)(unaff_R12D + (in_RAX < param_2)) * 4) +
            0x10000de3e))
            ((param_1 - (((unaff_R12D ^ 0xd) * 3 + 0xe2846e43 ^ unaff_R12D * 0x13) & param_3 * 2)) +
             -0xebdc8be);
  return;
}

