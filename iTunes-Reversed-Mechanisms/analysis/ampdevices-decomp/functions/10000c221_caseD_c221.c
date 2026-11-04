// name: caseD_c221
// address: 10000c221

void switchD_1000139a1::caseD_c221(void)

{
  long lVar1;
  int in_EAX;
  undefined8 in_RCX;
  uint uVar2;
  long unaff_RBP;
  undefined8 unaff_R12;
  long *unaff_R13;
  int unaff_R14D;
  long unaff_R15;
  
  *(undefined4 *)(unaff_RBP + -0x94) = 0x3166a97d;
  *(undefined8 *)(unaff_RBP + -0x60) = unaff_R12;
  *(undefined8 *)(unaff_RBP + -0xc0) = in_RCX;
  *(undefined8 *)(unaff_RBP + -0xd0) = in_RCX;
  *(undefined8 *)(unaff_RBP + -0xb8) = in_RCX;
  *(undefined8 *)(unaff_RBP + -0xf0) = in_RCX;
  *(undefined8 *)(unaff_RBP + -0x88) = in_RCX;
  uVar2 = unaff_R14D << 2 ^ 0xdb;
  lVar1 = *unaff_R13;
  *(undefined1 *)(lVar1 + (ulong)(uVar2 + in_EAX + 0xafd9e6af)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0xafd9e783)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0xafd9e784)) = 0;
  *(undefined1 *)(lVar1 + (ulong)(in_EAX + 0xafd9e785)) = 1;
  **(int **)(unaff_RBP + -0x1a0) = **(int **)(unaff_RBP + -0x1a0) + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000d687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(unaff_R15 + (long)(int)(uVar2 + 1) * 4) + 0x10000d664))();
  return;
}

