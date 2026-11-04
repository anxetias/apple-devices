// name: FUN_100003918
// address: 100003918

void FUN_100003918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint unaff_EBX;
  long unaff_RBP;
  uint in_R10D;
  long in_R11;
  
  *(undefined8 *)(unaff_RBP + -0x90) = param_4;
  if (in_R10D == (unaff_EBX ^ 0x3166a91e)) {
    param_3 = param_4;
  }
  *(undefined8 *)(unaff_RBP + -0x58) = param_3;
  iVar1 = *(int *)(in_R11 + (long)(int)((uint)(in_R10D ==
                                              ((unaff_EBX ^ 0x45) + 7 ^ unaff_EBX ^ 0x49 ^
                                              0x3166a97a)) + (unaff_EBX ^ 0x45)) * 4);
  *(undefined4 *)(unaff_RBP + -0x68) = *(undefined4 *)(unaff_RBP + -0x78);
                    /* WARNING: Could not recover jumptable at 0x00010000396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_100003c73 + iVar1))();
  return;
}

