// name: FUN_10001a4ad
// address: 10001a4ad

void FUN_10001a4ad(void)

{
  long in_RAX;
  int in_ECX;
  long unaff_RBP;
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long in_R10;
  long unaff_R13;
  int unaff_R15D;
  
  lVar1 = (long)*(int *)(unaff_R13 +
                        (long)(int)(unaff_R15D + 0x8fac575 +
                                   (uint)(*(ulong *)(in_R10 + in_RAX) <
                                         *(ulong *)(unaff_RBP + -0x100))) * 4);
  UNRECOVERED_JUMPTABLE = (code *)(lVar1 + 0x10001a4cf);
                    /* WARNING: Could not recover jumptable at 0x00010001a509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((in_ECX - (unaff_R15D + 0xeb7f33e6U & in_ECX * 2)) + -0xebdc8be,lVar1,
             *(ulong *)(unaff_RBP + -0x100),&DAT_10001a1f2,UNRECOVERED_JUMPTABLE);
  return;
}

