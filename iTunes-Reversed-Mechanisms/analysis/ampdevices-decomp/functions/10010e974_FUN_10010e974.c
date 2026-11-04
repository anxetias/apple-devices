// name: FUN_10010e974
// address: 10010e974

undefined8 FUN_10010e974(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  lVar5 = *(long *)(param_1 + 0xba8);
  lVar6 = *(long *)(lVar5 + 0xd28);
  pbVar7 = (byte *)**(undefined8 **)(lVar5 + 8);
  bVar3 = *pbVar7;
  piVar8 = *(int **)(param_1 + 0x40);
  *piVar8 = *piVar8 + 2;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar9 = iVar4 + 2;
  *(uint *)(param_1 + 0x28) = uVar9;
  if (uVar9 < 0x20) {
    uVar9 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar9 * 4;
  }
  else if (uVar9 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar9 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar9;
    uVar13 = 0;
    if (uVar9 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar13 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 4);
    }
    uVar9 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar4 + -0x1e;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar9 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar13 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = uVar13 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar13 << ((byte)(iVar4 + -0x1e) & 0x1f);
  }
  *(byte *)(lVar5 + 0xd34) = (byte)(uVar9 >> 0x1e) + 1;
  *piVar8 = *piVar8 + 6;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar13 = iVar4 + 6;
  *(uint *)(param_1 + 0x28) = uVar13;
  if (uVar13 < 0x20) {
    uVar13 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar13 << 6;
  }
  else if (uVar13 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar13 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar13;
    uVar15 = 0;
    if (uVar13 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar15 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar13 * 4);
    }
    uVar13 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar4 + -0x1a;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar13 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar15 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    uVar13 = uVar15 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar15 << ((byte)(iVar4 + -0x1a) & 0x1f);
  }
  uVar13 = uVar13 >> 0x1a;
  uVar11 = 0xfffffffe;
  if (uVar13 < *pbVar7) {
    uVar17 = (uint)*(ushort *)(lVar6 + (ulong)uVar13 * 2);
    uVar15 = (uint)*(ushort *)(lVar6 + 2 + (ulong)uVar13 * 2);
    uVar14 = 0;
    do {
      *piVar8 = *piVar8 + 5;
      iVar4 = *(int *)(param_1 + 0x28);
      uVar16 = iVar4 + 5;
      *(uint *)(param_1 + 0x28) = uVar16;
      if (uVar16 < 0x20) {
        uVar16 = *(uint *)(param_1 + 0x2c);
        uVar10 = uVar16 << 5;
      }
      else if (uVar16 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar10 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar10;
        uVar16 = 0;
        if (uVar10 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar16 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
        }
        uVar10 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        uVar16 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar4 + -0x1b;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar16 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar10 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        uVar16 = uVar10 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar10 = uVar10 << ((byte)(iVar4 + -0x1b) & 0x1f);
      }
      puVar1 = (undefined2 *)(lVar5 + 0xd3c + uVar14 * 0xc);
      *(uint *)(param_1 + 0x2c) = uVar10;
      uVar17 = uVar17 + (uVar16 >> 0x1b);
      *puVar1 = (short)uVar17;
      *piVar8 = *piVar8 + 4;
      iVar4 = *(int *)(param_1 + 0x28);
      uVar16 = iVar4 + 4;
      *(uint *)(param_1 + 0x28) = uVar16;
      if (uVar16 < 0x20) {
        uVar16 = *(uint *)(param_1 + 0x2c);
        uVar10 = uVar16 << 4;
      }
      else if (uVar16 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar10 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar10;
        uVar16 = 0;
        if (uVar10 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar16 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
        }
        uVar10 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        uVar16 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar4 + -0x1c;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar16 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar10 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        uVar16 = uVar10 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar10 = uVar10 << ((byte)(iVar4 + -0x1c) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar10;
      *(byte *)(puVar1 + 1) = (byte)(uVar16 >> 0x1c);
      uVar16 = (uint)bVar3;
      if (uVar13 < uVar16) {
        uVar12 = (ulong)(int)uVar13;
        while (uVar15 <= uVar17) {
          uVar13 = uVar13 + 1;
          if (uVar16 <= uVar13) {
            return 0xfffffffe;
          }
          lVar2 = uVar12 * 2;
          uVar12 = uVar12 + 1;
          uVar15 = (uint)*(ushort *)(lVar6 + 4 + lVar2);
        }
        uVar13 = (uint)uVar12;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(lVar5 + 0x3ac + (uVar12 & 0xffffffff) * 4);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != (uVar9 >> 0x1e) + 1);
    uVar11 = 0;
  }
  return uVar11;
}

