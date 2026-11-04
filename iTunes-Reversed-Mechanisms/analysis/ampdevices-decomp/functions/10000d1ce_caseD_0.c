// name: caseD_0
// address: 10000d1ce

void switchD_100010bcf::caseD_0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_RBX;
  long unaff_RBP;
  long unaff_R13;
  
  *(undefined8 *)(unaff_RBP + -0x48) = param_2;
  *unaff_RBX = 0;
  unaff_RBX[1] = 0xa9403683677ab7f;
  *(undefined4 *)(unaff_RBX + 2) = 0;
  lVar1 = (**(code **)(unaff_RBP + -0x80))(0x1000);
  *unaff_RBX = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010000d217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R13 + (ulong)(lVar1 == 0) * 4)))();
  return;
}

