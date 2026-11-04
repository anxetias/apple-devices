// name: caseD_0
// address: 10000815a

void switchD_1000086da::caseD_0(void)

{
  uint uVar1;
  undefined8 *in_RAX;
  long lVar2;
  int unaff_EBX;
  long unaff_RBP;
  code *unaff_R12;
  long unaff_R13;
  
  *in_RAX = 0;
  in_RAX[1] = 0x5868a8b6a6dead9;
  *(undefined4 *)(in_RAX + 2) = 0;
  *(undefined8 **)(unaff_RBP + -0x50) = in_RAX;
  *(code **)(unaff_RBP + -0x88) = unaff_R12;
  lVar2 = (*unaff_R12)(0x1000);
  **(long **)(unaff_RBP + -0x50) = lVar2;
  uVar1 = (&switchD_100005882::switchdataD_1006cfa50)[unaff_EBX + 7 + (uint)(lVar2 == 0)];
  *(undefined8 *)(unaff_RBP + -0x60) = *(undefined8 *)(unaff_R13 + (ulong)(unaff_EBX + 0x1e) * 8);
                    /* WARNING: Could not recover jumptable at 0x0001000081bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + (int)uVar1))();
  return;
}

