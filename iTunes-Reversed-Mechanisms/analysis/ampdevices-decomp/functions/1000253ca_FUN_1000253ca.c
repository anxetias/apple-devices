// name: FUN_1000253ca
// address: 1000253ca

void FUN_1000253ca(void)

{
  uint uVar1;
  long unaff_RBP;
  uint unaff_R13D;
  uint unaff_R14D;
  undefined8 unaff_R15;
  
  (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(unaff_R13D + 0x58e83477)] + -2))
            (*(undefined4 *)
              ((&PTR__bootstrap_look_up_10082e9f0)[(int)(unaff_R13D ^ 0xa717cbaf)] + -3),
             *(undefined8 *)(unaff_RBP + -0x1f0),*(undefined4 *)(unaff_RBP + -0x114));
  uVar1 = (unaff_R13D + 0x58e83454 | 0x61) + 0xbd1cca9e & 0x42e33567;
  if (unaff_R14D != (uVar1 ^ 0x3166a91a)) {
    unaff_R15 = 0x2cc289762f9fc832;
  }
  *(undefined8 *)(unaff_RBP + -0x198) = unaff_R15;
  *(uint *)(unaff_RBP + -0xe8) = unaff_R14D;
                    /* WARNING: Could not recover jumptable at 0x000100025479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1000213b7 +
            *(int *)(&DAT_1006d2600 +
                    (long)(int)((unaff_R14D == (uVar1 - 0x62 ^ 0x3166a923) + (uVar1 - 0x62 | 0x52))
                               + uVar1) * 4)))();
  return;
}

