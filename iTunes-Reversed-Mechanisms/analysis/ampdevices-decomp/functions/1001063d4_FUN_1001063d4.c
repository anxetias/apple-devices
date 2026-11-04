// name: FUN_1001063d4
// address: 1001063d4

void FUN_1001063d4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lVar21;
  
  FUN_10010648d(param_2,param_4);
  FUN_1001064f5(param_3);
  bVar3 = *(byte *)(param_4 + 0x19f6);
  if (bVar3 != 0) {
    lVar4 = *(long *)(param_4 + 0x1930);
    lVar5 = *(long *)(param_4 + 0x1938);
    lVar21 = 0;
    do {
      pfVar1 = (float *)(param_3 + lVar21 * 4);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar1 = (float *)(param_2 + lVar21 * 4);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar1 = (float *)(lVar4 + lVar21 * 4);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + lVar21 * 4);
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar20 = pfVar1[3];
      pfVar2 = (float *)(param_3 + lVar21 * 4);
      *pfVar2 = fVar6 * fVar14 - fVar10 * *pfVar1;
      pfVar2[1] = fVar7 * fVar15 - fVar11 * fVar18;
      pfVar2[2] = fVar8 * fVar16 - fVar12 * fVar19;
      pfVar2[3] = fVar9 * fVar17 - fVar13 * fVar20;
      pfVar1 = (float *)(lVar5 + lVar21 * 4);
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar20 = pfVar1[3];
      pfVar2 = (float *)(param_2 + lVar21 * 4);
      *pfVar2 = fVar6 * *pfVar1 + fVar14 * fVar10;
      pfVar2[1] = fVar7 * fVar18 + fVar15 * fVar11;
      pfVar2[2] = fVar8 * fVar19 + fVar16 * fVar12;
      pfVar2[3] = fVar9 * fVar20 + fVar17 * fVar13;
      pfVar1 = (float *)(param_3 + 0x10 + lVar21 * 4);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar1 = (float *)(param_2 + 0x10 + lVar21 * 4);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar1 = (float *)(lVar4 + 0x10 + lVar21 * 4);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x10 + lVar21 * 4);
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar20 = pfVar1[3];
      pfVar2 = (float *)(param_3 + 0x10 + lVar21 * 4);
      *pfVar2 = fVar6 * fVar14 - fVar10 * *pfVar1;
      pfVar2[1] = fVar7 * fVar15 - fVar11 * fVar18;
      pfVar2[2] = fVar8 * fVar16 - fVar12 * fVar19;
      pfVar2[3] = fVar9 * fVar17 - fVar13 * fVar20;
      pfVar1 = (float *)(lVar5 + 0x10 + lVar21 * 4);
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar20 = pfVar1[3];
      pfVar2 = (float *)(param_2 + 0x10 + lVar21 * 4);
      *pfVar2 = fVar6 * *pfVar1 + fVar14 * fVar10;
      pfVar2[1] = fVar7 * fVar18 + fVar15 * fVar11;
      pfVar2[2] = fVar8 * fVar19 + fVar16 * fVar12;
      pfVar2[3] = fVar9 * fVar20 + fVar17 * fVar13;
      lVar21 = lVar21 + 8;
    } while ((uint)lVar21 < (uint)bVar3);
  }
  return;
}

