// name: FUN_100013d14
// address: 100013d14

void FUN_100013d14(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  long unaff_RBP;
  undefined8 in_R9;
  long unaff_R15;
  bool bVar4;
  
  uVar2 = (int)in_R9 + 0xb2f71452;
  uVar3 = (((unaff_EBX * 2 ^ 0xe0dc03baU) - 0x1b | 0x16) ^ 0x963244d3) + *(int *)(unaff_RBP + -0x94)
  ;
  bVar4 = uVar2 < uVar3;
  if (uVar2 < 0xc798ee01 != uVar3 < 0xc798ee01) {
    bVar4 = uVar3 < 0xc798ee01;
  }
  iVar1 = *(int *)(unaff_R15 + (long)(int)(unaff_EBX + 0xf91fe60 + (uint)bVar4) * 4);
  *(undefined8 *)(unaff_RBP + -0x48) = param_1;
  *(undefined8 *)(unaff_RBP + -0x88) = in_R9;
                    /* WARNING: Could not recover jumptable at 0x000100013d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_100013d08 + iVar1))();
  return;
}

