// name: FUN_100493d64
// address: 100493d64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100493d64(char param_1)

{
  double dVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar7;
  
  lVar3 = 4;
  iVar4 = 0x15;
  lVar2 = 0;
  do {
    dVar6 = (double)(int)(iVar4 - 0x14U) * DAT_100700b18;
    dVar11 = DAT_1007106c8;
    dVar1 = (double)___sincos_stret(SUB84(dVar6 * DAT_1007106c8,0));
    *(float *)((long)&DAT_1008bf940 + lVar2) = (float)dVar11;
    *(float *)((long)&DAT_1008bf960 + lVar2) = (float)dVar1;
    dVar7 = DAT_10074b3e8;
    dVar1 = (double)___sincos_stret(SUB84((double)(int)(iVar4 - 0x14U | 0x10) * DAT_100700b18 *
                                          DAT_10074b3e8,0));
    dVar11 = DAT_100700b00;
    fVar5 = (float)(dVar7 * DAT_100700b00);
    dVar7 = (double)CONCAT44((int)((ulong)(dVar7 * DAT_100700b00) >> 0x20),fVar5);
    *(float *)((long)&DAT_1008bf980 + lVar2) = fVar5;
    *(float *)((long)&DAT_1008bf9a0 + lVar2) = (float)(dVar1 * dVar11);
    dVar1 = (double)___sincos_stret(SUB84((double)((int)lVar3 + 0x1b) * DAT_100700b18 *
                                          DAT_10074b3e8,0));
    dVar11 = DAT_100700b00;
    fVar5 = (float)(dVar7 * DAT_100700b00);
    dVar8 = (double)CONCAT44((int)((ulong)(dVar7 * DAT_100700b00) >> 0x20),fVar5);
    *(float *)((long)&DAT_1008bf9c0 + lVar2) = fVar5;
    fVar5 = (float)(dVar1 * dVar11);
    dVar1 = (double)___sincos_stret(SUB84((double)(iVar4 + -0x10) * DAT_100700b18 * DAT_1007106c8,0)
                                   );
    dVar9 = dVar8;
    dVar11 = (double)___sincos_stret(SUB84((double)iVar4 * DAT_100700b18 * DAT_10074b3e8,0));
    dVar10 = dVar9;
    dVar7 = (double)___sincos_stret(SUB84((double)((int)lVar3 + 0x17) * DAT_100700b18 *
                                          DAT_10074b3e8,0));
    if (param_1 != '\0') {
      fVar5 = (float)((uint)fVar5 ^ _DAT_100700430);
    }
    *(float *)((long)&DAT_1008bf9e0 + lVar2) = fVar5;
    (&DAT_1008bf94c)[lVar3] = (float)dVar8;
    (&DAT_1008bf96c)[lVar3] = (float)dVar1;
    dVar1 = DAT_100700b00;
    (&DAT_1008bf98c)[lVar3] = (float)(dVar9 * DAT_100700b00);
    (&DAT_1008bf9ac)[lVar3] = (float)(dVar11 * dVar1);
    fVar5 = (float)(dVar10 * dVar1);
    dVar11 = (double)CONCAT44((int)((ulong)(dVar10 * dVar1) >> 0x20),fVar5);
    (&DAT_1008bf9cc)[lVar3] = fVar5;
    fVar5 = (float)(dVar7 * dVar1);
    if (param_1 != '\0') {
      fVar5 = (float)((uint)fVar5 ^ _DAT_100700430);
    }
    (&DAT_1008bf9ec)[lVar3] = fVar5;
    dVar1 = (double)___sincos_stret(SUB84(dVar6 * _DAT_10074b3f0,0));
    *(float *)((long)&DAT_1008bfa00 + lVar2) = (float)dVar11;
    *(float *)((long)&DAT_1008bfa10 + lVar2) = (float)dVar1;
    lVar2 = lVar2 + 4;
    iVar4 = iVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

