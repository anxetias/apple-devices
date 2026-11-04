// name: FUN_1001162c4
// address: 1001162c4

void FUN_1001162c4(undefined8 param_1,long param_2,float *param_3,float *param_4)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  char cVar6;
  ulong uVar7;
  undefined8 uVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  float fVar20;
  uint local_50;
  
  pbVar5 = *(byte **)(param_2 + 0x18);
  if (pbVar5 == (byte *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      FUN_100669f92(uVar8);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)((long)param_3 + 0xbbd) != '\0') {
    bVar2 = *pbVar5;
    bVar3 = pbVar5[1];
    uVar16 = (uint)bVar2 * 2 - (uint)bVar3;
    uVar7 = (ulong)-uVar16;
    uVar10 = 0;
    pfVar18 = param_3;
    do {
      fVar20 = param_3[uVar10 + 0x2f1];
      bVar4 = *(byte *)(*(long *)(param_2 + 0x18) + (ulong)(uint)fVar20);
      uVar12 = (ulong)bVar4;
      if (*(char *)((long)param_3 + uVar10 + 0xe85) == '\0') {
        fVar1 = *pfVar18;
        if (fVar20 == 0.0) {
          if ((int)uVar16 < 0) {
            *param_4 = fVar1;
            lVar17 = 2;
            pfVar9 = param_4 + 1;
          }
          else {
            lVar17 = 1;
            pfVar9 = param_4;
            if ((uint)bVar2 * 2 != (uint)bVar3) goto LAB_1001163bd;
          }
          *pfVar9 = fVar1;
        }
        else {
LAB_1001163bd:
          lVar17 = 0;
        }
        param_4[lVar17] = fVar1;
        pfVar18 = pfVar18 + 1;
        if (1 < bVar4) {
          uVar14 = 1;
          do {
            *pfVar18 = *pfVar18 + pfVar18[-1];
            FUN_100116548();
            uVar14 = uVar14 + 1;
            pfVar18 = pfVar18 + 1;
            local_50 = (uint)bVar4;
          } while (local_50 != uVar14);
        }
      }
      else if (fVar20 == 0.0) {
        if (uVar12 != 0) {
          lVar17 = 0;
          uVar11 = 0;
          uVar13 = 0;
          uVar19 = uVar7;
          do {
            uVar14 = (uint)uVar13;
            if ((int)uVar16 < 0) {
              uVar15 = uVar19;
              if (uVar7 > uVar13) {
                uVar15 = uVar11 & 0xffffffff;
              }
              fVar20 = pfVar18[uVar13] + param_4[uVar15];
              pfVar18[uVar13] = fVar20;
              if (uVar7 <= uVar13) {
                param_4[uVar19] = fVar20;
                uVar14 = (int)uVar19 + 1;
              }
              else {
                param_4[uVar11] = fVar20;
                (param_4 + 1)[uVar11] = fVar20;
                uVar14 = uVar14 * 3 + 2;
              }
            }
            else {
              uVar15 = uVar19;
              if (uVar16 > uVar13) {
                uVar15 = uVar13 & 0xffffffff;
              }
              fVar20 = pfVar18[uVar13] + param_4[uVar15];
              pfVar18[uVar13] = fVar20;
              if (uVar16 <= uVar13) {
                param_4[uVar19] = fVar20;
                uVar14 = (uVar14 * 2 - uVar16) + 1;
              }
            }
            param_4[uVar14] = fVar20;
            uVar13 = uVar13 + 1;
            uVar19 = (ulong)((int)uVar19 + 2);
            uVar11 = uVar11 + 3;
            lVar17 = lVar17 + -4;
          } while (uVar12 != uVar13);
          pfVar18 = (float *)((long)pfVar18 - lVar17);
        }
      }
      else if (uVar12 != 0) {
        lVar17 = 0;
        uVar19 = 0;
        do {
          pfVar18[uVar19] = pfVar18[uVar19] + param_4[uVar19];
          FUN_100116548();
          uVar19 = uVar19 + 1;
          lVar17 = lVar17 + -4;
        } while (uVar12 != uVar19);
        pfVar18 = (float *)((long)pfVar18 - lVar17);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(byte *)((long)param_3 + 0xbbd));
  }
  return;
}

