// name: FUN_10010b7b2
// address: 10010b7b2

void FUN_10010b7b2(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  char cVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  bVar9 = *(byte *)(param_2 + 0x10);
  uVar12 = 0;
  lVar19 = *(long *)(param_2 + 0x1d0);
  lVar16 = *(long *)(param_2 + 0x1c8);
  lVar20 = *(long *)(param_2 + 0x1d8);
  lVar21 = *(long *)(param_2 + 0x1e0);
  do {
    lVar10 = param_4;
    lVar11 = param_3;
    lVar13 = param_6;
    lVar14 = param_5;
    if ((uVar12 == 10) ||
       (lVar10 = lVar19, lVar11 = lVar16, lVar13 = lVar21, lVar14 = lVar20, 9 < uVar12)) {
      uVar17 = (int)(char)(&DAT_1007014c1)[uVar12];
      if ((int)(uint)bVar9 < (int)(char)(&DAT_1007014c1)[uVar12]) {
        uVar17 = (uint)bVar9;
      }
      cVar18 = (&DAT_1007014c0)[uVar12];
      iVar15 = (int)cVar18;
    }
    else {
      cVar18 = (&DAT_1007014c0)[uVar12];
      iVar15 = (int)cVar18;
      uVar17 = iVar15 + 1;
    }
    *(float *)(param_2 + 0x3a4 + uVar12 * 4) =
         *(float *)(param_2 + 0x504 + uVar12 * 4) + *(float *)(param_2 + 0x3a4 + uVar12 * 4);
    *(float *)(param_2 + 0x3fc + uVar12 * 4) =
         *(float *)(param_2 + 0x55c + uVar12 * 4) + *(float *)(param_2 + 0x3fc + uVar12 * 4);
    *(float *)(param_2 + 0x454 + uVar12 * 4) =
         *(float *)(param_2 + 0x5b4 + uVar12 * 4) + *(float *)(param_2 + 0x454 + uVar12 * 4);
    *(float *)(param_2 + 0x4ac + uVar12 * 4) =
         *(float *)(param_2 + 0x60c + uVar12 * 4) + *(float *)(param_2 + 0x4ac + uVar12 * 4);
    if (iVar15 < (int)uVar17) {
      lVar19 = (long)cVar18;
      do {
        fVar1 = *(float *)(lVar11 + lVar19 * 4);
        fVar2 = *(float *)(param_2 + 0x454 + uVar12 * 4);
        fVar3 = *(float *)(lVar14 + lVar19 * 4);
        fVar4 = *(float *)(param_2 + 0x3a4 + uVar12 * 4);
        fVar5 = *(float *)(param_2 + 0x3fc + uVar12 * 4);
        fVar6 = *(float *)(lVar10 + lVar19 * 4);
        fVar7 = *(float *)(lVar13 + lVar19 * 4);
        fVar8 = *(float *)(param_2 + 0x4ac + uVar12 * 4);
        *(float *)(lVar11 + lVar19 * 4) = fVar4 * fVar1 + fVar2 * fVar3;
        *(float *)(lVar10 + lVar19 * 4) = fVar4 * fVar6 + fVar2 * fVar7;
        *(float *)(lVar14 + lVar19 * 4) = fVar1 * fVar5 + fVar3 * fVar8;
        *(float *)(lVar13 + lVar19 * 4) = fVar5 * fVar6 + fVar7 * fVar8;
        lVar19 = lVar19 + 1;
      } while ((int)uVar17 != lVar19);
    }
    uVar12 = uVar12 + 1;
    lVar19 = lVar10;
    lVar16 = lVar11;
    lVar20 = lVar14;
    lVar21 = lVar13;
  } while (uVar12 != 0x16);
  return;
}

