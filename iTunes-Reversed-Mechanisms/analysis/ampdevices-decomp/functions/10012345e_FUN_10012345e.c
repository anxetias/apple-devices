// name: FUN_10012345e
// address: 10012345e

undefined8 FUN_10012345e(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 local_3c;
  long local_38;
  
  puVar8 = (uint *)*param_2;
  uVar9 = ((puVar8[1] >> 2) + 1) - (uint)((puVar8[1] & 3) == 0);
  *(uint *)(param_1 + 0x34) = uVar9;
  uVar7 = *puVar8;
  uVar4 = uVar7 >> 5;
  *(uint *)(param_1 + 0x18) = uVar4;
  if (uVar4 < uVar9) {
    *(uint **)(param_1 + 0x40) = puVar8;
    lVar2 = *(long *)(puVar8 + 2);
    *(long *)(param_1 + 0x20) = lVar2;
    uVar7 = uVar7 & 0x1f;
    *(uint *)(param_1 + 0x28) = uVar7;
    puVar1 = (uint *)(lVar2 + (ulong)uVar4 * 4);
    uVar4 = *puVar1;
    *(uint *)(param_1 + 0x2c) =
         (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) <<
         (sbyte)uVar7;
    *(uint **)(param_1 + 0x10) = puVar1;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x40);
  }
  *puVar8 = *puVar8 + 4;
  iVar5 = *(int *)(param_1 + 0x28);
  uVar7 = iVar5 + 4;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 4;
  }
  else if (uVar7 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar4 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar4;
    uVar7 = 0;
    if (uVar4 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
    }
    *(uint *)(param_1 + 0x2c) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  }
  else {
    iVar5 = iVar5 + -0x1c;
    *(int *)(param_1 + 0x28) = iVar5;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar7 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x2c) =
         (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) <<
         ((byte)iVar5 & 0x1f);
  }
  *puVar8 = *puVar8 + 2;
  iVar5 = *(int *)(param_1 + 0x28);
  uVar7 = iVar5 + 2;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    uVar7 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar7 * 4;
  }
  else if (uVar7 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar7 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar7;
    uVar4 = 0;
    if (uVar7 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
    }
    uVar7 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar5 + -0x1e;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar7 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1e) & 0x1f);
  }
  *(uint *)(param_1 + 0x4c) = uVar7 >> 0x1e;
  uVar6 = 0xfffffffe;
  if (uVar7 >> 0x1e == 1) {
    *puVar8 = *puVar8 + 4;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 4;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 << 4;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1c) & 0x1f);
    }
    FUN_100117ae8(&local_3c,0,1);
    FUN_100117b3e(&local_3c,uVar7 >> 0x1c,1);
    *(undefined4 *)(param_1 + 0x50) = local_3c;
    piVar3 = *(int **)(param_1 + 0x40);
    *piVar3 = *piVar3 + 4;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 4;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 << 4;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1c) & 0x1f);
    }
    *(uint *)(param_1 + 0x54) = uVar7 >> 0x1c;
    *piVar3 = *piVar3 + 4;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 4;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 << 4;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1c) & 0x1f);
    }
    *(uint *)(param_1 + 0xd8) = uVar7 >> 0x1c;
    *piVar3 = *piVar3 + 4;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 4;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 << 4;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1c) & 0x1f);
    }
    *(uint *)(param_1 + 0x15c) = uVar7 >> 0x1c;
    *piVar3 = *piVar3 + 2;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 2;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 * 4;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1e;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1e) & 0x1f);
    }
    *(uint *)(param_1 + 0x1e0) = uVar7 >> 0x1e;
    *piVar3 = *piVar3 + 3;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 3;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 * 8;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1d;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1d) & 0x1f);
    }
    *(uint *)(param_1 + 0x264) = uVar7 >> 0x1d;
    *piVar3 = *piVar3 + 4;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 4;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 << 4;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1c) & 0x1f);
    }
    *(uint *)(param_1 + 0x2e8) = uVar7 >> 0x1c;
    *piVar3 = *piVar3 + 1;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 1;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 * 2;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1f) & 0x1f);
    }
    *(uint *)(param_1 + 0x36c) = uVar7 >> 0x1f;
    if ((int)uVar7 < 0) {
      *piVar3 = *piVar3 + 4;
      iVar5 = *(int *)(param_1 + 0x28);
      uVar7 = iVar5 + 4;
      *(uint *)(param_1 + 0x28) = uVar7;
      if (uVar7 < 0x20) {
        uVar7 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar7 << 4;
      }
      else if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar7 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar7;
        uVar4 = 0;
        if (uVar7 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
        }
        uVar7 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) =
             uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
      else {
        *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar7 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1c) & 0x1f);
      }
      *(uint *)(param_1 + 0x370) = uVar7 >> 0x1c;
    }
    *piVar3 = *piVar3 + 1;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 1;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 * 2;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1f) & 0x1f);
    }
    *(uint *)(param_1 + 0x378) = uVar7 >> 0x1f;
    if ((int)uVar7 < 0) {
      *piVar3 = *piVar3 + 4;
      iVar5 = *(int *)(param_1 + 0x28);
      uVar7 = iVar5 + 4;
      *(uint *)(param_1 + 0x28) = uVar7;
      if (uVar7 < 0x20) {
        uVar7 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar7 << 4;
      }
      else if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar7 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar7;
        uVar4 = 0;
        if (uVar7 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
        }
        uVar7 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) =
             uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
      else {
        *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar7 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1c) & 0x1f);
      }
      *(uint *)(param_1 + 0x37c) = uVar7 >> 0x1c;
    }
    *piVar3 = *piVar3 + 1;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 1;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 * 2;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1f) & 0x1f);
    }
    local_38 = param_1 + 0x2e8;
    *(uint *)(param_1 + 900) = uVar7 >> 0x1f;
    if ((int)uVar7 < 0) {
      *piVar3 = *piVar3 + 2;
      iVar5 = *(int *)(param_1 + 0x28);
      uVar7 = iVar5 + 2;
      *(uint *)(param_1 + 0x28) = uVar7;
      if (uVar7 < 0x20) {
        uVar7 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar7 * 4;
      }
      else if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar7 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar7;
        uVar4 = 0;
        if (uVar7 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
        }
        uVar7 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) =
             uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
      else {
        *(int *)(param_1 + 0x28) = iVar5 + -0x1e;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar7 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1e) & 0x1f);
      }
      *(uint *)(param_1 + 0x388) = uVar7 >> 0x1e;
      *piVar3 = *piVar3 + 1;
      iVar5 = *(int *)(param_1 + 0x28);
      uVar7 = iVar5 + 1;
      *(uint *)(param_1 + 0x28) = uVar7;
      if (uVar7 < 0x20) {
        uVar7 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar7 * 2;
      }
      else if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar7 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar7;
        uVar4 = 0;
        if (uVar7 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
        }
        uVar7 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) =
             uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
      else {
        *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar7 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x1f) & 0x1f);
      }
      *(uint *)(param_1 + 0x38c) = uVar7 >> 0x1f;
    }
    FUN_10012330a(param_1,param_1 + 0x54,1);
    FUN_10012330a(param_1,param_1 + 0xd8,1);
    FUN_10012330a(param_1,param_1 + 0x15c,1);
    FUN_10012330a(param_1,param_1 + 0x1e0,0);
    FUN_10012330a(param_1,param_1 + 0x264,0);
    FUN_10012330a(param_1,local_38,1);
    puVar8 = *(uint **)(param_1 + 0x40);
    uVar7 = *puVar8 & 7;
    if (uVar7 != 0) {
      iVar5 = 8 - uVar7;
      *puVar8 = *puVar8 + iVar5;
      uVar7 = *(int *)(param_1 + 0x28) + iVar5;
      *(uint *)(param_1 + 0x28) = uVar7;
      if (uVar7 < 0x20) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << ((byte)iVar5 & 0x1f);
      }
      else if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar4 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar4;
        uVar7 = 0;
        if (uVar4 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
        }
        *(uint *)(param_1 + 0x2c) =
             uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      }
      else {
        *(uint *)(param_1 + 0x28) = uVar7 - 0x20;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar4 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x2c) =
             (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) <<
             ((byte)uVar7 & 0x1f);
      }
    }
    *puVar8 = *puVar8 + 8;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar7 = iVar5 + 8;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 << 8;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar7 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar7;
      uVar4 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x18;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar4 << ((byte)(iVar5 + -0x18) & 0x1f);
    }
    uVar6 = 0;
    if (uVar7 < 0x1000000) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulong)(uVar7 >> 0x18);
      uVar11 = 0;
      do {
        *puVar8 = *puVar8 + 8;
        iVar5 = *(int *)(param_1 + 0x28);
        uVar7 = iVar5 + 8;
        *(uint *)(param_1 + 0x28) = uVar7;
        if (uVar7 < 0x20) {
          uVar7 = *(uint *)(param_1 + 0x2c);
          uVar4 = uVar7 << 8;
        }
        else if (uVar7 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar4 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar4;
          uVar7 = 0;
          if (uVar4 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
          }
          uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
          uVar7 = *(uint *)(param_1 + 0x2c);
        }
        else {
          *(int *)(param_1 + 0x28) = iVar5 + -0x18;
          lVar2 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar2 + 4;
          uVar7 = *(uint *)(lVar2 + 4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar4 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
          uVar7 = uVar4 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
          uVar4 = uVar4 << ((byte)(iVar5 + -0x18) & 0x1f);
        }
        *(uint *)(param_1 + 0x2c) = uVar4;
        *(char *)(param_1 + 0x394 + uVar11) = (char)(uVar7 >> 0x18);
        uVar11 = uVar11 + 1;
      } while (uVar10 != uVar11);
    }
    *(undefined1 *)(param_1 + 0x394 + uVar10) = 0;
  }
  return uVar6;
}

