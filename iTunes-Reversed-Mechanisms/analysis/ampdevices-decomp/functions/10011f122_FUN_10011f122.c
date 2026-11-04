// name: FUN_10011f122
// address: 10011f122

undefined8 FUN_10011f122(long param_1,long param_2)

{
  float fVar1;
  byte bVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  float fVar18;
  
  lVar3 = *(long *)(param_2 + 0x18);
  *(uint *)(*(long *)(param_1 + 0xc108) + 3000) = (uint)*(byte *)(param_2 + 8);
  piVar4 = *(int **)(param_1 + 0x40);
  *piVar4 = *piVar4 + 1;
  iVar12 = *(int *)(param_1 + 0x28);
  uVar11 = iVar12 + 1;
  *(uint *)(param_1 + 0x28) = uVar11;
  if (uVar11 < 0x20) {
    uVar11 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar11 * 2;
  }
  else if (uVar11 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar11 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar11;
    uVar17 = 0;
    if (uVar11 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar17 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 4);
    }
    uVar11 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar12 + -0x1f;
    lVar5 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar5 + 4;
    uVar11 = *(uint *)(lVar5 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar17 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar11 = uVar17 >> (-(char)iVar12 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar17 << ((byte)(iVar12 + -0x1f) & 0x1f);
  }
  if ((int)uVar11 < 0) {
    *piVar4 = *piVar4 + 1;
    iVar12 = *(int *)(param_1 + 0x28);
    uVar11 = iVar12 + 1;
    *(uint *)(param_1 + 0x28) = uVar11;
    if (uVar11 < 0x20) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 1;
    }
    else if (uVar11 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar17 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar17;
      uVar11 = 0;
      if (uVar17 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar11 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar17 * 4);
      }
      *(uint *)(param_1 + 0x2c) =
           uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    }
    else {
      iVar12 = iVar12 + -0x1f;
      *(int *)(param_1 + 0x28) = iVar12;
      lVar5 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar5 + 4;
      uVar11 = *(uint *)(lVar5 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x2c) =
           (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) <<
           ((byte)iVar12 & 0x1f);
    }
  }
  iVar12 = FUN_10011f412(param_1);
  if (iVar12 == 0) {
    FUN_1001204a4(param_1,*(undefined8 *)(param_1 + 0xc108));
    fVar10 = DAT_100701d18;
    fVar9 = DAT_100701d14;
    uVar11 = DAT_100700b50;
    bVar2 = *(byte *)(lVar3 + 0x1a);
    lVar5 = *(long *)(param_1 + 0xc108);
    if ((ulong)bVar2 != 0) {
      piVar4 = *(int **)(param_1 + 0x40);
      lVar6 = *(long *)(param_1 + 0xc148);
      lVar7 = *(long *)(param_1 + 0xc118);
      uVar16 = 0;
      do {
        *piVar4 = *piVar4 + 2;
        iVar12 = *(int *)(param_1 + 0x28);
        uVar17 = iVar12 + 2;
        *(uint *)(param_1 + 0x28) = uVar17;
        if (uVar17 < 0x20) {
          uVar13 = *(uint *)(param_1 + 0x2c);
          uVar17 = uVar13 * 4;
        }
        else if (uVar17 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar13 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar13;
          uVar17 = 0;
          if (uVar13 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar17 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar13 * 4);
          }
          uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                   uVar17 << 0x18;
          uVar13 = *(uint *)(param_1 + 0x2c);
        }
        else {
          *(int *)(param_1 + 0x28) = iVar12 + -0x1e;
          lVar8 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar8 + 4;
          uVar17 = *(uint *)(lVar8 + 4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                   uVar17 << 0x18;
          uVar13 = uVar17 >> (-(char)iVar12 & 0x1fU) | *(uint *)(param_1 + 0x2c);
          uVar17 = uVar17 << ((byte)(iVar12 + -0x1e) & 0x1f);
        }
        *(uint *)(param_1 + 0x2c) = uVar17;
        fVar18 = *(float *)((ulong)((uVar13 >> 0x1e) << 4) + lVar6 +
                           (ulong)*(uint *)(lVar7 + 0x100 + uVar16 * 4) * 4);
        fVar1 = *(float *)(lVar7 + 0xd4 + uVar16 * 4);
        uVar15 = (ulong)(fVar1 <= fVar18);
        fVar18 = fVar18 * *(float *)(&DAT_100707860 + uVar15 * 8) +
                 fVar1 * *(float *)(&DAT_100707864 + uVar15 * 8);
        fVar18 = (float)(-(uint)(fVar9 <= fVar18) & uVar11) * fVar18;
        if (fVar10 <= fVar18) {
          fVar18 = fVar10;
        }
        *(float *)(lVar5 + 0xbe0 + uVar16 * 4) = fVar18;
        *(float *)(lVar5 + 0xbf8 + uVar16 * 4) = fVar18 * fVar18;
        *(float *)(lVar7 + 0xd4 + uVar16 * 4) = fVar18;
        *(uint *)(lVar7 + 0x100 + uVar16 * 4) = uVar13 >> 0x1e;
        uVar16 = uVar16 + 1;
      } while (bVar2 != uVar16);
    }
    FUN_100120606(param_1,lVar5,lVar3);
    FUN_10012083c(param_1,*(undefined8 *)(param_1 + 0xc108),lVar3);
    FUN_100120a06(param_1,*(undefined8 *)(param_1 + 0xc108),*(undefined8 *)(param_1 + 0xc118),lVar3)
    ;
    uVar14 = FUN_100120d74(param_1,param_2);
    *(undefined4 *)(*(long *)(param_1 + 0xc108) + 0xc10) = 0;
  }
  else {
    uVar14 = 0xfffffffe;
  }
  return uVar14;
}

