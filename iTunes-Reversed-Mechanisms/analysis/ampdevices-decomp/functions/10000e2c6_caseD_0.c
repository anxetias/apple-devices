// name: caseD_0
// address: 10000e2c6

void switchD_10000baba::caseD_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  code *unaff_RBX;
  long unaff_RBP;
  long *unaff_R12;
  long unaff_R13;
  long unaff_R15;
  
  *(undefined8 *)(unaff_RBP + -0xa8) = param_2;
  *unaff_R12 = 0;
  unaff_R12[1] = 0x578a91945daaea27;
  *(undefined4 *)(unaff_R12 + 2) = 0;
  *(code **)(unaff_RBP + -0xa0) = unaff_RBX;
  lVar2 = (*unaff_RBX)(0x1000);
  *unaff_R12 = lVar2;
  iVar1 = *(int *)(unaff_R13 + (ulong)((lVar2 == 0) + 7) * 4);
  *(undefined8 *)(unaff_RBP + -0x48) = *(undefined8 *)(unaff_R15 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010000e32d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + iVar1))();
  return;
}

