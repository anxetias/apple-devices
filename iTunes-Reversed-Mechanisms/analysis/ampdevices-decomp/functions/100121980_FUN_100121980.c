// name: FUN_100121980
// address: 100121980

int FUN_100121980(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar11 = *(uint *)(param_1 + 0x2c);
  }
  else {
    uVar11 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
    uVar11 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18)
             >> (-(char)*(int *)(param_1 + 0x28) & 0x1fU) | *(uint *)(param_1 + 0x2c);
  }
  uVar4 = uVar11 ^ 0xffffffff;
  if (uVar4 == 0) {
    uVar7 = 0x20;
  }
  else {
    uVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    uVar7 = uVar7 ^ 0x1f;
  }
  uVar5 = *(byte *)(param_2 + 1) - 1;
  uVar4 = uVar5;
  if (uVar7 < uVar5) {
    uVar4 = uVar7;
  }
  plVar8 = (long *)((ulong)uVar4 * 0x38 + *param_2);
  if (uVar7 < uVar5) {
    uVar11 = uVar11 << ((byte)uVar7 & 0x1f);
    uVar7 = (uint)*(byte *)(plVar8 + 5);
    uVar10 = (ulong)(uVar11 >> (-*(byte *)(plVar8 + 5) & 0x1f));
    if (*(short *)(*plVar8 + uVar10 * 2) == 0) {
      uVar3 = 1;
      do {
        uVar9 = uVar3;
        bVar1 = *(byte *)((long)plVar8 + uVar9 + 0x28);
        uVar7 = (uint)bVar1;
        uVar10 = (ulong)(uVar11 >> (-bVar1 & 0x1f));
        uVar3 = (ulong)((int)uVar9 + 1);
      } while (*(short *)(plVar8[uVar9] + uVar10 * 2) == 0);
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0;
    uVar10 = 0;
    uVar7 = 0;
  }
  iVar6 = uVar7 + uVar4;
  **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + iVar6;
  uVar11 = *(int *)(param_1 + 0x28) + iVar6;
  *(uint *)(param_1 + 0x28) = uVar11;
  if (uVar11 < 0x20) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << ((byte)iVar6 & 0x1f);
  }
  else if (uVar11 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar4 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar4;
    uVar11 = 0;
    if (uVar4 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar11 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
    }
    *(uint *)(param_1 + 0x2c) =
         uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar11 - 0x20;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar4 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x2c) =
         (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) <<
         ((byte)uVar11 & 0x1f);
  }
  return (int)(short)(*(short *)(plVar8[uVar9] + uVar10 * 2) + 0x40);
}

