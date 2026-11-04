// name: FUN_100106ed9
// address: 100106ed9

void FUN_100106ed9(float *param_1,long param_2,long param_3,uint param_4)

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
  long lVar18;
  float *pfVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  if (7 < param_4) {
    pfVar19 = param_1 + (param_4 * 2 - 4);
    fVar29 = pfVar19[-4];
    fVar24 = pfVar19[-3];
    fVar30 = pfVar19[-2];
    fVar23 = pfVar19[-1];
    fVar31 = *pfVar19;
    fVar22 = pfVar19[1];
    fVar32 = pfVar19[2];
    fVar21 = pfVar19[3];
    fVar33 = *param_1;
    fVar28 = param_1[1];
    fVar34 = param_1[2];
    fVar27 = param_1[3];
    fVar35 = param_1[4];
    fVar26 = param_1[5];
    fVar36 = param_1[6];
    fVar25 = param_1[7];
    lVar18 = (ulong)param_4 * 2;
    lVar20 = 0;
    do {
      lVar18 = lVar18 + -8;
      pfVar1 = (float *)(param_3 + lVar18 * 2);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar1 = (float *)(param_2 + lVar18 * 2);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar1 = (float *)(param_3 + lVar20);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar1 = (float *)(param_2 + lVar20);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar1 = (float *)((long)param_1 + lVar20 * 2);
      *pfVar1 = fVar21 * fVar10 + fVar33 * fVar14;
      pfVar1[1] = fVar14 * fVar21 - fVar33 * fVar10;
      pfVar1[2] = fVar22 * fVar11 + fVar34 * fVar15;
      pfVar1[3] = fVar15 * fVar22 - fVar34 * fVar11;
      pfVar1 = (float *)((long)param_1 + lVar20 * 2 + 0x10);
      *pfVar1 = fVar23 * fVar12 + fVar35 * fVar16;
      pfVar1[1] = fVar16 * fVar23 - fVar35 * fVar12;
      pfVar1[2] = fVar24 * fVar13 + fVar36 * fVar17;
      pfVar1[3] = fVar17 * fVar24 - fVar36 * fVar13;
      *pfVar19 = fVar27 * fVar4 + fVar31 * fVar8;
      pfVar19[1] = fVar8 * fVar27 - fVar31 * fVar4;
      pfVar19[2] = fVar28 * fVar5 + fVar32 * fVar9;
      pfVar19[3] = fVar9 * fVar28 - fVar32 * fVar5;
      pfVar19[-4] = fVar25 * fVar2 + fVar29 * fVar6;
      pfVar19[-3] = fVar6 * fVar25 - fVar29 * fVar2;
      pfVar19[-2] = fVar26 * fVar3 + fVar30 * fVar7;
      pfVar19[-1] = fVar7 * fVar26 - fVar30 * fVar3;
      pfVar1 = (float *)((long)param_1 + lVar20 * 2 + 0x20);
      fVar33 = *pfVar1;
      fVar28 = pfVar1[1];
      fVar34 = pfVar1[2];
      fVar27 = pfVar1[3];
      pfVar1 = (float *)((long)param_1 + lVar20 * 2 + 0x30);
      fVar35 = *pfVar1;
      fVar26 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar25 = pfVar1[3];
      fVar29 = pfVar19[-0xc];
      fVar24 = pfVar19[-0xb];
      fVar30 = pfVar19[-10];
      fVar23 = pfVar19[-9];
      fVar31 = pfVar19[-8];
      fVar22 = pfVar19[-7];
      fVar32 = pfVar19[-6];
      fVar21 = pfVar19[-5];
      pfVar19 = pfVar19 + -8;
      lVar20 = lVar20 + 0x10;
    } while ((ulong)(param_4 >> 3) << 4 != lVar20);
  }
  return;
}

