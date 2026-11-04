// name: FUN_10011c930
// address: 10011c930

undefined8 FUN_10011c930(undefined8 param_1,long param_2,int param_3,long param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint local_4c [3];
  ulong local_40;
  uint local_38;
  undefined4 uStack_34;
  
  bVar5 = *(byte *)(param_4 + 0x80);
  if (bVar5 < 5) {
    return 0xfffffffe;
  }
  bVar9 = *(byte *)(param_4 + 0xb);
  local_40 = (ulong)*(byte *)(param_4 + 9);
  bVar7 = *(byte *)(param_4 + 10) - bVar5;
  if (param_3 == 1) {
    bVar5 = *(byte *)(param_4 + 10);
  }
  _local_38 = CONCAT44(uStack_34,(uint)bVar5);
  if (param_3 == 1) {
    bVar7 = 0;
  }
  FUN_100117ae8(local_4c,*(undefined4 *)(param_4 + 4),1);
  uVar2 = FUN_100117af2(local_4c);
  if (15999 < local_4c[0]) {
    pbVar1 = (byte *)(param_4 + 0x80);
    bVar5 = (&DAT_100705e70)[uVar2];
    bVar3 = *pbVar1;
    if ((bVar3 < bVar5) && (bVar3 = pbVar1[local_40], bVar5 < bVar3)) {
      lVar4 = -0x100000000;
      pbVar11 = pbVar1;
      do {
        lVar4 = lVar4 + 0x100000000;
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar3 < bVar5);
      bVar3 = pbVar1[lVar4 >> 0x20];
    }
    uVar2 = (uint)bVar7 + (uint)(byte)local_38;
    if (uVar2 < bVar9) {
      uVar10 = (uint)bVar3 - (uint)bVar9;
      uVar13 = -uVar10;
      if ((int)uVar13 < 0) {
        uVar13 = uVar10;
      }
      uVar6 = (uint)bVar9;
      uVar10 = (uint)bVar3;
      if (uVar13 < 4) {
        uVar10 = uVar6;
      }
      uVar13 = (uint)(byte)(bVar7 + 1);
      iVar16 = 0;
      do {
        lVar4 = (long)iVar16;
        cVar12 = (char)uVar2;
        *(char *)(param_2 + 2 + lVar4 * 8) = cVar12;
        uVar19 = uVar10 - uVar2;
        iVar14 = (int)(short)uVar19;
        if ((int)((byte)local_38 - uVar13) <= iVar14) {
          uVar13 = (int)(short)(((ushort)(byte)local_38 - (short)uVar2) +
                               ((short)uVar2 - (short)uVar13 & 0xfffeU)) + uVar2;
          uVar19 = (uint)*pbVar1;
          if ((*pbVar1 < uVar13) &&
             (uVar19 = (uint)pbVar1[local_40], lVar15 = (local_40 << 0x20) + 0x100000000,
             pbVar11 = (byte *)(local_40 + param_4 + 0x80), uVar13 < pbVar1[local_40])) {
            do {
              lVar15 = lVar15 + -0x100000000;
              bVar5 = *pbVar11;
              pbVar11 = pbVar11 + -1;
            } while ((byte)uVar13 < bVar5);
            uVar19 = (uint)pbVar1[lVar15 >> 0x20];
          }
          uVar19 = uVar19 - uVar2;
          iVar14 = (int)(short)uVar19;
        }
        if (0 < iVar14) {
          bVar5 = (cVar12 - (byte)local_38) + (char)iVar14 + 1 & 0xfe;
          cVar12 = cVar12 - bVar5;
          *(char *)(param_2 + lVar4 * 8) = cVar12;
          *(byte *)(param_2 + 3 + lVar4 * 8) = bVar5;
          *(char *)(param_2 + 4 + lVar4 * 8) = (char)uVar19;
          *(char *)(param_2 + 1 + lVar4 * 8) = cVar12 + (char)uVar19;
          uVar2 = uVar2 + (uVar19 & 0xff);
          iVar16 = iVar16 + 1;
        }
        uVar13 = -(uVar2 - uVar10);
        if ((int)uVar13 < 0) {
          uVar13 = uVar2 - uVar10;
        }
        if (uVar13 < 3) {
          uVar10 = uVar6;
        }
        uVar13 = 1;
      } while (uVar2 < uVar6);
      if (iVar16 < 7) {
        if (iVar16 < 2) {
          uVar8 = 0;
          if (iVar16 != 1) {
            return 0xfffffffe;
          }
        }
        else {
          uVar8 = (ulong)(iVar16 - 1);
          if (*(byte *)(param_2 + 4 + uVar8 * 8) < 3) {
            uVar8 = (ulong)(iVar16 - 2);
            uVar2 = (uint)*(byte *)(param_2 + 4 + uVar8 * 8) +
                    (uint)*(byte *)(param_2 + 2 + uVar8 * 8);
          }
        }
        bVar5 = (char)uVar8 + 1;
        *(byte *)(param_2 + 0x1f1) = bVar5;
        uVar8 = 0;
        bVar9 = 0;
        do {
          uVar13 = uVar2 & 0xff;
          bVar7 = *(byte *)(param_2 + uVar8 * 8);
          bVar3 = (byte)uVar2;
          uVar2 = (uint)bVar7;
          if (bVar3 < bVar7) {
            uVar2 = uVar13;
          }
          bVar7 = *(byte *)(param_2 + 1 + uVar8 * 8);
          if (bVar7 < bVar9) {
            bVar7 = bVar9;
          }
          bVar9 = bVar7;
          uVar8 = uVar8 + 1;
        } while (bVar5 != uVar8);
        *(byte *)(param_2 + 0x1f2) = (byte)uVar2;
        *(byte *)(param_2 + 499) = bVar9;
        if ((byte)uVar2 < bVar9) {
          uVar8 = (ulong)uVar2;
          bVar7 = 1;
          do {
            if (bVar7 == 0) {
              uVar13 = 0;
              bVar7 = 0;
            }
            else {
              lVar4 = uVar8 * 0xe + param_2 + 0x30;
              uVar17 = 0;
              uVar13 = 0;
              do {
                if ((*(byte *)(param_2 + uVar17 * 8) <= uVar8) &&
                   (uVar8 < *(byte *)(param_2 + 1 + uVar17 * 8))) {
                  uVar10 = *(byte *)(param_2 + 3 + uVar17 * 8) + uVar2;
                  if (0x3f < uVar10) {
                    return 0xfffffffe;
                  }
                  uVar6 = 1;
                  do {
                    uVar18 = (ulong)uVar6;
                    uVar6 = uVar6 + 1;
                  } while (*(byte *)(param_4 + 0x7a + uVar18) <= uVar10);
                  *(char *)(lVar4 + (ulong)uVar13) = (char)uVar6 + -2;
                  *(char *)(lVar4 + 6 + (ulong)uVar13) = (char)uVar17;
                  uVar13 = uVar13 + 1;
                  bVar5 = *(byte *)(param_2 + 0x1f1);
                }
                uVar17 = uVar17 + 1;
                bVar7 = bVar5;
              } while (uVar17 < bVar5);
            }
            *(char *)(param_2 + 0x3c + uVar8 * 0xe) = (char)uVar13;
            uVar8 = uVar8 + 1;
            uVar2 = uVar2 + 1;
          } while (uVar8 != bVar9);
          return 0;
        }
        return 0;
      }
    }
  }
  return 0xfffffffe;
}

