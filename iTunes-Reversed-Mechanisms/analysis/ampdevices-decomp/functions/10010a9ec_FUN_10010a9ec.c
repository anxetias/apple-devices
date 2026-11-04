// name: FUN_10010a9ec
// address: 10010a9ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010a9ec(long param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined *puVar15;
  bool bVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  plVar6 = *(long **)(param_1 + 0x1e30);
  lVar7 = *plVar6;
  bVar16 = *(int *)(lVar7 + 0x10) != 0;
  if (bVar16) {
    puVar15 = &DAT_100701950;
  }
  else {
    puVar15 = &DAT_100701910;
  }
  if (param_2 == 0) {
    bVar4 = *(byte *)(plVar6 + 2);
    *(byte *)((long)plVar6 + 0x11) = bVar4;
    *(char *)(plVar6 + 2) = (char)param_3;
    if ((int)(uint)bVar4 < param_3 && bVar4 != 0) {
      lVar10 = (ulong)bVar4 - 3;
      uVar11 = 2;
      do {
        if (lVar10 < 0x14) {
          lVar12 = 0;
          do {
            if (*(char *)((long)plVar6 + lVar12 + 0x13b) != '\0') {
              lVar8 = plVar6[lVar12 + 0x28];
              lVar9 = plVar6[lVar12 + 0x2b];
              uVar14 = 0;
              do {
                *(undefined4 *)(*(long *)(lVar8 + uVar14 * 8) + lVar10 * 4) = 0;
                *(undefined4 *)(*(long *)(lVar9 + uVar14 * 8) + lVar10 * 4) = 0;
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(byte *)((long)plVar6 + lVar12 + 0x13b));
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 != 3);
        }
        else {
          uVar11 = (uint)*(byte *)((long)plVar6 + lVar10 + 0x205);
        }
        if (uVar11 != 0) {
          lVar12 = *(long *)(plVar6[0x25] + lVar10 * 8);
          lVar8 = *(long *)(plVar6[0x26] + lVar10 * 8);
          uVar14 = 0;
          do {
            *(undefined4 *)(lVar12 + uVar14 * 4) = 0;
            *(undefined4 *)(lVar8 + uVar14 * 4) = 0;
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < param_3 + -3);
    }
  }
  lVar10 = (long)param_2;
  fVar17 = (float)(int)((uint)*(byte *)(lVar7 + 0x22 + lVar10) -
                       (uint)*(byte *)(lVar7 + 0x21 + lVar10));
  if ((fVar17 != (float)*(byte *)(plVar6 + 1)) || (NAN(fVar17) || NAN((float)*(byte *)(plVar6 + 1)))
     ) {
    fVar17 = DAT_100700b50 / fVar17;
  }
  else {
    fVar17 = *(float *)((long)plVar6 + 0xc);
  }
  iVar13 = (uint)bVar16 * 8 + 7;
  lVar12 = 0;
  do {
    iVar5 = *(int *)(lVar7 + 0x28 + lVar10 * 0x88 +
                    ((long)(short)(&DAT_1007014e0)[lVar12] & 0x3fffffffffffefffU) * 4);
    fVar24 = *(float *)(puVar15 + (long)(iVar5 + iVar13) * 4);
    fVar23 = *(float *)(puVar15 + (long)(iVar13 - iVar5) * 4);
    fVar1 = *(float *)(&DAT_1007019d0 +
                      (long)*(int *)(lVar7 + 0x358 + lVar10 * 0x88 +
                                    ((long)(short)(&DAT_1007014e0)[lVar12] & 0x3fffffffffffefffU) *
                                    4) * 4);
    fVar20 = ((fVar24 - fVar23) * fVar1) / _DAT_100700b54;
    uVar18 = ___sincosf_stret(fVar1 + fVar20);
    fVar21 = (float)((ulong)uVar18 >> 0x20) * fVar23;
    uVar19 = ___sincosf_stret(fVar20 - fVar1);
    fVar22 = (float)((ulong)uVar19 >> 0x20) * fVar24;
    fVar23 = fVar23 * (float)uVar18;
    fVar24 = fVar24 * (float)uVar19;
    fVar1 = *(float *)((long)plVar6 + lVar12 * 4 + 0x244);
    fVar20 = *(float *)((long)plVar6 + lVar12 * 4 + 0x29c);
    *(float *)((long)plVar6 + lVar12 * 4 + 0x504) = (fVar21 - fVar1) * fVar17;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x55c) = (fVar22 - fVar20) * fVar17;
    fVar2 = *(float *)((long)plVar6 + lVar12 * 4 + 0x2f4);
    *(float *)((long)plVar6 + lVar12 * 4 + 0x5b4) = (fVar23 - fVar2) * fVar17;
    fVar3 = *(float *)((long)plVar6 + lVar12 * 4 + 0x34c);
    *(float *)((long)plVar6 + lVar12 * 4 + 0x60c) = (fVar24 - fVar3) * fVar17;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x3a4) = fVar1;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x3fc) = fVar20;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x454) = fVar2;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x4ac) = fVar3;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x244) = fVar21;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x29c) = fVar22;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x2f4) = fVar23;
    *(float *)((long)plVar6 + lVar12 * 4 + 0x34c) = fVar24;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x16);
  return;
}

