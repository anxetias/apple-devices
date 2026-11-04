// name: FUN_10010e5da
// address: 10010e5da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10010e5da(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  int local_54;
  uint local_44 [3];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *(long *)(param_1 + 0xba8);
  if (*(char *)**(undefined8 **)(lVar5 + 8) != '\0') {
    local_44[0] = (uint)*(byte *)(lVar5 + 0x3a8);
    local_44[1] = 100;
    local_44[2] = *(byte *)(lVar5 + 0x3a8) - 0x5a;
    uVar10 = (ulong)*(uint *)(*(undefined8 **)(lVar5 + 8) + 4);
    if (uVar10 != 0) {
      pfVar18 = (float *)(lVar5 + 0x3ac);
      bVar9 = true;
      uVar11 = 0;
      do {
        uVar13 = (ulong)*(uint *)(lVar5 + 0x328 + uVar11 * 0x10);
        if (uVar13 != 0) {
          lVar6 = *(long *)(lVar5 + 0x330 + uVar11 * 0x10);
          uVar17 = 0;
          do {
            bVar1 = *(byte *)(lVar6 + 2 + uVar17 * 6);
            bVar2 = *(byte *)(lVar6 + 3 + uVar17 * 6);
            bVar3 = *(byte *)(lVar6 + uVar17 * 6);
            uVar19 = (ulong)bVar3;
            if (uVar19 == 0xc) {
              uVar14 = 0;
              local_54 = 1;
LAB_10010e6ce:
              if (*(int *)(param_1 + 0x28) == 0) {
                uVar21 = *(uint *)(param_1 + 0x2c);
              }
              else {
                uVar21 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
                uVar21 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                         uVar21 << 0x18) >> (-(char)*(int *)(param_1 + 0x28) & 0x1fU) |
                         *(uint *)(param_1 + 0x2c);
              }
              uVar20 = local_44[uVar14];
              if (bVar1 < bVar2) {
                uVar12 = ~uVar21 | 0x1000;
                uVar22 = 0x1f;
                if (uVar12 != 0) {
                  for (; uVar12 >> uVar22 == 0; uVar22 = uVar22 - 1) {
                  }
                }
                lVar7 = *(long *)(param_1 + 0x1abf8);
                piVar8 = *(int **)(param_1 + 0x40);
                iVar15 = (uint)bVar2 - (uint)bVar1;
                do {
                  lVar16 = (ulong)(uVar22 ^ 0x1f) * 0x10;
                  if (((int)uVar14 == 2) && (bVar9)) {
                    uVar20 = (uVar20 + (uVar21 >> 0x17)) - 0x100;
                    bVar9 = false;
                    uVar22 = 9;
                  }
                  else {
                    uVar22 = 1;
                    if ((int)uVar21 < 0) {
                      uVar4 = *(ushort *)
                               (*(long *)(lVar16 + lVar7) +
                               (long)(int)(uVar12 >>
                                          ((byte)*(undefined2 *)(lVar7 + 8 + lVar16) & 0x1f)) * 2);
                      uVar22 = uVar4 & 0x1f;
                      uVar20 = ((uVar4 >> 5 & 0x1ff) - 0x3c) * local_54 + uVar20;
                    }
                  }
                  *piVar8 = *piVar8 + uVar22;
                  uVar12 = *(int *)(param_1 + 0x28) + uVar22;
                  *(uint *)(param_1 + 0x28) = uVar12;
                  if (uVar12 < 0x20) {
                    uVar21 = *(int *)(param_1 + 0x2c) << (sbyte)uVar22;
                    uVar22 = uVar12;
                  }
                  else if (uVar12 == 0x20) {
                    *(undefined4 *)(param_1 + 0x28) = 0;
                    uVar12 = *(int *)(param_1 + 0x18) + 1;
                    *(uint *)(param_1 + 0x18) = uVar12;
                    uVar22 = 0;
                    uVar21 = 0;
                    if (uVar12 < *(uint *)(param_1 + 0x34)) {
                      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                      uVar21 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 4);
                    }
                    uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                             uVar21 << 0x18;
                  }
                  else {
                    uVar22 = uVar12 - 0x20;
                    *(uint *)(param_1 + 0x28) = uVar22;
                    lVar16 = *(long *)(param_1 + 0x10);
                    *(long *)(param_1 + 0x10) = lVar16 + 4;
                    uVar21 = *(uint *)(lVar16 + 4);
                    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                    uVar21 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                             uVar21 << 0x18) << ((byte)uVar12 & 0x1f);
                  }
                  *(uint *)(param_1 + 0x2c) = uVar21;
                  if (bVar3 < 0xd) {
                    if (uVar20 < 0x100) {
                      lVar16 = *(long *)(param_1 + 0x1c618);
LAB_10010e866:
                      fVar23 = *(float *)(lVar16 + (ulong)(uVar20 & 0xff) * 4);
                    }
                    else {
LAB_10010e871:
                      dVar24 = (double)(int)uVar20 + _DAT_100700c20;
LAB_10010e893:
                      dVar24 = (double)_exp2(dVar24 * DAT_100700c28);
                      fVar23 = (float)dVar24;
                    }
                  }
                  else {
                    if (bVar3 != 0xd) {
                      if (0xff < uVar20) goto LAB_10010e871;
                      lVar16 = *(long *)(param_1 + 0x1c620);
                      goto LAB_10010e866;
                    }
                    if (0xff < uVar20) {
                      dVar24 = (double)(int)uVar20;
                      goto LAB_10010e893;
                    }
                    fVar23 = *(float *)(param_1 + 0x1c640 + (ulong)(uVar20 & 0xff) * 4);
                  }
                  if (uVar22 != 0) {
                    uVar12 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
                    uVar21 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                             uVar12 << 0x18) >> (-(char)uVar22 & 0x1fU) | uVar21;
                  }
                  uVar12 = ~uVar21 | 0x1000;
                  uVar22 = 0x1f;
                  if (uVar12 != 0) {
                    for (; uVar12 >> uVar22 == 0; uVar22 = uVar22 - 1) {
                    }
                  }
                  *pfVar18 = fVar23;
                  pfVar18 = pfVar18 + 1;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
              local_44[uVar14] = uVar20;
            }
            else {
              if (uVar19 != 0) {
                uVar14 = (ulong)(byte)(&DAT_100700d20)[uVar19 * 2];
                local_54 = (int)(char)(&DAT_100700d21)[uVar19 * 2];
                goto LAB_10010e6ce;
              }
              *pfVar18 = 0.0;
              pfVar18 = pfVar18 + ((uint)bVar2 - (uint)bVar1);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar13);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

