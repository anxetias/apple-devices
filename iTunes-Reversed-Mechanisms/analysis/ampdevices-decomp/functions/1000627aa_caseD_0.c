// name: caseD_0
// address: 1000627aa

void switchD_10008bf48::caseD_0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long unaff_RBP;
  long unaff_R13;
  bool bVar1;
  
  bVar1 = *(int *)(unaff_RBP + -0x1fc) == 2;
                    /* WARNING: Could not recover jumptable at 0x0001000627e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R13 + (long)(int)(param_3 + (uint)bVar1) * 4)))
            (caseD_0 + *(int *)(unaff_R13 + (long)(int)(param_3 + (uint)bVar1) * 4),param_2,
             (uint)!bVar1 * 0x1b6d5321 + (uint)bVar1 * 2 + param_3);
  return;
}

