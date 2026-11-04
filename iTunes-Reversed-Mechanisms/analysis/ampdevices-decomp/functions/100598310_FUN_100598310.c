// name: FUN_100598310
// address: 100598310

void FUN_100598310(long param_1,ulong param_2,uint param_3,long param_4,long param_5,int param_6,
                  char param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = DAT_100700b50;
  if (param_7 != '\0') {
    fVar9 = *(float *)(param_1 + 0x11b0);
  }
  pfVar6 = (float *)(param_1 + (param_2 & 0xffffffff) * 0x118);
  iVar5 = 0;
  do {
    if (*(char *)(pfVar6 + 6) != '\0') {
      fVar10 = *pfVar6;
      fVar12 = pfVar6[1];
      if (param_6 != 0) {
        fVar1 = pfVar6[5];
        fVar2 = pfVar6[4];
        fVar3 = pfVar6[2];
        fVar4 = pfVar6[3];
        lVar7 = (param_2 & 0xffffffff) << 2;
        fVar11 = fVar12;
        iVar8 = param_6;
        do {
          fVar12 = fVar10;
          fVar10 = fVar3 * fVar11 +
                   *(float *)(param_4 + lVar7) * fVar1 * fVar2 * fVar9 + fVar4 * fVar12;
          *(float *)(param_5 + lVar7) = (fVar10 - fVar11) + *(float *)(param_5 + lVar7);
          lVar7 = lVar7 + (ulong)param_3 * 4;
          iVar8 = iVar8 + -1;
          fVar11 = fVar12;
        } while (iVar8 != 0);
      }
      *pfVar6 = fVar10;
      pfVar6[1] = fVar12;
    }
    pfVar6 = pfVar6 + 7;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 10);
  return;
}

