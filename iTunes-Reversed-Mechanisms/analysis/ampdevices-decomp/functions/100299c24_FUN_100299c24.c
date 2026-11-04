// name: FUN_100299c24
// address: 100299c24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100299c24(long param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,char param_7
             ,uint *param_8)

{
  long lVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_44;
  float local_40;
  uint local_3c;
  
  uVar11 = param_5 - param_4;
  uVar10 = 0xffffffd8;
  if (param_2 != 0) {
    lVar1 = param_1 + (ulong)param_2 * 8;
    local_44 = 0;
    uVar13 = 0;
    local_3c = 0;
    fVar20 = 0.0;
    fVar19 = 0.0;
    fVar21 = 0.0;
    local_40 = 0.0;
    bVar6 = false;
    fVar17 = DAT_100700b28;
    fVar18 = DAT_10073fda8;
    do {
      uVar12 = 0;
      lVar8 = 0;
      bVar5 = false;
      uVar15 = uVar13;
      uVar9 = uVar11;
      do {
        uVar12 = uVar12 + 1;
        iVar14 = (uVar9 / 0x24c) * -0x24c;
        iVar7 = (int)lVar8;
        if (param_3 == 2) {
          fVar2 = *(float *)(lVar1 + -8 + lVar8 * 8);
          fVar23 = *(float *)(lVar1 + -4 + lVar8 * 8);
          if ((param_2 + iVar7 < param_2) &&
             ((uVar16 = uVar11 + iVar7, param_7 == '\0' || (iVar14 + uVar16 == 0)))) {
            uVar13 = uVar16;
            if (uVar15 != 0) {
              uVar13 = uVar15;
            }
            fVar24 = (float)((uint)((fVar19 - fVar23) / fVar19) & _DAT_100704180);
            fVar22 = (float)((uint)((fVar20 - fVar2) / fVar20) & _DAT_100704180);
            bVar3 = fVar18 < (float)((uint)fVar20 & _DAT_100704180);
            bVar4 = fVar17 < fVar22;
            if ((fVar17 < fVar24 && fVar18 < (float)((uint)fVar19 & _DAT_100704180)) ||
               (bVar4 && bVar3)) {
              if (bVar5) {
                if ((!bVar6) && (local_44 = uVar16, local_40 = fVar22, !bVar4 || !bVar3)) {
                  local_40 = fVar24;
                }
              }
              else {
                fVar21 = fVar22;
                if (!bVar4 || !bVar3) {
                  fVar21 = fVar24;
                }
                if (!bVar6) {
                  bVar5 = true;
                  bVar6 = false;
                  local_3c = uVar16;
                  goto LAB_100299e99;
                }
                local_3c = iVar7 + uVar11;
              }
              bVar6 = true;
              bVar5 = true;
              break;
            }
LAB_100299e99:
            uVar15 = uVar13;
            if ((uint)(param_6 * 2) <= uVar12) break;
          }
          fVar19 = fVar23 + DAT_10073fdac;
          fVar20 = fVar2 + DAT_10073fdac;
          uVar13 = uVar15;
        }
        else {
          uVar13 = uVar15;
          if (param_3 == 1) {
            fVar2 = *(float *)(param_1 + -4 + (ulong)param_2 * 4 + lVar8 * 4);
            if ((param_2 + iVar7 < param_2) &&
               ((uVar16 = uVar11 + iVar7, param_7 == '\0' || (iVar14 + uVar16 == 0)))) {
              uVar13 = uVar16;
              if (uVar15 != 0) {
                uVar13 = uVar15;
              }
              uVar15 = uVar13;
              if ((fVar18 < (float)((uint)fVar20 & _DAT_100704180)) &&
                 (fVar23 = (float)((uint)((fVar20 - fVar2) / fVar20) & _DAT_100704180),
                 fVar17 < fVar23)) {
                if (bVar5) {
                  if (!bVar6) {
                    local_44 = uVar16;
                    local_40 = fVar23;
                  }
                }
                else {
                  fVar21 = fVar23;
                  if (!bVar6) {
                    bVar5 = true;
                    bVar6 = false;
                    local_3c = uVar16;
                    goto LAB_100299d29;
                  }
                  local_3c = iVar7 + uVar11;
                }
                bVar5 = true;
                bVar6 = true;
                break;
              }
            }
LAB_100299d29:
            fVar20 = fVar2 + DAT_10073fdac;
            uVar13 = uVar15;
          }
        }
        lVar8 = lVar8 + -1;
        uVar9 = uVar9 - 1;
        uVar15 = uVar13;
      } while (param_2 != uVar12);
      if ((bVar5) && (bVar6)) {
        uVar11 = local_3c;
        if (fVar21 <= local_40) {
          uVar11 = local_44;
        }
        uVar10 = 0;
        goto LAB_100299fb5;
      }
      if (bVar5) {
        uVar10 = 0;
        uVar11 = local_3c;
        goto LAB_100299fb5;
      }
      fVar17 = fVar17 + DAT_1007106c0;
      fVar18 = fVar18 + DAT_10073fdb0;
    } while ((0.0 < fVar17) && (0.0 < fVar18));
    uVar10 = 0xffffffd8;
    uVar11 = uVar13;
  }
LAB_100299fb5:
  *param_8 = uVar11;
  return uVar10;
}

