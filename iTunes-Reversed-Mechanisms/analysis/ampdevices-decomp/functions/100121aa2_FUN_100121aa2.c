// name: FUN_100121aa2
// address: 100121aa2

int FUN_100121aa2(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  
  puVar14 = *(undefined1 **)(param_1 + 0xc138);
  if (puVar14 == (undefined1 *)0x0) {
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x38);
  piVar1 = *(int **)(param_1 + 0x40);
  iVar5 = *piVar1;
  *piVar1 = iVar5 + 1;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar9 = iVar4 + 1;
  *(uint *)(param_1 + 0x28) = uVar9;
  if (uVar9 < 0x20) {
    uVar9 = *(uint *)(param_1 + 0x2c);
    uVar3 = uVar9 * 2;
LAB_100121b13:
    *(uint *)(param_1 + 0x2c) = uVar3;
  }
  else {
    if (uVar9 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar9 = 0;
      if (uVar3 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
      }
      uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar9 = *(uint *)(param_1 + 0x2c);
      goto LAB_100121b13;
    }
    *(int *)(param_1 + 0x28) = iVar4 + -0x1f;
    lVar6 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar6 + 4;
    uVar9 = *(uint *)(lVar6 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = uVar3 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar3 << ((byte)(iVar4 + -0x1f) & 0x1f);
  }
  if ((int)uVar9 < 0) {
    *(undefined4 *)(puVar14 + 4) = 0;
    *piVar1 = *piVar1 + 1;
    iVar4 = *(int *)(param_1 + 0x28);
    uVar9 = iVar4 + 1;
    *(uint *)(param_1 + 0x28) = uVar9;
    if (uVar9 < 0x20) {
      uVar9 = *(uint *)(param_1 + 0x2c);
      uVar3 = uVar9 >> 0x1f;
      *(uint *)(puVar14 + 4) = uVar3;
      uVar9 = uVar9 * 2;
LAB_100121bad:
      *(uint *)(param_1 + 0x2c) = uVar9;
    }
    else {
      if (uVar9 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar3;
        uVar9 = 0;
        if (uVar3 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
        }
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar3 = *(uint *)(param_1 + 0x2c) >> 0x1f;
        *(uint *)(puVar14 + 4) = uVar3;
        goto LAB_100121bad;
      }
      *(int *)(param_1 + 0x28) = iVar4 + -0x1f;
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + 4;
      uVar9 = *(uint *)(lVar6 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar3 = (uVar9 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c)) >> 0x1f;
      *(uint *)(puVar14 + 4) = uVar3;
      *(uint *)(param_1 + 0x2c) = uVar9 << ((byte)(iVar4 + -0x1f) & 0x1f);
    }
    if (uVar3 != 0) {
      *(undefined4 *)(puVar14 + 0x14) = 0;
      *piVar1 = *piVar1 + 3;
      iVar4 = *(int *)(param_1 + 0x28);
      uVar9 = iVar4 + 3;
      *(uint *)(param_1 + 0x28) = uVar9;
      if (uVar9 < 0x20) {
        uVar9 = *(uint *)(param_1 + 0x2c);
        uVar3 = uVar9 >> 0x1d;
        *(uint *)(puVar14 + 0x14) = uVar3;
        uVar9 = uVar9 << 3;
LAB_100121c50:
        *(uint *)(param_1 + 0x2c) = uVar9;
      }
      else {
        if (uVar9 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar3 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar3;
          uVar9 = 0;
          if (uVar3 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
          }
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          uVar3 = *(uint *)(param_1 + 0x2c) >> 0x1d;
          *(uint *)(puVar14 + 0x14) = uVar3;
          goto LAB_100121c50;
        }
        *(int *)(param_1 + 0x28) = iVar4 + -0x1d;
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + 4;
        uVar9 = *(uint *)(lVar6 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar3 = (uVar9 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c)) >> 0x1d;
        *(uint *)(puVar14 + 0x14) = uVar3;
        *(uint *)(param_1 + 0x2c) = uVar9 << ((byte)(iVar4 + -0x1d) & 0x1f);
      }
      if (uVar3 < 3) {
        *(undefined4 *)(puVar14 + 0x10) = 0;
      }
      else {
        *(undefined4 *)(puVar14 + 0x10) = 1;
        *(uint *)(puVar14 + 0x14) = uVar3 - 3;
      }
    }
    *(undefined4 *)(puVar14 + 8) = 0;
    *piVar1 = *piVar1 + 1;
    iVar4 = *(int *)(param_1 + 0x28);
    uVar9 = iVar4 + 1;
    *(uint *)(param_1 + 0x28) = uVar9;
    if (uVar9 < 0x20) {
      uVar9 = *(uint *)(param_1 + 0x2c);
      uVar3 = uVar9 >> 0x1f;
      *(uint *)(puVar14 + 8) = uVar3;
      uVar9 = uVar9 * 2;
LAB_100121d07:
      *(uint *)(param_1 + 0x2c) = uVar9;
    }
    else {
      if (uVar9 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar3;
        uVar9 = 0;
        if (uVar3 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
        }
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar3 = *(uint *)(param_1 + 0x2c) >> 0x1f;
        *(uint *)(puVar14 + 8) = uVar3;
        goto LAB_100121d07;
      }
      *(int *)(param_1 + 0x28) = iVar4 + -0x1f;
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + 4;
      uVar9 = *(uint *)(lVar6 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar3 = (uVar9 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c)) >> 0x1f;
      *(uint *)(puVar14 + 8) = uVar3;
      *(uint *)(param_1 + 0x2c) = uVar9 << ((byte)(iVar4 + -0x1f) & 0x1f);
    }
    if (uVar3 != 0) {
      *(undefined4 *)(puVar14 + 0x18) = 0;
      *piVar1 = *piVar1 + 3;
      iVar4 = *(int *)(param_1 + 0x28);
      uVar9 = iVar4 + 3;
      *(uint *)(param_1 + 0x28) = uVar9;
      if (uVar9 < 0x20) {
        uVar9 = *(uint *)(param_1 + 0x2c);
        uVar3 = uVar9 >> 0x1d;
        *(uint *)(puVar14 + 0x18) = uVar3;
        uVar9 = uVar9 << 3;
LAB_100121daa:
        *(uint *)(param_1 + 0x2c) = uVar9;
      }
      else {
        if (uVar9 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar3 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar3;
          uVar9 = 0;
          if (uVar3 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
          }
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          uVar3 = *(uint *)(param_1 + 0x2c) >> 0x1d;
          *(uint *)(puVar14 + 0x18) = uVar3;
          goto LAB_100121daa;
        }
        *(int *)(param_1 + 0x28) = iVar4 + -0x1d;
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + 4;
        uVar9 = *(uint *)(lVar6 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar3 = (uVar9 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c)) >> 0x1d;
        *(uint *)(puVar14 + 0x18) = uVar3;
        *(uint *)(param_1 + 0x2c) = uVar9 << ((byte)(iVar4 + -0x1d) & 0x1f);
      }
      if (2 < uVar3) {
        *(uint *)(puVar14 + 0x18) = uVar3 - 3;
      }
    }
    *(undefined4 *)(puVar14 + 0xc) = 0;
    *piVar1 = *piVar1 + 1;
    iVar4 = *(int *)(param_1 + 0x28);
    uVar9 = iVar4 + 1;
    *(uint *)(param_1 + 0x28) = uVar9;
    if (uVar9 < 0x20) {
      uVar9 = *(uint *)(param_1 + 0x2c);
      *(uint *)(puVar14 + 0xc) = uVar9 >> 0x1f;
      uVar9 = uVar9 * 2;
    }
    else if (uVar9 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar9 = 0;
      if (uVar3 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
      }
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      *(uint *)(puVar14 + 0xc) = *(uint *)(param_1 + 0x2c) >> 0x1f;
    }
    else {
      *(int *)(param_1 + 0x28) = iVar4 + -0x1f;
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + 4;
      uVar9 = *(uint *)(lVar6 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      *(uint *)(puVar14 + 0xc) =
           (uVar9 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c)) >> 0x1f;
      uVar9 = uVar9 << ((byte)(iVar4 + -0x1f) & 0x1f);
    }
    *(uint *)(param_1 + 0x2c) = uVar9;
  }
  *(undefined4 *)(puVar14 + 0x1c) = 0;
  *piVar1 = *piVar1 + 1;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar9 = iVar4 + 1;
  *(uint *)(param_1 + 0x28) = uVar9;
  if (uVar9 < 0x20) {
    uVar9 = *(uint *)(param_1 + 0x2c);
    uVar3 = uVar9 >> 0x1f;
    *(uint *)(puVar14 + 0x1c) = uVar3;
    uVar9 = uVar9 * 2;
LAB_100121ee4:
    *(uint *)(param_1 + 0x2c) = uVar9;
  }
  else {
    if (uVar9 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar9 = 0;
      if (uVar3 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
      }
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar3 = *(uint *)(param_1 + 0x2c) >> 0x1f;
      *(uint *)(puVar14 + 0x1c) = uVar3;
      goto LAB_100121ee4;
    }
    *(int *)(param_1 + 0x28) = iVar4 + -0x1f;
    lVar6 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar6 + 4;
    uVar9 = *(uint *)(lVar6 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar3 = (uVar9 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c)) >> 0x1f;
    *(uint *)(puVar14 + 0x1c) = uVar3;
    *(uint *)(param_1 + 0x2c) = uVar9 << ((byte)(iVar4 + -0x1f) & 0x1f);
  }
  *piVar1 = *piVar1 + 2;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar9 = iVar4 + 2;
  *(uint *)(param_1 + 0x28) = uVar9;
  if (uVar3 == 0) {
    if (uVar9 < 0x20) {
      uVar3 = *(uint *)(param_1 + 0x2c);
      uVar9 = uVar3 * 4;
LAB_100121fbd:
      *(uint *)(param_1 + 0x2c) = uVar9;
    }
    else {
      if (uVar9 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar3;
        uVar9 = 0;
        if (uVar3 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
        }
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar3 = *(uint *)(param_1 + 0x2c);
        goto LAB_100121fbd;
      }
      *(int *)(param_1 + 0x28) = iVar4 + -0x1e;
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + 4;
      uVar9 = *(uint *)(lVar6 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar3 = uVar9 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar9 << ((byte)(iVar4 + -0x1e) & 0x1f);
    }
    puVar14[0x20] =
         *(undefined1 *)((long)&PTR___mh_execute_header_1007078e0 + (ulong)(uVar3 >> 0x1e) * 4);
  }
  else {
    if (uVar9 < 0x20) {
      uVar9 = *(uint *)(param_1 + 0x2c);
      iVar4 = uVar9 * 4;
LAB_100121fef:
      *(int *)(param_1 + 0x2c) = iVar4;
    }
    else {
      if (uVar9 != 0x20) {
        *(int *)(param_1 + 0x28) = iVar4 + -0x1e;
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + 4;
        uVar9 = *(uint *)(lVar6 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = uVar3 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        iVar4 = uVar3 << ((byte)(iVar4 + -0x1e) & 0x1f);
        goto LAB_100121fef;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar9 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar9;
      uVar3 = 0;
      if (uVar9 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 4);
      }
      uVar9 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    }
    puVar14[0x20] = (byte)(uVar9 >> 0x1e) + 1;
    lVar6 = 0;
    do {
      **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 5;
      iVar4 = *(int *)(param_1 + 0x28);
      uVar3 = iVar4 + 5;
      *(uint *)(param_1 + 0x28) = uVar3;
      if (uVar3 < 0x20) {
        uVar3 = *(uint *)(param_1 + 0x2c);
        uVar12 = uVar3 << 5;
      }
      else if (uVar3 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar12 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar12;
        uVar3 = 0;
        if (uVar12 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 4);
        }
        uVar12 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        uVar3 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar4 + -0x1b;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar3 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar12 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        uVar3 = uVar12 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar12 = uVar12 << ((byte)(iVar4 + -0x1b) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar12;
      *(byte *)(*(long *)(param_1 + 0xc138) + 0x22 + lVar6) = (byte)(uVar3 >> 0x1b) + 1;
      lVar6 = lVar6 + 1;
    } while ((ulong)(uVar9 >> 0x1e) + 1 != lVar6);
    puVar14 = *(undefined1 **)(param_1 + 0xc138);
  }
  iVar10 = iVar10 - iVar5;
  if ((2 < *(int *)(puVar14 + 0x14)) || (2 < *(int *)(puVar14 + 0x18))) {
    *puVar14 = 0;
    iVar5 = *(int *)(param_1 + 0x38);
    piVar1 = *(int **)(param_1 + 0x40);
    iVar4 = *piVar1;
    uVar9 = (param_2 + iVar5) - (iVar10 + iVar4);
    if (uVar9 != 0) {
      do {
        uVar3 = 8;
        if ((int)uVar9 < 8) {
          uVar3 = uVar9;
        }
        *piVar1 = *piVar1 + uVar3;
        uVar12 = *(int *)(param_1 + 0x28) + uVar3;
        *(uint *)(param_1 + 0x28) = uVar12;
        if (uVar12 < 0x20) {
          uVar13 = *(uint *)(param_1 + 0x2c);
          uVar12 = uVar3;
LAB_100122196:
          uVar13 = uVar13 << ((byte)uVar12 & 0x1f);
        }
        else {
          if (uVar12 != 0x20) {
            *(uint *)(param_1 + 0x28) = uVar12 - 0x20;
            lVar6 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar6 + 4;
            uVar13 = *(uint *)(lVar6 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18;
            goto LAB_100122196;
          }
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar13 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar13;
          uVar12 = 0;
          if (uVar13 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar12 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar13 * 4);
          }
          uVar13 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
        }
        *(uint *)(param_1 + 0x2c) = uVar13;
        uVar9 = uVar9 - uVar3;
      } while (uVar9 != 0);
      iVar5 = *(int *)(param_1 + 0x38);
      iVar4 = *piVar1;
    }
    return (iVar10 - iVar5) + iVar4;
  }
  if ((*(int *)(puVar14 + 4) != 0) && (puVar14[0x20] != '\0')) {
    uVar11 = 0;
    do {
      piVar1 = *(int **)(param_1 + 0x40);
      *piVar1 = *piVar1 + 1;
      iVar5 = *(int *)(param_1 + 0x28);
      uVar9 = iVar5 + 1;
      *(uint *)(param_1 + 0x28) = uVar9;
      if (uVar9 < 0x20) {
        uVar9 = *(uint *)(param_1 + 0x2c);
        uVar3 = uVar9 * 2;
      }
      else if (uVar9 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar3;
        uVar9 = 0;
        if (uVar3 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
        }
        uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + 4;
        uVar9 = *(uint *)(lVar6 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = uVar3 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar3 = uVar3 << ((byte)(iVar5 + -0x1f) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar3;
      puVar7 = &DAT_1007078f0;
      if (*(int *)(puVar14 + 0x10) == 0) {
        puVar7 = &DAT_100707970;
      }
      puVar16 = &DAT_1007079b0;
      if (*(int *)(puVar14 + 0x10) == 0) {
        puVar16 = &DAT_100707a30;
      }
      if (-1 < (int)uVar9) {
        puVar16 = puVar7;
      }
      uVar17 = (ulong)*(uint *)(*(long *)(puVar14 + 0x698) + (long)*(int *)(puVar14 + 0x14) * 4);
      if (uVar17 != 0) {
        uVar8 = 0;
        do {
          uVar15 = 0;
          do {
            *piVar1 = *piVar1 + 1;
            iVar5 = *(int *)(param_1 + 0x28);
            uVar3 = iVar5 + 1;
            *(uint *)(param_1 + 0x28) = uVar3;
            if (uVar3 < 0x20) {
              uVar3 = *(uint *)(param_1 + 0x2c);
              uVar12 = uVar3 * 2;
            }
            else if (uVar3 == 0x20) {
              *(undefined4 *)(param_1 + 0x28) = 0;
              uVar12 = *(int *)(param_1 + 0x18) + 1;
              *(uint *)(param_1 + 0x18) = uVar12;
              uVar3 = 0;
              if (uVar12 < *(uint *)(param_1 + 0x34)) {
                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 4);
              }
              uVar12 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18;
              uVar3 = *(uint *)(param_1 + 0x2c);
            }
            else {
              *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
              lVar6 = *(long *)(param_1 + 0x10);
              *(long *)(param_1 + 0x10) = lVar6 + 4;
              uVar3 = *(uint *)(lVar6 + 4);
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
              uVar12 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18;
              uVar3 = uVar12 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
              uVar12 = uVar12 << ((byte)(iVar5 + -0x1f) & 0x1f);
            }
            *(uint *)(param_1 + 0x2c) = uVar12;
            uVar3 = (uint)(char)puVar16[(ulong)(uVar3 >> 0x1f) + uVar15 * 2];
            uVar15 = (ulong)uVar3;
          } while (-1 < (int)uVar3);
          *(uint *)(puVar14 + uVar8 * 4 + uVar11 * 0x88 + 0x28) = uVar3 + 0x40;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar17);
      }
      puVar14[uVar11 + 0x688] = (byte)(uVar9 >> 0x1f);
      uVar11 = uVar11 + 1;
      puVar14 = *(undefined1 **)(param_1 + 0xc138);
    } while (uVar11 < (byte)puVar14[0x20]);
  }
  if ((*(int *)(puVar14 + 8) != 0) && (puVar14[0x20] != '\0')) {
    uVar11 = 0;
    do {
      piVar1 = *(int **)(param_1 + 0x40);
      *piVar1 = *piVar1 + 1;
      iVar5 = *(int *)(param_1 + 0x28);
      uVar9 = iVar5 + 1;
      *(uint *)(param_1 + 0x28) = uVar9;
      if (uVar9 < 0x20) {
        uVar9 = *(uint *)(param_1 + 0x2c);
        uVar3 = uVar9 * 2;
      }
      else if (uVar9 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar3;
        uVar9 = 0;
        if (uVar3 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
        }
        uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + 4;
        uVar9 = *(uint *)(lVar6 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = uVar3 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar3 = uVar3 << ((byte)(iVar5 + -0x1f) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar3;
      puVar7 = &DAT_100707a90;
      if (-1 < (int)uVar9) {
        puVar7 = &DAT_100707a70;
      }
      uVar17 = (ulong)*(uint *)(*(long *)(puVar14 + 0x698) + (long)*(int *)(puVar14 + 0x18) * 4);
      if (uVar17 != 0) {
        uVar8 = 0;
        do {
          uVar15 = 0;
          do {
            *piVar1 = *piVar1 + 1;
            iVar5 = *(int *)(param_1 + 0x28);
            uVar3 = iVar5 + 1;
            *(uint *)(param_1 + 0x28) = uVar3;
            if (uVar3 < 0x20) {
              uVar3 = *(uint *)(param_1 + 0x2c);
              uVar12 = uVar3 * 2;
            }
            else if (uVar3 == 0x20) {
              *(undefined4 *)(param_1 + 0x28) = 0;
              uVar12 = *(int *)(param_1 + 0x18) + 1;
              *(uint *)(param_1 + 0x18) = uVar12;
              uVar3 = 0;
              if (uVar12 < *(uint *)(param_1 + 0x34)) {
                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 4);
              }
              uVar12 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18;
              uVar3 = *(uint *)(param_1 + 0x2c);
            }
            else {
              *(int *)(param_1 + 0x28) = iVar5 + -0x1f;
              lVar6 = *(long *)(param_1 + 0x10);
              *(long *)(param_1 + 0x10) = lVar6 + 4;
              uVar3 = *(uint *)(lVar6 + 4);
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
              uVar12 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18;
              uVar3 = uVar12 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
              uVar12 = uVar12 << ((byte)(iVar5 + -0x1f) & 0x1f);
            }
            *(uint *)(param_1 + 0x2c) = uVar12;
            uVar3 = (uint)(char)puVar7[(ulong)(uVar3 >> 0x1f) + uVar15 * 2];
            uVar15 = (ulong)uVar3;
          } while (-1 < (int)uVar3);
          *(uint *)(puVar14 + uVar8 * 4 + uVar11 * 0x88 + 0x358) = uVar3 + 0x40;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar17);
      }
      puVar14[uVar11 + 0x68d] = (byte)(uVar9 >> 0x1f);
      uVar11 = uVar11 + 1;
      puVar14 = *(undefined1 **)(param_1 + 0xc138);
    } while (uVar11 < (byte)puVar14[0x20]);
  }
  piVar1 = *(int **)(param_1 + 0x40);
  if (*(int *)(puVar14 + 0xc) == 0) goto LAB_1001226b1;
  *piVar1 = *piVar1 + 4;
  iVar5 = *(int *)(param_1 + 0x28);
  uVar9 = iVar5 + 4;
  *(uint *)(param_1 + 0x28) = uVar9;
  if (uVar9 < 0x20) {
    uVar9 = *(uint *)(param_1 + 0x2c);
    uVar3 = uVar9 << 4;
LAB_100122574:
    *(uint *)(param_1 + 0x2c) = uVar3;
  }
  else {
    if (uVar9 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar9 = 0;
      if (uVar3 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
      }
      uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar9 = *(uint *)(param_1 + 0x2c);
      goto LAB_100122574;
    }
    *(int *)(param_1 + 0x28) = iVar5 + -0x1c;
    lVar6 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar6 + 4;
    uVar9 = *(uint *)(lVar6 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = uVar3 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar3 << ((byte)(iVar5 + -0x1c) & 0x1f);
  }
  uVar3 = uVar9 >> 0x1c;
  if (uVar3 == 0xf) {
    *piVar1 = *piVar1 + 8;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar9 = iVar5 + 8;
    *(uint *)(param_1 + 0x28) = uVar9;
    if (uVar9 < 0x20) {
      uVar9 = *(uint *)(param_1 + 0x2c);
      iVar5 = uVar9 << 8;
LAB_10012263c:
      *(int *)(param_1 + 0x2c) = iVar5;
    }
    else {
      if (uVar9 != 0x20) {
        *(int *)(param_1 + 0x28) = iVar5 + -0x18;
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + 4;
        uVar9 = *(uint *)(lVar6 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = uVar3 >> (-(char)iVar5 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        iVar5 = uVar3 << ((byte)(iVar5 + -0x18) & 0x1f);
        goto LAB_10012263c;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar9 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar9;
      uVar3 = 0;
      if (uVar9 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 4);
      }
      uVar9 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) =
           uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    }
    uVar3 = (uVar9 >> 0x18) + 0xf;
  }
  else if (uVar9 < 0x10000000) goto LAB_1001226b1;
  do {
    *piVar1 = *piVar1 + 8;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar9 = iVar5 + 8;
    *(uint *)(param_1 + 0x28) = uVar9;
    if (uVar9 < 0x20) {
      uVar9 = *(int *)(param_1 + 0x2c) << 8;
    }
    else if (uVar9 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar12 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar12;
      uVar9 = 0;
      if (uVar12 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 4);
      }
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    }
    else {
      iVar5 = iVar5 + -0x18;
      *(int *)(param_1 + 0x28) = iVar5;
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + 4;
      uVar9 = *(uint *)(lVar6 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar9 = (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) <<
              ((byte)iVar5 & 0x1f);
    }
    *(uint *)(param_1 + 0x2c) = uVar9;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
LAB_1001226b1:
  *puVar14 = 1;
  return (iVar10 - *(int *)(param_1 + 0x38)) + *piVar1;
}

