// name: caseD_0
// address: 100019e6a

void switchD_100017043::caseD_0(undefined8 param_1)

{
  undefined8 *in_RAX;
  long lVar1;
  undefined8 unaff_RBX;
  long unaff_RBP;
  code *unaff_R12;
  long unaff_R13;
  
  *(undefined8 *)(unaff_RBP + -0xa0) = param_1;
  *(undefined8 *)(unaff_RBP + -0x1a0) = unaff_RBX;
  *in_RAX = 0;
  in_RAX[1] = 0x4a01cb8754795f16;
  *(undefined4 *)(in_RAX + 2) = 0;
  *(undefined8 **)(unaff_RBP + -0x48) = in_RAX;
  lVar1 = (*unaff_R12)(0x1000);
  **(long **)(unaff_RBP + -0x48) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x000100019ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R13 + (ulong)((lVar1 == 0) + 2) * 4)))();
  return;
}

