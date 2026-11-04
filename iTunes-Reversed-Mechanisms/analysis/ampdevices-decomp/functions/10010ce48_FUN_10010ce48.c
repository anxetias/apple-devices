// name: FUN_10010ce48
// address: 10010ce48

undefined8 FUN_10010ce48(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0xba8) + 8) + 0x28);
  **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 7;
  iVar7 = *(int *)(param_1 + 0x28);
  uVar4 = iVar7 + 7;
  *(uint *)(param_1 + 0x28) = uVar4;
  if (uVar4 < 0x20) {
    uVar4 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar4 << 7;
  }
  else if (uVar4 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar4 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar4;
    uVar8 = 0;
    if (uVar4 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
    }
    uVar4 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar7 + -0x19;
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2 + 4;
    uVar4 = *(uint *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = uVar8 >> (-(char)iVar7 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar8 << ((byte)(iVar7 + -0x19) & 0x1f);
  }
  uVar8 = uVar4 & 0xfe000000 ^ 0xff000000;
  uVar9 = 0;
  uVar4 = 0;
  do {
    uVar3 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    iVar7 = (uVar3 ^ 0x1f) + 1;
    if (uVar8 == 0) {
      iVar7 = 1;
    }
    uVar8 = uVar8 << ((byte)iVar7 & 0x1f);
    *(byte *)(lVar1 + (ulong)uVar4) = (byte)iVar7;
    uVar4 = uVar4 + 1;
    uVar9 = uVar9 + iVar7;
    cVar6 = (uVar9 == 8) * '\x03';
    if (8 < uVar9) {
      cVar6 = '\x01';
    }
  } while (cVar6 == '\0');
  if (cVar6 == '\x03') {
    *(uint *)(*(long *)(*(long *)(param_1 + 0xba8) + 8) + 0x20) = uVar4;
    uVar5 = 0;
  }
  else {
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}

