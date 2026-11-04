// name: FUN_100108b56
// address: 100108b56

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100108b56(long *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulong local_50;
  
  plVar15 = (long *)param_1[1];
  if (plVar15 != param_1) {
    do {
      if ((*param_2 == (double)plVar15[2]) && (!NAN(*param_2) && !NAN((double)plVar15[2]))) {
        if ((param_2[1] == (double)plVar15[3]) && (!NAN(param_2[1]) && !NAN((double)plVar15[3]))) {
          if ((param_2[2] == (double)plVar15[4]) && (!NAN(param_2[2]) && !NAN((double)plVar15[4])))
          {
            if ((param_2[3] == (double)plVar15[5]) &&
               (((!NAN(param_2[3]) && !NAN((double)plVar15[5]) &&
                 (*(int *)(param_2 + 4) == (int)plVar15[6])) &&
                (*(int *)((long)param_2 + 0x24) == *(int *)((long)plVar15 + 0x34))))) break;
          }
        }
      }
      plVar15 = (long *)plVar15[1];
    } while (plVar15 != param_1);
  }
  if (plVar15 == param_1) {
    dVar1 = *param_2;
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      uVar3 = *(uint *)(param_1 + 6);
      uVar14 = (ulong)uVar3;
      uVar4 = *(uint *)(param_2 + 4);
      uVar16 = uVar4 * uVar3;
      uVar10 = ((uVar16 & 1) + uVar16) - 1;
      *(uint *)(param_1 + 8) = uVar10;
      uVar11 = uVar4 + 3 & 0xfffffffc;
      *(uint *)(param_1 + 9) = uVar11;
      fVar20 = (float)uVar14;
      fVar25 = DAT_100700b20 * fVar20;
      pvVar13 = operator_new__((ulong)(uVar11 * uVar3) << 2);
      iVar5 = *(int *)((long)param_2 + 0x24);
      fVar26 = fVar25;
      if (iVar5 == 1) {
        fVar26 = (float)(_DAT_100700430 ^ (uint)fVar25);
      }
      if (uVar14 != 0) {
        uVar16 = ((uVar16 & 1) + uVar16) - 2 >> 1;
        iVar17 = (int)(long)((((float)uVar10 + DAT_100700b24) * DAT_100700b28) /
                             (float)*(uint *)((long)param_1 + 0x34) + DAT_100700b28) *
                 *(uint *)((long)param_1 + 0x34);
        dVar1 = dVar1 / (double)(fVar20 + fVar20);
        dVar2 = param_2[3];
        dVar27 = DAT_100700af8 + (double)(int)uVar10;
        dVar28 = dVar27 * DAT_100700b00;
        dVar30 = DAT_100700b08 * dVar1;
        uVar7 = (ulong)DAT_100700b30;
        dVar33 = dVar2 * DAT_100700b00;
        local_50 = 0;
        do {
          if ((ulong)uVar4 != 0) {
            iVar18 = (uVar16 - iVar17) + (int)local_50;
            uVar19 = 0;
            do {
              dVar8 = 0.0;
              if ((-1 < iVar18) && (dVar8 = 0.0, iVar18 < (int)uVar10)) {
                dVar21 = (double)iVar18;
                dVar31 = dVar21 - dVar28;
                if ((dVar31 != 0.0) || (dVar8 = dVar1 + dVar1, NAN(dVar31))) {
                  dVar22 = (double)_sin(dVar30 * dVar31);
                  iVar12 = 1;
                  dVar9 = DAT_100700458;
                  dVar8 = DAT_100700458;
                  do {
                    dVar29 = dVar33 / (double)iVar12;
                    iVar12 = iVar12 + 1;
                    dVar9 = dVar9 * dVar29 * dVar29;
                    dVar8 = dVar8 + dVar9;
                  } while (dVar8 * DAT_100700b10 <= dVar9);
                  dVar21 = (double)((ulong)(dVar21 + dVar21 +
                                            (double)((ulong)(double)(int)uVar10 ^ uVar7) +
                                           DAT_100700458) & _DAT_100700b40) / dVar27;
                  iVar12 = 1;
                  dVar29 = DAT_100700458;
                  dVar9 = DAT_100700458;
                  do {
                    dVar32 = (SQRT(DAT_100700458 - dVar21 * dVar21) * dVar2 * DAT_100700b00) /
                             (double)iVar12;
                    iVar12 = iVar12 + 1;
                    dVar29 = dVar29 * dVar32 * dVar32;
                    dVar9 = dVar9 + dVar29;
                  } while (dVar9 * DAT_100700b10 <= dVar29);
                  auVar23._0_8_ = dVar22 / DAT_100700b18;
                  auVar23._8_8_ = dVar9;
                  auVar24._8_4_ = SUB84(dVar8,0);
                  auVar24._0_8_ = dVar31;
                  auVar24._12_4_ = (int)((ulong)dVar8 >> 0x20);
                  auVar24 = divpd(auVar23,auVar24);
                  dVar8 = auVar24._8_8_ * auVar24._0_8_;
                }
              }
              *(float *)((long)pvVar13 +
                        (ulong)(~(uint)uVar19 + uVar4) * 4 + (ulong)(uVar11 * (int)local_50) * 4) =
                   (float)dVar8 * fVar26;
              iVar18 = iVar18 + uVar3;
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar4);
          }
          local_50 = local_50 + 1;
        } while (local_50 != uVar14);
        *(uint *)(param_1 + 10) = (iVar17 + uVar3) % uVar3;
        if (iVar5 == 1) {
          uVar11 = (uVar16 % uVar3) * uVar11;
          uVar14 = (ulong)(~(uVar16 / uVar3) + uVar4);
          *(float *)((long)pvVar13 + uVar14 * 4 + (ulong)uVar11 * 4) =
               fVar25 + *(float *)((long)pvVar13 + uVar14 * 4 + (ulong)uVar11 * 4);
        }
      }
    }
    else {
      pvVar13 = (void *)0x0;
    }
    plVar15 = operator_new(0x40);
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    dVar27 = param_2[3];
    plVar15[2] = (long)*param_2;
    plVar15[3] = (long)dVar1;
    plVar15[4] = (long)dVar2;
    plVar15[5] = (long)dVar27;
    plVar15[6] = (long)param_2[4];
    plVar15[7] = (long)pvVar13;
    lVar6 = *param_1;
    *(long **)(lVar6 + 8) = plVar15;
    *plVar15 = lVar6;
    *param_1 = (long)plVar15;
    plVar15[1] = (long)param_1;
    param_1[2] = param_1[2] + 1;
  }
  return;
}

