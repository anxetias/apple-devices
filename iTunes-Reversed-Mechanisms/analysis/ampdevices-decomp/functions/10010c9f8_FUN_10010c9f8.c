// name: FUN_10010c9f8
// address: 10010c9f8

undefined4 FUN_10010c9f8(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xba8) + 8);
  uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0xba8) + 4);
  puVar1 = (uint *)(param_1 + 0x19338 + uVar12 * 4);
  puVar3[2] = puVar1;
  puVar3[5] = param_1 + 0x1ab84 + uVar12 * 8;
  puVar2 = (uint *)(param_1 + 0x19368 + uVar12 * 4);
  puVar3[1] = puVar2;
  puVar13 = (undefined1 *)(param_1 + uVar12 + 0x1ab6c);
  *puVar3 = puVar13;
  piVar4 = *(int **)(param_1 + 0x40);
  *piVar4 = *piVar4 + 1;
  iVar9 = *(int *)(param_1 + 0x28);
  uVar7 = iVar9 + 1;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 1;
  }
  else {
    if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar10 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar10;
      uVar7 = 0;
      if (uVar10 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
      }
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    }
    else {
      iVar9 = iVar9 + -0x1f;
      *(int *)(param_1 + 0x28) = iVar9;
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + 4;
      uVar7 = *(uint *)(lVar6 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) <<
              ((byte)iVar9 & 0x1f);
    }
    *(uint *)(param_1 + 0x2c) = uVar7;
  }
  *piVar4 = *piVar4 + 2;
  iVar9 = *(int *)(param_1 + 0x28);
  uVar7 = iVar9 + 2;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    uVar7 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar7 * 4;
  }
  else if (uVar7 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar7 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar7;
    uVar10 = 0;
    if (uVar7 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar10 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
    }
    uVar7 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar9 + -0x1e;
    lVar6 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar6 + 4;
    uVar7 = *(uint *)(lVar6 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = uVar10 >> (-(char)iVar9 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar10 << ((byte)(iVar9 + -0x1e) & 0x1f);
  }
  *puVar1 = uVar7 >> 0x1e;
  puVar5 = *(undefined4 **)(*(long *)(param_1 + 0x1abf0) + (ulong)(uVar7 >> 0x1e) * 8);
  uVar8 = *puVar5;
  *(undefined4 *)((long)puVar3 + 0x1b) = *(undefined4 *)((long)puVar5 + 3);
  *(undefined4 *)(puVar3 + 3) = uVar8;
  piVar4 = *(int **)(param_1 + 0x40);
  *piVar4 = *piVar4 + 1;
  iVar9 = *(int *)(param_1 + 0x28);
  uVar7 = iVar9 + 1;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    uVar7 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar7 * 2;
  }
  else if (uVar7 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar7 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar7;
    uVar10 = 0;
    if (uVar7 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar10 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
    }
    uVar7 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar9 + -0x1f;
    lVar6 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar6 + 4;
    uVar7 = *(uint *)(lVar6 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = uVar10 >> (-(char)iVar9 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar10 << ((byte)(iVar9 + -0x1f) & 0x1f);
  }
  *puVar2 = uVar7 >> 0x1f;
  uVar14 = (ulong)*(byte *)(puVar3 + 3);
  *(undefined4 *)(param_1 + uVar12 * 0x18 + 0x1aa48) = 0;
  if (uVar14 == 0) {
    *(undefined1 *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) = 0;
    **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 4;
    iVar9 = *(int *)(param_1 + 0x28);
    uVar7 = iVar9 + 4;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
           (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1c);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 4;
    }
    else {
      if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar10 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar10;
        uVar7 = 0;
        if (uVar10 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
        }
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
             (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar9 + -0x1c;
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + 4;
        uVar7 = *(uint *)(lVar6 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
             (byte)((byte)((uVar7 >> (-(char)iVar9 & 0x1fU)) >> 0x18) |
                   (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18)) >> 4;
        uVar7 = uVar7 << (*(byte *)(param_1 + 0x28) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar7;
    }
    uVar8 = FUN_10010ce48(param_1);
    *(undefined4 *)(param_1 + uVar12 * 0x1e4 + 0x19398) = 0;
  }
  else {
    *puVar13 = 0;
    *piVar4 = *piVar4 + 6;
    iVar9 = *(int *)(param_1 + 0x28);
    uVar7 = iVar9 + 6;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      *(byte *)*puVar3 = (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1a);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 6;
    }
    else {
      if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar10 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar10;
        uVar7 = 0;
        if (uVar10 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
        }
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        *(byte *)*puVar3 = (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1a);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar9 + -0x1a;
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + 4;
        uVar7 = *(uint *)(lVar6 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        *(byte *)*puVar3 =
             (byte)((byte)((uVar7 >> (-(char)iVar9 & 0x1fU)) >> 0x18) |
                   (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18)) >> 2;
        uVar7 = uVar7 << (*(byte *)(param_1 + 0x28) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar7;
    }
    *(undefined4 *)(puVar3 + 4) = 1;
    *(undefined1 *)puVar3[5] = 1;
    **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 1;
    iVar9 = *(int *)(param_1 + 0x28);
    uVar7 = iVar9 + 1;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 * 2;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar10 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar10 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar9 + -0x1f;
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + 4;
      uVar7 = *(uint *)(lVar6 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar10 >> (-(char)iVar9 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar10 << ((byte)(iVar9 + -0x1f) & 0x1f);
    }
    uVar8 = 0;
    if ((int)uVar7 < 0) {
      return 0xfffffffe;
    }
  }
  uVar11 = 0xfffffffe;
  if (*(byte *)*puVar3 <= *(byte *)(param_1 + 0x1dbba + uVar14)) {
    uVar11 = uVar8;
  }
  return uVar11;
}

