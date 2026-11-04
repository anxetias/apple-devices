// name: FUN_10011e88a
// address: 10011e88a

bool FUN_10011e88a(long param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  bool bVar20;
  byte bVar21;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    bVar21 = *(byte *)((long)param_2 + 9);
    bVar23 = *(byte *)((long)param_2 + 10);
    bVar24 = *(byte *)((long)param_2 + 0xb);
    bVar25 = *(byte *)(param_2 + 3);
    bVar15 = *(byte *)((long)param_2 + 0xd);
    bVar14 = *(byte *)((long)param_2 + 0xe);
  }
  else {
    bVar21 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar14 = 0;
    bVar15 = 0;
  }
  piVar2 = *(int **)(param_1 + 0x40);
  *piVar2 = *piVar2 + 1;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar6 = iVar8 + 1;
  *(uint *)(param_1 + 0x28) = uVar6;
  if (uVar6 < 0x20) {
    uVar6 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar6 * 2;
  }
  else if (uVar6 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar6 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar6;
    uVar7 = 0;
    if (uVar6 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 4);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar8 + -0x1f;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar6 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar6 = uVar7 >> (-(char)iVar8 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1f) & 0x1f);
  }
  *(byte *)(param_2 + 2) = (byte)(uVar6 >> 0x1f);
  *piVar2 = *piVar2 + 4;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar6 = iVar8 + 4;
  *(uint *)(param_1 + 0x28) = uVar6;
  if (uVar6 < 0x20) {
    uVar6 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar6 << 4;
  }
  else if (uVar6 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar6 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar6;
    uVar7 = 0;
    if (uVar6 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 4);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar8 + -0x1c;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar6 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar6 = uVar7 >> (-(char)iVar8 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1c) & 0x1f);
  }
  bVar4 = (byte)(uVar6 >> 0x18);
  *(byte *)((long)param_2 + 9) = bVar4 >> 4;
  *piVar2 = *piVar2 + 4;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar7 = iVar8 + 4;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    uVar7 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar7 << 4;
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
    *(int *)(param_1 + 0x28) = iVar8 + -0x1c;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar7 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = uVar10 >> (-(char)iVar8 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar10 << ((byte)(iVar8 + -0x1c) & 0x1f);
  }
  bVar13 = (byte)(uVar7 >> 0x1c);
  *(byte *)((long)param_2 + 10) = bVar13;
  *piVar2 = *piVar2 + 3;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar7 = iVar8 + 3;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    uVar7 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar7 * 8;
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
    *(int *)(param_1 + 0x28) = iVar8 + -0x1d;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar7 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = uVar10 >> (-(char)iVar8 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar10 << ((byte)(iVar8 + -0x1d) & 0x1f);
  }
  bVar18 = (byte)(uVar7 >> 0x1d);
  *(byte *)((long)param_2 + 0xb) = bVar18;
  *piVar2 = *piVar2 + 2;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar7 = iVar8 + 2;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 2;
  }
  else if (uVar7 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar10 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar10;
    uVar7 = 0;
    if (uVar10 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
    }
    *(uint *)(param_1 + 0x2c) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  }
  else {
    iVar8 = iVar8 + -0x1e;
    *(int *)(param_1 + 0x28) = iVar8;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar7 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x2c) =
         (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) <<
         ((byte)iVar8 & 0x1f);
  }
  *piVar2 = *piVar2 + 1;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar7 = iVar8 + 1;
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
    *(int *)(param_1 + 0x28) = iVar8 + -0x1f;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar7 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = uVar10 >> (-(char)iVar8 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar10 << ((byte)(iVar8 + -0x1f) & 0x1f);
  }
  *piVar2 = *piVar2 + 1;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar10 = iVar8 + 1;
  *(uint *)(param_1 + 0x28) = uVar10;
  if (uVar10 < 0x20) {
    uVar10 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar10 * 2;
  }
  else if (uVar10 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar10 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar10;
    uVar9 = 0;
    if (uVar10 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
    }
    uVar10 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar8 + -0x1f;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar10 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar9 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar10 = uVar9 >> (-(char)iVar8 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar9 << ((byte)(iVar8 + -0x1f) & 0x1f);
  }
  if ((int)uVar7 < 0) {
    *piVar2 = *piVar2 + 2;
    iVar8 = *(int *)(param_1 + 0x28);
    uVar7 = iVar8 + 2;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      iVar8 = *(int *)(param_1 + 0x2c);
      *(byte *)(param_2 + 3) = (byte)((uint)iVar8 >> 0x1e);
      uVar7 = iVar8 << 2;
LAB_10011ecb7:
      bVar19 = (byte)((uint)iVar8 >> 0x18);
      *(uint *)(param_1 + 0x2c) = uVar7;
    }
    else {
      if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar9 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar9;
        uVar7 = 0;
        if (uVar9 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 4);
        }
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        iVar8 = *(int *)(param_1 + 0x2c);
        *(byte *)(param_2 + 3) = (byte)((uint)iVar8 >> 0x1e);
        goto LAB_10011ecb7;
      }
      *(int *)(param_1 + 0x28) = iVar8 + -0x1e;
      lVar3 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar3 + 4;
      uVar7 = *(uint *)(lVar3 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      bVar19 = (byte)((uVar7 >> (-(char)iVar8 & 0x1fU)) >> 0x18) |
               (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18);
      *(byte *)(param_2 + 3) = bVar19 >> 6;
      *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1e) & 0x1f);
    }
    bVar19 = bVar19 >> 6;
    *piVar2 = *piVar2 + 1;
    iVar8 = *(int *)(param_1 + 0x28);
    uVar7 = iVar8 + 1;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      iVar8 = *(int *)(param_1 + 0x2c);
      *(byte *)((long)param_2 + 0xd) = (byte)((uint)iVar8 >> 0x1f);
      uVar7 = iVar8 * 2;
LAB_10011ed4f:
      bVar16 = (byte)((uint)iVar8 >> 0x18);
      *(uint *)(param_1 + 0x2c) = uVar7;
    }
    else {
      if (uVar7 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar9 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar9;
        uVar7 = 0;
        if (uVar9 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 4);
        }
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        iVar8 = *(int *)(param_1 + 0x2c);
        *(byte *)((long)param_2 + 0xd) = (byte)((uint)iVar8 >> 0x1f);
        goto LAB_10011ed4f;
      }
      *(int *)(param_1 + 0x28) = iVar8 + -0x1f;
      lVar3 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar3 + 4;
      uVar7 = *(uint *)(lVar3 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      bVar16 = (byte)((uVar7 >> (-(char)iVar8 & 0x1fU)) >> 0x18) |
               (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18);
      *(byte *)((long)param_2 + 0xd) = bVar16 >> 7;
      *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1f) & 0x1f);
    }
    bVar16 = bVar16 >> 7;
    *(undefined1 *)((long)param_2 + 0xe) = 0;
    *piVar2 = *piVar2 + 2;
    iVar8 = *(int *)(param_1 + 0x28);
    uVar7 = iVar8 + 2;
    *(uint *)(param_1 + 0x28) = uVar7;
    if (uVar7 < 0x20) {
      iVar8 = *(int *)(param_1 + 0x2c);
      *(byte *)((long)param_2 + 0xe) = (byte)((uint)iVar8 >> 0x1e);
      uVar7 = iVar8 << 2;
    }
    else {
      if (uVar7 != 0x20) {
        *(int *)(param_1 + 0x28) = iVar8 + -0x1e;
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar3 + 4;
        uVar7 = *(uint *)(lVar3 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        bVar5 = (byte)((uVar7 >> (-(char)iVar8 & 0x1fU)) >> 0x18) |
                (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18);
        bVar17 = bVar5 >> 6;
        *(byte *)((long)param_2 + 0xe) = bVar5 >> 6;
        *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1e) & 0x1f);
        goto LAB_10011ee3b;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar9 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar9;
      uVar7 = 0;
      if (uVar9 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 4);
      }
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      iVar8 = *(int *)(param_1 + 0x2c);
      *(byte *)((long)param_2 + 0xe) = (byte)((uint)iVar8 >> 0x1e);
    }
    bVar17 = (byte)((uint)iVar8 >> 0x1e);
    *(uint *)(param_1 + 0x2c) = uVar7;
  }
  else {
    *(undefined2 *)(param_2 + 3) = 0x102;
    *(undefined1 *)((long)param_2 + 0xe) = 2;
    bVar16 = 1;
    bVar17 = 2;
    bVar19 = 2;
  }
LAB_10011ee3b:
  if (-1 < (int)uVar10) {
    *(undefined2 *)((long)param_2 + 0xf) = 0x202;
    *(undefined1 *)((long)param_2 + 0x11) = 1;
    cVar12 = -1;
    goto LAB_10011f0b9;
  }
  *piVar2 = *piVar2 + 2;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar7 = iVar8 + 2;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    iVar8 = *(int *)(param_1 + 0x2c);
    *(byte *)((long)param_2 + 0xf) = (byte)((uint)iVar8 >> 0x1e);
    uVar7 = iVar8 << 2;
LAB_10011eea6:
    *(uint *)(param_1 + 0x2c) = uVar7;
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
      *(byte *)((long)param_2 + 0xf) = (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1e);
      goto LAB_10011eea6;
    }
    *(int *)(param_1 + 0x28) = iVar8 + -0x1e;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar7 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    *(byte *)((long)param_2 + 0xf) =
         (byte)((byte)((uVar7 >> (-(char)iVar8 & 0x1fU)) >> 0x18) |
               (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18)) >> 6;
    *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1e) & 0x1f);
  }
  *piVar2 = *piVar2 + 2;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar7 = iVar8 + 2;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    iVar8 = *(int *)(param_1 + 0x2c);
    *(byte *)(param_2 + 4) = (byte)((uint)iVar8 >> 0x1e);
    uVar7 = iVar8 << 2;
LAB_10011ef44:
    *(uint *)(param_1 + 0x2c) = uVar7;
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
      *(byte *)(param_2 + 4) = (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1e);
      goto LAB_10011ef44;
    }
    *(int *)(param_1 + 0x28) = iVar8 + -0x1e;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar7 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    *(byte *)(param_2 + 4) =
         (byte)((byte)((uVar7 >> (-(char)iVar8 & 0x1fU)) >> 0x18) |
               (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18)) >> 6;
    *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1e) & 0x1f);
  }
  *piVar2 = *piVar2 + 1;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar7 = iVar8 + 1;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    iVar8 = *(int *)(param_1 + 0x2c);
    *(byte *)((long)param_2 + 0x11) = (byte)((uint)iVar8 >> 0x1f);
    uVar7 = iVar8 * 2;
LAB_10011efe0:
    *(uint *)(param_1 + 0x2c) = uVar7;
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
      *(byte *)((long)param_2 + 0x11) = (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1f);
      goto LAB_10011efe0;
    }
    *(int *)(param_1 + 0x28) = iVar8 + -0x1f;
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 4;
    uVar7 = *(uint *)(lVar3 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    *(byte *)((long)param_2 + 0x11) =
         (byte)((byte)((uVar7 >> (-(char)iVar8 & 0x1fU)) >> 0x18) |
               (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18)) >> 7;
    *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1f) & 0x1f);
  }
  *piVar2 = *piVar2 + 1;
  iVar8 = *(int *)(param_1 + 0x28);
  uVar7 = iVar8 + 1;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar7 < 0x20) {
    iVar8 = *(int *)(param_1 + 0x2c);
    uVar7 = iVar8 * 2;
  }
  else {
    if (uVar7 != 0x20) {
      *(int *)(param_1 + 0x28) = iVar8 + -0x1f;
      lVar3 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar3 + 4;
      uVar7 = *(uint *)(lVar3 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      cVar12 = (char)((byte)((uVar7 >> (-(char)iVar8 & 0x1fU)) >> 0x18) |
                     (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18)) >> 7;
      *(uint *)(param_1 + 0x2c) = uVar7 << ((byte)(iVar8 + -0x1f) & 0x1f);
      goto LAB_10011f0b9;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar10 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar10;
    uVar7 = 0;
    if (uVar10 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
    }
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    iVar8 = *(int *)(param_1 + 0x2c);
  }
  cVar12 = (char)(iVar8 >> 0x1f);
  *(uint *)(param_1 + 0x2c) = uVar7;
LAB_10011f0b9:
  bVar20 = true;
  if (iVar1 == 2) {
    auVar22[0] = -(bVar21 == bVar4 >> 4);
    auVar22[1] = -(bVar23 == bVar13);
    auVar22[2] = -(bVar24 == bVar18);
    auVar22[3] = -(bVar25 == bVar19);
    auVar22[4] = 0xff;
    auVar22[5] = 0xff;
    auVar22[6] = 0xff;
    auVar22[7] = 0xff;
    auVar22[8] = 0xff;
    auVar22[9] = 0xff;
    auVar22[10] = 0xff;
    auVar22[0xb] = 0xff;
    auVar22[0xc] = 0xff;
    auVar22[0xd] = 0xff;
    auVar22[0xe] = 0xff;
    auVar22[0xf] = 0xff;
    auVar26._8_4_ = 0xffffffff;
    auVar26._0_8_ = 0xffffffffffffffff;
    auVar26._12_4_ = 0xffffffff;
    auVar22 = pmovsxbd(auVar22,auVar26 ^ auVar22);
    uVar11 = movmskps(uVar6 >> 0x1c,auVar22);
    bVar20 = ((char)uVar11 != '\0' || bVar15 != bVar16) || bVar14 != bVar17;
  }
  *(char *)((long)param_2 + 0x12) = cVar12 * '\x04' + '\x04';
  return bVar20;
}

