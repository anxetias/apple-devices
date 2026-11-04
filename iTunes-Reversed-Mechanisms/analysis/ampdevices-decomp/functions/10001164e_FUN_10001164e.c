// name: FUN_10001164e
// address: 10001164e

void FUN_10001164e(undefined8 param_1)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  long unaff_RBP;
  long unaff_R12;
  long unaff_R13;
  undefined8 unaff_R14;
  long unaff_R15;
  
  *(undefined8 *)(unaff_RBP + -0x1a0) = unaff_R14;
  uVar2 = unaff_EBX - 7U | 1;
  *(undefined4 *)(unaff_R12 + 8) = 0x5daafa27;
  iVar1 = *(int *)(unaff_R13 + (long)(int)(uVar2 + (unaff_R12 == 0)) * 4);
  *(long *)(unaff_RBP + -200) = *(long *)(unaff_R15 + (long)(int)(unaff_EBX - 7U | 0xb) * 8) + -0xb;
  *(long *)(unaff_RBP + -0x130) = *(long *)(unaff_R15 + (long)(int)(uVar2 + 0xc) * 8) + -1;
  *(undefined8 *)(unaff_RBP + -0xd0) = param_1;
  *(undefined8 *)(unaff_RBP + -0x80) = param_1;
  *(undefined8 *)(unaff_RBP + -0xe0) = param_1;
  *(undefined8 *)(unaff_RBP + -0xd8) = param_1;
  *(undefined8 *)(unaff_RBP + -0x50) = 0x742c45ff88570c30;
  *(undefined8 *)(unaff_RBP + -0x90) = 0x742c45ff88570c30;
  *(long *)(unaff_RBP + -0x78) = unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x0001000116f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(FUN_10001164e + iVar1))(param_1,0x742c45ff88570c30,uVar2 + 0xc09a63de,0);
  return;
}

