// name: FUN_10010d152
// address: 10010d152

undefined8 FUN_10010d152(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  
  lVar26 = *(long *)(param_1 + 0xba8);
  puVar8 = *(undefined8 **)(lVar26 + 8);
  bVar1 = *(byte *)((long)puVar8 + 0x19);
  bVar2 = *(byte *)((long)puVar8 + 0x1c);
  bVar3 = *(byte *)((long)puVar8 + 0x1d);
  bVar4 = *(byte *)((long)puVar8 + 0x1e);
  bVar13 = *(byte *)*puVar8;
  bVar5 = *(byte *)(param_1 + 0x1dbb8 + (ulong)*(byte *)(puVar8 + 3));
  bVar6 = *(byte *)(param_1 + 0x1dbba + (ulong)*(byte *)(puVar8 + 3));
  *(undefined4 *)(lVar26 + 0x1e13) = *(undefined4 *)((long)puVar8 + 0x1b);
  *(undefined4 *)(lVar26 + 0x1e10) = *(undefined4 *)(puVar8 + 3);
  if ((ulong)bVar1 != 0) {
    lVar9 = *(long *)(param_1 + 0xba8);
    uVar23 = (uint)bVar13;
    uVar27 = (uint)bVar5;
    iVar24 = ((int)(uVar23 - uVar27) >> 0x1f & uVar23 - uVar27) + (uint)bVar5;
    lVar26 = lVar9 + 0x1d7a;
    uVar22 = 0;
    do {
      uVar15 = (uint)bVar2;
      if (uVar15 == 0) {
        *(undefined1 *)(lVar9 + 0x1e60 + uVar22 * 0x50) = 0;
      }
      else {
        piVar10 = *(int **)(param_1 + 0x40);
        *piVar10 = *piVar10 + uVar15;
        uVar12 = *(int *)(param_1 + 0x28) + uVar15;
        *(uint *)(param_1 + 0x28) = uVar12;
        if (uVar12 < 0x20) {
          uVar14 = *(uint *)(param_1 + 0x2c);
          uVar12 = uVar15;
          uVar15 = uVar14;
LAB_10010d2be:
          uVar15 = uVar15 << ((byte)uVar12 & 0x1f);
        }
        else {
          if (uVar12 != 0x20) {
            *(uint *)(param_1 + 0x28) = uVar12 - 0x20;
            lVar11 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar11 + 4;
            uVar15 = *(uint *)(lVar11 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
            uVar14 = uVar15 >> (bVar2 - (char)(uVar12 - 0x20) & 0x1f) | *(uint *)(param_1 + 0x2c);
            goto LAB_10010d2be;
          }
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar12 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar12;
          uVar15 = 0;
          if (uVar12 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar15 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 4);
          }
          uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
          uVar14 = uVar15 >> (bVar2 & 0x1f) | *(uint *)(param_1 + 0x2c);
        }
        *(uint *)(param_1 + 0x2c) = uVar15;
        bVar13 = 0x20 - bVar2 & 0x1f;
        uVar15 = uVar14 >> bVar13;
        *(char *)(lVar9 + 0x1e60 + uVar22 * 0x50) = (char)uVar15;
        if (uVar14 >> bVar13 != 0) {
          *piVar10 = *piVar10 + 1;
          iVar16 = *(int *)(param_1 + 0x28);
          uVar12 = iVar16 + 1;
          *(uint *)(param_1 + 0x28) = uVar12;
          if (uVar12 < 0x20) {
            uVar12 = *(uint *)(param_1 + 0x2c);
            uVar14 = uVar12 * 2;
          }
          else if (uVar12 == 0x20) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar14 = *(int *)(param_1 + 0x18) + 1;
            *(uint *)(param_1 + 0x18) = uVar14;
            uVar12 = 0;
            if (uVar14 < *(uint *)(param_1 + 0x34)) {
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
              uVar12 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar14 * 4);
            }
            uVar14 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            uVar12 = *(uint *)(param_1 + 0x2c);
          }
          else {
            *(int *)(param_1 + 0x28) = iVar16 + -0x1f;
            lVar11 = *(long *)(param_1 + 0x10);
            *(long *)(param_1 + 0x10) = lVar11 + 4;
            uVar12 = *(uint *)(lVar11 + 4);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            uVar14 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            uVar12 = uVar14 >> (-(char)iVar16 & 0x1fU) | *(uint *)(param_1 + 0x2c);
            uVar14 = uVar14 << ((byte)(iVar16 + -0x1f) & 0x1f);
          }
          iVar16 = 3 - ((int)uVar12 >> 0x1f);
          *(uint *)(param_1 + 0x2c) = uVar14;
          *(int *)(lVar9 + 0x1dec + uVar22 * 4) = iVar16;
          if (bVar3 == 0) {
            return 0xfffffffe;
          }
          puVar25 = (undefined1 *)(uVar22 * 0x50 + lVar9 + 0x1e18);
          uVar14 = 0;
          uVar12 = (uint)bVar6;
          do {
            uVar21 = (uint)bVar4;
            *piVar10 = *piVar10 + (uint)bVar3;
            uVar20 = *(int *)(param_1 + 0x28) + (uint)bVar3;
            *(uint *)(param_1 + 0x28) = uVar20;
            if (uVar20 < 0x20) {
              uVar18 = *(uint *)(param_1 + 0x2c);
              uVar17 = uVar18;
              bVar13 = bVar3;
LAB_10010d411:
              uVar17 = uVar17 << (bVar13 & 0x1f);
            }
            else {
              if (uVar20 != 0x20) {
                *(uint *)(param_1 + 0x28) = uVar20 - 0x20;
                lVar11 = *(long *)(param_1 + 0x10);
                *(long *)(param_1 + 0x10) = lVar11 + 4;
                uVar18 = *(uint *)(lVar11 + 4);
                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                uVar17 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                         uVar18 << 0x18;
                uVar18 = uVar17 >> (bVar3 - (char)(uVar20 - 0x20) & 0x1f) |
                         *(uint *)(param_1 + 0x2c);
                bVar13 = (byte)uVar20;
                goto LAB_10010d411;
              }
              *(undefined4 *)(param_1 + 0x28) = 0;
              uVar18 = *(int *)(param_1 + 0x18) + 1;
              *(uint *)(param_1 + 0x18) = uVar18;
              uVar20 = 0;
              if (uVar18 < *(uint *)(param_1 + 0x34)) {
                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                uVar20 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar18 * 4);
              }
              uVar17 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                       uVar20 << 0x18;
              uVar18 = uVar17 >> (bVar3 & 0x1f) | *(uint *)(param_1 + 0x2c);
            }
            *(uint *)(param_1 + 0x2c) = uVar17;
            bVar13 = 0x20 - bVar3 & 0x1f;
            if (uVar18 >> bVar13 == 0) {
              return 0xfffffffe;
            }
            uVar20 = uVar12 - (uVar18 >> bVar13);
            uVar12 = uVar12 - iVar24;
            uVar12 = ((int)uVar12 >> 0x1f & uVar12) + iVar24;
            if (uVar23 <= uVar12) {
              uVar12 = uVar23;
            }
            if (uVar27 <= uVar12) {
              uVar12 = uVar27;
            }
            puVar25[2] = (char)uVar12;
            if (uVar27 <= uVar20) {
              return 0xfffffffe;
            }
            puVar25[1] = (char)uVar20;
            if (uVar21 == 0) {
              *puVar25 = 0;
LAB_10010d517:
              uVar21 = 0;
            }
            else {
              *piVar10 = *piVar10 + uVar21;
              uVar21 = *(int *)(param_1 + 0x28) + uVar21;
              *(uint *)(param_1 + 0x28) = uVar21;
              if (uVar21 < 0x20) {
                uVar12 = *(uint *)(param_1 + 0x2c);
                uVar18 = uVar12;
                bVar13 = bVar4;
LAB_10010d4e2:
                uVar18 = uVar18 << (bVar13 & 0x1f);
              }
              else {
                if (uVar21 != 0x20) {
                  *(uint *)(param_1 + 0x28) = uVar21 - 0x20;
                  lVar11 = *(long *)(param_1 + 0x10);
                  *(long *)(param_1 + 0x10) = lVar11 + 4;
                  uVar12 = *(uint *)(lVar11 + 4);
                  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                  uVar18 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18;
                  uVar12 = uVar18 >> (bVar4 - (char)(uVar21 - 0x20) & 0x1f) |
                           *(uint *)(param_1 + 0x2c);
                  bVar13 = (byte)uVar21;
                  goto LAB_10010d4e2;
                }
                *(undefined4 *)(param_1 + 0x28) = 0;
                uVar21 = *(int *)(param_1 + 0x18) + 1;
                *(uint *)(param_1 + 0x18) = uVar21;
                uVar12 = 0;
                if (uVar21 < *(uint *)(param_1 + 0x34)) {
                  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                  uVar12 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar21 * 4);
                }
                uVar18 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                uVar12 = uVar18 >> (bVar4 & 0x1f) | *(uint *)(param_1 + 0x2c);
              }
              bVar13 = 0x20 - bVar4 & 0x1f;
              uVar21 = uVar12 >> bVar13;
              *(uint *)(param_1 + 0x2c) = uVar18;
              *puVar25 = (char)uVar21;
              if (*(byte *)(param_1 + 0x4c) < uVar21) {
                return 0xfffffffe;
              }
              if (uVar12 >> bVar13 == 0) goto LAB_10010d517;
              *piVar10 = *piVar10 + 1;
              iVar7 = *(int *)(param_1 + 0x28);
              uVar12 = iVar7 + 1;
              *(uint *)(param_1 + 0x28) = uVar12;
              if (uVar12 < 0x20) {
                uVar12 = *(uint *)(param_1 + 0x2c);
                uVar18 = uVar12 * 2;
              }
              else if (uVar12 == 0x20) {
                *(undefined4 *)(param_1 + 0x28) = 0;
                uVar18 = *(int *)(param_1 + 0x18) + 1;
                *(uint *)(param_1 + 0x18) = uVar18;
                uVar12 = 0;
                if (uVar18 < *(uint *)(param_1 + 0x34)) {
                  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                  uVar12 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar18 * 4);
                }
                uVar18 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                uVar12 = *(uint *)(param_1 + 0x2c);
              }
              else {
                *(int *)(param_1 + 0x28) = iVar7 + -0x1f;
                lVar11 = *(long *)(param_1 + 0x10);
                *(long *)(param_1 + 0x10) = lVar11 + 4;
                uVar12 = *(uint *)(lVar11 + 4);
                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                uVar18 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                uVar12 = uVar18 >> (-(char)iVar7 & 0x1fU) | *(uint *)(param_1 + 0x2c);
                uVar18 = uVar18 << ((byte)(iVar7 + -0x1f) & 0x1f);
              }
              *(uint *)(param_1 + 0x2c) = uVar18;
              puVar25[3] = (byte)(uVar12 >> 0x1f);
              *piVar10 = *piVar10 + 1;
              iVar7 = *(int *)(param_1 + 0x28);
              uVar12 = iVar7 + 1;
              *(uint *)(param_1 + 0x28) = uVar12;
              if (uVar12 < 0x20) {
                uVar12 = *(uint *)(param_1 + 0x2c);
                uVar18 = uVar12 * 2;
              }
              else if (uVar12 == 0x20) {
                *(undefined4 *)(param_1 + 0x28) = 0;
                uVar18 = *(int *)(param_1 + 0x18) + 1;
                *(uint *)(param_1 + 0x18) = uVar18;
                uVar12 = 0;
                if (uVar18 < *(uint *)(param_1 + 0x34)) {
                  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                  uVar12 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar18 * 4);
                }
                uVar18 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                uVar12 = *(uint *)(param_1 + 0x2c);
              }
              else {
                *(int *)(param_1 + 0x28) = iVar7 + -0x1f;
                lVar11 = *(long *)(param_1 + 0x10);
                *(long *)(param_1 + 0x10) = lVar11 + 4;
                uVar12 = *(uint *)(lVar11 + 4);
                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                uVar18 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                uVar12 = uVar18 >> (-(char)iVar7 & 0x1fU) | *(uint *)(param_1 + 0x2c);
                uVar18 = uVar18 << ((byte)(iVar7 + -0x1f) & 0x1f);
              }
              *(uint *)(param_1 + 0x2c) = uVar18;
              uVar12 = ((int)uVar12 >> 0x1f) + iVar16;
              bVar13 = (byte)uVar12;
              uVar19 = 0;
              do {
                *piVar10 = *piVar10 + uVar12;
                uVar18 = *(int *)(param_1 + 0x28) + uVar12;
                *(uint *)(param_1 + 0x28) = uVar18;
                if (uVar18 < 0x20) {
                  uVar17 = *(uint *)(param_1 + 0x2c);
                  uVar28 = uVar17;
                  uVar18 = uVar12;
LAB_10010d6a5:
                  uVar28 = uVar28 << ((byte)uVar18 & 0x1f);
                }
                else {
                  if (uVar18 != 0x20) {
                    *(uint *)(param_1 + 0x28) = uVar18 - 0x20;
                    lVar11 = *(long *)(param_1 + 0x10);
                    *(long *)(param_1 + 0x10) = lVar11 + 4;
                    uVar17 = *(uint *)(lVar11 + 4);
                    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                    uVar28 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                             uVar17 << 0x18;
                    uVar17 = uVar28 >> (bVar13 - (char)(uVar18 - 0x20) & 0x1f) |
                             *(uint *)(param_1 + 0x2c);
                    goto LAB_10010d6a5;
                  }
                  *(undefined4 *)(param_1 + 0x28) = 0;
                  uVar17 = *(int *)(param_1 + 0x18) + 1;
                  *(uint *)(param_1 + 0x18) = uVar17;
                  uVar18 = 0;
                  if (uVar17 < *(uint *)(param_1 + 0x34)) {
                    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                    uVar18 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar17 * 4);
                  }
                  uVar28 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                           uVar18 << 0x18;
                  uVar17 = uVar28 >> (bVar13 & 0x1f) | *(uint *)(param_1 + 0x2c);
                }
                *(uint *)(param_1 + 0x2c) = uVar28;
                *(short *)(lVar26 + uVar19 * 2) =
                     (short)((int)(uVar17 & -1 << (-bVar13 & 0x1f)) >> (0x20 - bVar13 & 0x1f));
                uVar19 = uVar19 + 1;
              } while (uVar21 != uVar19);
            }
            *(long *)(puVar25 + 8) = lVar26;
            lVar26 = lVar26 + (ulong)uVar21 * 2;
            puVar25 = puVar25 + 0x18;
            uVar14 = uVar14 + 1;
            uVar12 = uVar20;
          } while (uVar14 != uVar15);
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != bVar1);
  }
  return 0;
}

