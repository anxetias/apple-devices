// name: FUN_1001210fa
// address: 1001210fa

undefined8 FUN_1001210fa(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  
  lVar4 = *(long *)(param_2 + 0x18);
  bVar3 = *(byte *)(param_2 + 8);
  lVar5 = *(long *)(param_1 + 0xc108);
  *(uint *)(lVar5 + 3000) = (uint)bVar3;
  lVar6 = *(long *)(param_1 + 0xc110);
  *(uint *)(lVar6 + 3000) = (uint)bVar3;
  piVar7 = *(int **)(param_1 + 0x40);
  *piVar7 = *piVar7 + 1;
  iVar21 = *(int *)(param_1 + 0x28);
  uVar20 = iVar21 + 1;
  *(uint *)(param_1 + 0x28) = uVar20;
  if (uVar20 < 0x20) {
    uVar20 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar20 * 2;
  }
  else if (uVar20 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar20 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar20;
    uVar29 = 0;
    if (uVar20 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar29 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar20 * 4);
    }
    uVar20 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar21 + -0x1f;
    lVar8 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar8 + 4;
    uVar20 = *(uint *)(lVar8 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar29 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    uVar20 = uVar29 >> (-(char)iVar21 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar29 << ((byte)(iVar21 + -0x1f) & 0x1f);
  }
  if ((int)uVar20 < 0) {
    *piVar7 = *piVar7 + 1;
    iVar21 = *(int *)(param_1 + 0x28);
    uVar20 = iVar21 + 1;
    *(uint *)(param_1 + 0x28) = uVar20;
    if (uVar20 < 0x20) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 1;
    }
    else if (uVar20 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar29 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar29;
      uVar20 = 0;
      if (uVar29 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar20 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar29 * 4);
      }
      *(uint *)(param_1 + 0x2c) =
           uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    }
    else {
      iVar21 = iVar21 + -0x1f;
      *(int *)(param_1 + 0x28) = iVar21;
      lVar8 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar8 + 4;
      uVar20 = *(uint *)(lVar8 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x2c) =
           (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18) <<
           ((byte)iVar21 & 0x1f);
    }
    *piVar7 = *piVar7 + 1;
    iVar21 = *(int *)(param_1 + 0x28);
    uVar20 = iVar21 + 1;
    *(uint *)(param_1 + 0x28) = uVar20;
    if (uVar20 < 0x20) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 1;
    }
    else if (uVar20 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar29 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar29;
      uVar20 = 0;
      if (uVar29 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar20 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar29 * 4);
      }
      *(uint *)(param_1 + 0x2c) =
           uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    }
    else {
      iVar21 = iVar21 + -0x1f;
      *(int *)(param_1 + 0x28) = iVar21;
      lVar8 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar8 + 4;
      uVar20 = *(uint *)(lVar8 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x2c) =
           (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18) <<
           ((byte)iVar21 & 0x1f);
    }
  }
  *piVar7 = *piVar7 + 1;
  iVar21 = *(int *)(param_1 + 0x28);
  uVar20 = iVar21 + 1;
  *(uint *)(param_1 + 0x28) = uVar20;
  if (uVar20 < 0x20) {
    uVar20 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar20 * 2;
  }
  else if (uVar20 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar20 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar20;
    uVar29 = 0;
    if (uVar20 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar29 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar20 * 4);
    }
    uVar20 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar21 + -0x1f;
    lVar8 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar8 + 4;
    uVar20 = *(uint *)(lVar8 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar29 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    uVar20 = uVar29 >> (-(char)iVar21 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar29 << ((byte)(iVar21 + -0x1f) & 0x1f);
  }
  *(uint *)(lVar5 + 0xc10) = uVar20 >> 0x1f;
  *(uint *)(lVar6 + 0xc10) = uVar20 >> 0x1e & 0xfffffffe;
  uVar27 = (ulong)*(byte *)(lVar4 + 0x1a);
  iVar21 = FUN_10011f412(param_1);
  if (iVar21 == 0) {
    lVar5 = *(long *)(param_1 + 0xc108);
    lVar6 = *(long *)(param_1 + 0xc110);
    if (*(int *)(lVar5 + 0xc10) == 0) {
      iVar21 = FUN_10011f412(param_1);
      if (iVar21 != 0) {
        return 0xfffffffe;
      }
      FUN_1001204a4(param_1,*(undefined8 *)(param_1 + 0xc108));
      FUN_1001204a4(param_1,*(undefined8 *)(param_1 + 0xc110));
      fVar19 = DAT_100701d18;
      fVar18 = DAT_100701d14;
      uVar20 = DAT_100700b50;
      if (uVar27 != 0) {
        piVar7 = *(int **)(param_1 + 0x40);
        lVar5 = *(long *)(param_1 + 0xc148);
        lVar6 = *(long *)(param_1 + 0xc118);
        lVar8 = *(long *)(param_1 + 0xc108);
        uVar28 = 0;
        do {
          *piVar7 = *piVar7 + 2;
          iVar21 = *(int *)(param_1 + 0x28);
          uVar29 = iVar21 + 2;
          *(uint *)(param_1 + 0x28) = uVar29;
          if (uVar29 < 0x20) {
            uVar26 = *(uint *)(param_1 + 0x2c);
            uVar29 = uVar26 * 4;
          }
          else if (uVar29 == 0x20) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar26 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar26;
            uVar29 = 0;
            if (uVar26 < *(uint *)(param_1 + 0x34)) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
              uVar29 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar26 * 4);
            }
            uVar29 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                     uVar29 << 0x18;
            uVar26 = *(uint *)(param_1 + 0x2c);
          }
          else {
            *(int *)(param_1 + 0x28) = iVar21 + -0x1e;
            lVar9 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar9 + 4;
            uVar29 = *(uint *)(lVar9 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar29 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                     uVar29 << 0x18;
            uVar26 = uVar29 >> (-(char)iVar21 & 0x1fU) | *(uint *)(param_1 + 0x2c);
            uVar29 = uVar29 << ((byte)(iVar21 + -0x1e) & 0x1f);
          }
          *(uint *)(param_1 + 0x2c) = uVar29;
          fVar30 = *(float *)((ulong)((uVar26 >> 0x1e) << 4) + lVar5 +
                             (ulong)*(uint *)(lVar6 + 0x100 + uVar28 * 4) * 4);
          fVar1 = *(float *)(lVar6 + 0xd4 + uVar28 * 4);
          uVar23 = (ulong)(fVar1 <= fVar30);
          fVar30 = fVar30 * *(float *)(&DAT_100707860 + uVar23 * 8) +
                   fVar1 * *(float *)(&DAT_100707864 + uVar23 * 8);
          fVar30 = (float)(-(uint)(fVar18 <= fVar30) & uVar20) * fVar30;
          if (fVar19 <= fVar30) {
            fVar30 = fVar19;
          }
          *(float *)(lVar8 + 0xbe0 + uVar28 * 4) = fVar30;
          *(float *)(lVar8 + 0xbf8 + uVar28 * 4) = fVar30 * fVar30;
          *(float *)(lVar6 + 0xd4 + uVar28 * 4) = fVar30;
          *(uint *)(lVar6 + 0x100 + uVar28 * 4) = uVar26 >> 0x1e;
          uVar28 = uVar28 + 1;
        } while (uVar27 != uVar28);
      }
      fVar19 = DAT_100701d18;
      fVar18 = DAT_100701d14;
      uVar20 = DAT_100700b50;
      bVar3 = *(byte *)(lVar4 + 0x1a);
      if ((ulong)bVar3 != 0) {
        piVar7 = *(int **)(param_1 + 0x40);
        lVar5 = *(long *)(param_1 + 0xc148);
        lVar6 = *(long *)(param_1 + 0xc120);
        lVar8 = *(long *)(param_1 + 0xc110);
        uVar27 = 0;
        do {
          *piVar7 = *piVar7 + 2;
          iVar21 = *(int *)(param_1 + 0x28);
          uVar29 = iVar21 + 2;
          *(uint *)(param_1 + 0x28) = uVar29;
          if (uVar29 < 0x20) {
            uVar26 = *(uint *)(param_1 + 0x2c);
            uVar29 = uVar26 * 4;
          }
          else if (uVar29 == 0x20) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar26 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar26;
            uVar29 = 0;
            if (uVar26 < *(uint *)(param_1 + 0x34)) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
              uVar29 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar26 * 4);
            }
            uVar29 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                     uVar29 << 0x18;
            uVar26 = *(uint *)(param_1 + 0x2c);
          }
          else {
            *(int *)(param_1 + 0x28) = iVar21 + -0x1e;
            lVar9 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar9 + 4;
            uVar29 = *(uint *)(lVar9 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar29 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                     uVar29 << 0x18;
            uVar26 = uVar29 >> (-(char)iVar21 & 0x1fU) | *(uint *)(param_1 + 0x2c);
            uVar29 = uVar29 << ((byte)(iVar21 + -0x1e) & 0x1f);
          }
          *(uint *)(param_1 + 0x2c) = uVar29;
          fVar30 = *(float *)((ulong)((uVar26 >> 0x1e) << 4) + lVar5 +
                             (ulong)*(uint *)(lVar6 + 0x100 + uVar27 * 4) * 4);
          fVar1 = *(float *)(lVar6 + 0xd4 + uVar27 * 4);
          uVar28 = (ulong)(fVar1 <= fVar30);
          fVar30 = fVar30 * *(float *)(&DAT_100707860 + uVar28 * 8) +
                   fVar1 * *(float *)(&DAT_100707864 + uVar28 * 8);
          fVar30 = (float)(-(uint)(fVar18 <= fVar30) & uVar20) * fVar30;
          if (fVar19 <= fVar30) {
            fVar30 = fVar19;
          }
          *(float *)(lVar8 + 0xbe0 + uVar27 * 4) = fVar30;
          *(float *)(lVar8 + 0xbf8 + uVar27 * 4) = fVar30 * fVar30;
          *(float *)(lVar6 + 0xd4 + uVar27 * 4) = fVar30;
          *(uint *)(lVar6 + 0x100 + uVar27 * 4) = uVar26 >> 0x1e;
          uVar27 = uVar27 + 1;
        } while (bVar3 != uVar27);
      }
      FUN_100120606(param_1,*(undefined8 *)(param_1 + 0xc108),lVar4);
      FUN_100120606(param_1,*(undefined8 *)(param_1 + 0xc110),lVar4);
      FUN_10012083c(param_1,*(undefined8 *)(param_1 + 0xc108),lVar4);
      FUN_10012083c(param_1,*(undefined8 *)(param_1 + 0xc110),lVar4);
    }
    else {
      *(undefined4 *)(lVar6 + 0xbdc) = *(undefined4 *)(lVar5 + 0xbdc);
      uVar11 = *(undefined4 *)(lVar5 + 0xbbc);
      uVar12 = *(undefined4 *)(lVar5 + 0xbc0);
      uVar13 = *(undefined4 *)(lVar5 + 0xbc4);
      uVar14 = *(undefined4 *)(lVar5 + 0xbc8);
      uVar15 = *(undefined4 *)(lVar5 + 0xbd0);
      uVar16 = *(undefined4 *)(lVar5 + 0xbd4);
      uVar17 = *(undefined4 *)(lVar5 + 0xbd8);
      *(undefined4 *)(lVar6 + 0xbcc) = *(undefined4 *)(lVar5 + 0xbcc);
      *(undefined4 *)(lVar6 + 0xbd0) = uVar15;
      *(undefined4 *)(lVar6 + 0xbd4) = uVar16;
      *(undefined4 *)(lVar6 + 0xbd8) = uVar17;
      *(undefined4 *)(lVar6 + 0xbbc) = uVar11;
      *(undefined4 *)(lVar6 + 0xbc0) = uVar12;
      *(undefined4 *)(lVar6 + 0xbc4) = uVar13;
      *(undefined4 *)(lVar6 + 0xbc8) = uVar14;
      FUN_1001204a4(param_1,*(undefined8 *)(param_1 + 0xc108));
      FUN_1001204a4(param_1,*(undefined8 *)(param_1 + 0xc110));
      fVar19 = DAT_100701d18;
      fVar18 = DAT_100701d14;
      uVar20 = DAT_100700b50;
      lVar5 = *(long *)(param_1 + 0xc108);
      if (uVar27 != 0) {
        piVar7 = *(int **)(param_1 + 0x40);
        lVar6 = *(long *)(param_1 + 0xc148);
        lVar8 = *(long *)(param_1 + 0xc118);
        lVar9 = *(long *)(param_1 + 0xc120);
        lVar10 = *(long *)(param_1 + 0xc110);
        uVar28 = 0;
        do {
          *piVar7 = *piVar7 + 2;
          iVar21 = *(int *)(param_1 + 0x28);
          uVar29 = iVar21 + 2;
          *(uint *)(param_1 + 0x28) = uVar29;
          if (uVar29 < 0x20) {
            uVar26 = *(uint *)(param_1 + 0x2c);
            uVar29 = uVar26 * 4;
          }
          else if (uVar29 == 0x20) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar26 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar26;
            uVar29 = 0;
            if (uVar26 < *(uint *)(param_1 + 0x34)) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
              uVar29 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar26 * 4);
            }
            uVar29 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                     uVar29 << 0x18;
            uVar26 = *(uint *)(param_1 + 0x2c);
          }
          else {
            *(int *)(param_1 + 0x28) = iVar21 + -0x1e;
            lVar22 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar22 + 4;
            uVar29 = *(uint *)(lVar22 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar29 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 |
                     uVar29 << 0x18;
            uVar26 = uVar29 >> (-(char)iVar21 & 0x1fU) | *(uint *)(param_1 + 0x2c);
            uVar29 = uVar29 << ((byte)(iVar21 + -0x1e) & 0x1f);
          }
          *(uint *)(param_1 + 0x2c) = uVar29;
          uVar26 = uVar26 >> 0x1e;
          lVar22 = (ulong)(uVar26 << 4) + lVar6;
          fVar30 = *(float *)(lVar22 + (ulong)*(uint *)(lVar8 + 0x100 + uVar28 * 4) * 4);
          fVar1 = *(float *)(lVar22 + (ulong)*(uint *)(lVar9 + 0x100 + uVar28 * 4) * 4);
          fVar31 = *(float *)(lVar8 + 0xd4 + uVar28 * 4);
          fVar2 = *(float *)(lVar9 + 0xd4 + uVar28 * 4);
          uVar23 = (ulong)(fVar31 <= fVar30);
          uVar25 = (ulong)(fVar2 <= fVar1);
          fVar31 = fVar30 * *(float *)(&DAT_100707860 + uVar23 * 8) +
                   fVar31 * *(float *)(&DAT_100707864 + uVar23 * 8);
          fVar30 = fVar1 * *(float *)(&DAT_100707860 + uVar25 * 8) +
                   fVar2 * *(float *)(&DAT_100707864 + uVar25 * 8);
          fVar31 = (float)(-(uint)(fVar18 <= fVar31) & uVar20) * fVar31;
          fVar30 = (float)(-(uint)(fVar18 <= fVar30) & uVar20) * fVar30;
          if (fVar19 <= fVar31) {
            fVar31 = fVar19;
          }
          if (fVar19 <= fVar30) {
            fVar30 = fVar19;
          }
          *(float *)(lVar5 + 0xbe0 + uVar28 * 4) = fVar31;
          *(float *)(lVar10 + 0xbe0 + uVar28 * 4) = fVar30;
          *(float *)(lVar5 + 0xbf8 + uVar28 * 4) = fVar31 * fVar31;
          *(float *)(lVar10 + 0xbf8 + uVar28 * 4) = fVar30 * fVar30;
          *(float *)(lVar8 + 0xd4 + uVar28 * 4) = fVar31;
          *(float *)(lVar9 + 0xd4 + uVar28 * 4) = fVar30;
          *(uint *)(lVar8 + 0x100 + uVar28 * 4) = uVar26;
          *(uint *)(lVar9 + 0x100 + uVar28 * 4) = uVar26;
          *(undefined4 *)(lVar10 + 3000) = *(undefined4 *)(lVar5 + 3000);
          uVar28 = uVar28 + 1;
        } while (uVar27 != uVar28);
      }
      FUN_100120606(param_1,lVar5,lVar4);
      FUN_10012083c(param_1,*(undefined8 *)(param_1 + 0xc108),lVar4);
      FUN_100120606(param_1,*(undefined8 *)(param_1 + 0xc110),lVar4);
      FUN_10012083c(param_1,*(undefined8 *)(param_1 + 0xc110),lVar4);
    }
    FUN_100120a06(param_1,*(undefined8 *)(param_1 + 0xc108),*(undefined8 *)(param_1 + 0xc118),lVar4)
    ;
    FUN_100120a06(param_1,*(undefined8 *)(param_1 + 0xc110),*(undefined8 *)(param_1 + 0xc120),lVar4)
    ;
    uVar24 = FUN_100120d74(param_1,param_2);
    return uVar24;
  }
  return 0xfffffffe;
}

