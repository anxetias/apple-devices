// name: FUN_10012083c
// address: 10012083c

ulong FUN_10012083c(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  
  uVar11 = 0;
  bVar13 = *(int *)(param_2 + 0xc10) == 2;
  bVar9 = *(byte *)(param_2 + 0xbdc);
  if (bVar9 != 0) {
    bVar1 = *(byte *)(param_3 + 8);
    lVar8 = 0;
    uVar12 = 0;
    do {
      bVar2 = *(byte *)(param_2 + 0xe8a + uVar12);
      bVar4 = bVar2;
      if (bVar2 == 0) {
        **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 5;
        iVar10 = *(int *)(param_1 + 0x28);
        uVar6 = iVar10 + 5;
        *(uint *)(param_1 + 0x28) = uVar6;
        if (uVar6 < 0x20) {
          uVar6 = *(uint *)(param_1 + 0x2c);
          uVar7 = uVar6 << 5;
        }
        else if (uVar6 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar7 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar7;
          uVar6 = 0;
          if (uVar7 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
          }
          uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          uVar6 = *(uint *)(param_1 + 0x2c);
        }
        else {
          *(int *)(param_1 + 0x28) = iVar10 + -0x1b;
          lVar3 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar3 + 4;
          uVar6 = *(uint *)(lVar3 + 4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          uVar6 = uVar7 >> (-(char)iVar10 & 0x1fU) | *(uint *)(param_1 + 0x2c);
          uVar7 = uVar7 << ((byte)(iVar10 + -0x1b) & 0x1f);
        }
        *(uint *)(param_1 + 0x2c) = uVar7;
        *(float *)(param_2 + 0x780 + uVar12 * bVar1 * 4) = (float)(int)((uVar6 >> 0x1b) << bVar13);
        bVar4 = *(byte *)(param_2 + 0xe8a + uVar12);
      }
      uVar6 = 1 - bVar4;
      if (uVar6 < bVar1) {
        uVar11 = (ulong)uVar6 + lVar8;
        iVar10 = (uint)bVar4 + (bVar1 - 1);
        do {
          sVar5 = FUN_100121980(param_1,*(long *)(param_1 + 0xc128) +
                                        (ulong)(((uint)bVar2 << 2 | (uint)bVar13 * 2 + 9) << 4));
          *(float *)(param_2 + 0x780 + (uVar11 & 0xffffffff) * 4) = (float)((int)sVar5 << bVar13);
          uVar11 = uVar11 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        bVar9 = *(byte *)(param_2 + 0xbdc);
      }
      uVar12 = uVar12 + 1;
      uVar11 = (ulong)bVar9;
      lVar8 = lVar8 + (ulong)bVar1;
    } while (uVar12 < uVar11);
  }
  return uVar11;
}

