// name: FUN_1001185b0
// address: 1001185b0

undefined8 FUN_1001185b0(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar6 = (uint *)*param_2;
  uVar8 = *puVar6;
  uVar3 = puVar6[1];
  uVar4 = 0xfffffffe;
  if (uVar8 < uVar3 * 8) {
    uVar7 = ((uVar3 >> 2) + 1) - (uint)((uVar3 & 3) == 0);
    *(uint *)(param_1 + 0x34) = uVar7;
    uVar3 = uVar8 >> 5;
    *(uint *)(param_1 + 0x18) = uVar3;
    if (uVar3 < uVar7) {
      *(uint **)(param_1 + 0x40) = puVar6;
      lVar2 = *(long *)(puVar6 + 2);
      *(long *)(param_1 + 0x20) = lVar2;
      *(uint *)(param_1 + 0x28) = uVar8 & 0x1f;
      puVar1 = (uint *)(lVar2 + (ulong)uVar3 * 4);
      uVar3 = *puVar1;
      *(uint *)(param_1 + 0x2c) =
           (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <<
           (sbyte)(uVar8 & 0x1f);
      *(uint **)(param_1 + 0x10) = puVar1;
    }
    else {
      puVar6 = *(uint **)(param_1 + 0x40);
    }
    *puVar6 = *puVar6 + 4;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar8 = iVar5 + 4;
    *(uint *)(param_1 + 0x28) = uVar8;
    if (uVar8 < 0x20) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 4;
    }
    else if (uVar8 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar8 = 0;
      if (uVar3 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
      }
      *(uint *)(param_1 + 0x2c) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    }
    else {
      iVar5 = iVar5 + -0x1c;
      *(int *)(param_1 + 0x28) = iVar5;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar8 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x2c) =
           (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) <<
           ((byte)iVar5 & 0x1f);
    }
    *puVar6 = *puVar6 + 1;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar8 = iVar5 + 1;
    *(uint *)(param_1 + 0x28) = uVar8;
    if (uVar8 < 0x20) {
      uVar8 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar8 * 2;
    }
    else if (uVar8 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar8 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar8;
      uVar3 = 0;
      if (uVar8 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar8 * 4);
      }
      uVar8 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar8 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar3 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = uVar3 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar3 << ((byte)(iVar5 + -0x1f) & 0x1f);
    }
    *puVar6 = *puVar6 + 8;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar3 = iVar5 + 8;
    *(uint *)(param_1 + 0x28) = uVar3;
    if (uVar3 < 0x20) {
      uVar3 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar3 << 8;
    }
    else if (uVar3 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar7 = 0;
      if (uVar3 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
      }
      uVar3 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x18;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar3 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar7 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar3 = uVar7 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar5 + -0x18) & 0x1f);
    }
    uVar3 = uVar3 >> 0x18;
    if (uVar3 == 0xff) {
      *puVar6 = *puVar6 + 8;
      iVar5 = *(int *)(param_1 + 0x28);
      uVar3 = iVar5 + 8;
      *(uint *)(param_1 + 0x28) = uVar3;
      if (uVar3 < 0x20) {
        uVar3 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar3 << 8;
      }
      else if (uVar3 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar3;
        uVar7 = 0;
        if (uVar3 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
        }
        uVar3 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) =
             uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      }
      else {
        *(int *)(param_1 + 0x28) = iVar5 + -0x18;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar3 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar7 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        uVar3 = uVar7 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar5 + -0x18) & 0x1f);
      }
      uVar3 = (uVar3 >> 0x18) + 0xff;
    }
    if ((int)uVar8 < 0) {
      uVar8 = *puVar6 & 7;
      if (uVar8 != 0) {
        iVar5 = 8 - uVar8;
        *puVar6 = *puVar6 + iVar5;
        uVar8 = *(int *)(param_1 + 0x28) + iVar5;
        *(uint *)(param_1 + 0x28) = uVar8;
        if (uVar8 < 0x20) {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << ((byte)iVar5 & 0x1f);
        }
        else if (uVar8 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar7 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar7;
          uVar8 = 0;
          if (uVar7 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
          }
          *(uint *)(param_1 + 0x2c) =
               uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        }
        else {
          *(uint *)(param_1 + 0x28) = uVar8 - 0x20;
          lVar2 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar2 + 4;
          uVar7 = *(uint *)(lVar2 + 4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x2c) =
               (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) <<
               ((byte)uVar8 & 0x1f);
        }
      }
    }
    uVar4 = 0;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar6 + 8;
      iVar5 = *(int *)(param_1 + 0x28);
      uVar8 = iVar5 + 8;
      *(uint *)(param_1 + 0x28) = uVar8;
      if (uVar8 < 0x20) {
        uVar8 = *(int *)(param_1 + 0x2c) << 8;
      }
      else if (uVar8 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar7 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar7;
        uVar8 = 0;
        if (uVar7 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
        }
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      }
      else {
        iVar5 = iVar5 + -0x18;
        *(int *)(param_1 + 0x28) = iVar5;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar8 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) <<
                ((byte)iVar5 & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar8;
    }
  }
  return uVar4;
}

