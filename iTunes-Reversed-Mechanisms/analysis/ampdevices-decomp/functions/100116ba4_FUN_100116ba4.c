// name: FUN_100116ba4
// address: 100116ba4

void FUN_100116ba4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  ulong uVar16;
  long lVar17;
  bool bVar18;
  
  bVar2 = *(byte *)(param_3 + 0xbbd);
  uVar5 = (ulong)bVar2;
  if (uVar5 != 0) {
    lVar14 = *(long *)(param_2 + 0x18);
    cVar8 = *(char *)(lVar14 + 8);
    uVar9 = 0;
    uVar11 = 0;
    do {
      if (*(char *)(param_3 + 0xbbe + uVar9) == *(char *)(param_3 + 0xbdd + (ulong)(uVar11 + 1))) {
        *(char *)(param_3 + 0xe8d + uVar9) = cVar8;
        cVar8 = cVar8 + *(char *)(param_3 + 0xbdc);
        uVar11 = uVar11 + 1;
      }
      else {
        *(undefined1 *)(param_3 + 0xe8d + uVar9) = 0;
      }
      if (uVar9 == *(uint *)(param_3 + 0xbd8)) {
        *(undefined1 *)(param_3 + 0xe92 + uVar9) = 1;
LAB_100116c48:
        uVar15 = 0;
      }
      else {
        bVar18 = uVar9 == *(uint *)(param_4 + 0xec);
        *(bool *)(param_3 + 0xe92 + uVar9) = bVar18;
        if (bVar18) goto LAB_100116c48;
        uVar15 = *(undefined1 *)(param_2 + 0x12);
      }
      *(undefined1 *)(param_3 + 0xe97 + uVar9) = uVar15;
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
    if (*(char *)(param_3 + 0xe9c) == '\0') {
      uVar15 = *(undefined1 *)(lVar14 + 1);
      lVar14 = 0;
      do {
        ___bzero(param_3 + 0xd94 + lVar14,uVar15);
        lVar14 = lVar14 + 0x30;
      } while ((ulong)bVar2 * 0x30 != lVar14);
    }
    else {
      uVar9 = 0;
      do {
        uVar16 = (ulong)*(uint *)(param_3 + 0xbc4 + uVar9 * 4);
        uVar10 = (ulong)*(byte *)(lVar14 + uVar16);
        if (uVar10 != 0) {
          lVar12 = uVar9 * 0x30 + param_3 + 0xd94;
          lVar4 = *(long *)(lVar14 + 0x20 + uVar16 * 8);
          uVar16 = 0;
          lVar13 = param_3 + 0xc14;
          lVar17 = param_3 + 0xcd4;
          do {
            bVar2 = *(byte *)(lVar4 + uVar16);
            bVar3 = *(byte *)(lVar4 + 1 + uVar16);
            *(undefined1 *)(lVar12 + uVar16) = 0;
            if (bVar2 < bVar3) {
              lVar6 = 0;
              lVar7 = 0;
              do {
                bVar18 = (long)*(int *)(lVar13 + lVar7 * 4) <= (long)uVar9;
                *(uint *)(lVar17 + lVar7 * 4) = (uint)bVar18;
                pbVar1 = (byte *)(lVar12 + uVar16);
                *pbVar1 = *pbVar1 | bVar18;
                lVar7 = lVar7 + 1;
                lVar6 = lVar6 + -4;
              } while ((uint)bVar3 - (uint)bVar2 != (int)lVar7);
              lVar17 = lVar17 - lVar6;
              lVar13 = lVar13 - lVar6;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar10);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar5);
    }
  }
  return;
}

