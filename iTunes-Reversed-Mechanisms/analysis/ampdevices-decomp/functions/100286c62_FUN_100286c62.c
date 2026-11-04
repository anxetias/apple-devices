// name: FUN_100286c62
// address: 100286c62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100286c62(double param_1,double param_2,long param_3,uint param_4,long param_5,uint param_6
                  ,undefined1 (*param_7) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  dVar6 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  dVar9 = 0.0;
  if (-1 < (int)param_4) {
    lVar3 = (ulong)param_4 << 4;
    do {
      auVar11._0_8_ = (ulong)dVar9 ^ _DAT_100700b30;
      auVar11._8_8_ = (ulong)dVar9 ^ _UNK_100700b38;
      auVar12._8_8_ = dVar9;
      auVar12._0_8_ = dVar8;
      auVar12 = blendpd(auVar11,auVar12,2);
      dVar9 = dVar8 * param_2;
      dVar8 = *(double *)(param_3 + lVar3) + dVar8 * param_1 + auVar12._0_8_ * param_2;
      dVar9 = ((double *)(param_3 + lVar3))[1] + dVar9 + auVar12._8_8_ * param_1;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != -0x10);
  }
  if (-1 < (int)param_6) {
    lVar3 = (ulong)param_6 << 4;
    dVar6 = 0.0;
    dVar7 = 0.0;
    do {
      auVar10._0_8_ = (ulong)dVar7 ^ _DAT_100700b30;
      auVar10._8_8_ = (ulong)dVar7 ^ _UNK_100700b38;
      auVar2._8_8_ = dVar7;
      auVar2._0_8_ = dVar6;
      auVar12 = blendpd(auVar10,auVar2,2);
      dVar7 = dVar6 * param_2;
      dVar6 = *(double *)(param_5 + lVar3) + dVar6 * param_1 + auVar12._0_8_ * param_2;
      dVar7 = ((double *)(param_5 + lVar3))[1] + dVar7 + auVar12._8_8_ * param_1;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != -0x10);
  }
  dVar5 = dVar6 * dVar6 + dVar7 * dVar7;
  auVar4._0_8_ = dVar6 * dVar8 + dVar7 * dVar9;
  auVar4._8_8_ = dVar6 * dVar9 + dVar7 * (double)(_DAT_100700b30 ^ (ulong)dVar8);
  auVar1._8_8_ = dVar5;
  auVar1._0_8_ = dVar5;
  auVar12 = divpd(auVar4,auVar1);
  *param_7 = auVar12;
  return;
}

