// name: caseD_0
// address: 100009a53

void switchD_10000ae61::caseD_0(void)

{
  uint uVar1;
  int unaff_EBX;
  long lVar2;
  int unaff_R12D;
  code *unaff_R13;
  long unaff_R15;
  
  uVar1 = (*unaff_R13)();
  lVar2 = (long)*(int *)(unaff_R15 +
                        (long)(int)(unaff_EBX + -0x7e7e70ae +
                                   (uint)((int)((uVar1 ^ 0xefefdfdf) + unaff_R12D +
                                                (uVar1 & 0xefefdfdf) * 2 + 0x5afdb6f3) <
                                         (int)(unaff_EBX + 0x81818f58U ^ 0x5aed972d))) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100009aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_10000a3e2 + lVar2))(&DAT_10000a3e2 + lVar2,lVar2,unaff_EBX + 0x81818f58U ^ 6);
  return;
}

