// name: FUN_10011e670
// address: 10011e670

uint FUN_10011e670(long param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = param_2 - **(int **)(param_1 + 0x40);
  if (param_3 <= uVar9) {
    uVar9 = param_3;
  }
  if ((int)uVar9 < 0) {
    return 0xfffffffe;
  }
  iVar7 = (int)uVar9 >> 4;
  puVar2 = *(undefined4 **)(param_1 + 0xb0);
  *puVar2 = 0x2000000;
  *(undefined2 *)(puVar2 + 1) = 0x233;
  iVar8 = iVar7;
  if (0xf < uVar9) {
    do {
      **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 0x10;
      iVar1 = *(int *)(param_1 + 0x28);
      uVar4 = iVar1 + 0x10;
      *(uint *)(param_1 + 0x28) = uVar4;
      if (uVar4 < 0x20) {
        uVar4 = *(uint *)(param_1 + 0x2c);
        uVar6 = uVar4 << 0x10;
      }
      else if (uVar4 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar6 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar6;
        uVar4 = 0;
        if (uVar6 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 4);
        }
        uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        uVar4 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar1 + -0x10;
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar3 + 4;
        uVar4 = *(uint *)(lVar3 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        uVar4 = uVar6 >> (-(char)iVar1 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar6 = uVar6 << ((byte)(iVar1 + -0x10) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar6;
      FUN_10011e836(param_1,uVar4 >> 0x10,0x10);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = uVar9 + iVar7 * -0x10;
  if (iVar8 == 0 || (int)uVar9 < iVar7 * 0x10) {
    return 0xfffffffe;
  }
  **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + iVar8;
  uVar9 = *(int *)(param_1 + 0x28) + iVar8;
  *(uint *)(param_1 + 0x28) = uVar9;
  bVar5 = (byte)iVar8;
  if (uVar9 < 0x20) {
    uVar4 = *(uint *)(param_1 + 0x2c) >> (-bVar5 & 0x1f);
    uVar9 = *(uint *)(param_1 + 0x2c) << (bVar5 & 0x1f);
  }
  else {
    if (uVar9 != 0x20) {
      *(uint *)(param_1 + 0x28) = uVar9 - 0x20;
      lVar3 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar3 + 4;
      uVar4 = *(uint *)(lVar3 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = (uVar6 >> (bVar5 - (char)(uVar9 - 0x20) & 0x1f) | *(uint *)(param_1 + 0x2c)) >>
              (-bVar5 & 0x1f);
      *(uint *)(param_1 + 0x2c) = uVar6 << ((byte)uVar9 & 0x1f);
      goto LAB_10011e806;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar4 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar4;
    uVar9 = 0;
    if (uVar4 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar9 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
    }
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar4 = (uVar9 >> (bVar5 & 0x1f) | *(uint *)(param_1 + 0x2c)) >> (-bVar5 & 0x1f);
  }
  *(uint *)(param_1 + 0x2c) = uVar9;
LAB_10011e806:
  FUN_10011e836(param_1,uVar4,iVar8);
  return **(ushort **)(param_1 + 0xb0) & 0x3ff;
}

