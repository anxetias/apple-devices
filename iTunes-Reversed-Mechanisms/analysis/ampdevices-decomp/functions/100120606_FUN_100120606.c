// name: FUN_100120606
// address: 100120606

int FUN_100120606(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  bool bVar15;
  
  bVar1 = *(byte *)(param_2 + 0xbbd);
  bVar15 = *(int *)(param_2 + 0xc10) == 2;
  if ((ulong)bVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 3000);
    uVar8 = (bVar15 ^ 7) - uVar3;
    bVar4 = (byte)uVar8;
    uVar14 = 0;
    uVar5 = 0;
    uVar10 = 0;
    do {
      bVar6 = *(byte *)(param_2 + 0xe85 + uVar14);
      if (bVar6 == 0) {
        uVar13 = 0;
        if ((bVar15 ^ 7) != uVar3) {
          **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + uVar8;
          uVar9 = *(int *)(param_1 + 0x28) + uVar8;
          *(uint *)(param_1 + 0x28) = uVar9;
          if (uVar9 < 0x20) {
            uVar13 = *(uint *)(param_1 + 0x2c);
            uVar9 = uVar8;
            uVar11 = uVar13;
LAB_100120730:
            uVar11 = uVar11 << ((byte)uVar9 & 0x1f);
          }
          else {
            if (uVar9 != 0x20) {
              *(uint *)(param_1 + 0x28) = uVar9 - 0x20;
              lVar12 = *(long *)(param_1 + 0x10);
              *(long *)(param_1 + 0x10) = lVar12 + 4;
              uVar13 = *(uint *)(lVar12 + 4);
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
              uVar11 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                       uVar13 << 0x18;
              uVar13 = uVar11 >> (bVar4 - (char)(uVar9 - 0x20) & 0x1f) | *(uint *)(param_1 + 0x2c);
              goto LAB_100120730;
            }
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar9 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar9;
            uVar13 = 0;
            if (uVar9 < *(uint *)(param_1 + 0x34)) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
              uVar13 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 4);
            }
            uVar11 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18;
            uVar13 = uVar11 >> (bVar4 & 0x1f) | *(uint *)(param_1 + 0x2c);
          }
          uVar13 = uVar13 >> (0x20 - bVar4 & 0x1f);
          *(uint *)(param_1 + 0x2c) = uVar11;
        }
        *(float *)(param_2 + (ulong)uVar5 * 4) = (float)(uVar13 << bVar15);
        bVar6 = *(byte *)(param_2 + 0xe85 + uVar14);
      }
      bVar2 = *(byte *)(param_3 + (ulong)*(uint *)(param_2 + 0xbc4 + uVar14 * 4));
      uVar13 = 1 - bVar6;
      if (uVar13 < bVar2) {
        lVar12 = 0;
        do {
          sVar7 = FUN_100121980(param_1);
          *(float *)(((ulong)uVar5 + (ulong)uVar13) * 4 + param_2 + lVar12 * 4) =
               (float)((int)sVar7 << bVar15);
          lVar12 = lVar12 + 1;
        } while ((uint)bVar6 + (uint)bVar2 + -1 != (int)lVar12);
      }
      uVar10 = uVar10 + bVar2;
      uVar5 = uVar5 + bVar2;
      uVar14 = uVar14 + 1;
    } while (uVar14 != bVar1);
  }
  *(char *)(param_2 + 0xe8c) = (char)uVar10;
  return (uint)((~uVar10 & 0xf0) != 0) * 2 + -2;
}

