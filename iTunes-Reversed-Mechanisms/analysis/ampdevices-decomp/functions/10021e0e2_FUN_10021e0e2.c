// name: FUN_10021e0e2
// address: 10021e0e2

void FUN_10021e0e2(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  cVar3 = *(char *)(param_1 + 0x410);
  if (((cVar3 != '\0') || (*(char *)(param_1 + 0x411) != '\0')) &&
     (lVar6 = (long)*(int *)(param_1 + 0x444), 0 < lVar6)) {
    iVar5 = *(int *)(param_2 + 1);
    pfVar8 = (float *)*param_2;
    cVar4 = *(char *)(param_1 + 0x411);
    lVar9 = 0;
    do {
      if (cVar3 != '\0') {
        fVar12 = *(float *)(param_1 + 0x414 + lVar9 * 4);
        if (0 < iVar5) {
          fVar1 = *(float *)(param_1 + 0x424);
          fVar2 = *(float *)(param_1 + 0x428);
          pfVar7 = pfVar8;
          fVar11 = fVar12;
          iVar10 = iVar5;
          do {
            fVar12 = *pfVar7 * fVar1 + fVar2 * fVar11;
            *pfVar7 = fVar12 - fVar11;
            pfVar7 = pfVar7 + lVar6;
            iVar10 = iVar10 + -1;
            fVar11 = fVar12;
          } while (iVar10 != 0);
        }
        *(float *)(param_1 + 0x414 + lVar9 * 4) = fVar12;
      }
      if (cVar4 != '\0') {
        fVar12 = *(float *)(param_1 + 0x42c + lVar9 * 4);
        if (0 < iVar5) {
          fVar1 = *(float *)(param_1 + 0x43c);
          fVar2 = *(float *)(param_1 + 0x440);
          pfVar7 = pfVar8;
          fVar11 = fVar12;
          iVar10 = iVar5;
          do {
            fVar12 = *pfVar7 * fVar1 + fVar2 * fVar11;
            *pfVar7 = fVar11 + fVar12;
            pfVar7 = pfVar7 + lVar6;
            iVar10 = iVar10 + -1;
            fVar11 = fVar12;
          } while (iVar10 != 0);
        }
        *(float *)(param_1 + 0x42c + lVar9 * 4) = fVar12;
      }
      lVar9 = lVar9 + 1;
      pfVar8 = pfVar8 + 1;
    } while (lVar9 != lVar6);
  }
  return;
}

