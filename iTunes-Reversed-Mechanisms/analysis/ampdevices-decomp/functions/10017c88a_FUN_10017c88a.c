// name: FUN_10017c88a
// address: 10017c88a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10017c88a(undefined8 *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar11 [16];
  double dVar10;
  double dVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar17;
  
  uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  if (param_3 * param_2 == 0) {
    return 0;
  }
  auVar11._8_4_ = (int)(param_2 >> 0x20);
  auVar11._0_8_ = param_2;
  auVar11._12_4_ = DAT_10070d3c0._4_4_;
  dVar9 = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)param_2) - _DAT_10070d3d0;
  dVar15 = auVar11._8_8_ - _UNK_10070d3d8;
  dVar10 = dVar9 + dVar15;
  auVar12._8_8_ = dVar9 + dVar15;
  auVar13._8_4_ = (int)(param_3 >> 0x20);
  auVar13._0_8_ = param_3;
  auVar13._12_4_ = DAT_10070d3c0._4_4_;
  dVar15 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)param_3) - _DAT_10070d3d0) +
           (auVar13._8_8_ - _UNK_10070d3d8);
  dVar9 = (double)param_1[8];
  uVar2 = param_3;
  uVar3 = param_2;
  if (DAT_10070e568 <= (double)((ulong)(dVar10 / dVar15 - dVar9) & _DAT_100700b40)) {
    if (DAT_100700458 <= dVar9) {
      auVar12._0_8_ = dVar10 / dVar9;
      auVar13 = roundsd(auVar12,auVar12,9);
      uVar2 = (ulong)auVar13._0_8_;
      uVar2 = (long)(auVar13._0_8_ - DAT_10070e4c0) & (long)uVar2 >> 0x3f | uVar2;
      if (uVar2 <= param_3) goto LAB_10017c97a;
    }
    auVar8._0_8_ = dVar9 * dVar15;
    auVar8._8_8_ = 0;
    auVar13 = roundsd(ZEXT816(0),auVar8,9);
    uVar3 = (ulong)auVar13._0_8_;
    uVar3 = (long)(auVar13._0_8_ - DAT_10070e4c0) & (long)uVar3 >> 0x3f | uVar3;
    uVar2 = param_3;
  }
LAB_10017c97a:
  iVar7 = (int)param_3 - (int)uVar2 >> 1;
  iVar6 = 0;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  iVar1 = FUN_10017cb2a(param_1 + 1,param_2,param_3,0x20);
  if (iVar1 == 0) {
    uVar4 = _CGColorSpaceCreateDeviceRGB();
    lVar5 = _CGBitmapContextCreate(param_1[1],param_2,param_3,8,param_1[4],uVar4,CONCAT44(uVar17,1))
    ;
    _CGColorSpaceRelease(uVar4);
    if (lVar5 != 0) {
      _CGContextSetInterpolationQuality(lVar5,3);
      dVar9 = (double)iVar6;
      auVar14._8_4_ = (int)(uVar3 >> 0x20);
      auVar14._0_8_ = uVar3;
      auVar14._12_4_ = DAT_10070d3c0._4_4_;
      auVar16._8_4_ = (int)(uVar2 >> 0x20);
      auVar16._0_8_ = uVar2;
      auVar16._12_4_ = DAT_10070d3c0._4_4_;
      dVar15 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar3) - _DAT_10070d3d0) +
               (auVar14._8_8_ - _UNK_10070d3d8);
      dVar10 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar2) - _DAT_10070d3d0) +
               (auVar16._8_8_ - _UNK_10070d3d8);
      _CGContextDrawImage(lVar5,*param_1);
      if ((int)param_2 - (int)uVar3 >> 1 < 1) {
        if (0 < iVar7) {
          FUN_100157550(param_1[1],param_2,param_3,param_1[4],uVar2,10,0x48,dVar9,dVar15,dVar10);
        }
      }
      else {
        FUN_100157988(param_1[1],param_2,param_3,param_1[4],uVar3,10,0x48);
      }
      uVar4 = _CGBitmapContextCreateImage(lVar5);
      _CGContextRelease(lVar5);
      return uVar4;
    }
  }
  return 0;
}

