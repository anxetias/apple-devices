// name: caseD_0
// address: 1000ad364

void switchD_1000bcb2b::caseD_0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int unaff_R13D;
  int unaff_R15D;
  
  uVar1 = (uint)(unaff_R13D == 2);
                    /* WARNING: Could not recover jumptable at 0x0001000ad3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(param_1 + (long)(int)(uVar1 + unaff_R15D) * 4)))
            (param_1,(uint)(unaff_R13D != 2) * -0x6dfc3650 + uVar1 * -2 + unaff_R15D,param_3,
             caseD_0 + *(int *)(param_1 + (long)(int)(uVar1 + unaff_R15D) * 4));
  return;
}

