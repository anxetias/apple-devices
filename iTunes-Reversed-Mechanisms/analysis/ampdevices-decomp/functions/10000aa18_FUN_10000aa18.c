// name: FUN_10000aa18
// address: 10000aa18

void FUN_10000aa18(undefined8 param_1,int *param_2)

{
  long lVar1;
  int in_EAX;
  long unaff_RBP;
  long in_R9;
  long in_R11;
  undefined4 unaff_R12D;
  uint unaff_R14D;
  long unaff_R15;
  
  lVar1 = *(long *)(in_R9 + unaff_R15);
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0xfa797575)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0xfa797576)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0xfa797577)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + (unaff_R14D ^ 0xe7) + 0xfa797489)) = 1;
  *(int **)(unaff_RBP + -0x150) = param_2;
  *param_2 = *param_2 + 4;
  *(undefined4 *)(unaff_RBP + -0x50) = unaff_R12D;
                    /* WARNING: Could not recover jumptable at 0x00010000aa86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(in_R11 + (long)(int)((unaff_R14D ^ 0xe7) + 1) * 4) + 0x10000aa5f))();
  return;
}

