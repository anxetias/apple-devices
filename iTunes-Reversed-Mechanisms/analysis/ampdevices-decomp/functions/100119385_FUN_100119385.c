// name: FUN_100119385
// address: 100119385

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100119385(long *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
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
  ulong uVar15;
  
  uVar13 = _UNK_10070043c;
  uVar12 = _UNK_100700438;
  uVar11 = _UNK_100700434;
  uVar10 = _DAT_100700430;
  if (1 < param_5) {
    uVar14 = param_5 >> 1;
    uVar15 = (ulong)uVar14;
    uVar16 = uVar15 * 4 + 0x3fffffff0;
    lVar1 = param_3 + uVar15 * 4;
    lVar2 = param_4 + uVar15 * 4;
    param_5 = param_5 - 4;
    uVar18 = 0;
    do {
      uVar14 = uVar14 - 4;
      pfVar3 = (float *)(*param_1 + uVar18 * 2);
      pfVar4 = (float *)(*param_1 + (ulong)uVar14 * 4);
      pfVar5 = (float *)(param_1[1] + uVar18 * 2);
      pfVar6 = (float *)(param_1[1] + (ulong)uVar14 * 4);
      pfVar7 = (float *)(param_2 + uVar18 * 4);
      pfVar8 = (float *)(param_2 + 0x10 + uVar18 * 4);
      fVar19 = *pfVar3 * pfVar7[1] - *pfVar7 * *pfVar5;
      fVar20 = pfVar3[1] * pfVar7[3] - pfVar7[2] * pfVar5[1];
      fVar21 = pfVar3[2] * pfVar8[1] - *pfVar8 * pfVar5[2];
      fVar22 = pfVar3[3] * pfVar8[3] - pfVar8[2] * pfVar5[3];
      fVar23 = (float)((uint)(pfVar7[1] * *pfVar5 + *pfVar3 * *pfVar7) ^ uVar10);
      fVar24 = (float)((uint)(pfVar7[3] * pfVar5[1] + pfVar3[1] * pfVar7[2]) ^ uVar11);
      fVar25 = (float)((uint)(pfVar8[1] * pfVar5[2] + pfVar3[2] * *pfVar8) ^ uVar12);
      fVar26 = (float)((uint)(pfVar8[3] * pfVar5[3] + pfVar3[3] * pfVar8[2]) ^ uVar13);
      pfVar3 = (float *)(param_2 + (ulong)(param_5 - 4) * 4);
      pfVar5 = (float *)(param_2 + (ulong)param_5 * 4);
      fVar27 = pfVar3[1] * *pfVar6 + *pfVar4 * *pfVar3;
      fVar28 = pfVar3[3] * pfVar6[1] + pfVar4[1] * pfVar3[2];
      fVar29 = pfVar5[1] * pfVar6[2] + pfVar4[2] * *pfVar5;
      fVar30 = pfVar5[3] * pfVar6[3] + pfVar4[3] * pfVar5[2];
      fVar31 = *pfVar3 * *pfVar6 - *pfVar4 * pfVar3[1];
      fVar32 = pfVar3[2] * pfVar6[1] - pfVar4[1] * pfVar3[3];
      fVar33 = *pfVar5 * pfVar6[2] - pfVar4[2] * pfVar5[1];
      fVar34 = pfVar5[2] * pfVar6[3] - pfVar4[3] * pfVar5[3];
      pfVar3 = (float *)(lVar2 + uVar18 * 4);
      *pfVar3 = fVar23;
      pfVar3[1] = fVar34;
      pfVar3[2] = fVar24;
      pfVar3[3] = fVar33;
      pfVar3 = (float *)(lVar2 + 0x10 + uVar18 * 4);
      *pfVar3 = fVar25;
      pfVar3[1] = fVar32;
      pfVar3[2] = fVar26;
      pfVar3[3] = fVar31;
      uVar17 = uVar16 - 0x10 & 0x3fffffffc;
      pfVar3 = (float *)(param_4 + uVar17);
      *pfVar3 = fVar31;
      pfVar3[1] = fVar26;
      pfVar3[2] = fVar32;
      pfVar3[3] = fVar25;
      pfVar3 = (float *)(param_4 + (uVar16 & 0x3fffffffc));
      *pfVar3 = fVar33;
      pfVar3[1] = fVar24;
      pfVar3[2] = fVar34;
      pfVar3[3] = fVar23;
      pfVar3 = (float *)(param_3 + uVar17);
      *pfVar3 = fVar27;
      pfVar3[1] = fVar22;
      pfVar3[2] = fVar28;
      pfVar3[3] = fVar21;
      pfVar3 = (float *)(param_3 + (uVar16 & 0x3fffffffc));
      *pfVar3 = fVar29;
      pfVar3[1] = fVar20;
      pfVar3[2] = fVar30;
      pfVar3[3] = fVar19;
      puVar9 = (uint *)(lVar1 + uVar18 * 4);
      *puVar9 = (uint)fVar19 ^ uVar10;
      puVar9[1] = (uint)fVar30 ^ uVar11;
      puVar9[2] = (uint)fVar20 ^ uVar12;
      puVar9[3] = (uint)fVar29 ^ uVar13;
      puVar9 = (uint *)(lVar1 + 0x10 + uVar18 * 4);
      *puVar9 = (uint)fVar21 ^ uVar10;
      puVar9[1] = (uint)fVar28 ^ uVar11;
      puVar9[2] = (uint)fVar22 ^ uVar12;
      puVar9[3] = (uint)fVar27 ^ uVar13;
      uVar18 = uVar18 + 8;
      uVar16 = uVar16 - 0x20;
      param_5 = param_5 - 8;
    } while (uVar18 < uVar15);
  }
  return;
}

