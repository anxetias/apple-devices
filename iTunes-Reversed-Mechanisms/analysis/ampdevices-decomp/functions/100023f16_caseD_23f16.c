// name: caseD_23f16
// address: 100023f16

void switchD_10001f0a4::caseD_23f16(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_RBX;
  long unaff_RBP;
  long in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  int unaff_R15D;
  uint uVar2;
  
  *(undefined8 *)(unaff_RBP + -0x60) = unaff_R13;
  *(undefined8 *)(unaff_RBP + -0x50) = unaff_R12;
  uVar2 = unaff_R15D + 0xe1fb9685U & 0x1e04697e;
  *(undefined4 *)(unaff_RBX + 8) = 0x3cb73cb1;
  *(long *)(unaff_RBP + -0x110) = unaff_RBX + 0x583fea33108f2bd4;
  *(long *)(unaff_RBP + -0x88) = unaff_RBX + 0x583fea33108f2bd4;
  iVar1 = *(int *)(in_R11 + (ulong)(uVar2 + (unaff_RBX == 0)) * 4);
  *(undefined **)(unaff_RBP + -0x108) = (&PTR__bootstrap_look_up_10082e9f0)[uVar2 ^ 0x1f] + -1;
                    /* WARNING: Could not recover jumptable at 0x000100023f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_23f16 + iVar1))(param_1,param_2,0,caseD_23f16 + iVar1);
  return;
}

