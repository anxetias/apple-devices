// name: caseD_0
// address: 100007fe0

void switchD_1000080e8::caseD_0(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_RBX;
  code *unaff_R14;
  
  (*unaff_R14)();
  *(undefined8 *)(unaff_RBX + 8) = 0;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(param_2 + (ulong)((*(long *)(unaff_RBX + 0x18) == 0) + 6) * 4) +
               0x100005f1e);
                    /* WARNING: Could not recover jumptable at 0x000100008027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long *)(unaff_RBX + 0x18),param_2,UNRECOVERED_JUMPTABLE);
  return;
}

