// name: caseD_1c6a1
// address: 10001c6a1

void switchD_100017b13::caseD_1c6a1(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  int unaff_EBX;
  long unaff_RBP;
  long unaff_R12;
  
  pcVar2 = *(code **)(unaff_RBP + -0x58);
  (*pcVar2)();
  iVar1 = *(int *)(unaff_R12 +
                  (long)(int)(unaff_EBX + 0x78ad9f04 + (uint)(*(long *)(unaff_RBP + -0x68) == 0)) *
                  4);
  *(undefined8 *)(unaff_RBP + -0x88) = *(undefined8 *)(unaff_RBP + -0xa8);
  *(undefined8 *)(unaff_RBP + -0xa0) = *(undefined8 *)(unaff_RBP + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010001c6fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + 0x1000189b0))
            (*(long *)(unaff_RBP + -0x68),param_2,pcVar2,*(undefined8 *)(unaff_RBP + -0x78),
             *(undefined8 *)(unaff_RBP + -0x48),*(undefined4 *)(unaff_RBP + -0x50));
  return;
}

