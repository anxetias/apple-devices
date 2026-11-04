// name: FUN_10016e69f
// address: 10016e69f

void FUN_10016e69f(long *param_1,ulong *param_2,ulong param_3,long param_4,int *param_5,int *param_6
                  )

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  bool bVar17;
  
  bVar3 = -(char)(int)param_2[1];
  uVar10 = 1L << (bVar3 & 0x3f);
  uVar8 = *param_2;
  uVar13 = uVar8 >> (bVar3 & 0x3f);
  lVar2 = *param_1;
  uVar16 = 1;
  uVar7 = (uint)uVar13;
  if (((((9 < uVar7) && (uVar16 = 2, 99 < uVar7)) && (uVar16 = 3, 999 < uVar7)) &&
      ((uVar16 = 4, 9999 < uVar7 && (uVar16 = 5, 99999 < uVar7)))) &&
     ((uVar16 = 6, 999999 < uVar7 &&
      ((uVar16 = 7, 9999999 < uVar7 && (uVar16 = 8, 99999999 < uVar7)))))) {
    uVar16 = (ulong)(10 - (uVar7 < 1000000000));
  }
  uVar5 = uVar8 - lVar2;
  uVar11 = uVar10 - 1 & uVar8;
  *param_5 = 0;
  do {
    uVar7 = (uint)uVar13;
    if ((int)uVar16 < 1) {
      uVar7 = 0;
      do {
        uVar8 = param_3;
        cVar9 = (char)(uVar11 * 10 >> (bVar3 & 0x3f));
        iVar6 = *param_5;
        if (cVar9 != '\0' || iVar6 != 0) {
          *param_5 = iVar6 + 1;
          *(char *)(param_4 + iVar6) = cVar9 + '0';
        }
        param_3 = uVar8 * 10;
        uVar11 = uVar11 * 10 & uVar10 - 1;
        uVar7 = uVar7 + 1;
      } while (param_3 < uVar11 || param_3 - uVar11 == 0);
      *param_6 = *param_6 - uVar7;
      if (uVar10 <= param_3 - uVar11) {
        uVar5 = uVar5 * *(uint *)(&DAT_10070e220 + (ulong)uVar7 * 4);
        uVar13 = uVar5 - uVar11;
        if (uVar11 <= uVar5 && uVar13 != 0) {
          iVar6 = *param_5;
          uVar11 = uVar11 + uVar10;
          uVar8 = uVar8 * 10 - uVar11;
          do {
            if ((uVar5 <= uVar11) && (uVar13 <= uVar11 - uVar5)) {
              return;
            }
            pcVar1 = (char *)(param_4 + -1 + (long)iVar6);
            *pcVar1 = *pcVar1 + -1;
            bVar17 = uVar10 <= uVar8;
            uVar8 = uVar8 - uVar10;
            if (uVar5 <= uVar11) {
              return;
            }
            uVar13 = uVar13 - uVar10;
            uVar11 = uVar11 + uVar10;
          } while (bVar17);
        }
        return;
      }
      return;
    }
    uVar15 = (int)uVar16 - 1;
    uVar16 = (ulong)uVar15;
    switch(uVar16) {
    case 0:
      uVar13 = 0;
      goto LAB_10016e8a0;
    case 1:
      uVar12 = (uint)((uVar13 & 0xffffffff) / 10);
      iVar6 = (int)((uVar13 & 0xffffffff) / 10) * 10;
      break;
    case 2:
      uVar12 = (uint)((uVar13 & 0xffffffff) / 100);
      iVar6 = (int)((uVar13 & 0xffffffff) / 100) * 100;
      break;
    case 3:
      uVar12 = (uint)((uVar13 & 0xffffffff) / 1000);
      iVar6 = (int)((uVar13 & 0xffffffff) / 1000) * 1000;
      break;
    case 4:
      uVar12 = (uint)((uVar13 & 0xffffffff) / 10000);
      iVar6 = (int)((uVar13 & 0xffffffff) / 10000) * 10000;
      break;
    case 5:
      uVar12 = (uVar7 >> 5) / 0xc35;
      iVar6 = ((uVar7 >> 5) / 0xc35) * 100000;
      break;
    case 6:
      uVar12 = (uint)((uVar13 & 0xffffffff) / 1000000);
      iVar6 = (int)((uVar13 & 0xffffffff) / 1000000) * 1000000;
      break;
    case 7:
      uVar12 = (uint)((uVar13 & 0xffffffff) / 10000000);
      iVar6 = (int)((uVar13 & 0xffffffff) / 10000000) * 10000000;
      break;
    case 8:
      uVar12 = (uint)((uVar13 & 0xffffffff) / 100000000);
      iVar6 = (int)((uVar13 & 0xffffffff) / 100000000) * 100000000;
      break;
    case 9:
      uVar4 = (uint)((ulong)(uVar7 >> 9) * 0x44b83 >> 0x20);
      uVar12 = uVar4 >> 7;
      iVar6 = (uVar4 >> 7) * 1000000000;
      break;
    default:
      iVar6 = *param_5;
      uVar14 = uVar13 & 0xffffffff;
      goto LAB_10016e8ad;
    }
    uVar13 = (ulong)(uVar7 - iVar6);
    uVar7 = uVar12;
LAB_10016e8a0:
    cVar9 = (char)uVar7;
    iVar6 = *param_5;
    uVar14 = uVar13;
    if (uVar7 == 0) {
LAB_10016e8ad:
      cVar9 = '\0';
      if (iVar6 != 0) goto LAB_10016e8b4;
    }
    else {
LAB_10016e8b4:
      uVar13 = uVar14;
      *param_5 = iVar6 + 1;
      *(char *)(param_4 + iVar6) = cVar9 + '0';
    }
    uVar14 = ((uVar13 & 0xffffffff) << (bVar3 & 0x3f)) + uVar11;
    if (uVar14 <= param_3) {
      *param_6 = *param_6 + uVar15;
      uVar10 = (ulong)*(uint *)(&DAT_10070e220 + uVar16 * 4) << (bVar3 & 0x3f);
      if (uVar5 <= uVar14) {
        return;
      }
      if (param_3 - uVar14 < uVar10) {
        return;
      }
      iVar6 = *param_5;
      uVar13 = uVar5 - uVar14;
      uVar14 = uVar14 + uVar10;
      param_3 = param_3 - uVar14;
      do {
        if ((uVar5 <= uVar14) && (uVar13 <= (lVar2 - uVar8) + uVar14)) {
          return;
        }
        pcVar1 = (char *)(param_4 + -1 + (long)iVar6);
        *pcVar1 = *pcVar1 + -1;
        bVar17 = uVar10 <= param_3;
        param_3 = param_3 - uVar10;
        if (uVar5 <= uVar14) {
          return;
        }
        uVar13 = uVar13 - uVar10;
        uVar14 = uVar14 + uVar10;
      } while (bVar17);
      return;
    }
  } while( true );
}

