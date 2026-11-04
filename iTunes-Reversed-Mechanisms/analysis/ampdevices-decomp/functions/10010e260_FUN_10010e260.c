// name: FUN_10010e260
// address: 10010e260

undefined8 FUN_10010e260(long param_1,undefined1 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  int local_60;
  int local_58;
  undefined8 *local_48;
  undefined8 *local_40;
  ulong local_38;
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xba8) + 8);
  bVar1 = *(byte *)*puVar5;
  if (bVar1 != 0) {
    bVar2 = *(byte *)((long)puVar5 + 0x1b);
    bVar3 = *(byte *)((long)puVar5 + 0x1a);
    *param_2 = 0;
    lVar6 = *(long *)(param_1 + 0xba8);
    uVar14 = (ulong)*(uint *)(*(long *)(lVar6 + 8) + 0x20);
    if (uVar14 != 0) {
      local_48 = (undefined8 *)(lVar6 + 0x958);
      local_40 = (undefined8 *)(lVar6 + 0x590);
      local_38 = 0;
      pbVar21 = (byte *)(lVar6 + 0x54);
      do {
        puVar9 = local_40;
        puVar5 = local_48;
        lVar12 = *(long *)(param_1 + 0xba8) + local_38 * 0x10;
        pbVar22 = pbVar21;
        uVar20 = 0;
        do {
          piVar7 = *(int **)(param_1 + 0x40);
          *piVar7 = *piVar7 + 4;
          iVar4 = *(int *)(param_1 + 0x28);
          uVar19 = iVar4 + 4;
          *(uint *)(param_1 + 0x28) = uVar19;
          if (uVar19 < 0x20) {
            uVar19 = *(uint *)(param_1 + 0x2c);
            uVar16 = uVar19 << 4;
          }
          else if (uVar19 == 0x20) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar16 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar16;
            uVar19 = 0;
            if (uVar16 < *(uint *)(param_1 + 0x34)) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
              uVar19 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar16 * 4);
            }
            uVar16 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
            uVar19 = *(uint *)(param_1 + 0x2c);
          }
          else {
            *(int *)(param_1 + 0x28) = iVar4 + -0x1c;
            lVar8 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar8 + 4;
            uVar19 = *(uint *)(lVar8 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar16 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
                     uVar19 << 0x18;
            uVar19 = uVar16 >> (-(char)iVar4 & 0x1fU) | *(uint *)(param_1 + 0x2c);
            uVar16 = uVar16 << ((byte)(iVar4 + -0x1c) & 0x1f);
          }
          *(uint *)(param_1 + 0x2c) = uVar16;
          pbVar22[1] = uVar19 + 0xf0000000 < 0xc0000000;
          *pbVar22 = (byte)(uVar19 >> 0x1c);
          uVar16 = (uint)bVar3;
          if (bVar3 == 0) {
            uVar15 = 0;
          }
          else {
            *piVar7 = *piVar7 + (uint)bVar3;
            uVar10 = *(int *)(param_1 + 0x28) + uVar16;
            *(uint *)(param_1 + 0x28) = uVar10;
            if (uVar10 < 0x20) {
              uVar15 = *(uint *)(param_1 + 0x2c);
              uVar17 = uVar15;
              bVar13 = bVar3;
LAB_10010e433:
              uVar17 = uVar17 << (bVar13 & 0x1f);
            }
            else {
              if (uVar10 != 0x20) {
                *(uint *)(param_1 + 0x28) = uVar10 - 0x20;
                lVar8 = *(long *)(param_1 + 0x10);
                *(long *)(param_1 + 0x10) = lVar8 + 4;
                uVar15 = *(uint *)(lVar8 + 4);
                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                uVar17 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                         uVar15 << 0x18;
                uVar15 = uVar17 >> (bVar3 - (char)(uVar10 - 0x20) & 0x1f) |
                         *(uint *)(param_1 + 0x2c);
                bVar13 = (byte)uVar10;
                goto LAB_10010e433;
              }
              *(undefined4 *)(param_1 + 0x28) = 0;
              uVar10 = *(int *)(param_1 + 0x18) + 1;
              *(uint *)(param_1 + 0x18) = uVar10;
              uVar15 = 0;
              if (uVar10 < *(uint *)(param_1 + 0x34)) {
                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                uVar15 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 4);
              }
              uVar17 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                       uVar15 << 0x18;
              uVar15 = uVar17 >> (bVar3 & 0x1f) | *(uint *)(param_1 + 0x2c);
            }
            uVar15 = uVar15 >> (0x20 - bVar3 & 0x1f);
            *(uint *)(param_1 + 0x2c) = uVar17;
          }
          uVar17 = (uint)bVar1;
          uVar10 = uVar20;
          if (uVar15 == bVar2) {
            do {
              if (bVar3 == 0) {
                uVar15 = 0;
              }
              else {
                *piVar7 = *piVar7 + uVar16;
                uVar11 = *(int *)(param_1 + 0x28) + uVar16;
                *(uint *)(param_1 + 0x28) = uVar11;
                if (uVar11 < 0x20) {
                  uVar15 = *(uint *)(param_1 + 0x2c);
                  uVar18 = uVar15;
                  bVar13 = bVar3;
LAB_10010e4ce:
                  uVar18 = uVar18 << (bVar13 & 0x1f);
                }
                else {
                  if (uVar11 != 0x20) {
                    *(uint *)(param_1 + 0x28) = uVar11 - 0x20;
                    lVar8 = *(long *)(param_1 + 0x10);
                    *(long *)(param_1 + 0x10) = lVar8 + 4;
                    uVar15 = *(uint *)(lVar8 + 4);
                    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                    uVar18 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                             uVar15 << 0x18;
                    uVar15 = uVar18 >> (bVar3 - (char)(uVar11 - 0x20) & 0x1f) |
                             *(uint *)(param_1 + 0x2c);
                    bVar13 = (byte)uVar11;
                    goto LAB_10010e4ce;
                  }
                  *(undefined4 *)(param_1 + 0x28) = 0;
                  uVar11 = *(int *)(param_1 + 0x18) + 1;
                  *(uint *)(param_1 + 0x18) = uVar11;
                  uVar15 = 0;
                  if (uVar11 < *(uint *)(param_1 + 0x34)) {
                    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                    uVar15 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 4);
                  }
                  uVar18 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                           uVar15 << 0x18;
                  uVar15 = uVar18 >> (bVar3 & 0x1f) | *(uint *)(param_1 + 0x2c);
                }
                uVar15 = uVar15 >> (0x20 - bVar3 & 0x1f);
                *(uint *)(param_1 + 0x2c) = uVar18;
              }
              uVar10 = uVar10 + bVar2;
            } while ((uVar15 == bVar2) && (uVar10 <= uVar17));
          }
          uVar10 = uVar10 + uVar15;
          if (uVar10 <= uVar20) {
            return 0xfffffffe;
          }
          pbVar22[2] = (byte)uVar20;
          pbVar22[3] = (byte)uVar10;
          pbVar22[5] = 0;
          if (uVar19 < 0xe0000000) {
            if (uVar19 >> 0x1c == 0xd) {
              pbVar22[5] = 1;
            }
            else if (0xfffffff < uVar19) {
              *local_40 = pbVar22;
              local_40 = local_40 + 1;
            }
          }
          else {
            *local_48 = pbVar22;
            local_48 = local_48 + 1;
            *param_2 = 1;
          }
          if (uVar17 < uVar10) {
            return 0xfffffffe;
          }
          pbVar22 = pbVar22 + 6;
          uVar20 = uVar10;
        } while (uVar10 != uVar17);
        *(int *)(lVar12 + 0x328) = (int)((ulong)((long)pbVar22 - (long)pbVar21) >> 1) * -0x55555555;
        local_58 = (int)puVar9;
        *(char *)(lVar6 + 0x950 + local_38) = (char)((uint)((int)local_40 - local_58) >> 3);
        local_60 = (int)puVar5;
        *(char *)(lVar6 + 0xd18 + local_38) = (char)((uint)((int)local_48 - local_60) >> 3);
        *(byte **)(lVar12 + 0x330) = pbVar21;
        local_38 = local_38 + 1;
        pbVar21 = pbVar22;
      } while (local_38 != uVar14);
    }
  }
  return 0;
}

