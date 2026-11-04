// name: FUN_10011829e
// address: 10011829e

undefined8 FUN_10011829e(long param_1,undefined8 *param_2,undefined1 param_3,char param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 uVar11;
  
  puVar9 = (uint *)*param_2;
  uVar7 = *puVar9;
  uVar6 = puVar9[1];
  uVar11 = 0xfffffffe;
  if (uVar6 * 8 <= uVar7) {
    return 0xfffffffe;
  }
  if (param_4 == '\0') {
    uVar10 = ((uVar6 >> 2) + 1) - (uint)((uVar6 & 3) == 0);
    *(uint *)(param_1 + 0x34) = uVar10;
    uVar6 = uVar7 >> 5;
    *(uint *)(param_1 + 0x18) = uVar6;
    if (uVar6 < uVar10) {
      *(uint **)(param_1 + 0x40) = puVar9;
      lVar4 = *(long *)(puVar9 + 2);
      *(long *)(param_1 + 0x20) = lVar4;
      *(uint *)(param_1 + 0x28) = uVar7 & 0x1f;
      puVar1 = (uint *)(lVar4 + (ulong)uVar6 * 4);
      uVar6 = *puVar1;
      *(uint *)(param_1 + 0x2c) =
           (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) <<
           (sbyte)(uVar7 & 0x1f);
      *(uint **)(param_1 + 0x10) = puVar1;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x40);
    }
    *puVar9 = *puVar9 + 4;
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
      uVar6 = 0;
      if (uVar7 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
      lVar4 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar4 + 4;
      uVar7 = *(uint *)(lVar4 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar6 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar6 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar6 << ((byte)(iVar5 + -0x1c) & 0x1f);
    }
    *puVar9 = *puVar9 + 1;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar6 = iVar5 + 1;
    *(uint *)(param_1 + 0x28) = uVar6;
    if (uVar6 < 0x20) {
      uVar6 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar6 * 2;
    }
    else if (uVar6 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar6 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar6;
      uVar10 = 0;
      if (uVar6 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar10 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 4);
      }
      uVar6 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
      lVar4 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar4 + 4;
      uVar6 = *(uint *)(lVar4 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar10 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = uVar10 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar10 << ((byte)(iVar5 + -0x1f) & 0x1f);
    }
    uVar6 = uVar6 >> 0x1f;
    iVar5 = FUN_100111e4c(param_1,*(undefined4 *)(param_1 + 0x1f58),uVar7 >> 0x1c,uVar6);
    if (iVar5 != 0) {
      return 0xfffffffe;
    }
    lVar4 = *(long *)(param_1 + 0xb30);
    *(undefined4 *)(lVar4 + 0x684) = 0;
    iVar5 = FUN_10010d71a(*(undefined8 *)(param_1 + 0xb28),0,uVar6,param_2,lVar4,param_3);
    if (iVar5 != 0) {
      return 0xfffffffe;
    }
    uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0xb30) + 8);
    iVar5 = FUN_10010d71a(*(undefined8 *)(param_1 + 0xb28),uVar8,uVar6,param_2,
                          uVar8 * 0x78 + *(long *)(param_1 + 0xb30),param_3);
  }
  else {
    iVar5 = FUN_100111e4c(param_1,*(undefined4 *)(param_1 + 0x1f58),0,1);
    if (iVar5 != 0) {
      return 0xfffffffe;
    }
    lVar4 = *(long *)(param_1 + 0xb30);
    *(undefined4 *)(lVar4 + 0x684) = 0;
    iVar5 = FUN_1001101d0(*(undefined8 *)(param_1 + 0xb28),0,1,param_2,lVar4,param_3);
    if (iVar5 != 0) {
      return 0xfffffffe;
    }
    uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0xb30) + 8);
    iVar5 = FUN_1001101d0(*(undefined8 *)(param_1 + 0xb28),uVar8,1,param_2,
                          uVar8 * 0x78 + *(long *)(param_1 + 0xb30),param_3);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x1f58);
    uVar2 = *(undefined1 *)(*(long *)(param_1 + 0xb30) + 0x684);
    bVar3 = *(byte *)(param_1 + 0x1f4c);
    uVar8 = (ulong)((uint)bVar3 * 0x400 + (uint)bVar3 * 4);
    *(char *)(param_1 + 0xb39 + uVar8) = (char)iVar5;
    *(undefined1 *)(param_1 + 0xb38 + uVar8) = uVar2;
    *(char *)(param_1 + 0x1f4d) = *(char *)(param_1 + 0x1f4d) + '\x01';
    uVar11 = 0;
    if (iVar5 == 3) {
      *(undefined1 *)(param_1 + 0x1f4e) = uVar2;
      *(byte *)(param_1 + 0x1f4c) = bVar3 + 1;
    }
  }
  return uVar11;
}

