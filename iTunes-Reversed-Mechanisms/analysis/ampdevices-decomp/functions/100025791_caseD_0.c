// name: caseD_0
// address: 100025791

void switchD_10001f9d9::caseD_0
               (undefined8 param_1,undefined4 *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long unaff_RBP;
  
  *param_4 = 0;
  **(undefined4 **)(unaff_RBP + -0x128) = 0;
  **(undefined8 **)(unaff_RBP + -0x130) = 0;
  *param_2 = 0;
  lVar2 = *(long *)(PTR_DAT_10088e798_3_10082ea48 + -3);
  iVar1 = *(int *)(param_3 + (ulong)((lVar2 == 0) + 8) * 4);
  *(undefined8 **)(unaff_RBP + -0x160) = param_4;
                    /* WARNING: Could not recover jumptable at 0x000100025805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + iVar1))(lVar2,caseD_0 + iVar1);
  return;
}

