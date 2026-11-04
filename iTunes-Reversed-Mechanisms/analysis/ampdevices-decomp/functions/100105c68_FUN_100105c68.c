// name: FUN_100105c68
// address: 100105c68

undefined8 FUN_100105c68(int *param_1,ushort *param_2,long param_3,long param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  byte bVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ushort *puVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_88;
  long local_70;
  ushort *local_50;
  int *local_48;
  ushort *local_40;
  
  fVar12 = DAT_100700468;
  puVar10 = *(undefined8 **)(param_2 + 4);
  uVar18 = (ulong)*(byte *)*puVar10;
  if ((uVar18 != 0) && (uVar9 = *(uint *)(puVar10 + 4), (ulong)uVar9 != 0)) {
    uVar19 = (ulong)*(uint *)(param_3 + 0xc);
    cVar1 = *(char *)(param_4 + 0x1ab78 + uVar19);
    lVar11 = *(long *)(param_2 + (ulong)*(byte *)(puVar10 + 3) * 4 + 0x690);
    uVar6 = *param_2;
    local_48 = param_1 + 1;
    local_40 = param_2 + 0x2a;
    local_50 = param_2 + 0x6b8;
    local_70 = uVar19 * 0x79 + param_4 + 0x5f9;
    uVar20 = 0;
    do {
      bVar2 = *(byte *)(param_4 + uVar19 * 8 + 0x1ab84 + uVar20);
      uVar21 = (ulong)*(uint *)(param_2 + uVar20 * 8 + 0x194);
      if (uVar21 == 0) {
        uVar21 = 0;
      }
      else {
        uVar16 = 0;
        do {
          if ((*(char *)((long)local_40 + uVar16 * 6 + 5) != '\0') && (bVar2 != 0)) {
            puVar24 = local_40 + uVar16 * 3;
            bVar3 = *(byte *)((long)puVar24 + 3);
            bVar4 = (byte)puVar24[1];
            bVar25 = (byte)*puVar24 - 0x71 < 0xffffff9c;
            uVar15 = 0;
            puVar24 = local_50;
            do {
              if (bVar4 < bVar3) {
                cVar5 = *(char *)(param_3 + 4);
                uVar22 = (ulong)bVar4;
                uVar7 = *(ushort *)(lVar11 + (ulong)bVar4 * 2);
                do {
                  uVar17 = (ulong)uVar7;
                  bVar13 = bVar25;
                  if (((cVar5 != '\0') && (*(char *)(param_3 + 6) == '\0')) && (cVar1 != '\0')) {
                    bVar13 = *(byte *)(local_70 + uVar22) ^ bVar25;
                  }
                  uVar8 = *(ushort *)(lVar11 + 2 + uVar22 * 2);
                  fVar27 = (float)param_1[(ulong)((uint)uVar8 - (uint)uVar7) + 0x7a];
                  if (bVar13 == 0) {
                    iVar14 = *param_1;
                    local_48[uVar22] = iVar14;
                  }
                  else {
                    iVar14 = local_48[uVar22];
                  }
                  fVar26 = 0.0;
                  if (uVar8 != uVar7) {
                    uVar23 = 0;
                    do {
                      iVar14 = iVar14 * 0x19660d + 0x3c6ef35f;
                      fVar28 = (float)iVar14 * fVar27;
                      *(float *)(puVar24 + uVar17 * 2 + uVar23 * 2) = fVar28;
                      fVar26 = fVar26 + fVar28 * fVar28;
                      uVar23 = uVar23 + 1;
                    } while ((uint)uVar8 - (uint)uVar7 != uVar23);
                  }
                  if (bVar13 == 0) {
                    *param_1 = iVar14;
                  }
                  if (uVar8 != uVar7) {
                    fVar27 = fVar12;
                    if (fVar12 <= SQRT(fVar26)) {
                      fVar27 = SQRT(fVar26);
                    }
                    fVar26 = *(float *)(param_2 + uVar22 * 2 + 0x1d6);
                    do {
                      *(float *)(puVar24 + uVar17 * 2) =
                           *(float *)(puVar24 + uVar17 * 2) * (fVar26 / fVar27);
                      uVar17 = uVar17 + 1;
                    } while ((uint)uVar8 != (uint)uVar17);
                  }
                  uVar22 = uVar22 + 1;
                  uVar7 = uVar8;
                } while (uVar22 != bVar3);
              }
              uVar15 = uVar15 + 1;
              puVar24 = (ushort *)((long)puVar24 + (ulong)((uint)uVar6 * 4));
            } while (uVar15 != bVar2);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar21);
      }
      local_88 = (uint)uVar6;
      local_50 = local_50 + (ulong)(bVar2 * local_88) * 2;
      local_70 = local_70 + uVar18;
      local_48 = local_48 + uVar18;
      local_40 = local_40 + uVar21 * 3;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar9);
  }
  return 0;
}

