// name: caseD_0
// address: 1000057b2

void switchD_10000aaa3::caseD_0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int unaff_EBX;
  uint uVar3;
  long unaff_RBP;
  long unaff_R13;
  
  uVar3 = unaff_EBX + 0xfe7ef1d6U & 0x7fff7f3e;
  pcVar1 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar3 + 0x81818eeb)];
  *(undefined8 *)(unaff_RBP + -0x1b0) = param_1;
  lVar2 = (*pcVar1)(0x18);
                    /* WARNING: Could not recover jumptable at 0x000100005806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R13 + (long)(int)(uVar3 + 0x81818ee4 + (uint)(lVar2 == 0)) * 4)))();
  return;
}

