// name: caseD_17c70
// address: 100017c70

void switchD_10001c6fb::caseD_17c70(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_EBX;
  long unaff_RBP;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  (*param_3)();
  *(undefined8 *)(unaff_RBP + -0x88) = unaff_R14;
  *(undefined8 *)(unaff_RBP + -0xa0) = unaff_R15;
  *(undefined8 *)(unaff_RBP + -0x78) = *(undefined8 *)(unaff_RBP + -0x78);
  UNRECOVERED_JUMPTABLE =
       (code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                           [(int)((uint)(*(int *)(unaff_RBP + -0x50) <
                                        (int)((unaff_EBX + 0x26fcdb34U & 0x51b0c3b5) + 0x3166a8ff ^
                                             unaff_EBX + 0x78ad9f06U)) + unaff_EBX + 0x78ad9eff)] +
               0x100017c9c);
                    /* WARNING: Could not recover jumptable at 0x000100017cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_RBP + -0x68),param_2,UNRECOVERED_JUMPTABLE,
             (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((uint)(*(int *)(unaff_RBP + -0x50) <
                                     (int)((unaff_EBX + 0x26fcdb34U & 0x51b0c3b5) + 0x3166a8ff ^
                                          unaff_EBX + 0x78ad9f06U)) + unaff_EBX + 0x78ad9eff)],
             *(undefined8 *)(unaff_RBP + -0x48));
  return;
}

