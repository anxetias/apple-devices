// name: FUN_100110ca4
// address: 100110ca4

undefined8 FUN_100110ca4(long param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  uint local_38;
  
  uVar24 = (ulong)*(uint *)(param_2 + 0xc);
  lVar25 = param_1 + uVar24 * 0x20a0;
  lVar6 = *(long *)(lVar25 + 0x18d0 + (ulong)*(byte *)(lVar25 + 0xbd8) * 8);
  uVar15 = (ulong)*(byte *)(param_1 + 0x1ab6c + uVar24);
  uVar4 = *(ushort *)(lVar25 + 0xbb0);
  lVar2 = param_1 + 0x1ab84 + uVar24 * 8;
  lVar21 = lVar25 + 0x1920;
  lVar22 = (ulong)*(uint *)(param_2 + 8) * 0x20a0 + param_1 + 0x1920;
  uVar20 = (ulong)*(uint *)(lVar25 + 0xbe0);
  local_38 = (uint)uVar4;
  if (*(char *)(param_1 + 0x1ab78 + uVar24) == '\x02') {
    if (uVar20 != 0) {
      uVar24 = 0;
      do {
        bVar3 = *(byte *)(lVar2 + uVar24);
        if (uVar15 != 0) {
          uVar17 = 0;
          do {
            uVar27 = uVar17 + 1;
            if (bVar3 != 0) {
              uVar5 = *(ushort *)(lVar6 + uVar17 * 2);
              uVar17 = (ulong)((uint)uVar5 * 4);
              lVar25 = lVar22 + uVar17;
              lVar28 = uVar17 + lVar21;
              uVar26 = (uint)*(ushort *)(lVar6 + uVar27 * 2) - (uint)uVar5;
              uVar16 = uVar26 >> 2;
              uVar19 = 0;
              do {
                if (3 < uVar26) {
                  lVar23 = 0;
                  do {
                    pfVar1 = (float *)(lVar28 + lVar23);
                    fVar7 = *pfVar1;
                    fVar8 = pfVar1[1];
                    fVar9 = pfVar1[2];
                    fVar10 = pfVar1[3];
                    pfVar1 = (float *)(lVar25 + lVar23);
                    fVar11 = *pfVar1;
                    fVar12 = pfVar1[1];
                    fVar13 = pfVar1[2];
                    fVar14 = pfVar1[3];
                    pfVar1 = (float *)(lVar28 + lVar23);
                    *pfVar1 = fVar7 + fVar11;
                    pfVar1[1] = fVar8 + fVar12;
                    pfVar1[2] = fVar9 + fVar13;
                    pfVar1[3] = fVar10 + fVar14;
                    pfVar1 = (float *)(lVar25 + lVar23);
                    *pfVar1 = fVar7 - fVar11;
                    pfVar1[1] = fVar8 - fVar12;
                    pfVar1[2] = fVar9 - fVar13;
                    pfVar1[3] = fVar10 - fVar14;
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)(uVar16 + (uVar16 == 0)) << 4 != lVar23);
                }
                uVar19 = uVar19 + 1;
                lVar25 = lVar25 + (ulong)((uint)uVar4 * 4);
                lVar28 = lVar28 + (ulong)((uint)uVar4 * 4);
              } while (uVar19 != bVar3);
            }
            uVar17 = uVar27;
          } while (uVar27 != uVar15);
        }
        uVar17 = (ulong)(bVar3 * local_38 * 4);
        lVar21 = lVar21 + uVar17;
        lVar22 = lVar22 + uVar17;
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar20);
    }
  }
  else if (uVar20 != 0) {
    lVar25 = param_1 + uVar24 * 0x79 + 0x5f9;
    uVar24 = 0;
    do {
      bVar3 = *(byte *)(lVar2 + uVar24);
      if (uVar15 != 0) {
        uVar17 = 0;
        do {
          uVar27 = uVar17 + 1;
          if ((*(char *)(lVar25 + uVar17) != '\0') && (bVar3 != 0)) {
            uVar5 = *(ushort *)(lVar6 + uVar17 * 2);
            uVar17 = (ulong)((uint)uVar5 * 4);
            lVar28 = lVar22 + uVar17;
            lVar23 = uVar17 + lVar21;
            uVar19 = (uint)*(ushort *)(lVar6 + uVar27 * 2) - (uint)uVar5;
            uVar16 = uVar19 >> 2;
            uVar26 = 0;
            do {
              if (3 < uVar19) {
                lVar18 = 0;
                do {
                  pfVar1 = (float *)(lVar23 + lVar18);
                  fVar7 = *pfVar1;
                  fVar8 = pfVar1[1];
                  fVar9 = pfVar1[2];
                  fVar10 = pfVar1[3];
                  pfVar1 = (float *)(lVar28 + lVar18);
                  fVar11 = *pfVar1;
                  fVar12 = pfVar1[1];
                  fVar13 = pfVar1[2];
                  fVar14 = pfVar1[3];
                  pfVar1 = (float *)(lVar23 + lVar18);
                  *pfVar1 = fVar7 + fVar11;
                  pfVar1[1] = fVar8 + fVar12;
                  pfVar1[2] = fVar9 + fVar13;
                  pfVar1[3] = fVar10 + fVar14;
                  pfVar1 = (float *)(lVar28 + lVar18);
                  *pfVar1 = fVar7 - fVar11;
                  pfVar1[1] = fVar8 - fVar12;
                  pfVar1[2] = fVar9 - fVar13;
                  pfVar1[3] = fVar10 - fVar14;
                  lVar18 = lVar18 + 0x10;
                } while ((ulong)(uVar16 + (uVar16 == 0)) << 4 != lVar18);
              }
              uVar26 = uVar26 + 1;
              lVar28 = lVar28 + (ulong)((uint)uVar4 * 4);
              lVar23 = lVar23 + (ulong)((uint)uVar4 * 4);
            } while (uVar26 != bVar3);
          }
          uVar17 = uVar27;
        } while (uVar27 != uVar15);
      }
      lVar25 = lVar25 + uVar15;
      uVar17 = (ulong)(bVar3 * local_38 * 4);
      lVar21 = lVar21 + uVar17;
      lVar22 = lVar22 + uVar17;
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar20);
  }
  return 0;
}

