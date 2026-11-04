// name: FUN_10015f04f
// address: 10015f04f

undefined8 FUN_10015f04f(long param_1,long param_2,long param_3,int param_4)

{
  ushort uVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  
  fVar2 = DAT_100700b28;
  uVar5 = *(uint *)(param_1 + 0xc);
  if ((uVar5 & 0x20) != 0) {
    return 0xffffffce;
  }
  if (*(int *)(param_1 + 8) != 0x6c70636d) {
    return 0xffffffce;
  }
  if ((uVar5 & 0xd) == 0xc) {
    bVar7 = (byte)uVar5 >> 1;
    if (*(int *)(param_1 + 0x20) == 0x18) {
      if (param_4 == 0) {
        return 0;
      }
      lVar6 = 0;
      do {
        if ((bVar7 & 1) == 0) {
          uVar4 = (((int)((uint)*(byte *)(param_2 + 5 + lVar6) << 0x18 |
                         (uint)*(ushort *)(param_2 + 3 + lVar6) << 8) >> 8) +
                  ((int)((uint)*(byte *)(param_2 + 2 + lVar6) << 0x18 |
                        (uint)*(ushort *)(param_2 + lVar6) << 8) >> 8)) / 2;
          uVar9 = uVar4 >> 0x10;
          uVar5 = uVar4;
        }
        else {
          uVar9 = (((int)((uint)*(byte *)(param_2 + 5 + lVar6) << 8 |
                         (uint)*(byte *)(param_2 + 4 + lVar6) << 0x10 |
                         (uint)*(byte *)(param_2 + 3 + lVar6) << 0x18) >> 8) +
                  ((int)((uint)*(byte *)(param_2 + 2 + lVar6) << 8 |
                        (uint)*(byte *)(param_2 + 1 + lVar6) << 0x10 |
                        (uint)*(byte *)(param_2 + lVar6) << 0x18) >> 8)) / 2;
          uVar4 = uVar9 >> 0x10;
          uVar5 = uVar9;
        }
        *(char *)(param_3 + lVar6) = (char)uVar4;
        *(char *)(param_3 + 1 + lVar6) = (char)(uVar5 >> 8);
        *(char *)(param_3 + 2 + lVar6) = (char)uVar9;
        *(undefined2 *)(param_3 + 3 + lVar6) = 0;
        *(undefined1 *)(param_3 + 5 + lVar6) = 0;
        lVar6 = lVar6 + 6;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    if (*(int *)(param_1 + 0x20) == 0x10) {
      if (param_4 == 0) {
        return 0;
      }
      lVar6 = 0;
      do {
        uVar3 = *(ushort *)(param_2 + lVar6 * 4);
        if ((bVar7 & 1) == 0) {
          iVar8 = (int)*(short *)(param_2 + 2 + lVar6 * 4) + (int)(short)uVar3;
          uVar3 = (ushort)((uint)(iVar8 - (iVar8 >> 0x1f)) >> 1);
        }
        else {
          uVar1 = *(ushort *)(param_2 + 2 + lVar6 * 4);
          iVar8 = (int)(short)(uVar1 << 8 | uVar1 >> 8) + (int)(short)(uVar3 << 8 | uVar3 >> 8);
          uVar3 = (ushort)((uint)(iVar8 - (iVar8 >> 0x1f)) >> 1);
          uVar3 = uVar3 << 8 | uVar3 >> 8;
        }
        *(ushort *)(param_3 + lVar6 * 4) = uVar3;
        *(undefined2 *)(param_3 + 2 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (param_4 != (int)lVar6);
      return 0;
    }
  }
  if ((uVar5 & 3) != 1) {
    return 0xffffffce;
  }
  if (*(int *)(param_1 + 0x20) == 0x20) {
    if (param_4 == 0) {
      return 0;
    }
    lVar6 = 0;
    do {
      *(float *)(param_3 + lVar6 * 8) =
           (*(float *)(param_2 + lVar6 * 8) + *(float *)(param_2 + 4 + lVar6 * 8)) * fVar2;
      *(undefined4 *)(param_3 + 4 + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (param_4 != (int)lVar6);
    return 0;
  }
  return 0xffffffce;
}

