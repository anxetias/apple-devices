// name: FUN_100272949
// address: 100272949

void FUN_100272949(long param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  iVar4 = *(int *)(&DAT_10071c740 + (ulong)*(byte *)(param_1 + 2) * 4) * 3 +
          (uint)*(byte *)(param_1 + 6);
  uVar7 = (ulong)param_2;
  if ((*(char *)(param_1 + 0x6acc + uVar7 * 2) == '\0') ||
     (*(char *)(param_1 + 0x6adc + uVar7 * 2) != '\x02')) {
    lVar5 = (long)iVar4 * 0x4a;
    iVar6 = (int)*(short *)(&DAT_10071c9c0 + (long)param_3 * 2 + lVar5);
    iVar4 = (int)*(short *)(&DAT_10071c9c2 + (long)param_3 * 2 + lVar5);
  }
  else {
    lVar5 = (long)iVar4 * 0x4a;
    iVar4 = (int)*(short *)(&DAT_10071c9f0 + (long)param_3 * 2 + lVar5) -
            (int)*(short *)(&DAT_10071c9ee + (long)param_3 * 2 + lVar5);
    iVar6 = param_4 * iVar4 + *(short *)(&DAT_10071c9ee + (long)param_3 * 2 + lVar5) * 3;
    iVar4 = iVar4 + iVar6;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (iVar6 < iVar4) {
      fVar1 = (float)(&DAT_1008a44c0)[param_5];
      fVar2 = (float)(&DAT_1008a4540)[param_5];
      lVar5 = (long)iVar6;
      do {
        fVar3 = *(float *)(param_1 + 0x7164 + lVar5 * 4);
        *(float *)(param_1 + 0x7164 + lVar5 * 4) = fVar1 * fVar3;
        *(float *)(param_1 + 0x7a64 + lVar5 * 4) = fVar3 * fVar2;
        lVar5 = lVar5 + 1;
      } while (iVar4 != lVar5);
    }
  }
  else if ((*(byte *)(param_1 + 0x6ac6 + uVar7 * 4) & 1) == 0) {
    if (iVar6 < iVar4) {
      fVar1 = (float)(&DAT_1008a43c0)[param_5];
      fVar2 = (float)(&DAT_1008a4440)[param_5];
      lVar5 = (long)iVar6;
      do {
        fVar3 = *(float *)(param_1 + 0x7164 + lVar5 * 4);
        *(float *)(param_1 + 0x7a64 + lVar5 * 4) = fVar2 * fVar3;
        *(float *)(param_1 + 0x7164 + lVar5 * 4) = fVar3 * fVar1;
        lVar5 = lVar5 + 1;
      } while (iVar4 != lVar5);
    }
  }
  else if (iVar6 < iVar4) {
    fVar1 = (float)(&DAT_1008a42c0)[param_5];
    fVar2 = (float)(&DAT_1008a4340)[param_5];
    lVar5 = (long)iVar6;
    do {
      fVar3 = *(float *)(param_1 + 0x7164 + lVar5 * 4);
      *(float *)(param_1 + 0x7a64 + lVar5 * 4) = fVar2 * fVar3;
      *(float *)(param_1 + 0x7164 + lVar5 * 4) = fVar3 * fVar1;
      lVar5 = lVar5 + 1;
    } while (iVar4 != lVar5);
  }
  return;
}

