// name: caseD_1f059
// address: 10001f059

void switchD_100024103::caseD_1f059(void)

{
  long lVar1;
  long *unaff_RBX;
  code *unaff_R13;
  int unaff_R15D;
  
  *unaff_RBX = 0;
  unaff_RBX[1] = 0x5dfa0d7c3cb72cb1;
  *(undefined4 *)(unaff_RBX + 2) = 0;
  lVar1 = (*unaff_R13)(0x1000);
  *unaff_RBX = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010001f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_1f059 +
    (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(unaff_R15D * 2 + (uint)(lVar1 == 0))]))()
  ;
  return;
}

