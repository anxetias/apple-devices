// name: FUN_10000ae15
// address: 10000ae15

void FUN_10000ae15(int param_1,int param_2)

{
  ulong in_RAX;
  ulong unaff_RBX;
  int unaff_R12D;
  long unaff_R13;
  
                    /* WARNING: Could not recover jumptable at 0x00010000ae61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(unaff_R13 + (long)(int)(unaff_R12D + (uint)(in_RAX < unaff_RBX)) * 4) +
            0x10000ae19))
            ((param_1 - ((unaff_R12D + 0xbdU ^ 0xe2846e50) & param_2 * 2)) + -0xebdc8be);
  return;
}

