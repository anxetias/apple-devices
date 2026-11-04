// name: FUN_10011e23e
// address: 10011e23e

undefined4 FUN_10011e23e(long *param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  
  if ((char)param_1[0x15] != '\0') {
    lVar14 = 8;
    uVar15 = 0;
    do {
      *(undefined4 *)((long)param_1 + uVar15 * 4 + 0xb8) = 3;
      lVar3 = param_1[0x14];
      if (*(char *)(lVar3 + -7 + lVar14) != '\x03') {
        *(undefined1 *)((long)param_1 + 0xc136) = *(undefined1 *)((long)param_1 + 0xc137);
        puVar4 = (undefined8 *)param_1[uVar15 + 9];
        puVar7 = (uint *)param_1[0xe];
        puVar9 = (uint *)(lVar3 + lVar14 + -4);
        bVar1 = *(byte *)(lVar3 + lVar14 + -5);
        uVar11 = (uint)bVar1 * 8;
        *(uint **)(puVar7 + 2) = puVar9;
        puVar7[1] = uVar11;
        *puVar4 = puVar7;
        *puVar7 = 0;
        if (bVar1 == 0) {
          return 0xfffffffe;
        }
        lVar12 = uVar15 * 0x404 + lVar3 + 4;
        *(uint *)((long)param_1 + 0x34) = (uint)bVar1 * 2;
        *(undefined4 *)(param_1 + 3) = 0;
        param_1[8] = (long)puVar7;
        param_1[4] = (long)puVar9;
        *(undefined4 *)(param_1 + 5) = 0;
        uVar13 = *puVar9;
        *(uint *)((long)param_1 + 0x2c) =
             uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
        param_1[2] = (long)puVar9;
        *(uint *)(param_1 + 7) = (uint)bVar1 << 6;
        *puVar7 = *puVar7 + 4;
        lVar5 = param_1[5];
        uVar13 = (int)lVar5 + 4;
        *(uint *)(param_1 + 5) = uVar13;
        if (uVar13 < 0x20) {
          uVar13 = *(int *)((long)param_1 + 0x2c) << 4;
        }
        else if (uVar13 == 0x20) {
          *(undefined4 *)(param_1 + 5) = 0;
          uVar10 = (int)param_1[3] + 1;
          *(uint *)(param_1 + 3) = uVar10;
          uVar13 = 0;
          if (uVar10 < *(uint *)((long)param_1 + 0x34)) {
            lVar12 = lVar3 + lVar14;
            param_1[2] = lVar12;
            uVar13 = *(uint *)(lVar12 + -4 + (ulong)uVar10 * 4);
          }
          uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18;
        }
        else {
          iVar6 = (int)lVar5 + -0x1c;
          *(int *)(param_1 + 5) = iVar6;
          lVar12 = lVar3 + lVar14;
          param_1[2] = lVar12;
          uVar13 = *(uint *)(lVar3 + lVar14);
          *(int *)(param_1 + 3) = (int)param_1[3] + 1;
          uVar13 = (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18) << ((byte)iVar6 & 0x1f);
        }
        *(uint *)((long)param_1 + 0x2c) = uVar13;
        if (*(char *)(lVar3 + -6 + lVar14) == '\x0e') {
          *puVar7 = *puVar7 + 10;
          lVar5 = param_1[5];
          uVar13 = (int)lVar5 + 10;
          *(uint *)(param_1 + 5) = uVar13;
          if (uVar13 < 0x20) {
            uVar13 = *(int *)((long)param_1 + 0x2c) << 10;
          }
          else if (uVar13 == 0x20) {
            *(undefined4 *)(param_1 + 5) = 0;
            uVar10 = (int)param_1[3] + 1;
            *(uint *)(param_1 + 3) = uVar10;
            uVar13 = 0;
            if (uVar10 < *(uint *)((long)param_1 + 0x34)) {
              param_1[2] = lVar12 + 4;
              uVar13 = *(uint *)(lVar14 + -4 + lVar3 + (ulong)uVar10 * 4);
            }
            uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18;
          }
          else {
            iVar6 = (int)lVar5 + -0x16;
            *(int *)(param_1 + 5) = iVar6;
            param_1[2] = lVar12 + 4;
            uVar13 = *(uint *)(lVar12 + 4);
            *(int *)(param_1 + 3) = (int)param_1[3] + 1;
            uVar13 = (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18) << ((byte)iVar6 & 0x1f);
          }
          *(uint *)((long)param_1 + 0x2c) = uVar13;
          uVar13 = *puVar7;
          (**(code **)(*param_1 + 0x30))(param_1,uVar11,uVar11 - 0xe);
          puVar7 = (uint *)*puVar4;
          *puVar7 = uVar13;
          uVar11 = puVar7[1];
          if (uVar11 * 8 <= uVar13) {
            return 0xfffffffe;
          }
          uVar10 = ((uVar11 >> 2) + 1) - (uint)((uVar11 & 3) == 0);
          *(uint *)((long)param_1 + 0x34) = uVar10;
          uVar11 = uVar13 >> 5;
          *(uint *)(param_1 + 3) = uVar11;
          if (uVar11 < uVar10) {
            param_1[8] = (long)puVar7;
            lVar3 = *(long *)(puVar7 + 2);
            param_1[4] = lVar3;
            *(uint *)(param_1 + 5) = uVar13 & 0x1f;
            puVar9 = (uint *)(lVar3 + (ulong)uVar11 * 4);
            uVar11 = *puVar9;
            *(uint *)((long)param_1 + 0x2c) =
                 (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18) << (sbyte)(uVar13 & 0x1f);
            param_1[2] = (long)puVar9;
          }
          else {
            puVar7 = (uint *)param_1[8];
          }
        }
        *puVar7 = *puVar7 + 1;
        iVar6 = (int)param_1[5];
        uVar11 = iVar6 + 1;
        *(uint *)(param_1 + 5) = uVar11;
        if (uVar11 < 0x20) {
          uVar11 = *(uint *)((long)param_1 + 0x2c);
          uVar13 = uVar11 * 2;
        }
        else if (uVar11 == 0x20) {
          *(undefined4 *)(param_1 + 5) = 0;
          uVar13 = (int)param_1[3] + 1;
          *(uint *)(param_1 + 3) = uVar13;
          uVar11 = 0;
          if (uVar13 < *(uint *)((long)param_1 + 0x34)) {
            param_1[2] = param_1[2] + 4;
            uVar11 = *(uint *)(param_1[4] + (ulong)uVar13 * 4);
          }
          uVar13 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          uVar11 = *(uint *)((long)param_1 + 0x2c);
        }
        else {
          *(int *)(param_1 + 5) = iVar6 + -0x1f;
          lVar3 = param_1[2];
          param_1[2] = lVar3 + 4;
          uVar11 = *(uint *)(lVar3 + 4);
          *(int *)(param_1 + 3) = (int)param_1[3] + 1;
          uVar13 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          uVar11 = uVar13 >> (-(char)iVar6 & 0x1fU) | *(uint *)((long)param_1 + 0x2c);
          uVar13 = uVar13 << ((byte)(iVar6 + -0x1f) & 0x1f);
        }
        *(uint *)((long)param_1 + 0x2c) = uVar13;
        if ((int)uVar11 < 0) {
          *(undefined4 *)((long)param_1 + uVar15 * 4 + 0xb8) = 0;
          iVar6 = (**(code **)(*param_1 + 0x38))(param_1,param_1[uVar15 + 0xf]);
          *(int *)((long)param_1 + uVar15 * 4 + 0xb8) = iVar6;
          if (iVar6 == 1) {
            iVar6 = (**(code **)(*param_1 + 0x50))(param_1,param_1[uVar15 + 0xf]);
            if (iVar6 != 0) {
              return 0xfffffffe;
            }
            *(undefined4 *)param_1[uVar15 + 0xf] = 2;
          }
          else if (iVar6 == 3) {
            return 0xfffffffe;
          }
        }
        if (*(int *)param_1[uVar15 + 0xf] == 2) {
          lVar3 = param_1[0x14];
          cVar2 = *(char *)(lVar3 + -7 + lVar14);
          if (cVar2 == '\x01') {
            uVar8 = (ulong)*(byte *)(lVar3 + -8 + lVar14);
            param_1[0x1821] = (long)(param_1 + uVar8 * 0x1d4 + 0x8d);
            param_1[0x1822] = (long)(param_1 + uVar8 * 0x1d4 + 0x8d + 0x1d4);
            param_1[0x1823] = (long)(param_1 + uVar8 * 0x23 + 0x167d);
            param_1[0x1824] = (long)(param_1 + uVar8 * 0x23 + 0x167d + 0x23);
            iVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_1[uVar15 + 0xf]);
          }
          else {
            if (cVar2 != '\0') {
              return 0xfffffffe;
            }
            uVar8 = (ulong)*(byte *)(lVar3 + -8 + lVar14);
            param_1[0x1821] = (long)(param_1 + uVar8 * 0x1d4 + 0x8d);
            param_1[0x1823] = (long)(param_1 + uVar8 * 0x23 + 0x167d);
            iVar6 = (**(code **)(*param_1 + 0x40))(param_1,param_1[uVar15 + 0xf]);
          }
          if (iVar6 != 0) {
            return 0xfffffffe;
          }
          if ((-*(int *)param_1[8] & 7U) + *(int *)param_1[8] !=
              (uint)*(byte *)(param_1[0x14] + -5 + lVar14) << 3) {
            *(undefined1 *)((long)param_1 + 0xc137) = 1;
          }
        }
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x404;
    } while (uVar15 < *(byte *)(param_1 + 0x15));
  }
  return 0;
}

