// name: FUN_100119121
// address: 100119121

void FUN_100119121(float param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  ulong uVar28;
  ulong uVar27;
  
  if (1 < param_5) {
    uVar26 = param_5 >> 1;
    uVar27 = (ulong)uVar26;
    param_5 = param_5 - 4;
    uVar28 = 0;
    do {
      uVar26 = uVar26 - 4;
      pfVar1 = (float *)(param_2 + uVar28 * 4);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar1 = (float *)(param_2 + 0x10 + uVar28 * 4);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar1 = (float *)(param_2 + (ulong)(param_5 - 4) * 4);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar1 = (float *)(param_2 + (ulong)param_5 * 4);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar1 = (float *)(param_3 + uVar28 * 4);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar1 = (float *)(param_3 + 0x10 + uVar28 * 4);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      pfVar1 = (float *)(*param_4 + uVar28 * 2);
      *pfVar1 = fVar19 * fVar17 * param_1 + fVar2 * param_1 * fVar18;
      pfVar1[1] = fVar21 * fVar15 * param_1 + fVar4 * param_1 * fVar20;
      pfVar1[2] = fVar23 * fVar13 * param_1 + fVar6 * param_1 * fVar22;
      pfVar1[3] = fVar25 * fVar11 * param_1 + fVar8 * param_1 * fVar24;
      pfVar1 = (float *)(param_4[1] + uVar28 * 2);
      *pfVar1 = fVar18 * fVar17 * param_1 - fVar2 * param_1 * fVar19;
      pfVar1[1] = fVar20 * fVar15 * param_1 - fVar4 * param_1 * fVar21;
      pfVar1[2] = fVar22 * fVar13 * param_1 - fVar6 * param_1 * fVar23;
      pfVar1[3] = fVar24 * fVar11 * param_1 - fVar8 * param_1 * fVar25;
      pfVar1 = (float *)(param_3 + (ulong)(param_5 - 4) * 4);
      fVar2 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar1 = (float *)(param_3 + (ulong)param_5 * 4);
      fVar11 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar17 = pfVar1[3];
      uVar28 = uVar28 + 8;
      pfVar1 = (float *)(*param_4 + (ulong)uVar26 * 4);
      *pfVar1 = fVar4 * fVar9 * param_1 + fVar10 * param_1 * fVar2;
      pfVar1[1] = fVar8 * fVar7 * param_1 + fVar12 * param_1 * fVar6;
      pfVar1[2] = fVar13 * fVar5 * param_1 + fVar14 * param_1 * fVar11;
      pfVar1[3] = fVar17 * fVar3 * param_1 + fVar16 * param_1 * fVar15;
      pfVar1 = (float *)(param_4[1] + (ulong)uVar26 * 4);
      *pfVar1 = fVar2 * fVar9 * param_1 - fVar10 * param_1 * fVar4;
      pfVar1[1] = fVar6 * fVar7 * param_1 - fVar12 * param_1 * fVar8;
      pfVar1[2] = fVar11 * fVar5 * param_1 - fVar14 * param_1 * fVar13;
      pfVar1[3] = fVar15 * fVar3 * param_1 - fVar16 * param_1 * fVar17;
      param_5 = param_5 - 8;
    } while (uVar28 < uVar27);
  }
  return;
}

