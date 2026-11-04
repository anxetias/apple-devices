// name: FUN_100286390
// address: 100286390

/* WARNING: Removing unreachable block (ram,0x0001002865a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100286390(long param_1,int param_2,int param_3,int param_4,int param_5,float *param_6,
                  long param_7)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  
  *(int *)(param_1 + 0x510) = param_2 / 2;
  auVar12._0_8_ = (double)param_4;
  auVar12._8_8_ = (double)param_5;
  auVar20._0_8_ = (double)param_3;
  *(undefined8 *)(param_1 + 0x568) = 0xffffffffffffffff;
  auVar20._8_8_ = auVar20._0_8_;
  auVar13 = divpd(auVar12,auVar20);
  *(undefined1 (*) [16])(param_1 + 0x518) = auVar13;
  FUN_1002866ad();
  dVar15 = *(double *)(param_1 + 0x520) * _UNK_10073fa68;
  uVar7 = _tan();
  uVar8 = _tan(dVar15);
  auVar25._8_8_ = uVar8;
  auVar25._0_8_ = uVar7;
  auVar13._8_8_ = _UNK_10073fa68;
  auVar13._0_8_ = _DAT_10073fa60;
  auVar13 = divpd(auVar25,auVar13);
  *(undefined1 (*) [16])(param_1 + 0x558) = auVar13;
  dVar15 = DAT_10073fa20;
  iVar5 = *(int *)(param_1 + 0x280);
  if (0 < (long)iVar5) {
    dVar16 = auVar13._0_8_ * DAT_100700b08;
    dVar24 = auVar13._8_8_ * DAT_100700b08;
    dVar9 = SQRT(dVar24 * dVar16);
    dVar17 = DAT_10073fa20 * dVar9;
    lVar6 = (long)iVar5 * 0x10;
    lVar4 = 0;
    do {
      dVar10 = *(double *)(param_1 + lVar4) * (dVar24 - dVar16) * DAT_100700b00;
      auVar21._8_8_ = dVar10 * dVar10 + _UNK_1007075e8;
      auVar26._8_8_ = dVar10 * 0.0 + dVar17;
      auVar26._0_8_ = dVar9 * dVar10 + _DAT_1007075e0;
      auVar21._0_8_ = auVar21._8_8_;
      auVar13 = divpd(auVar26,auVar21);
      dVar27 = auVar13._8_8_;
      dVar23 = auVar13._0_8_;
      dVar18 = DAT_100700458 - (dVar23 * dVar23 - dVar27 * dVar27);
      dVar11 = (double)_hypot();
      dVar19 = (dVar11 - dVar18) * _DAT_10070e610;
      dVar11 = (dVar18 + dVar11) * _UNK_10070e618;
      dVar18 = 0.0;
      if (0.0 <= dVar19) {
        dVar18 = SQRT(dVar19);
      }
      auVar22._0_8_ = SQRT(dVar11);
      auVar22._8_8_ = dVar18;
      auVar14._0_8_ = -(ulong)(dVar11 < 0.0) << 0x3f;
      auVar14._8_8_ = (ulong)(0.0 - (dVar27 * dVar23 + dVar27 * dVar23) < 0.0) << 0x3f;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)dVar18 ^ _DAT_100700b30;
      auVar13 = blendvpd(auVar22,auVar2 << 0x40,auVar14);
      dVar11 = DAT_100700458 - auVar13._0_8_;
      dVar18 = 0.0 - auVar13._8_8_;
      dVar19 = auVar13._0_8_ + DAT_100700458;
      dVar23 = auVar13._8_8_ + 0.0;
      *(double *)(param_1 + lVar4) = dVar23 * dVar15 + dVar10 * dVar19;
      ((double *)(param_1 + lVar4))[1] = dVar19 * 0.0 + dVar10 * dVar23;
      pdVar1 = (double *)(param_1 + lVar6 + lVar4);
      *pdVar1 = dVar18 * dVar15 + dVar10 * dVar11;
      pdVar1[1] = dVar11 * 0.0 + dVar10 * dVar18;
      lVar4 = lVar4 + 0x10;
    } while (lVar6 != lVar4);
    puVar3 = (undefined8 *)(param_1 + 0x140);
    lVar4 = 0;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar4 = lVar4 + 1;
      iVar5 = *(int *)(param_1 + 0x280);
      puVar3 = puVar3 + 2;
    } while (lVar4 < iVar5);
  }
  *(int *)(param_1 + 0x284) = iVar5;
  *(int *)(param_1 + 0x280) = iVar5 * 2;
  FUN_100286791(param_1);
  FUN_1002869ce(param_1);
  dVar15 = (double)_hypot(*(undefined8 *)(param_1 + 0x540),*(undefined8 *)(param_1 + 0x538));
  *param_6 = (float)dVar15;
  iVar5 = *(int *)(param_1 + 0x508);
  if (0 < (long)iVar5) {
    lVar4 = 0;
    do {
      *(float *)(param_7 + lVar4 * 4) = (float)*(double *)(param_1 + 0x618 + lVar4 * 8);
      lVar4 = lVar4 + 1;
    } while (iVar5 != lVar4);
  }
  return;
}

