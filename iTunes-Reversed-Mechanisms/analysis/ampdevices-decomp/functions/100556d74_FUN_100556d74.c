// name: FUN_100556d74
// address: 100556d74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100556d74(long param_1,uint param_2,int param_3,ulong param_4,long param_5,char param_6,
             ulong *param_7)

{
  ulong uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong local_58;
  float local_3c;
  
  uVar16 = param_5 - (param_4 & 0xffffffff);
  uVar8 = 0xffffffd8;
  if (param_2 != 0) {
    uVar11 = (ulong)param_2;
    local_58 = 0;
    uVar14 = 0;
    uVar13 = 0;
    fVar20 = 0.0;
    fVar19 = 0.0;
    fVar21 = 0.0;
    local_3c = 0.0;
    bVar7 = false;
    fVar17 = DAT_100700b28;
    fVar18 = DAT_1007563fc;
    do {
      uVar9 = 0;
      lVar12 = 0;
      bVar6 = false;
      uVar15 = uVar16;
      uVar5 = param_2 * 2;
      do {
        lVar10 = (uVar15 / 0x24c) * -0x24c;
        if (param_3 == 2) {
          fVar2 = *(float *)(param_1 + (ulong)(uVar5 - 1) * 4);
          fVar23 = *(float *)(param_1 + (ulong)(uVar5 - 2) * 4);
          if ((uVar11 + lVar12 < uVar11) &&
             ((uVar1 = uVar16 + lVar12, param_6 == '\0' || (lVar10 + uVar1 == 0)))) {
            if (uVar14 == 0) {
              uVar14 = uVar1;
            }
            fVar24 = (float)((uint)((fVar19 - fVar2) / fVar19) & _DAT_100704180);
            fVar22 = (float)((uint)((fVar20 - fVar23) / fVar20) & _DAT_100704180);
            bVar3 = (float)((uint)fVar20 & _DAT_100704180) <= fVar18;
            bVar4 = fVar22 <= fVar17;
            if ((fVar17 < fVar24 && fVar18 < (float)((uint)fVar19 & _DAT_100704180)) ||
               (!bVar4 && !bVar3)) {
              if (bVar6) {
                if (!bVar7) {
                  local_3c = fVar22;
                  if (bVar4 || bVar3) {
                    local_3c = fVar24;
                  }
                  local_58 = lVar12 + uVar16;
                }
              }
              else {
                fVar21 = fVar22;
                if (bVar4 || bVar3) {
                  fVar21 = fVar24;
                }
                if (!bVar7) {
                  bVar6 = true;
                  bVar7 = false;
                  uVar13 = uVar1;
                  goto LAB_100556f8b;
                }
                uVar13 = lVar12 + uVar16;
              }
LAB_10055707b:
              bVar6 = true;
              bVar7 = true;
              break;
            }
          }
LAB_100556f8b:
          fVar19 = fVar2 + DAT_10073fdac;
          fVar20 = fVar23 + DAT_10073fdac;
        }
        else if (param_3 == 1) {
          fVar2 = *(float *)(param_1 + uVar11 * 4 + -4 + lVar12 * 4);
          if ((uVar11 + lVar12 < uVar11) &&
             ((uVar1 = uVar16 + lVar12, param_6 == '\0' || (lVar10 + uVar1 == 0)))) {
            if (uVar14 == 0) {
              uVar14 = uVar1;
            }
            if ((fVar18 < (float)((uint)fVar20 & _DAT_100704180)) &&
               (fVar23 = (float)((uint)((fVar20 - fVar2) / fVar20) & _DAT_100704180),
               fVar17 < fVar23)) {
              if (bVar6) {
                if (!bVar7) {
                  local_58 = lVar12 + uVar16;
                  local_3c = fVar23;
                }
              }
              else {
                fVar21 = fVar23;
                if (!bVar7) {
                  bVar6 = true;
                  bVar7 = false;
                  uVar13 = uVar1;
                  goto LAB_100556fad;
                }
                uVar13 = lVar12 + uVar16;
              }
              goto LAB_10055707b;
            }
          }
LAB_100556fad:
          fVar20 = fVar2 + DAT_10073fdac;
        }
        lVar12 = lVar12 + -1;
        uVar15 = uVar15 - 1;
        uVar9 = uVar9 + 1;
        uVar5 = uVar5 - 2;
      } while (param_2 != uVar9);
      if ((bVar6) && (bVar7)) {
        if (fVar21 <= local_3c) {
          uVar13 = local_58;
        }
LAB_100557095:
        uVar16 = uVar13;
        uVar8 = 0;
        goto LAB_1005570a9;
      }
      if (bVar6) goto LAB_100557095;
      fVar17 = fVar17 + DAT_1007106c0;
      fVar18 = fVar18 + DAT_10073fdb0;
    } while ((0.0 < fVar17) && (0.0 < fVar18));
    uVar8 = 0xffffffd8;
    uVar16 = uVar14;
  }
LAB_1005570a9:
  *param_7 = uVar16;
  return uVar8;
}

