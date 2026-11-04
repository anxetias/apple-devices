// name: FUN_10012330a
// address: 10012330a

int FUN_10012330a(long param_1,uint *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar1 = *param_2;
  if ((ulong)uVar1 != 0) {
    piVar3 = *(int **)(param_1 + 0x40);
    uVar7 = 0;
    iVar5 = 0;
    do {
      if (param_3 != '\0') {
        *piVar3 = *piVar3 + 1;
        iVar2 = *(int *)(param_1 + 0x28);
        uVar8 = iVar2 + 1;
        *(uint *)(param_1 + 0x28) = uVar8;
        if (uVar8 < 0x20) {
          uVar8 = *(uint *)(param_1 + 0x2c);
          uVar6 = uVar8 * 2;
        }
        else if (uVar8 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar6 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar6;
          uVar8 = 0;
          if (uVar6 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 4);
          }
          uVar6 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
          uVar8 = *(uint *)(param_1 + 0x2c);
        }
        else {
          *(int *)(param_1 + 0x28) = iVar2 + -0x1f;
          lVar4 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar4 + 4;
          uVar8 = *(uint *)(lVar4 + 4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar6 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
          uVar8 = uVar6 >> (-(char)iVar2 & 0x1fU) | *(uint *)(param_1 + 0x2c);
          uVar6 = uVar6 << ((byte)(iVar2 + -0x1f) & 0x1f);
        }
        *(uint *)(param_1 + 0x2c) = uVar6;
        param_2[uVar7 + 1] = uVar8 >> 0x1f;
        iVar5 = iVar5 + 1;
      }
      *piVar3 = *piVar3 + 4;
      iVar2 = *(int *)(param_1 + 0x28);
      uVar8 = iVar2 + 4;
      *(uint *)(param_1 + 0x28) = uVar8;
      if (uVar8 < 0x20) {
        uVar8 = *(uint *)(param_1 + 0x2c);
        uVar6 = uVar8 << 4;
      }
      else if (uVar8 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar6 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar6;
        uVar8 = 0;
        if (uVar6 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 4);
        }
        uVar6 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        uVar8 = *(uint *)(param_1 + 0x2c);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar2 + -0x1c;
        lVar4 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar4 + 4;
        uVar8 = *(uint *)(lVar4 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar6 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        uVar8 = uVar6 >> (-(char)iVar2 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        uVar6 = uVar6 << ((byte)(iVar2 + -0x1c) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar6;
      param_2[uVar7 + 0x11] = uVar8 >> 0x1c;
      iVar5 = iVar5 + 4;
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
    return iVar5;
  }
  return 0;
}

