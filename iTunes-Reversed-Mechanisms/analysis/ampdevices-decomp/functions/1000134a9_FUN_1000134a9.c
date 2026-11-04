// name: FUN_1000134a9
// address: 1000134a9

void FUN_1000134a9(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_RBP;
  uint unaff_R14D;
  
  *(undefined8 *)(unaff_RBP + -0x70) = param_3;
  *(undefined4 *)(unaff_RBP + -0x50) = param_1;
  lVar2 = *(long *)(unaff_RBP + -0x148);
  pcVar3 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(unaff_R14D ^ 0xf06e01d1)];
  (*pcVar3)(*(undefined8 *)(unaff_RBP + -200));
  (*pcVar3)(*(undefined8 *)(unaff_RBP + -0xe0));
  uVar1 = (&switchD_100013a5e::switchdataD_1006d0050)
          [(int)(unaff_R14D + 0xf91fe76 + (uint)(lVar2 == 0))];
  *(code **)(unaff_RBP + -0x1b0) = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x000100013510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(FUN_1000134a9 + (int)uVar1))();
  return;
}

