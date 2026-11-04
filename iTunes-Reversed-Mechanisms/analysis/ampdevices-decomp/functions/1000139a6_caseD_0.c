// name: caseD_0
// address: 1000139a6

void switchD_1000111b7::caseD_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 unaff_RBX;
  long unaff_RBP;
  long in_R9;
  long in_R10;
  long unaff_R12;
  int unaff_R14D;
  uint uVar3;
  
  *(undefined8 *)(unaff_RBP + -0x120) = unaff_RBX;
  *(long *)(unaff_RBP + -0x110) = in_R9 + 0x765f31d61552acd;
  uVar3 = unaff_R14D + 0xa3685611U & 0x28;
  *(undefined4 *)(in_R9 + 8) = 0x5543ef60;
  iVar1 = *(int *)(in_R10 + (ulong)(uVar3 + (in_R9 == 0)) * 4);
  lVar2 = *(long *)(unaff_R12 + (ulong)(uVar3 ^ 0xd) * 8) + -1;
  *(long *)(unaff_RBP + -0x160) = lVar2;
  *(undefined4 *)(unaff_RBP + -0x94) = 0x3166a97d;
  *(undefined8 *)(unaff_RBP + -0x60) = 0x4469798c814565b9;
  *(long *)(unaff_RBP + -0xc0) = lVar2;
  *(long *)(unaff_RBP + -0xd0) = lVar2;
  *(long *)(unaff_RBP + -0xb8) = lVar2;
  *(long *)(unaff_RBP + -0xf0) = lVar2;
  *(long *)(unaff_RBP + -0x88) = lVar2;
  *(long *)(unaff_RBP + -0xa0) = in_R9;
  *(undefined8 *)(unaff_RBP + -0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100013a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + iVar1))();
  return;
}

