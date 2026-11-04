// name: caseD_0
// address: 100023d56

void switchD_10001cc54::caseD_0(void)

{
  int iVar1;
  undefined *puVar2;
  long unaff_RBP;
  long in_R8;
  long unaff_R12;
  undefined4 *unaff_R13;
  
  **(undefined8 **)(unaff_RBP + -0x168) = 0;
  **(undefined4 **)(unaff_RBP + -0x1d8) = 0;
  **(undefined8 **)(unaff_RBP + -400) = 0;
  *unaff_R13 = 0;
  *(undefined4 *)(unaff_RBP + -0x1b4) = 0;
  *(undefined4 *)(unaff_RBP + -0x1b8) = 0;
  *(undefined4 *)(unaff_RBP + -0x1c4) = 0;
  *(undefined8 *)(unaff_RBP + -0x288) = 0;
  iVar1 = *(int *)(in_R8 + (ulong)((unaff_R12 == 0) + 7) * 4);
  *(undefined **)(unaff_RBP + -0xf8) = PTR__free_10082eaf0;
  *(undefined **)(unaff_RBP + -0x108) = PTR__malloc_10082ea28;
  *(undefined **)(unaff_RBP + -0x278) = PTR_DAT_10082ead8 + -3;
  *(undefined **)(unaff_RBP + -0x160) = PTR_DAT_10082ea68 + -2;
  *(undefined **)(unaff_RBP + -0x218) = PTR_DAT_1008c34d8_1_10082eab8 + -1;
  *(undefined **)(unaff_RBP + -0x220) = PTR_DAT_10082ea30 + -3;
  *(undefined **)(unaff_RBP + -0x228) = PTR_DAT_1008c34d0_3_10082ea80 + -3;
  *(undefined **)(unaff_RBP + -0x100) = PTR_DAT_10088e798_3_10082ea48 + -0xb;
  puVar2 = PTR_DAT_10082ea88;
  *(undefined **)(unaff_RBP + -0x238) = PTR_DAT_10082ea88;
  *(undefined **)(unaff_RBP + -0x240) = PTR_s_om_apple_adid_1006d0b54_1_10082ea58 + -1;
  *(undefined **)(unaff_RBP + -0x120) = puVar2;
  *(undefined **)(unaff_RBP + -0x130) = puVar2;
  *(long *)(unaff_RBP + -0x148) = unaff_R12;
  *(undefined4 **)(unaff_RBP + -0x268) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x000100023ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + iVar1))(&PTR__bootstrap_look_up_10082e9f0,puVar2,caseD_0 + iVar1,0x3165f9b4);
  return;
}

