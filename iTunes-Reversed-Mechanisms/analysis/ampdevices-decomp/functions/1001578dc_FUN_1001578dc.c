// name: FUN_1001578dc
// address: 1001578dc

undefined8 FUN_1001578dc(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  uVar12 = param_2 - (param_4 >> 1);
  uVar9 = param_3 - (param_4 >> 1);
  iVar3 = *param_1;
  iVar7 = iVar3 + -1;
  if ((int)(uVar12 + param_4) < iVar3 + -1) {
    iVar7 = uVar12 + param_4;
  }
  iVar6 = param_1[2] + -1;
  if ((int)(param_4 + uVar9) < param_1[2] + -1) {
    iVar6 = param_4 + uVar9;
  }
  if ((int)uVar9 < 1) {
    uVar9 = 0;
  }
  if ((int)uVar12 < 1) {
    uVar12 = 0;
  }
  lVar13 = (ulong)uVar12 * 0x10 + *(long *)(param_1 + 6);
  lVar10 = (long)(int)(uVar9 * iVar3) * 0x10;
  lVar8 = (long)iVar7 * 0x10 + *(long *)(param_1 + 6);
  piVar1 = (int *)(lVar10 + lVar8);
  lVar11 = (long)(iVar6 * iVar3) * 0x10;
  auVar14 = ZEXT416((uint)(DAT_100700b50 / (float)(int)((iVar7 - uVar12) * (iVar6 - uVar9))));
  piVar2 = (int *)(lVar11 + lVar13);
  auVar4._0_4_ = *piVar1 + *piVar2;
  auVar4._4_4_ = piVar1[1] + piVar2[1];
  auVar4._8_4_ = piVar1[2] + piVar2[2];
  auVar4._12_4_ = piVar1[3] + piVar2[3];
  auVar4 = vpsubd_avx(*(undefined1 (*) [16])(lVar10 + lVar13),auVar4);
  piVar1 = (int *)(lVar11 + lVar8);
  auVar5._0_4_ = auVar4._0_4_ + *piVar1;
  auVar5._4_4_ = auVar4._4_4_ + piVar1[1];
  auVar5._8_4_ = auVar4._8_4_ + piVar1[2];
  auVar5._12_4_ = auVar4._12_4_ + piVar1[3];
  auVar4 = vcvtdq2ps_avx(auVar5);
  auVar5 = vshufps_avx(auVar14,auVar14,0);
  return CONCAT44((int)(auVar5._4_4_ * auVar4._4_4_),(int)(auVar5._0_4_ * auVar4._0_4_));
}

