// name: FUN_1001204a4
// address: 1001204a4

void FUN_1001204a4(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_2 + 0xbbd);
  if ((ulong)bVar1 != 0) {
    uVar5 = 0;
    do {
      **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 1;
      iVar2 = *(int *)(param_1 + 0x28);
      uVar6 = iVar2 + 1;
      *(uint *)(param_1 + 0x28) = uVar6;
      if (uVar6 < 0x20) {
        uVar6 = *(uint *)(param_1 + 0x2c);
        uVar4 = uVar6 * 2;
      }
      else if (uVar6 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar4 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar4;
        uVar6 = 0;
        if (uVar4 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
        }
        uVar4 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar6 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar2 + -0x1f;
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar3 + 4;
        uVar6 = *(uint *)(lVar3 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar4 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar6 = uVar4 >> (-(char)iVar2 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar4 = uVar4 << ((byte)(iVar2 + -0x1f) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar4;
      *(byte *)(param_2 + 0xe85 + uVar5) = (byte)(uVar6 >> 0x1f);
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  bVar1 = *(byte *)(param_2 + 0xbdc);
  if ((ulong)bVar1 != 0) {
    uVar5 = 0;
    do {
      **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 1;
      iVar2 = *(int *)(param_1 + 0x28);
      uVar6 = iVar2 + 1;
      *(uint *)(param_1 + 0x28) = uVar6;
      if (uVar6 < 0x20) {
        uVar6 = *(uint *)(param_1 + 0x2c);
        uVar4 = uVar6 * 2;
      }
      else if (uVar6 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar4 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar4;
        uVar6 = 0;
        if (uVar4 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
        }
        uVar4 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar6 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar2 + -0x1f;
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar3 + 4;
        uVar6 = *(uint *)(lVar3 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar4 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        uVar6 = uVar4 >> (-(char)iVar2 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar4 = uVar4 << ((byte)(iVar2 + -0x1f) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar4;
      *(byte *)(param_2 + 0xe8a + uVar5) = (byte)(uVar6 >> 0x1f);
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  return;
}

