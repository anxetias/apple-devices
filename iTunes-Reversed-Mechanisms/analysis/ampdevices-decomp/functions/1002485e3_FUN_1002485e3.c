// name: FUN_1002485e3
// address: 1002485e3

undefined8 FUN_1002485e3(undefined8 param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  ulong *puVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *puVar15;
  void *pvVar16;
  long lVar17;
  size_t sVar18;
  ushort uVar19;
  void *pvVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  ushort *puVar26;
  ulong uVar27;
  ushort uVar28;
  ushort *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  ushort *local_38;
  
  FUN_100249860(&DAT_1008a2e28);
  DAT_1008a2e48 = DAT_1008a2e40;
  FUN_1002498a0(&DAT_1008a2e58);
  pbVar11 = (byte *)_CFDataGetBytePtr(param_1);
  if ((*pbVar11 < 8) || (pbVar11[1] < 8)) {
    bVar32 = false;
  }
  else {
    bVar32 = 0x13 < pbVar11[2];
  }
  if ((((pbVar11[4] < 9) && (pbVar11[5] < 7)) && (pbVar11[6] < 0x24)) && (pbVar11[7] == 0)) {
    pbVar25 = pbVar11 + 8;
    uVar14 = (ulong)pbVar11[8];
    if (pbVar11[8] != 0) {
      puVar29 = (ushort *)0x0;
      puVar26 = (ushort *)0x0;
      local_38 = (ushort *)0x0;
      do {
        do {
          bVar9 = pbVar25[1];
          bVar5 = pbVar25[2];
          bVar6 = pbVar25[4];
          uVar27 = (ulong)pbVar25[3];
          uVar12 = _CFStringCreateWithBytes(0,pbVar25 + 5,uVar14,0x8000100,0);
          pbVar11 = pbVar25 + 5 + uVar14;
          uVar13 = _CFStringCreateWithBytes(0,pbVar11,uVar27,0x8000100);
          if (puVar29 < puVar26) {
            *puVar29 = (ushort)bVar9;
            *(byte *)(puVar29 + 1) = bVar5;
            *(byte *)((long)puVar29 + 3) = bVar6;
            *(undefined8 *)(puVar29 + 4) = uVar12;
            *(undefined8 *)(puVar29 + 8) = uVar13;
            puVar2 = local_38;
          }
          else {
            sVar18 = (long)puVar29 - (long)local_38;
            lVar23 = (long)sVar18 >> 3;
            uVar14 = lVar23 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar14) {
              FUN_1002498e0();
              goto LAB_100248f82;
            }
            lVar17 = (long)puVar26 - (long)local_38 >> 3;
            uVar30 = lVar17 * 0x5555555555555556;
            if (uVar14 <= uVar30 && uVar30 - uVar14 != 0) {
              uVar14 = uVar30;
            }
            if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
              uVar14 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar14 == 0) {
              auVar33 = ZEXT816(0);
            }
            else {
              auVar33 = FUN_1002498f0();
            }
            lVar17 = auVar33._0_8_;
            puVar2 = (ushort *)(lVar17 + lVar23 * 8);
            puVar26 = (ushort *)(lVar17 + auVar33._8_8_ * 0x18);
            *puVar2 = (ushort)bVar9;
            *(byte *)(puVar2 + 1) = bVar5;
            *(byte *)((long)puVar2 + 3) = bVar6;
            *(undefined8 *)(puVar2 + 4) = uVar12;
            *(undefined8 *)(puVar2 + 8) = uVar13;
            uVar14 = SUB168(SEXT816((long)sVar18) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
            puVar29 = (ushort *)(lVar17 + lVar23 * 8);
            puVar2 = puVar2 + ((uVar14 >> 2) - ((long)uVar14 >> 0x3f)) * 0xc;
            _memcpy(puVar2,local_38,sVar18);
            if (local_38 != (ushort *)0x0) {
              operator_delete(local_38);
            }
          }
          local_38 = puVar2;
          puVar24 = DAT_1008a2e30;
          puVar29 = puVar29 + 0xc;
          pbVar25 = pbVar11 + uVar27;
          uVar14 = (ulong)pbVar11[uVar27];
        } while (pbVar11[uVar27] != 0);
        if (DAT_1008a2e30 < DAT_1008a2e38) {
          *DAT_1008a2e30 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          FUN_100249928(puVar24,local_38,puVar29,
                        ((long)puVar29 - (long)local_38 >> 3) * -0x5555555555555555);
          puVar24 = puVar24 + 3;
        }
        else {
          lVar23 = (long)DAT_1008a2e30 - (long)DAT_1008a2e28 >> 3;
          uVar14 = lVar23 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar14) goto LAB_100248f5b;
          lVar17 = (long)DAT_1008a2e38 - (long)DAT_1008a2e28 >> 3;
          uVar27 = lVar17 * 0x5555555555555556;
          if (uVar14 < uVar27) {
            uVar14 = uVar27;
          }
          if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
            uVar14 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar14 == 0) {
            pvVar16 = (void *)0x0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_1001082d0();
            }
            pvVar16 = operator_new(uVar14 * 0x18);
          }
          puVar1 = (undefined8 *)((long)pvVar16 + lVar23 * 8);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          FUN_100249928(puVar1,local_38,puVar29,
                        ((long)puVar29 - (long)local_38 >> 3) * -0x5555555555555555);
          puVar24 = puVar1 + 3;
          pvVar20 = (void *)((long)puVar1 - ((long)DAT_1008a2e30 - (long)DAT_1008a2e28));
          _memcpy(pvVar20,DAT_1008a2e28,(long)DAT_1008a2e30 - (long)DAT_1008a2e28);
          DAT_1008a2e28 = pvVar20;
          DAT_1008a2e30 = puVar24;
          DAT_1008a2e38 = (undefined8 *)((long)pvVar16 + uVar14 * 0x18);
          FUN_1002499c4();
        }
        DAT_1008a2e30 = puVar24;
        if (local_38 != (ushort *)0x0) {
          operator_delete(local_38);
        }
        pbVar25 = pbVar25 + 1;
        uVar14 = (ulong)*pbVar25;
        puVar29 = (ushort *)0x0;
        puVar26 = (ushort *)0x0;
        local_38 = (ushort *)0x0;
      } while (*pbVar25 != 0);
    }
    pbVar11 = pbVar25 + 1;
    bVar9 = pbVar25[1];
    while (bVar9 != 0) {
      if (bVar9 == 0xff) {
        bVar9 = 0;
      }
      bVar5 = pbVar11[1];
      uVar14 = _CFStringCreateWithBytes(0,pbVar11 + 2,(ulong)bVar9,0x8000100,0);
      puVar8 = DAT_1008a2e40;
      if (DAT_1008a2e48 < DAT_1008a2e50) {
        *DAT_1008a2e48 = (ulong)bVar5;
        DAT_1008a2e48[1] = uVar14;
        puVar22 = DAT_1008a2e48 + 2;
      }
      else {
        sVar18 = (long)DAT_1008a2e48 - (long)DAT_1008a2e40;
        lVar23 = (long)sVar18 >> 4;
        uVar27 = lVar23 + 1;
        if (0xfffffffffffffff < uVar27) {
          FUN_100249a18();
LAB_100248f5b:
          FUN_1002499b4();
          goto LAB_100248f82;
        }
        uVar30 = (long)DAT_1008a2e50 - (long)DAT_1008a2e40 >> 3;
        if (uVar30 <= uVar27) {
          uVar30 = uVar27;
        }
        if (0x7fffffffffffffef < (ulong)((long)DAT_1008a2e50 - (long)DAT_1008a2e40)) {
          uVar30 = 0xfffffffffffffff;
        }
        if (uVar30 == 0) {
          puVar15 = (ulong *)0x0;
        }
        else {
          if (0xfffffffffffffff < uVar30) {
                    /* WARNING: Subroutine does not return */
            FUN_1001082d0();
          }
          puVar15 = operator_new(uVar30 << 4);
        }
        puVar21 = puVar15 + lVar23 * 2;
        puVar22 = puVar21 + 2;
        *puVar21 = (ulong)bVar5;
        puVar21[1] = uVar14;
        _memcpy(puVar15,puVar8,sVar18);
        DAT_1008a2e40 = puVar15;
        DAT_1008a2e50 = puVar15 + uVar30 * 2;
        if (puVar8 != (ulong *)0x0) {
          DAT_1008a2e48 = puVar22;
          operator_delete(puVar8);
        }
      }
      pbVar11 = pbVar11 + (ulong)bVar9 + 2;
      DAT_1008a2e48 = puVar22;
      bVar9 = *pbVar11;
    }
    uVar12 = 1;
    if ((bVar32) && (bVar9 = pbVar11[1], bVar9 != 0)) {
      do {
        pbVar25 = pbVar11 + 2;
        uVar10 = (uint)bVar9;
        if (bVar9 == 0xff) {
          uVar10 = 0;
        }
        uVar14 = (ulong)uVar10;
        uVar12 = _CFStringCreateWithBytes(0,pbVar25,uVar14,0x8000100,0);
        bVar9 = pbVar25[uVar14];
        if (bVar9 == 0) {
          pbVar11 = pbVar25 + uVar14;
          local_38 = (ushort *)0x0;
          puVar26 = (ushort *)0x0;
        }
        else {
          local_38 = (ushort *)0x0;
          puVar26 = (ushort *)0x0;
          puVar29 = (ushort *)0x0;
          pbVar25 = pbVar11 + uVar14 + 7;
          do {
            pbVar11 = pbVar25;
            uVar19 = *(ushort *)(pbVar11 + -4) << 8 | *(ushort *)(pbVar11 + -4) >> 8;
            uVar28 = *(ushort *)(pbVar11 + -2) << 8 | *(ushort *)(pbVar11 + -2) >> 8;
            if (puVar26 < puVar29) {
              *puVar26 = uVar19;
              puVar26[1] = uVar28;
              *(byte *)(puVar26 + 2) = bVar9;
              puVar26 = puVar26 + 3;
              puVar2 = local_38;
            }
            else {
              sVar18 = (long)puVar26 - (long)local_38;
              lVar23 = (long)sVar18 >> 1;
              uVar14 = lVar23 * -0x5555555555555555 + 1;
              if (0x2aaaaaaaaaaaaaaa < uVar14) {
                FUN_100249a28();
                goto LAB_100248f82;
              }
              lVar17 = (long)puVar29 - (long)local_38 >> 1;
              uVar27 = lVar17 * 0x5555555555555556;
              if (uVar14 <= uVar27 && uVar27 - uVar14 != 0) {
                uVar14 = uVar27;
              }
              if (0x1555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
                uVar14 = 0x2aaaaaaaaaaaaaaa;
              }
              if (uVar14 == 0) {
                auVar33 = ZEXT816(0);
              }
              else {
                auVar33 = FUN_100249a38();
              }
              lVar17 = auVar33._0_8_;
              puVar2 = (ushort *)(lVar17 + lVar23 * 2);
              puVar29 = (ushort *)(lVar17 + auVar33._8_8_ * 6);
              *puVar2 = uVar19;
              puVar2[1] = uVar28;
              *(byte *)(puVar2 + 2) = bVar9;
              puVar26 = (ushort *)(lVar17 + 6 + lVar23 * 2);
              lVar23 = SUB168(SEXT816((long)sVar18) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
              puVar2 = puVar2 + (lVar23 - (lVar23 >> 0x3f)) * 3;
              _memcpy(puVar2,local_38,sVar18);
              if (local_38 != (ushort *)0x0) {
                operator_delete(local_38);
              }
            }
            local_38 = puVar2;
            bVar9 = *pbVar11;
            pbVar25 = pbVar11 + 5;
          } while (bVar9 != 0);
        }
        puVar24 = DAT_1008a2e60;
        if (DAT_1008a2e60 < DAT_1008a2e68) {
          *DAT_1008a2e60 = uVar12;
          puVar24[1] = 0;
          puVar24[2] = 0;
          puVar24[3] = 0;
          FUN_100249a6c(puVar24 + 1,local_38,puVar26,
                        ((long)puVar26 - (long)local_38 >> 1) * -0x5555555555555555);
          puVar24 = puVar24 + 4;
        }
        else {
          lVar23 = (long)DAT_1008a2e60 - (long)DAT_1008a2e58 >> 5;
          uVar14 = lVar23 + 1;
          if (0x7ffffffffffffff < uVar14) {
            FUN_100249af8();
LAB_100248f82:
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar27 = (long)DAT_1008a2e68 - (long)DAT_1008a2e58 >> 4;
          if (uVar27 <= uVar14) {
            uVar27 = uVar14;
          }
          if (0x7fffffffffffffdf < (ulong)((long)DAT_1008a2e68 - (long)DAT_1008a2e58)) {
            uVar27 = 0x7ffffffffffffff;
          }
          if (uVar27 == 0) {
            pvVar16 = (void *)0x0;
          }
          else {
            if (0x7ffffffffffffff < uVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_1001082d0();
            }
            pvVar16 = operator_new(uVar27 << 5);
          }
          lVar23 = lVar23 * 0x20;
          puVar24 = (undefined8 *)((long)pvVar16 + lVar23);
          *puVar24 = uVar12;
          puVar24[1] = 0;
          puVar24[2] = 0;
          puVar24[3] = 0;
          FUN_100249a6c(puVar24 + 1,local_38,puVar26,
                        ((long)puVar26 - (long)local_38 >> 1) * -0x5555555555555555);
          puVar1 = DAT_1008a2e60;
          puVar24 = DAT_1008a2e58;
          puVar31 = (undefined8 *)
                    ((long)pvVar16 + (long)DAT_1008a2e58 + (lVar23 - (long)DAT_1008a2e60));
          if (DAT_1008a2e58 != DAT_1008a2e60) {
            lVar17 = 0;
            do {
              puVar3 = (undefined8 *)((long)puVar24 + lVar17);
              *(undefined8 *)((long)puVar31 + lVar17) = *puVar3;
              puVar4 = (undefined8 *)((long)puVar31 + lVar17 + 8);
              *puVar4 = 0;
              puVar4[1] = 0;
              *(undefined8 *)((long)puVar31 + lVar17 + 0x18) = 0;
              uVar12 = puVar3[2];
              puVar4 = (undefined8 *)((long)puVar31 + lVar17 + 8);
              *puVar4 = puVar3[1];
              puVar4[1] = uVar12;
              *(undefined8 *)((long)puVar31 + lVar17 + 0x18) = puVar3[3];
              puVar3[3] = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              lVar17 = lVar17 + 0x20;
            } while (puVar3 + 4 != puVar1);
            do {
              pvVar20 = (void *)puVar24[1];
              if (pvVar20 != (void *)0x0) {
                puVar24[2] = pvVar20;
                operator_delete(pvVar20);
              }
              puVar24 = puVar24 + 4;
            } while (puVar24 != puVar1);
          }
          puVar24 = (undefined8 *)((long)pvVar16 + lVar23 + 0x20);
          DAT_1008a2e58 = puVar31;
          DAT_1008a2e60 = puVar24;
          DAT_1008a2e68 = (undefined8 *)(uVar27 * 0x20 + (long)pvVar16);
          FUN_100249b08();
        }
        DAT_1008a2e60 = puVar24;
        if (local_38 != (ushort *)0x0) {
          operator_delete(local_38);
        }
        bVar9 = pbVar11[1];
      } while (bVar9 != 0);
      uVar12 = 1;
    }
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}

