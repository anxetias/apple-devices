// name: caseD_0
// address: 10001caae

void switchD_1000183ca::caseD_0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 unaff_RBX;
  long unaff_RBP;
  long unaff_R12;
  undefined8 unaff_R13;
  uint unaff_R14D;
  uint uVar2;
  
  *(undefined8 *)(unaff_RBP + -0x1a0) = unaff_R13;
  *(undefined8 *)(unaff_RBP + -0x178) = unaff_RBX;
  *(undefined8 *)(unaff_RBP + -0x70) = param_3;
  *(long *)(unaff_RBP + -0x98) = param_5 + 0xa8b2fd12c86b103;
  uVar2 = unaff_R14D | 4;
  *(undefined4 *)(param_5 + 8) = 0x36104bda;
  iVar1 = *(int *)(unaff_R12 + (ulong)(uVar2 + (param_5 == 0)) * 4);
  *(long *)(unaff_RBP + -0x110) = *(long *)(param_1 + (ulong)(uVar2 ^ 9) * 8) + -1;
  *(undefined8 *)(unaff_RBP + -0x60) = 0x5a793496016ebe8;
  *(undefined8 *)(unaff_RBP + -0xd0) = 0x5a793496016ebe8;
  *(undefined8 *)(unaff_RBP + -0xd8) = 0x5a793496016ebe8;
  *(undefined8 *)(unaff_RBP + -200) = 0x5a793496016ebe8;
  *(undefined8 *)(unaff_RBP + -0xc0) = 0x5a793496016ebe8;
  *(undefined8 *)(unaff_RBP + -0xb0) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x00010001cb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + iVar1))(param_1,0x5a793496016ebe8,uVar2 ^ 6,0,param_5,0x3165f9b3);
  return;
}

