// name: FUN_10001aa0e
// address: 10001aa0e

void FUN_10001aa0e(void)

{
  uint uVar1;
  long unaff_RBP;
  undefined8 in_R10;
  uint unaff_R13D;
  
  (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(unaff_R13D - 0x8b82ea)] + -2))
            (*(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(unaff_R13D ^ 0x8b830e)] + -3)
             ,*(undefined8 *)(unaff_RBP + -0xf8),*(undefined4 *)(unaff_RBP + -0x6c));
  uVar1 = (&switchD_100019e65::switchdataD_1006d1710)
          [(int)((unaff_R13D - 0x8b82ed) +
                (uint)(*(uint *)(unaff_RBP + -0x58) ==
                      ((unaff_R13D - 0x8b830d | 0x31) + 0x3166a92a ^ unaff_R13D - 0x8b82e7)))];
  *(undefined8 *)(unaff_RBP + -0x48) = in_R10;
                    /* WARNING: Could not recover jumptable at 0x00010001aa9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)uVar1 + 0x10001aa15))();
  return;
}

