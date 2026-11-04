// name: caseD_0
// address: 10007e985

void switchD_1000812b3::caseD_0(void)

{
  int in_EAX;
  long lVar1;
  long in_R8;
  int unaff_R12D;
  
  lVar1 = (long)*(int *)(in_R8 + (long)(int)((uint)(in_EAX == 0x3a3402de) + unaff_R12D) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010007e9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + lVar1))(caseD_0 + lVar1,lVar1,in_EAX == 0x3a3402de,0);
  return;
}

