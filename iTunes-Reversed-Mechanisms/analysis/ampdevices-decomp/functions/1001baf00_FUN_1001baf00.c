// name: FUN_1001baf00
// address: 1001baf00

bool FUN_1001baf00(long *param_1,uint param_2)

{
  long *plVar1;
  size_t *psVar2;
  size_t sVar3;
  short *psVar4;
  short *psVar5;
  void *pvVar6;
  uint *puVar7;
  short *psVar8;
  long lVar9;
  bool bVar10;
  long local_78 [5];
  long local_50 [5];
  
  plVar1 = (long *)*param_1;
  if (param_2 < 0x10000 && plVar1 != (long *)0x0) {
    psVar4 = (short *)((long)plVar1 + 0xc);
    lVar9 = *plVar1;
    psVar8 = (short *)((long)plVar1 + lVar9 * 2 + 0xc);
    psVar5 = psVar4;
    if (lVar9 != 0) {
      lVar9 = lVar9 * 2;
      do {
        psVar5 = psVar4;
        if (*psVar4 == (short)param_2) break;
        psVar4 = psVar4 + 1;
        lVar9 = lVar9 + -2;
        psVar5 = psVar8;
      } while (lVar9 != 0);
    }
    bVar10 = psVar5 == psVar8;
  }
  else {
    psVar2 = (size_t *)param_1[1];
    if (param_2 < 0xe0 && psVar2 != (size_t *)0x0) {
      sVar3 = *psVar2;
      pvVar6 = _memchr((void *)((long)psVar2 + 0xc),(int)(char)param_2,sVar3);
      return pvVar6 != (void *)((long)psVar2 + sVar3 + 0xc) && pvVar6 != (void *)0x0;
    }
    FUN_1001baac0(local_78,param_1);
    FUN_1001baa68(local_50,param_1);
    lVar9 = local_78[0];
    if (local_50[0] != local_78[0]) {
      do {
        puVar7 = (uint *)FUN_1001bab26(local_50);
        lVar9 = local_50[0];
        if (*puVar7 == param_2) break;
        FUN_1001babfe(local_50);
        lVar9 = local_78[0];
      } while (local_50[0] != local_78[0]);
    }
    bVar10 = lVar9 == local_78[0];
  }
  return !bVar10;
}

