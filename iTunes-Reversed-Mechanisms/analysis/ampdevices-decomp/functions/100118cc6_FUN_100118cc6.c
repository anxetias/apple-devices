// name: FUN_100118cc6
// address: 100118cc6

uint FUN_100118cc6(long param_1,uint param_2,undefined1 param_3)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = 1;
  uVar11 = uVar10;
  if (param_2 != 0) {
    if ((param_2 < 0x400) && (bVar7 = *(byte *)(param_1 + 0x1f4c), bVar7 < 5)) {
      uVar3 = (ulong)((uint)bVar7 * 0x400 + (uint)bVar7 * 4);
      *(undefined1 *)(param_1 + 0xb3a + uVar3) = param_3;
      *(char *)(param_1 + 0xb3b + uVar3) = (char)param_2;
      piVar1 = *(int **)(param_1 + 0x40);
      *piVar1 = *piVar1 + 4;
      iVar6 = *(int *)(param_1 + 0x28);
      uVar11 = iVar6 + 4;
      *(uint *)(param_1 + 0x28) = uVar11;
      if (uVar11 < 0x20) {
        uVar11 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar11 << 4;
      }
      else if (uVar11 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar11 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar11;
        uVar10 = 0;
        if (uVar11 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar10 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 4);
        }
        uVar11 = *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) =
             uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      }
      else {
        *(int *)(param_1 + 0x28) = iVar6 + -0x1c;
        lVar9 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar9 + 4;
        uVar11 = *(uint *)(lVar9 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar10 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
        ;
        uVar11 = uVar10 >> (-(char)iVar6 & 0x1fU) | *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x2c) = uVar10 << ((byte)(iVar6 + -0x1c) & 0x1f);
      }
      *(byte *)(param_1 + 0xb3c + (ulong)((uint)bVar7 * 0x400 + (uint)bVar7 * 4)) =
           (byte)(uVar11 >> 0x1c);
      if (param_2 == 1) {
        param_2 = 1;
      }
      else {
        lVar9 = param_1 + 0xb3d;
        lVar8 = (ulong)param_2 - 1;
        do {
          *piVar1 = *piVar1 + 8;
          iVar6 = *(int *)(param_1 + 0x28);
          uVar11 = iVar6 + 8;
          *(uint *)(param_1 + 0x28) = uVar11;
          if (uVar11 < 0x20) {
            uVar11 = *(uint *)(param_1 + 0x2c);
            uVar10 = uVar11 << 8;
          }
          else if (uVar11 == 0x20) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar10 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar10;
            uVar11 = 0;
            if (uVar10 < *(uint *)(param_1 + 0x34)) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
              uVar11 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
            }
            uVar10 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            uVar11 = *(uint *)(param_1 + 0x2c);
          }
          else {
            *(int *)(param_1 + 0x28) = iVar6 + -0x18;
            lVar2 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar2 + 4;
            uVar11 = *(uint *)(lVar2 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar10 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
            uVar11 = uVar10 >> (-(char)iVar6 & 0x1fU) | *(uint *)(param_1 + 0x2c);
            uVar10 = uVar10 << ((byte)(iVar6 + -0x18) & 0x1f);
          }
          *(uint *)(param_1 + 0x2c) = uVar10;
          *(char *)(lVar9 + (ulong)((uint)*(byte *)(param_1 + 0x1f4c) * 0x400 +
                                   (uint)*(byte *)(param_1 + 0x1f4c) * 4)) = (char)(uVar11 >> 0x18);
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        bVar7 = *(byte *)(param_1 + 0x1f4c);
      }
      *(byte *)(param_1 + 0x1f4c) = bVar7 + 1;
      uVar11 = param_2;
    }
    else {
      piVar1 = *(int **)(param_1 + 0x40);
      *piVar1 = *piVar1 + 4;
      iVar6 = *(int *)(param_1 + 0x28);
      uVar5 = iVar6 + 4;
      *(uint *)(param_1 + 0x28) = uVar5;
      if (uVar5 < 0x20) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 4;
      }
      else {
        if (uVar5 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar4 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar4;
          uVar5 = 0;
          if (uVar4 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
          }
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        }
        else {
          iVar6 = iVar6 + -0x1c;
          *(int *)(param_1 + 0x28) = iVar6;
          lVar9 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar9 + 4;
          uVar5 = *(uint *)(lVar9 + 4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)
                  << ((byte)iVar6 & 0x1f);
        }
        *(uint *)(param_1 + 0x2c) = uVar5;
      }
      if (param_2 != 1) {
        do {
          *piVar1 = *piVar1 + 8;
          iVar6 = *(int *)(param_1 + 0x28);
          uVar11 = iVar6 + 8;
          *(uint *)(param_1 + 0x28) = uVar11;
          if (uVar11 < 0x20) {
            uVar11 = *(int *)(param_1 + 0x2c) << 8;
          }
          else if (uVar11 == 0x20) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar5 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar5;
            uVar11 = 0;
            if (uVar5 < *(uint *)(param_1 + 0x34)) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
              uVar11 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 4);
            }
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18;
          }
          else {
            iVar6 = iVar6 + -0x18;
            *(int *)(param_1 + 0x28) = iVar6;
            lVar9 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar9 + 4;
            uVar11 = *(uint *)(lVar9 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar11 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18) << ((byte)iVar6 & 0x1f);
          }
          *(uint *)(param_1 + 0x2c) = uVar11;
          uVar10 = uVar10 + 1;
          uVar11 = param_2;
        } while (param_2 != uVar10);
      }
    }
  }
  if (*(char *)(param_1 + 0x1f4c) != '\0') {
    *(undefined1 *)(param_1 + 0x1f4f) = 1;
  }
  return uVar11;
}

