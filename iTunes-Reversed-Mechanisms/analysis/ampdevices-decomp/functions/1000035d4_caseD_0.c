// name: caseD_0
// address: 1000035d4

void switchD_1000081bd::caseD_0(long param_1)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  long unaff_RBP;
  long in_R11;
  long unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RBP + -0x1f8) = unaff_R15;
  *(undefined8 *)(unaff_RBP + -0x200) = unaff_R14;
  uVar2 = unaff_EBX - 5;
  *(undefined4 *)(param_1 + 8) = 0x6a6dfad9;
  iVar1 = *(int *)(in_R11 + (long)(int)(uVar2 + (param_1 == 0)) * 4);
  *(long *)(unaff_RBP + -0x98) = *(long *)(unaff_R13 + (long)(int)(uVar2 ^ 0xf) * 8) + -0xb;
  *(long *)(unaff_RBP + -0x160) = *(long *)(unaff_R13 + (long)(int)(uVar2 ^ 9) * 8) + -1;
  *(undefined8 *)(unaff_RBP + -0x58) = 0x6d94841a1ee4c12e;
  *(undefined8 *)(unaff_RBP + -0xc0) = 0x6d94841a1ee4c12e;
  *(undefined8 *)(unaff_RBP + -200) = 0x6d94841a1ee4c12e;
  *(undefined8 *)(unaff_RBP + -0xd8) = 0x6d94841a1ee4c12e;
  *(undefined8 *)(unaff_RBP + -0x108) = 0x6d94841a1ee4c12e;
  *(undefined8 *)(unaff_RBP + -0xf0) = 0x6d94841a1ee4c12e;
  *(undefined4 *)(unaff_RBP + -0x7c) = 0x3166a97d;
  *(undefined8 *)(unaff_RBP + -0xe8) = 0x6d94841a1ee4c12e;
  *(undefined8 *)(unaff_RBP + -0xe0) = 0x6d94841a1ee4c12e;
                    /* WARNING: Could not recover jumptable at 0x0001000036a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + iVar1))();
  return;
}

