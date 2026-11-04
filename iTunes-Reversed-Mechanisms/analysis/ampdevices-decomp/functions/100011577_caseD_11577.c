// name: caseD_11577
// address: 100011577

void switchD_1000116f3::caseD_11577(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  long unaff_RBP;
  uint uVar3;
  long unaff_R12;
  long unaff_R13;
  
  param_3 = param_3 ^ 0xc09a63da;
  *(long *)(unaff_RBP + -0x120) = unaff_R12 + 0xc;
  uVar3 = param_3 + *(int *)(unaff_R12 + 0xc) + 0x38dfe6a6;
  uVar1 = *(int *)(unaff_R12 + 8) + 0x32bf8e14;
  bVar2 = uVar1 < uVar3;
  if (uVar1 < (param_3 + 0x509a625a & 0xaf659da3) + 0x906a7838 != uVar3 < 0x906a783b) {
    bVar2 = uVar3 < 0x906a783b;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000115f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_11577 + *(int *)(unaff_R13 + (long)(int)(bVar2 + param_3) * 4)))
            (caseD_11577 + *(int *)(unaff_R13 + (long)(int)(bVar2 + param_3) * 4));
  return;
}

