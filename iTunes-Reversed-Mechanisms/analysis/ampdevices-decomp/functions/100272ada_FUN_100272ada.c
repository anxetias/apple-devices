// name: FUN_100272ada
// address: 100272ada

void FUN_100272ada(long param_1,uint param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  dVar3 = DAT_10071c700;
  iVar4 = *(int *)(&DAT_10071c740 + (ulong)*(byte *)(param_1 + 2) * 4) * 3 +
          (uint)*(byte *)(param_1 + 6);
  if ((*(char *)(param_1 + 0x6acc + (ulong)param_2 * 2) == '\0') ||
     (*(char *)(param_1 + 0x6adc + (ulong)param_2 * 2) != '\x02')) {
    lVar5 = (long)iVar4 * 0x4a;
    iVar4 = (int)*(short *)(&DAT_10071c9c0 + (long)param_3 * 2 + lVar5);
    iVar6 = (int)*(short *)(&DAT_10071c9c2 + (long)param_3 * 2 + lVar5);
  }
  else {
    lVar5 = (long)iVar4 * 0x4a;
    iVar6 = (int)*(short *)(&DAT_10071c9f0 + (long)param_3 * 2 + lVar5) -
            (int)*(short *)(&DAT_10071c9ee + (long)param_3 * 2 + lVar5);
    iVar4 = param_4 * iVar6 + *(short *)(&DAT_10071c9ee + (long)param_3 * 2 + lVar5) * 3;
    iVar6 = iVar6 + iVar4;
  }
  if (iVar4 < iVar6) {
    lVar5 = (long)iVar4;
    do {
      fVar1 = *(float *)(param_1 + 0x7164 + lVar5 * 4);
      fVar2 = *(float *)(param_1 + 0x7a64 + lVar5 * 4);
      *(float *)(param_1 + 0x7164 + lVar5 * 4) = (float)((double)(fVar1 + fVar2) * dVar3);
      *(float *)(param_1 + 0x7a64 + lVar5 * 4) = (float)((double)(fVar1 - fVar2) * dVar3);
      lVar5 = lVar5 + 1;
    } while (iVar6 != lVar5);
  }
  return;
}

