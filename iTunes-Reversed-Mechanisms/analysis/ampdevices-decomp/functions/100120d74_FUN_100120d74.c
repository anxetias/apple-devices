// name: FUN_100120d74
// address: 100120d74

undefined8 FUN_100120d74(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  
  piVar1 = *(int **)(param_1 + 0x40);
  *piVar1 = *piVar1 + 1;
  iVar6 = *(int *)(param_1 + 0x28);
  uVar8 = iVar6 + 1;
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
    *(int *)(param_1 + 0x28) = iVar6 + -0x1f;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar8 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar3 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    uVar8 = uVar3 >> (-(char)iVar6 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar3 << ((byte)(iVar6 + -0x1f) & 0x1f);
  }
  if (-1 < (int)uVar8) {
    return 0;
  }
  *piVar1 = *piVar1 + 4;
  iVar6 = *(int *)(param_1 + 0x28);
  uVar8 = iVar6 + 4;
  *(uint *)(param_1 + 0x28) = uVar8;
  if (uVar8 < 0x20) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) << 4;
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
    uVar7 = (ulong)*(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar6 + -0x1c;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar8 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    uVar7 = (ulong)(uVar8 >> (-(char)iVar6 & 0x1fU) | *(uint *)(param_1 + 0x2c));
    *(uint *)(param_1 + 0x2c) = uVar8 << ((byte)(iVar6 + -0x1c) & 0x1f);
  }
  iVar6 = (int)(uVar7 >> 0x1c);
  if (iVar6 == 0xf) {
    *piVar1 = *piVar1 + 8;
    iVar6 = *(int *)(param_1 + 0x28);
    uVar8 = iVar6 + 8;
    *(uint *)(param_1 + 0x28) = uVar8;
    if (uVar8 < 0x20) {
      uVar8 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar8 << 8;
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
      *(int *)(param_1 + 0x28) = iVar6 + -0x18;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar8 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar3 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = uVar3 >> (-(char)iVar6 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar3 << ((byte)(iVar6 + -0x18) & 0x1f);
    }
    uVar8 = (uVar8 >> 0x18) * 8 + 0x78;
  }
  else {
    if ((uint)uVar7 < 0x10000000) {
      return 0;
    }
    uVar8 = iVar6 << 3;
  }
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x40);
    *piVar1 = *piVar1 + 2;
    iVar6 = *(int *)(param_1 + 0x28);
    uVar3 = iVar6 + 2;
    *(uint *)(param_1 + 0x28) = uVar3;
    if (uVar3 < 0x20) {
      uVar4 = *(uint *)(param_1 + 0x2c);
      uVar3 = uVar4 * 4;
    }
    else if (uVar3 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar4 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar4;
      uVar3 = 0;
      if (uVar4 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
      }
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar4 = *(uint *)(param_1 + 0x2c);
    }
    else {
      *(int *)(param_1 + 0x28) = iVar6 + -0x1e;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar3 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar4 = uVar3 >> (-(char)iVar6 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      uVar3 = uVar3 << ((byte)(iVar6 + -0x1e) & 0x1f);
    }
    *(uint *)(param_1 + 0x2c) = uVar3;
    uVar3 = uVar8 - 2;
    if (!SBORROW4(0,uVar4 & 0xc0000000)) break;
    if ((*(char *)(param_1 + 0xc134) == '\0') && (*(char *)(param_1 + 0xc135) == '\0')) {
      *(undefined1 *)(param_1 + 0xc135) = 1;
      *(undefined4 *)(param_2 + 4) = 3;
    }
    uVar4 = FUN_100121aa2(param_1);
    uVar8 = uVar3 - uVar4;
    if (uVar3 < uVar4) {
      return 0xfffffffe;
    }
    if (uVar8 < 8) goto LAB_100121077;
  }
  if (7 < uVar3) {
    uVar8 = uVar3 >> 3;
    do {
      *piVar1 = *piVar1 + 8;
      iVar6 = *(int *)(param_1 + 0x28);
      uVar4 = iVar6 + 8;
      *(uint *)(param_1 + 0x28) = uVar4;
      if (uVar4 < 0x20) {
        uVar4 = *(int *)(param_1 + 0x2c) << 8;
      }
      else if (uVar4 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar5 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar5;
        uVar4 = 0;
        if (uVar5 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 4);
        }
        uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
      else {
        iVar6 = iVar6 + -0x18;
        *(int *)(param_1 + 0x28) = iVar6;
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2 + 4;
        uVar4 = *(uint *)(lVar2 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) <<
                ((byte)iVar6 & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar3 & 7;
LAB_100121077:
  if (uVar8 == 0) {
    return 0;
  }
  **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + uVar8;
  uVar3 = *(int *)(param_1 + 0x28) + uVar8;
  *(uint *)(param_1 + 0x28) = uVar3;
  if (uVar3 < 0x20) {
    uVar4 = *(uint *)(param_1 + 0x2c);
    uVar3 = uVar8;
  }
  else {
    if (uVar3 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar8 = 0;
      if (uVar3 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
      }
      uVar4 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      goto LAB_1001210f1;
    }
    *(uint *)(param_1 + 0x28) = uVar3 - 0x20;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar8 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar4 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  }
  uVar4 = uVar4 << ((byte)uVar3 & 0x1f);
LAB_1001210f1:
  *(uint *)(param_1 + 0x2c) = uVar4;
  return 0;
}

