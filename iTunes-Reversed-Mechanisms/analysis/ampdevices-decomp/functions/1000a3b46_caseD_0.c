// name: caseD_0
// address: 1000a3b46

void switchD_1000a8809::caseD_0
               (long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  long unaff_RBP;
  bool bVar2;
  
  iVar1 = (int)CONCAT71((int7)((ulong)param_4 >> 8),param_3) * 0x58d94b65 + -0x58d94b63;
  bVar2 = *(int *)(unaff_RBP + -0xdc) == 0;
                    /* WARNING: Could not recover jumptable at 0x0001000a3b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(param_1 + (long)(int)(iVar1 + (uint)bVar2) * 4)))
            (caseD_0 + *(int *)(param_1 + (long)(int)(iVar1 + (uint)bVar2) * 4),bVar2,0,iVar1,!bVar2
            );
  return;
}

