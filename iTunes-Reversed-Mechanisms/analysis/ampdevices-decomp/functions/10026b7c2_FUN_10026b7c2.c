// name: FUN_10026b7c2
// address: 10026b7c2

undefined8 FUN_10026b7c2(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  undefined1 *puVar10;
  float fVar11;
  ushort uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  undefined2 uVar23;
  int iVar24;
  long lVar25;
  byte bVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  undefined2 *puVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  byte *pbVar34;
  undefined1 uVar35;
  uint uVar36;
  ushort *puVar37;
  long lVar38;
  undefined2 *puVar39;
  uint uVar40;
  long lVar41;
  ulong uVar42;
  undefined1 *puVar43;
  ulong uVar44;
  long lVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  byte local_60;
  ulong local_40;
  
  *(undefined8 *)(param_1 + 0x8c) = param_2;
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  puVar37 = *(ushort **)(param_1 + 0x50);
  *(ushort **)(param_1 + 0x5c) = puVar37;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x24);
  *(ulong *)(param_1 + 100) = (ulong)*(uint *)(param_1 + 0x24) + (long)puVar37;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) =
       *(undefined4 *)
        (&DAT_10071c760 +
        (ulong)*(byte *)(param_1 + 6) * 4 + (ulong)*(byte *)(param_1 + 0x11) * 0x10);
  *(undefined8 *)(param_1 + 0x836c) = 0;
  if (*(char *)(param_1 + 0x17) != '\0') {
    uVar12 = *puVar37 << 8 | *puVar37 >> 8;
    puVar37 = puVar37 + 1;
    *(ushort **)(param_1 + 0x5c) = puVar37;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(ushort *)(param_1 + 0x7c) = uVar12;
  cVar6 = *(char *)(param_1 + 0x12);
  if (cVar6 == '\x02') {
    FUN_10026c4be(param_1);
  }
  else {
    if (cVar6 == '\x01') {
      *(undefined4 *)(param_1 + 0x80) = 0x480;
      *(undefined4 *)(param_1 + 0x6aa8) = 1;
      uVar21 = *(uint *)(param_1 + 0x2c);
      uVar17 = (ulong)uVar21;
      if (uVar17 != 0) {
        bVar26 = *(byte *)(param_1 + 0x15);
        lVar28 = param_1 + 0x94;
        uVar33 = 0;
        do {
          if (bVar26 != 0) {
            lVar38 = *(long *)(param_1 + 0x40);
            lVar41 = 0;
            do {
              bVar19 = *(byte *)(lVar38 + uVar33);
              pbVar34 = *(byte **)(param_1 + 0x5c);
              bVar8 = *pbVar34;
              bVar9 = pbVar34[1];
              bVar18 = pbVar34[2];
              iVar24 = *(int *)(param_1 + 0x6c);
              uVar20 = iVar24 + (uint)bVar19;
              *(byte **)(param_1 + 0x5c) = pbVar34 + (uVar20 >> 3);
              *(uint *)(param_1 + 0x6c) = uVar20 & 7;
              *(char *)(lVar28 + lVar41) =
                   (char)((((uint)bVar18 | (uint)bVar9 << 8 | (uint)bVar8 << 0x10) <<
                           ((byte)iVar24 & 0x1f) & 0xffffff) >> (0x18 - bVar19 & 0x1f));
              lVar41 = lVar41 + 0x20;
            } while ((ulong)bVar26 << 5 != lVar41);
          }
          uVar33 = uVar33 + 1;
          lVar28 = lVar28 + 1;
        } while (uVar33 != uVar17);
      }
      uVar33 = (ulong)*(byte *)(param_1 + 0x35);
      if (uVar21 < *(byte *)(param_1 + 0x35)) {
        lVar28 = *(long *)(param_1 + 0x40);
        pbVar34 = *(byte **)(param_1 + 0x5c);
        uVar21 = *(uint *)(param_1 + 0x6c);
        do {
          bVar26 = *pbVar34;
          bVar19 = pbVar34[1];
          bVar8 = pbVar34[2];
          bVar18 = (byte)uVar21;
          bVar9 = *(byte *)(lVar28 + uVar17);
          uVar21 = uVar21 + bVar9;
          pbVar34 = pbVar34 + (uVar21 >> 3);
          *(byte **)(param_1 + 0x5c) = pbVar34;
          uVar21 = uVar21 & 7;
          *(uint *)(param_1 + 0x6c) = uVar21;
          uVar35 = (undefined1)
                   ((((uint)bVar8 | (uint)bVar19 << 8 | (uint)bVar26 << 0x10) << (bVar18 & 0x1f) &
                    0xffffff) >> (0x18 - bVar9 & 0x1f));
          *(undefined1 *)(param_1 + 0x94 + uVar17) = uVar35;
          *(undefined1 *)(param_1 + 0xb4 + uVar17) = uVar35;
          uVar17 = uVar17 + 1;
        } while (uVar33 != uVar17);
      }
      if (uVar33 == 0) {
        uVar21 = 0;
      }
      else {
        bVar26 = *(byte *)(param_1 + 0x15);
        lVar28 = param_1 + 0xd4;
        uVar17 = 0;
        lVar38 = lVar28;
        do {
          if (bVar26 != 0) {
            lVar41 = 0;
            do {
              if (*(char *)(lVar38 + -0x40 + lVar41) != '\0') {
                uVar12 = **(ushort **)(param_1 + 0x5c);
                iVar24 = *(int *)(param_1 + 0x6c);
                uVar21 = iVar24 + 2;
                *(ulong *)(param_1 + 0x5c) =
                     (ulong)(uVar21 >> 3) + (long)*(ushort **)(param_1 + 0x5c);
                *(uint *)(param_1 + 0x6c) = uVar21 & 7;
                *(byte *)(lVar38 + lVar41) =
                     (byte)(((uint)(ushort)(uVar12 << 8 | uVar12 >> 8) << ((byte)iVar24 & 0x1f)) >>
                           0xe) & 3;
              }
              lVar41 = lVar41 + 0x20;
            } while ((ulong)bVar26 << 5 != lVar41);
          }
          uVar17 = uVar17 + 1;
          lVar38 = lVar38 + 1;
        } while (uVar17 != uVar33);
        bVar26 = *(byte *)(param_1 + 0x15);
        puVar30 = (undefined2 *)(param_1 + 0x114);
        uVar17 = 0;
        do {
          if (bVar26 != 0) {
            lVar38 = 0;
            puVar39 = puVar30;
            do {
              if (*(char *)(lVar28 + -0x40 + lVar38) == '\0') goto switchD_10026baf7_default;
              switch(*(undefined1 *)(lVar28 + lVar38)) {
              case 0:
                puVar43 = *(undefined1 **)(param_1 + 0x5c);
                uVar35 = *puVar43;
                uVar7 = puVar43[1];
                iVar24 = *(int *)(param_1 + 0x6c);
                uVar20 = iVar24 + 6;
                uVar42 = (ulong)(uVar20 >> 3);
                puVar10 = puVar43 + uVar42;
                *(undefined1 **)(param_1 + 0x5c) = puVar10;
                uVar20 = uVar20 & 7;
                *(uint *)(param_1 + 0x6c) = uVar20;
                *puVar39 = (short)(((uint)CONCAT11(uVar35,uVar7) << ((byte)iVar24 & 0x1f) & 0xffff)
                                  >> 10);
                uVar35 = puVar43[uVar42];
                uVar7 = puVar43[uVar42 + 1];
                uVar42 = (ulong)(uVar20 + 6 >> 3);
                puVar43 = puVar10 + uVar42;
                *(undefined1 **)(param_1 + 0x5c) = puVar43;
                uVar21 = uVar20 + 6 & 7;
                *(uint *)(param_1 + 0x6c) = uVar21;
                puVar39[1] = (short)(((uint)CONCAT11(uVar35,uVar7) << (sbyte)uVar20 & 0xffff) >> 10)
                ;
                uVar35 = puVar10[uVar42];
                uVar7 = puVar10[uVar42 + 1];
                break;
              case 1:
                puVar10 = *(undefined1 **)(param_1 + 0x5c);
                uVar35 = *puVar10;
                uVar7 = puVar10[1];
                iVar24 = *(int *)(param_1 + 0x6c);
                uVar21 = iVar24 + 6;
                uVar42 = (ulong)(uVar21 >> 3);
                puVar43 = puVar10 + uVar42;
                *(undefined1 **)(param_1 + 0x5c) = puVar43;
                uVar21 = uVar21 & 7;
                *(uint *)(param_1 + 0x6c) = uVar21;
                uVar23 = (undefined2)
                         (((uint)CONCAT11(uVar35,uVar7) << ((byte)iVar24 & 0x1f) & 0xffff) >> 10);
                *puVar39 = uVar23;
                puVar39[1] = uVar23;
                uVar35 = puVar10[uVar42];
                uVar7 = puVar10[uVar42 + 1];
                break;
              case 2:
                puVar43 = *(undefined1 **)(param_1 + 0x5c);
                uVar35 = *puVar43;
                uVar7 = puVar43[1];
                iVar24 = *(int *)(param_1 + 0x6c);
                uVar21 = iVar24 + 6;
                *(undefined1 **)(param_1 + 0x5c) = puVar43 + (uVar21 >> 3);
                *(uint *)(param_1 + 0x6c) = uVar21 & 7;
                uVar23 = (undefined2)
                         (((uint)CONCAT11(uVar35,uVar7) << ((byte)iVar24 & 0x1f) & 0xffff) >> 10);
                *puVar39 = uVar23;
                goto LAB_10026bc1e;
              case 3:
                puVar43 = *(undefined1 **)(param_1 + 0x5c);
                uVar35 = *puVar43;
                uVar7 = puVar43[1];
                iVar24 = *(int *)(param_1 + 0x6c);
                uVar21 = iVar24 + 6;
                uVar42 = (ulong)(uVar21 >> 3);
                *(undefined1 **)(param_1 + 0x5c) = puVar43 + uVar42;
                uVar21 = uVar21 & 7;
                *(uint *)(param_1 + 0x6c) = uVar21;
                *puVar39 = (short)(((uint)CONCAT11(uVar35,uVar7) << ((byte)iVar24 & 0x1f) & 0xffff)
                                  >> 10);
                uVar35 = puVar43[uVar42];
                uVar7 = puVar43[uVar42 + 1];
                *(undefined1 **)(param_1 + 0x5c) = puVar43 + uVar42 + (uVar21 + 6 >> 3);
                *(uint *)(param_1 + 0x6c) = uVar21 + 6 & 7;
                uVar23 = (undefined2)
                         (((uint)CONCAT11(uVar35,uVar7) << (sbyte)uVar21 & 0xffff) >> 10);
LAB_10026bc1e:
                puVar39[1] = uVar23;
                goto LAB_10026bc96;
              default:
                goto switchD_10026baf7_default;
              }
              *(undefined1 **)(param_1 + 0x5c) = puVar43 + (uVar21 + 6 >> 3);
              *(uint *)(param_1 + 0x6c) = uVar21 + 6 & 7;
              uVar23 = (undefined2)(((uint)CONCAT11(uVar35,uVar7) << (sbyte)uVar21 & 0xffff) >> 10);
LAB_10026bc96:
              puVar39[2] = uVar23;
switchD_10026baf7_default:
              lVar38 = lVar38 + 0x20;
              puVar39 = puVar39 + 0x60;
            } while ((ulong)bVar26 << 5 != lVar38);
          }
          uVar17 = uVar17 + 1;
          puVar30 = puVar30 + 3;
          lVar28 = lVar28 + 1;
        } while (uVar17 != uVar33);
        uVar21 = (uint)*(byte *)(param_1 + 0x35);
      }
      fVar11 = DAT_100700b24;
      lVar28 = param_1 + 0x2298;
      lVar38 = param_1 + 0x3498;
      uVar17 = (ulong)uVar21;
      lVar41 = param_1 + 0x3598;
      uVar33 = 0;
      do {
        if (uVar17 == 0) {
LAB_10026c145:
          cVar6 = *(char *)(param_1 + 0x14);
          lVar22 = uVar17 - 0x20;
          do {
            *(undefined4 *)(lVar41 + -0x1280 + lVar22 * 4) = 0;
            *(undefined4 *)(lVar41 + -0x1200 + lVar22 * 4) = 0;
            *(undefined4 *)(lVar41 + -0x1180 + lVar22 * 4) = 0;
            if (cVar6 != '\0') {
              *(undefined4 *)(lVar41 + -0x80 + lVar22 * 4) = 0;
              *(undefined4 *)(lVar41 + lVar22 * 4) = 0;
              *(undefined4 *)(lVar41 + 0x80 + lVar22 * 4) = 0;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 != 0);
        }
        else {
          uVar42 = (ulong)*(uint *)(param_1 + 0x2c);
          lVar22 = uVar33 * 0x180;
          lVar25 = (uVar33 * 3 + 1) * 0x80;
          lVar31 = (uVar33 * 3 + 2) * 0x80;
          uVar32 = 0;
          do {
            local_40 = 1;
            if ((uVar42 <= uVar32) || (local_40 = (ulong)*(byte *)(param_1 + 0x15), local_40 != 0))
            {
              puVar3 = (undefined4 *)(lVar22 + lVar38 + uVar32 * 4);
              puVar1 = (undefined4 *)(lVar38 + lVar25 + uVar32 * 4);
              puVar2 = (undefined4 *)(lVar38 + lVar31 + uVar32 * 4);
              uVar44 = 0;
LAB_10026bdf9:
              do {
                uVar15 = (ulong)*(byte *)(uVar32 + uVar44 * 0x20 + param_1 + 0x94);
                if (uVar15 == 0) {
                  lVar16 = uVar44 * 0x1200 + lVar28;
                  *(undefined4 *)(lVar22 + lVar16 + uVar32 * 4) = 0;
                  *(undefined4 *)(lVar25 + lVar16 + uVar32 * 4) = 0;
                  *(undefined4 *)(lVar16 + lVar31 + uVar32 * 4) = 0;
                  if (uVar32 < uVar42) {
                    uVar44 = uVar44 + 1;
                    if (uVar44 == local_40) goto LAB_10026c124;
                    goto LAB_10026bdf9;
                  }
                  if (*(char *)(param_1 + 0x14) != '\0') {
                    *puVar3 = 0;
                    *puVar1 = 0;
                    *puVar2 = 0;
                  }
                }
                else {
                  puVar37 = *(ushort **)(uVar32 * 0x80 + *(long *)(param_1 + 0x38) + uVar15 * 8);
                  bVar26 = (byte)puVar37[7];
                  pbVar34 = *(byte **)(param_1 + 0x5c);
                  uVar13 = *(int *)(param_1 + 0x6c) + (uint)bVar26;
                  bVar19 = 0x18 - bVar26;
                  uVar20 = (((uint)pbVar34[2] | (uint)pbVar34[1] << 8 | (uint)*pbVar34 << 0x10) <<
                            ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >> (bVar19 & 0x1f);
                  pbVar34 = pbVar34 + (uVar13 >> 3);
                  uVar13 = uVar13 & 7;
                  uVar12 = puVar37[6];
                  *(byte **)(param_1 + 0x5c) = pbVar34;
                  *(uint *)(param_1 + 0x6c) = uVar13;
                  if ((char)uVar12 == '\0') {
                    uVar36 = (((uint)pbVar34[2] | (uint)pbVar34[1] << 8 | (uint)*pbVar34 << 0x10) <<
                              (sbyte)uVar13 & 0xffffff) >> (bVar19 & 0x1f);
                    uVar13 = uVar13 + bVar26;
                    uVar15 = (ulong)(uVar13 >> 3);
                    *(byte **)(param_1 + 0x5c) = pbVar34 + uVar15;
                    uVar13 = uVar13 & 7;
                    *(uint *)(param_1 + 0x6c) = uVar13;
                    uVar40 = (((uint)pbVar34[uVar15 + 2] |
                              (uint)pbVar34[uVar15 + 1] << 8 | (uint)pbVar34[uVar15] << 0x10) <<
                              (sbyte)uVar13 & 0xffffff) >> (bVar19 & 0x1f);
                    uVar13 = uVar13 + bVar26;
                    *(byte **)(param_1 + 0x5c) = pbVar34 + uVar15 + (uVar13 >> 3);
                    *(uint *)(param_1 + 0x6c) = uVar13 & 7;
                  }
                  else {
                    uVar12 = *puVar37;
                    uVar13 = (uVar20 & 0xffff) / (uint)uVar12;
                    uVar20 = (uVar20 & 0xffff) % (uint)uVar12;
                    uVar36 = uVar13 % (uint)uVar12;
                    uVar40 = (uVar13 / uVar12) % (uint)uVar12;
                  }
                  uVar12 = puVar37[8];
                  fVar46 = 0.0;
                  if (((uint)uVar12 & ~uVar20) != 0) {
                    fVar46 = fVar11;
                  }
                  uVar13 = uVar12 - 1 & 0xffff;
                  fVar48 = (float)uVar12;
                  fVar46 = (float)(uVar20 & uVar13) / fVar48 + fVar46;
                  lVar45 = uVar44 * 0x1200 + lVar28;
                  lVar16 = lVar22 + lVar45;
                  *(float *)(lVar16 + uVar32 * 4) = fVar46;
                  fVar46 = fVar46 + *(float *)(puVar37 + 4);
                  *(float *)(lVar16 + uVar32 * 4) = fVar46;
                  fVar46 = fVar46 * *(float *)(puVar37 + 2);
                  *(float *)(lVar16 + uVar32 * 4) = fVar46;
                  fVar47 = 0.0;
                  if (((uint)uVar12 & ~uVar36) != 0) {
                    fVar47 = fVar11;
                  }
                  lVar29 = lVar25 + lVar45;
                  fVar47 = (float)(uVar36 & uVar13) / fVar48 + fVar47;
                  *(float *)(lVar29 + uVar32 * 4) = fVar47;
                  fVar47 = fVar47 + *(float *)(puVar37 + 4);
                  *(float *)(lVar29 + uVar32 * 4) = fVar47;
                  fVar47 = fVar47 * *(float *)(puVar37 + 2);
                  *(float *)(lVar29 + uVar32 * 4) = fVar47;
                  fVar49 = 0.0;
                  if (((uint)uVar12 & ~uVar40) != 0) {
                    fVar49 = fVar11;
                  }
                  lVar45 = lVar45 + lVar31;
                  fVar49 = (float)(uVar13 & uVar40) / fVar48 + fVar49;
                  *(float *)(lVar45 + uVar32 * 4) = fVar49;
                  fVar49 = fVar49 + *(float *)(puVar37 + 4);
                  *(float *)(lVar45 + uVar32 * 4) = fVar49;
                  fVar48 = *(float *)(puVar37 + 2);
                  fVar5 = *(float *)(&DAT_10071ce90 +
                                    (ulong)*(ushort *)
                                            (uVar44 * 0xc0 + param_1 + 0x114 + uVar32 * 6 +
                                            (uVar33 >> 2 & 0x3fffffff) * 2) * 4);
                  *(float *)(lVar16 + uVar32 * 4) = fVar46 * fVar5;
                  *(float *)(lVar29 + uVar32 * 4) = fVar47 * fVar5;
                  *(float *)(lVar45 + uVar32 * 4) = fVar49 * fVar48 * fVar5;
                }
                uVar44 = uVar44 + 1;
              } while (uVar44 != local_40);
              if ((uVar42 <= uVar32) && (*(char *)(param_1 + 0x14) != '\0')) {
                *puVar3 = *(undefined4 *)(lVar22 + lVar28 + uVar32 * 4);
                *puVar1 = *(undefined4 *)(lVar25 + lVar28 + uVar32 * 4);
                *puVar2 = *(undefined4 *)(lVar31 + lVar28 + uVar32 * 4);
              }
            }
LAB_10026c124:
            uVar32 = uVar32 + 1;
          } while (uVar32 != uVar17);
          local_60 = (byte)uVar21;
          if (local_60 < 0x20) goto LAB_10026c145;
        }
        uVar33 = uVar33 + 1;
        lVar41 = lVar41 + 0x180;
      } while (uVar33 != 0xc);
    }
    else {
      uVar14 = 0xffffffce;
      if (cVar6 != '\0') goto LAB_10026c483;
      *(undefined4 *)(param_1 + 0x80) = 0x180;
      *(undefined4 *)(param_1 + 0x6aa8) = 1;
      uVar21 = *(uint *)(param_1 + 0x2c);
      uVar17 = (ulong)uVar21;
      if (uVar17 == 0) {
        uVar21 = 0;
        uVar17 = 0;
LAB_10026c19e:
        do {
          uVar12 = *puVar37;
          bVar26 = (byte)uVar21;
          puVar37 = (ushort *)((long)puVar37 + (ulong)(uVar21 + 4 >> 3));
          *(ushort **)(param_1 + 0x5c) = puVar37;
          uVar21 = uVar21 + 4 & 7;
          *(uint *)(param_1 + 0x6c) = uVar21;
          bVar26 = (byte)(((uint)(ushort)(uVar12 << 8 | uVar12 >> 8) << (bVar26 & 0x1f)) >> 0xc) &
                   0xf;
          *(byte *)(param_1 + 0x94 + uVar17) = bVar26;
          *(byte *)(param_1 + 0xb4 + uVar17) = bVar26;
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 != 0x20);
      }
      else {
        bVar26 = *(byte *)(param_1 + 0x15);
        lVar28 = param_1 + 0x94;
        uVar33 = 0;
        do {
          if (bVar26 != 0) {
            puVar37 = *(ushort **)(param_1 + 0x5c);
            uVar20 = *(uint *)(param_1 + 0x6c);
            lVar38 = 0;
            do {
              uVar12 = *puVar37;
              bVar19 = (byte)uVar20;
              puVar37 = (ushort *)((long)puVar37 + (ulong)(uVar20 + 4 >> 3));
              *(ushort **)(param_1 + 0x5c) = puVar37;
              uVar20 = uVar20 + 4 & 7;
              *(uint *)(param_1 + 0x6c) = uVar20;
              *(byte *)(lVar28 + lVar38) =
                   (byte)(((uint)(ushort)(uVar12 << 8 | uVar12 >> 8) << (bVar19 & 0x1f)) >> 0xc) &
                   0xf;
              lVar38 = lVar38 + 0x20;
            } while ((ulong)bVar26 << 5 != lVar38);
          }
          uVar33 = uVar33 + 1;
          lVar28 = lVar28 + 1;
        } while (uVar33 != uVar17);
        if (uVar21 < 0x20) {
          puVar37 = *(ushort **)(param_1 + 0x5c);
          uVar21 = *(uint *)(param_1 + 0x6c);
          goto LAB_10026c19e;
        }
      }
      bVar26 = *(byte *)(param_1 + 0x15);
      uVar17 = (ulong)bVar26;
      lVar38 = 0;
      lVar28 = param_1 + 0x94;
      puVar30 = (undefined2 *)(param_1 + 0x114);
      do {
        if (uVar17 != 0) {
          lVar41 = 0;
          puVar39 = puVar30;
          do {
            if (*(char *)(lVar28 + lVar41) == '\0') {
              uVar23 = 0xffff;
            }
            else {
              puVar43 = *(undefined1 **)(param_1 + 0x5c);
              uVar35 = *puVar43;
              uVar7 = puVar43[1];
              iVar24 = *(int *)(param_1 + 0x6c);
              uVar21 = iVar24 + 6;
              *(undefined1 **)(param_1 + 0x5c) = puVar43 + (uVar21 >> 3);
              *(uint *)(param_1 + 0x6c) = uVar21 & 7;
              uVar23 = (undefined2)
                       (((ulong)((uint)CONCAT11(uVar35,uVar7) << ((byte)iVar24 & 0x1f)) & 0xffff) >>
                       10);
            }
            *puVar39 = uVar23;
            lVar41 = lVar41 + 0x20;
            puVar39 = puVar39 + 0x60;
          } while ((ulong)bVar26 * 0x20 != lVar41);
        }
        fVar46 = DAT_100700b50;
        fVar11 = DAT_100700b24;
        lVar38 = lVar38 + 1;
        puVar30 = puVar30 + 3;
        lVar28 = lVar28 + 1;
      } while (lVar38 != 0x20);
      uVar33 = (ulong)*(uint *)(param_1 + 0x2c);
      lVar28 = 0;
      do {
        lVar38 = lVar28 * 0x80 + param_1 + 0x2298;
        uVar42 = 0;
        do {
          uVar32 = uVar17;
          if (uVar33 <= uVar42) {
            uVar32 = 1;
          }
          if (uVar17 != 0 || uVar33 <= uVar42) {
            puVar3 = (undefined4 *)(param_1 + 0x3498 + lVar28 * 0x80 + uVar42 * 4);
            uVar44 = 0;
            do {
              while (bVar26 = *(byte *)(uVar42 + uVar44 * 0x20 + param_1 + 0x94), bVar26 != 0) {
                pbVar34 = *(byte **)(param_1 + 0x5c);
                bVar19 = *pbVar34;
                bVar8 = pbVar34[1];
                bVar9 = pbVar34[2];
                iVar24 = *(int *)(param_1 + 0x6c);
                uVar21 = (uint)(byte)(bVar26 + 1) + iVar24;
                *(byte **)(param_1 + 0x5c) = pbVar34 + (uVar21 >> 3);
                *(uint *)(param_1 + 0x6c) = uVar21 & 7;
                iVar27 = 1 << (bVar26 & 0x1f);
                uVar21 = (((uint)bVar9 | (uint)bVar8 << 8 | (uint)bVar19 << 0x10) <<
                          ((byte)iVar24 & 0x1f) & 0xffffff) >> (0x17 - bVar26 & 0x1f) & 0xffff;
                fVar47 = fVar11;
                if ((uVar21 >> (bVar26 & 0x1f) & 1) != 0) {
                  fVar47 = 0.0;
                }
                fVar48 = (float)iVar27;
                iVar24 = 1 << (bVar26 + 1 & 0x1f);
                *(float *)(uVar44 * 0x1200 + lVar38 + uVar42 * 4) =
                     ((float)iVar24 / (float)(iVar24 + -1)) *
                     (fVar46 / fVar48 + (float)(uVar21 & iVar27 - 1U) / fVar48 + fVar47) *
                     *(float *)(&DAT_10071ce90 +
                               (ulong)(ushort)((undefined2 *)(param_1 + 0x114))
                                              [uVar44 * 0x60 + uVar42 * 3] * 4);
LAB_10026c3e9:
                uVar44 = uVar44 + 1;
                if (uVar44 == uVar32) {
                  if ((uVar33 <= uVar42) && (*(char *)(param_1 + 0x14) != '\0')) {
                    *puVar3 = *(undefined4 *)(lVar38 + uVar42 * 4);
                  }
                  goto LAB_10026c44b;
                }
              }
              *(undefined4 *)(uVar44 * 0x1200 + lVar38 + uVar42 * 4) = 0;
              if (uVar33 <= uVar42) {
                if (*(char *)(param_1 + 0x14) != '\0') {
                  *puVar3 = 0;
                }
                goto LAB_10026c3e9;
              }
              uVar44 = uVar44 + 1;
            } while (uVar44 != uVar17);
          }
LAB_10026c44b:
          uVar42 = uVar42 + 1;
        } while (uVar42 != 0x20);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0xc);
    }
    FUN_100271db7(param_1);
    piVar4 = (int *)(param_1 + 0x8378 + (ulong)(*(char *)(param_1 + 9) != '\x01') * 4);
    *piVar4 = *piVar4 + 1;
  }
  uVar14 = 0;
LAB_10026c483:
  *(undefined8 *)(param_1 + 0x8c) = 0;
  return uVar14;
}

