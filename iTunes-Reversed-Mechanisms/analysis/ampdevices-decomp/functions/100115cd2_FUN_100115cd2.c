// name: FUN_100115cd2
// address: 100115cd2

undefined8 FUN_100115cd2(long param_1,long param_2,long param_3,long param_4)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + 8);
  uVar9 = (ulong)bVar2;
  bVar3 = *(byte *)(param_3 + 0xbdc);
  if (*(char *)(param_3 + 0xe8a) == '\0') {
    if (1 < bVar2) {
      fVar11 = *(float *)(param_3 + 0x780);
      lVar10 = 0;
      do {
        fVar11 = fVar11 + *(float *)(param_3 + 0x784 + lVar10 * 4);
        *(float *)(param_3 + 0x784 + lVar10 * 4) = fVar11;
        lVar10 = lVar10 + 1;
      } while (uVar9 - 1 != lVar10);
    }
  }
  else if (uVar9 != 0) {
    uVar7 = 0;
    do {
      *(float *)(param_3 + 0x780 + uVar7 * 4) =
           *(float *)(param_3 + 0x780 + uVar7 * 4) + *(float *)(param_4 + 0xc0 + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar9 != uVar7);
  }
  if (1 < bVar3) {
    if (*(char *)(param_3 + 0xe8b) == '\0') {
      if (bVar2 + 1 < (uint)bVar2 + (uint)bVar2) {
        lVar10 = param_3 + uVar9 * 4;
        lVar8 = lVar10 + 0x784;
        fVar11 = *(float *)(lVar10 + 0x780);
        lVar10 = 0;
        do {
          fVar11 = fVar11 + *(float *)(lVar8 + lVar10 * 4);
          *(float *)(lVar8 + lVar10 * 4) = fVar11;
          lVar10 = lVar10 + 1;
        } while (uVar9 - 1 != lVar10);
      }
    }
    else if (uVar9 != 0) {
      lVar10 = param_3 + (ulong)((uint)bVar2 * 4) + 0x780;
      uVar7 = 0;
      do {
        *(float *)(lVar10 + uVar7) =
             *(float *)(lVar10 + uVar7) + *(float *)(param_3 + 0x780 + uVar7);
        uVar7 = uVar7 + 4;
      } while ((uint)bVar2 * 4 != uVar7);
    }
  }
  fVar11 = DAT_100701d04;
  uVar4 = (uint)bVar2;
  uVar6 = bVar3 * uVar4;
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      fVar1 = *(float *)(param_3 + 0x780 + uVar7 * 4);
      fVar12 = fVar11;
      if ((fVar11 < fVar1) || (fVar12 = 0.0, fVar1 < 0.0)) {
        *(float *)(param_3 + 0x780 + uVar7 * 4) = fVar12;
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
  }
  if (uVar9 != 0) {
    uVar9 = 0;
    do {
      *(undefined4 *)(param_4 + 0xc0 + uVar9 * 4) =
           *(undefined4 *)(param_3 + 0x780 + (ulong)((bVar3 - 1) * uVar4 + (int)uVar9) * 4);
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
  }
  fVar11 = DAT_100701d08;
  if ((*(int *)(param_3 + 0xc10) == 0) && (uVar6 != 0)) {
    uVar9 = 0;
    do {
      iVar5 = (int)(fVar11 - *(float *)(param_3 + 0x780 + uVar9 * 4));
      if (iVar5 < -0x40) {
        return 0xfffffffe;
      }
      lVar10 = (long)iVar5;
      fVar1 = *(float *)(param_1 + 0xd550 + lVar10 * 4);
      *(float *)(param_3 + 0x780 + uVar9 * 4) = fVar1;
      fVar12 = *(float *)(param_1 + 0xd850 + lVar10 * 4);
      *(float *)(param_3 + 0x7a8 + uVar9 * 4) = fVar12;
      *(float *)(param_3 + 2000 + uVar9 * 4) = SQRT(fVar1 * fVar12);
      *(float *)(param_3 + 2000 + uVar9 * 4) =
           *(float *)(param_1 + 0xd6d0 + lVar10 * 4) * *(float *)(param_1 + 0xd9d0 + lVar10 * 4);
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar9);
  }
  return 0;
}

