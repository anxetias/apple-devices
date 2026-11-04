// name: FUN_10011b1d2
// address: 10011b1d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011b1d2(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  float fVar1;
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
  byte bVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  float *pfVar36;
  float *pfVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  long local_48;
  
  if (*(char *)(param_5 + 0x19f5) != '\0') {
    bVar17 = *(byte *)(param_5 + 0x19f4);
    uVar41 = (ulong)bVar17;
    uVar32 = (ulong)((uint)bVar17 * 4);
    lVar38 = param_4 + uVar32 + -4;
    uVar29 = bVar17 - 1;
    lVar23 = (long)(int)(uVar29 * 5);
    lVar24 = (long)(int)(uVar29 * 5 + 1);
    lVar25 = (long)(int)(uVar29 * 5 + 2);
    lVar26 = (long)(int)(uVar29 * 5 + 3);
    lVar27 = (long)(int)(uVar29 * 5 + 4);
    local_48 = param_4 + -4;
    uVar28 = 0;
    do {
      pfVar18 = *(float **)(param_2 + uVar28 * 8);
      pfVar19 = *(float **)(param_3 + uVar28 * 8);
      if (bVar17 != 0) {
        lVar20 = *(long *)(param_5 + 0x1930);
        lVar21 = *(long *)(param_5 + 0x1938);
        uVar30 = 0;
        do {
          fVar1 = pfVar18[uVar30];
          pfVar18[uVar30] =
               *(float *)(lVar20 + uVar30 * 4) * fVar1 +
               *(float *)(lVar21 + uVar30 * 4) * pfVar19[uVar30];
          pfVar19[uVar30] =
               *(float *)(lVar20 + uVar30 * 4) * pfVar19[uVar30] -
               fVar1 * *(float *)(lVar21 + uVar30 * 4);
          uVar30 = uVar30 + 1;
        } while (uVar41 != uVar30);
      }
      FUN_100106696(param_1 + 8,pfVar18,pfVar19,param_5);
      uVar22 = _DAT_100700430;
      lVar21 = *(long *)(param_5 + 0x1910);
      lVar20 = lVar21 + (ulong)(*(uint *)(param_5 + 0x19f0) >> 1) * 4;
      lVar31 = *(long *)(param_5 + 0xf00);
      if (bVar17 < 2) {
        uVar33 = 0;
        uVar35 = 0;
      }
      else {
        lVar39 = 0x130;
        lVar40 = 0;
        lVar43 = 0;
        uVar33 = 0;
        lVar42 = local_48;
        pfVar36 = pfVar18;
        pfVar37 = pfVar19;
        do {
          pfVar37 = pfVar37 + -1;
          pfVar36 = pfVar36 + -1;
          fVar44 = *(float *)((long)pfVar36 + uVar32) - *(float *)((long)pfVar37 + uVar32);
          fVar46 = *(float *)((long)pfVar18 + lVar40) + *(float *)((long)pfVar19 + lVar40);
          fVar1 = *(float *)(lVar31 + 0x14 + lVar39 * 4);
          fVar2 = *(float *)(lVar21 + lVar43);
          fVar3 = *(float *)(lVar31 + 0x18 + lVar43 * 2);
          fVar4 = *(float *)(lVar20 + lVar43);
          fVar5 = *(float *)(lVar20 + 4 + lVar43);
          fVar6 = *(float *)(lVar31 + 0x10 + lVar39 * 4);
          fVar7 = *(float *)(lVar21 + 4 + lVar43);
          fVar8 = *(float *)(lVar31 + 0x1c + lVar43 * 2);
          fVar9 = *(float *)(lVar31 + 0xc + lVar39 * 4);
          fVar10 = *(float *)(lVar21 + 8 + lVar43);
          fVar11 = *(float *)(lVar20 + 8 + lVar43);
          fVar12 = *(float *)(lVar31 + 0x20 + lVar43 * 2);
          fVar13 = *(float *)(lVar31 + 8 + lVar39 * 4);
          fVar14 = *(float *)(lVar21 + 0xc + lVar43);
          fVar15 = *(float *)(lVar20 + 0xc + lVar43);
          fVar16 = *(float *)(lVar31 + 0x24 + lVar43 * 2);
          fVar45 = fVar44 * *(float *)(lVar31 + 4 + lVar39 * 4) + *(float *)(lVar21 + 0x10 + lVar43)
          ;
          *(float *)(lVar21 + lVar43) =
               (float)((uint)fVar46 ^ uVar22) * *(float *)(lVar31 + 0x14 + lVar43 * 2);
          *(float *)(lVar20 + lVar43) = fVar1 * fVar44 + fVar2;
          *(float *)(lVar21 + 4 + lVar43) = fVar4 - fVar3 * fVar46;
          *(float *)(lVar20 + 4 + lVar43) = fVar6 * fVar44 + fVar7;
          *(float *)(lVar21 + 8 + lVar43) = fVar5 - fVar8 * fVar46;
          *(float *)(lVar20 + 8 + lVar43) = fVar9 * fVar44 + fVar10;
          *(float *)(lVar21 + 0xc + lVar43) = fVar11 - fVar12 * fVar46;
          *(float *)(lVar20 + 0xc + lVar43) = fVar13 * fVar44 + fVar14;
          *(float *)(lVar21 + 0x10 + lVar43) = fVar15 - fVar46 * fVar16;
          *(float *)(lVar20 + 0x10 + lVar43) = fVar45;
          *(float *)(lVar42 + uVar32) = fVar45;
          uVar33 = uVar33 + 5;
          lVar39 = lVar39 + -10;
          lVar43 = lVar43 + 0x14;
          lVar42 = lVar42 + -4;
          lVar40 = lVar40 + 4;
        } while ((ulong)uVar29 * 0x14 != lVar43);
        lVar31 = lVar31 + lVar43;
        uVar35 = uVar29;
      }
      fVar46 = *(float *)((long)pfVar18 + ((ulong)((uint)bVar17 * 4) - 4)) +
               *(float *)((long)pfVar19 + ((ulong)((uint)bVar17 * 4) - 4));
      fVar44 = *pfVar18 - *pfVar19;
      uVar34 = (ulong)uVar33;
      fVar1 = *(float *)(lVar31 + 0x28 + uVar34 * 4);
      fVar2 = *(float *)(lVar31 + 0x18 + uVar34 * 4);
      fVar3 = *(float *)(lVar31 + 0x2c + uVar34 * 4);
      fVar4 = *(float *)(lVar31 + 0x1c + uVar34 * 4);
      fVar5 = *(float *)(lVar31 + 0x30 + uVar34 * 4);
      fVar6 = *(float *)(lVar31 + 0x20 + uVar34 * 4);
      fVar7 = *(float *)(lVar31 + 0x34 + uVar34 * 4);
      fVar8 = *(float *)(lVar31 + 0x24 + uVar34 * 4);
      uVar30 = (ulong)(uVar35 * 5);
      fVar9 = *(float *)(lVar20 + uVar30 * 4);
      fVar10 = *(float *)(lVar20 + 4 + uVar30 * 4);
      fVar11 = *(float *)(lVar21 + 4 + uVar30 * 4);
      fVar12 = *(float *)(lVar21 + 8 + uVar30 * 4);
      fVar13 = *(float *)(lVar20 + 8 + uVar30 * 4);
      fVar14 = *(float *)(lVar21 + 0xc + uVar30 * 4);
      fVar15 = *(float *)(lVar20 + 0xc + uVar30 * 4);
      fVar45 = fVar44 * *(float *)(lVar31 + 0x38 + uVar34 * 4) +
               *(float *)(lVar21 + 0x10 + uVar30 * 4);
      fVar16 = *(float *)(lVar21 + lVar23 * 4);
      *(float *)(lVar21 + lVar23 * 4) =
           (float)((uint)fVar46 ^ uVar22) * *(float *)(lVar31 + 0x14 + uVar34 * 4);
      *(float *)(lVar20 + lVar23 * 4) = fVar1 * fVar44 + fVar16;
      *(float *)(lVar21 + lVar24 * 4) = fVar9 - fVar2 * fVar46;
      *(float *)(lVar20 + lVar24 * 4) = fVar3 * fVar44 + fVar11;
      *(float *)(lVar21 + lVar25 * 4) = fVar10 - fVar4 * fVar46;
      *(float *)(lVar20 + lVar25 * 4) = fVar5 * fVar44 + fVar12;
      *(float *)(lVar21 + lVar26 * 4) = fVar13 - fVar6 * fVar46;
      *(float *)(lVar20 + lVar26 * 4) = fVar7 * fVar44 + fVar14;
      *(float *)(lVar21 + lVar27 * 4) = fVar15 - fVar46 * fVar8;
      *(float *)(lVar20 + lVar27 * 4) = fVar45;
      *(float *)(lVar38 + (1 - uVar41) * 4) = fVar45;
      lVar38 = lVar38 + uVar41 * 4;
      uVar28 = uVar28 + 1;
      local_48 = local_48 + uVar32;
    } while (uVar28 < *(byte *)(param_5 + 0x19f5));
  }
  return;
}

