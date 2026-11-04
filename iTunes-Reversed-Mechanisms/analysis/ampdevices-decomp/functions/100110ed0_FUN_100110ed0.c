// name: FUN_100110ed0
// address: 100110ed0

undefined8 FUN_100110ed0(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  float fVar31;
  uint local_68;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar16 = (ulong)(*(uint *)(param_2 + 8) + 1) * 0x20a0;
  lVar8 = *(long *)(param_1 + 3000 + lVar16);
  uVar22 = (ulong)*(uint *)(lVar8 + 0x20);
  if (uVar22 != 0) {
    uVar23 = (ulong)*(uint *)(param_2 + 0xc);
    lVar16 = param_1 + lVar16;
    lVar8 = *(long *)(lVar16 + 0x18d0 + (ulong)*(byte *)(lVar8 + 0x18) * 8);
    uVar6 = *(ushort *)(lVar16 + 0xbb0);
    local_50 = param_1 + 0x1920 + (ulong)*(uint *)(param_2 + 8) * 0x20a0;
    local_48 = lVar16 + 0x1920;
    local_40 = lVar16 + 0xf5c;
    local_38 = lVar16 + 0x1508;
    uVar13 = (ulong)*(byte *)(param_1 + 0x1ab6c + uVar23);
    lVar21 = param_1 + uVar23 * 0x79 + 0x5f9;
    uVar30 = (ulong)((uint)uVar6 * 4);
    uVar25 = 0;
    do {
      bVar3 = *(byte *)(param_1 + uVar23 * 8 + 0x1ab84 + uVar25);
      uVar14 = (ulong)*(byte *)(lVar16 + 0x18c8 + uVar25);
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar24 = 0;
        do {
          pcVar9 = *(char **)(local_38 + uVar24 * 8);
          bVar4 = pcVar9[3];
          if ((byte)pcVar9[2] < bVar4) {
            cVar5 = *pcVar9;
            uVar17 = (ulong)(byte)pcVar9[2];
            do {
              uVar18 = uVar17 + 1;
              if (bVar3 != 0) {
                uVar7 = *(ushort *)(lVar8 + uVar17 * 2);
                uVar19 = (ulong)((uint)uVar7 * 4);
                lVar26 = local_48 + uVar19;
                lVar20 = uVar19 + local_50;
                uVar29 = (uint)*(ushort *)(lVar8 + uVar18 * 2) - (uint)uVar7;
                fVar31 = *(float *)(&DAT_1007014a0 +
                                   (ulong)(*(byte *)(lVar21 + uVar17) ^ cVar5 != '\x0e') * 4) *
                         *(float *)(local_40 + uVar17 * 4);
                uVar15 = uVar29 >> 2;
                uVar27 = 0;
                do {
                  if (3 < uVar29) {
                    lVar28 = 0;
                    do {
                      pfVar1 = (float *)(lVar20 + lVar28);
                      fVar10 = pfVar1[1];
                      fVar11 = pfVar1[2];
                      fVar12 = pfVar1[3];
                      pfVar2 = (float *)(lVar26 + lVar28);
                      *pfVar2 = *pfVar1 * fVar31;
                      pfVar2[1] = fVar10 * fVar31;
                      pfVar2[2] = fVar11 * fVar31;
                      pfVar2[3] = fVar12 * fVar31;
                      lVar28 = lVar28 + 0x10;
                    } while ((ulong)(uVar15 + (uVar15 == 0)) << 4 != lVar28);
                  }
                  uVar27 = uVar27 + 1;
                  lVar26 = lVar26 + uVar30;
                  lVar20 = lVar20 + uVar30;
                } while (uVar27 != bVar3);
              }
              uVar17 = uVar18;
            } while (uVar18 != bVar4);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar14);
      }
      local_38 = local_38 + uVar14 * 8;
      lVar21 = lVar21 + uVar13;
      local_40 = local_40 + uVar13 * 4;
      local_68 = (uint)uVar6;
      uVar14 = (ulong)(bVar3 * local_68 * 4);
      local_50 = local_50 + uVar14;
      local_48 = local_48 + uVar14;
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar22);
  }
  return 0;
}

