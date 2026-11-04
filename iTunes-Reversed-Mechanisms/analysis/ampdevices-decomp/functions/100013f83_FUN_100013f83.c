// name: FUN_100013f83
// address: 100013f83

void FUN_100013f83(void)

{
  int iVar1;
  long unaff_RBP;
  undefined8 in_R8;
  long in_R9;
  uint unaff_R12D;
  
  (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(unaff_R12D + 0x4010e2bc)] + -2))
            (*(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[unaff_R12D & 0x4010a293] + -3),
             *(undefined8 *)(unaff_RBP + -0x108),*(undefined4 *)(unaff_RBP + -0x84));
  iVar1 = *(int *)(in_R9 + (long)(int)(unaff_R12D + 0x4010e2b4 +
                                      (uint)(*(uint *)(unaff_RBP + -0x68) ==
                                            (unaff_R12D + 0x2f2d7150 & 0x10e3716d ^ 0x3166a958))) *
                           4);
  *(undefined8 *)(unaff_RBP + -0x50) = in_R8;
                    /* WARNING: Could not recover jumptable at 0x00010001400f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(FUN_100013f83 + iVar1))();
  return;
}

