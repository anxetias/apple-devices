// name: FUN_1001180d8
// address: 1001180d8

undefined8 FUN_1001180d8(long param_1,undefined8 *param_2,undefined1 param_3,char param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  puVar7 = (uint *)*param_2;
  uVar5 = *puVar7;
  uVar8 = puVar7[1];
  uVar11 = 0xfffffffe;
  if (uVar8 * 8 <= uVar5) {
    return 0xfffffffe;
  }
  uVar10 = 0;
  if (param_4 == '\0') {
    uVar10 = ((uVar8 >> 2) + 1) - (uint)((uVar8 & 3) == 0);
    *(uint *)(param_1 + 0x34) = uVar10;
    uVar8 = uVar5 >> 5;
    *(uint *)(param_1 + 0x18) = uVar8;
    if (uVar8 < uVar10) {
      *(uint **)(param_1 + 0x40) = puVar7;
      lVar4 = *(long *)(puVar7 + 2);
      *(long *)(param_1 + 0x20) = lVar4;
      *(uint *)(param_1 + 0x28) = uVar5 & 0x1f;
      puVar1 = (uint *)(lVar4 + (ulong)uVar8 * 4);
      uVar8 = *puVar1;
      *(uint *)(param_1 + 0x2c) =
           (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) <<
           (sbyte)(uVar5 & 0x1f);
      *(uint **)(param_1 + 0x10) = puVar1;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x40);
    }
    *puVar7 = *puVar7 + 4;
    iVar6 = *(int *)(param_1 + 0x28);
    uVar5 = iVar6 + 4;
    *(uint *)(param_1 + 0x28) = uVar5;
    if (uVar5 < 0x20) {
      uVar10 = *(uint *)(param_1 + 0x2c);
      uVar5 = uVar10 << 4;
    }
    else {
      if (uVar5 != 0x20) {
        *(int *)(param_1 + 0x28) = iVar6 + -0x1c;
        lVar4 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar4 + 4;
        uVar5 = *(uint *)(lVar4 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        uVar10 = (uVar5 >> (-(char)iVar6 & 0x1fU) | *(uint *)(param_1 + 0x2c)) >> 0x1c;
        *(uint *)(param_1 + 0x2c) = uVar5 << ((byte)(iVar6 + -0x1c) & 0x1f);
        goto LAB_1001181e1;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar8 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar8;
      uVar5 = 0;
      if (uVar8 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar8 * 4);
      }
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar10 = *(uint *)(param_1 + 0x2c);
    }
    uVar10 = uVar10 >> 0x1c;
    *(uint *)(param_1 + 0x2c) = uVar5;
  }
LAB_1001181e1:
  iVar6 = FUN_100111e4c(param_1,*(undefined4 *)(param_1 + 0x1f58),uVar10,0);
  if (iVar6 == 0) {
    lVar4 = *(long *)(param_1 + 0xb30);
    *(undefined4 *)(lVar4 + 0x684) = 0;
    if (param_4 == '\0') {
      iVar6 = FUN_10010d71a(*(undefined8 *)(param_1 + 0xb28),0,0,param_2,lVar4,param_3);
    }
    else {
      iVar6 = FUN_1001101d0();
    }
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x1f58);
      uVar2 = *(undefined1 *)(*(long *)(param_1 + 0xb30) + 0x684);
      bVar3 = *(byte *)(param_1 + 0x1f4c);
      uVar9 = (ulong)((uint)bVar3 * 0x400 + (uint)bVar3 * 4);
      *(char *)(param_1 + 0xb39 + uVar9) = (char)iVar6;
      *(undefined1 *)(param_1 + 0xb38 + uVar9) = uVar2;
      *(char *)(param_1 + 0x1f4d) = *(char *)(param_1 + 0x1f4d) + '\x01';
      uVar11 = 0;
      if (iVar6 == 3) {
        *(undefined1 *)(param_1 + 0x1f4e) = uVar2;
        *(byte *)(param_1 + 0x1f4c) = bVar3 + 1;
      }
    }
  }
  return uVar11;
}

