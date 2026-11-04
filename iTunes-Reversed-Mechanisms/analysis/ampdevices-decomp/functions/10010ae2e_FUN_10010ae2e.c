// name: FUN_10010ae2e
// address: 10010ae2e

void FUN_10010ae2e(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  lVar2 = *(long *)(param_1 + 0x1e30);
  piVar3 = *(int **)(lVar2 + 0x1e8);
  if (0 < *piVar3) {
    lVar11 = 0;
    iVar12 = 0;
    do {
      iVar1 = *(int *)(*(long *)(piVar3 + 2) + lVar11 * 4);
      _memcpy(*(void **)(piVar3 + 6),*(void **)(*(long *)(piVar3 + 10) + lVar11 * 8),
              (long)piVar3[4] << 2);
      _memcpy(*(void **)(piVar3 + 8),*(void **)(*(long *)(piVar3 + 0xc) + lVar11 * 8),
              (long)piVar3[4] << 2);
      lVar9 = *(long *)(piVar3 + 6);
      lVar8 = (long)piVar3[4];
      *(undefined4 *)(lVar9 + lVar8 * 4) = *(undefined4 *)(*(long *)(param_2 + 0x30) + lVar11 * 4);
      *(undefined4 *)(*(long *)(piVar3 + 8) + lVar8 * 4) =
           *(undefined4 *)(*(long *)(param_3 + 0x30) + lVar11 * 4);
      _memcpy(*(void **)(*(long *)(piVar3 + 10) + lVar11 * 8),(void *)(lVar9 + 4),lVar8 << 2);
      _memcpy(*(void **)(*(long *)(piVar3 + 0xc) + lVar11 * 8),(void *)(*(long *)(piVar3 + 8) + 4),
              (long)piVar3[4] << 2);
      if (iVar1 == 8) {
        FUN_10010ba1e();
        puVar6 = *(undefined4 **)(piVar3 + 0xe);
        lVar9 = *(long *)(lVar2 + 0x1c8);
        lVar10 = (long)iVar12;
        *(undefined4 *)(lVar9 + lVar10 * 4) = *puVar6;
        puVar7 = *(undefined4 **)(piVar3 + 0x10);
        lVar8 = *(long *)(lVar2 + 0x1d0);
        *(undefined4 *)(lVar8 + lVar10 * 4) = *puVar7;
        *(undefined4 *)(lVar9 + 4 + lVar10 * 4) = puVar6[1];
        *(undefined4 *)(lVar8 + 4 + lVar10 * 4) = puVar7[1];
        *(float *)(lVar9 + 8 + lVar10 * 4) = (float)puVar6[2] + (float)puVar6[5];
        *(float *)(lVar8 + 8 + lVar10 * 4) = (float)puVar7[2] + (float)puVar7[5];
        *(float *)(lVar9 + 0xc + lVar10 * 4) = (float)puVar6[3] + (float)puVar6[4];
        *(float *)(lVar8 + 0xc + lVar10 * 4) = (float)puVar7[3] + (float)puVar7[4];
        *(undefined4 *)(lVar9 + 0x10 + lVar10 * 4) = puVar6[6];
        *(undefined4 *)(lVar8 + 0x10 + lVar10 * 4) = puVar7[6];
        *(undefined4 *)(lVar9 + 0x14 + lVar10 * 4) = puVar6[7];
        *(undefined4 *)(lVar8 + 0x14 + lVar10 * 4) = puVar7[7];
        iVar12 = iVar12 + 6;
      }
      else if (iVar1 == 2) {
        pfVar4 = *(float **)(piVar3 + 0xe);
        fVar14 = 0.0;
        lVar9 = 0;
        do {
          fVar14 = fVar14 + (float)(&DAT_1007019f0)[lVar9] *
                            *(float *)(*(long *)(piVar3 + 6) + 4 + lVar9 * 8);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 6);
        fVar13 = *(float *)(*(long *)(piVar3 + 6) + 0x18) * DAT_100700b28;
        *pfVar4 = fVar13 + fVar14;
        pfVar4[1] = fVar13 - fVar14;
        pfVar5 = *(float **)(piVar3 + 0x10);
        fVar14 = 0.0;
        lVar9 = 0;
        do {
          fVar14 = fVar14 + (float)(&DAT_1007019f0)[lVar9] *
                            *(float *)(*(long *)(piVar3 + 8) + 4 + lVar9 * 8);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 6);
        fVar13 = *(float *)(*(long *)(piVar3 + 8) + 0x18) * DAT_100700b28;
        *pfVar5 = fVar13 + fVar14;
        pfVar5[1] = fVar13 - fVar14;
        lVar9 = *(long *)(lVar2 + 0x1c8);
        lVar10 = (long)iVar12;
        *(float *)(lVar9 + lVar10 * 4) = *pfVar4;
        lVar8 = *(long *)(lVar2 + 0x1d0);
        *(float *)(lVar8 + lVar10 * 4) = *pfVar5;
        *(float *)(lVar9 + 4 + lVar10 * 4) = pfVar4[1];
        *(float *)(lVar8 + 4 + lVar10 * 4) = pfVar5[1];
        iVar12 = iVar12 + 2;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *piVar3);
  }
  return;
}

