// name: FUN_10016cb00
// address: 10016cb00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10016cb00(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  ulong uVar8;
  runtime_error *prVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  pbVar16 = (byte *)*param_2;
  bVar1 = *pbVar16;
  bVar13 = bVar1;
  if (bVar1 == 0x2d) {
    pbVar17 = pbVar16 + 1;
    pbVar16 = pbVar16 + 1;
    bVar13 = *pbVar17;
  }
  lVar2 = param_2[1];
  if (bVar13 == 0x30) {
    bVar13 = pbVar16[1];
    pbVar16 = pbVar16 + 1;
    iVar11 = 0;
    uVar10 = 0;
  }
  else {
    if (8 < (byte)(bVar13 - 0x31)) {
      prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
      std::runtime_error::runtime_error(prVar9,"kParseErrorValueInvalid");
      *(undefined ***)prVar9 = &PTR_FUN_10083c0c0;
      *(undefined4 *)(prVar9 + 0x10) = 3;
      *(long *)(prVar9 + 0x18) = (long)pbVar16 - lVar2;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(prVar9,&PTR_DAT_10083c098,FUN_10016c08a);
    }
    uVar10 = (ulong)(bVar13 - 0x30);
    bVar13 = pbVar16[1];
    pbVar16 = pbVar16 + 1;
    if (bVar1 == 0x2d) {
      if ((byte)(bVar13 - 0x30) < 10) {
        iVar11 = 0;
LAB_10016cb81:
        uVar18 = (uint)uVar10;
        if (uVar18 < 0xccccccc) {
LAB_10016cb99:
          uVar10 = (ulong)(((uint)bVar13 + uVar18 * 10) - 0x30);
          iVar11 = iVar11 + 1;
          bVar13 = pbVar16[1];
          pbVar16 = pbVar16 + 1;
          if (9 < (byte)(bVar13 - 0x30)) goto LAB_10016cc09;
          goto LAB_10016cb81;
        }
        if (uVar18 != 0xccccccc) goto LAB_10016cf34;
        if (bVar13 < 0x39) goto LAB_10016cb99;
        uVar10 = 0xccccccc;
        bVar13 = 0x39;
LAB_10016cf34:
        uVar8 = uVar10;
        if (bVar1 == 0x2d) {
          do {
            if ((0xccccccccccccccb < uVar8) && ((uVar8 != 0xccccccccccccccc || (0x38 < bVar13))))
            goto LAB_10016cfd7;
            uVar8 = (ulong)(bVar13 & 0xf) + uVar8 * 10;
            iVar11 = iVar11 + 1;
            bVar13 = pbVar16[1];
            pbVar16 = pbVar16 + 1;
          } while ((byte)(bVar13 - 0x30) < 10);
        }
        else {
          do {
            if ((0x1999999999999998 < uVar8) && ((uVar8 != 0x1999999999999999 || (0x35 < bVar13))))
            goto LAB_10016cfd7;
            uVar8 = (ulong)(bVar13 & 0xf) + uVar8 * 10;
            iVar11 = iVar11 + 1;
            bVar13 = pbVar16[1];
            pbVar16 = pbVar16 + 1;
          } while ((byte)(bVar13 - 0x30) < 10);
        }
        dVar21 = 0.0;
        bVar5 = true;
        bVar3 = false;
        bVar4 = false;
        goto LAB_10016cc0c;
      }
    }
    else if ((byte)(bVar13 - 0x30) < 10) {
      iVar11 = 0;
      do {
        uVar18 = (uint)uVar10;
        if (0x19999998 < uVar18) {
          if (uVar18 != 0x19999999) goto LAB_10016cf34;
          if (0x35 < bVar13) {
            uVar10 = 0x19999999;
            goto LAB_10016cf34;
          }
        }
        uVar10 = (ulong)(((uint)bVar13 + uVar18 * 10) - 0x30);
        iVar11 = iVar11 + 1;
        bVar13 = pbVar16[1];
        pbVar16 = pbVar16 + 1;
      } while ((byte)(bVar13 - 0x30) < 10);
      goto LAB_10016cc09;
    }
    iVar11 = 0;
  }
LAB_10016cc09:
  uVar8 = 0;
  bVar3 = false;
  dVar21 = 0.0;
  bVar4 = false;
  bVar5 = false;
  goto LAB_10016cc0c;
LAB_10016cfd7:
  auVar24._8_4_ = (int)(uVar8 >> 0x20);
  auVar24._0_8_ = uVar8;
  auVar24._12_4_ = DAT_10070d3c0._4_4_;
  dVar21 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar8) - _DAT_10070d3d0) +
           (auVar24._8_8_ - _UNK_10070d3d8);
  lVar19 = (long)pbVar16 - lVar2;
  do {
    if (DAT_10070d398 <= dVar21) {
      prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
      std::runtime_error::runtime_error(prVar9,"kParseErrorNumberTooBig");
      *(undefined ***)prVar9 = &PTR_FUN_10083c0c0;
      *(undefined4 *)(prVar9 + 0x10) = 0xd;
      *(long *)(prVar9 + 0x18) = lVar19;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(prVar9,&PTR_DAT_10083c098,FUN_10016c08a);
    }
    dVar21 = dVar21 * DAT_10070d3a0 + (double)(int)(bVar13 - 0x30);
    bVar13 = pbVar16[1];
    pbVar16 = pbVar16 + 1;
    lVar19 = lVar19 + 1;
  } while ((byte)(bVar13 - 0x30) < 10);
  bVar3 = true;
  bVar4 = true;
  bVar5 = true;
LAB_10016cc0c:
  if (bVar13 == 0x2e) {
    bVar13 = pbVar16[1];
    pbVar17 = pbVar16 + 1;
    if (9 < (byte)(bVar13 - 0x30)) {
      prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
      std::runtime_error::runtime_error(prVar9,"kParseErrorNumberMissFraction");
      *(undefined ***)prVar9 = &PTR_FUN_10083c0c0;
      *(undefined4 *)(prVar9 + 0x10) = 0xe;
      *(long *)(prVar9 + 0x18) = (long)pbVar17 - lVar2;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(prVar9,&PTR_DAT_10083c098,FUN_10016c08a);
    }
    iVar15 = 0;
    if (bVar3) {
LAB_10016cdf0:
      do {
        pbVar16 = pbVar17;
        if (0x39 < bVar13) goto LAB_10016cca6;
        if (iVar11 < 0x11) {
          dVar21 = dVar21 * DAT_10070d3a0 + (double)(int)(bVar13 - 0x30);
          iVar15 = iVar15 + -1;
          if ((dVar21 != 0.0) || (NAN(dVar21))) {
            iVar11 = iVar11 + 1;
          }
        }
        bVar13 = pbVar17[1];
        pbVar16 = pbVar17 + 1;
        pbVar17 = pbVar16;
      } while ('/' < (char)bVar13);
      iVar11 = 0;
      goto LAB_10016ce35;
    }
    if (!bVar5) {
      uVar8 = uVar10;
    }
    iVar15 = 0;
    do {
      if ((0x39 < bVar13) || (uVar8 >> 0x35 != 0)) {
        auVar23._8_4_ = (int)(uVar8 >> 0x20);
        auVar23._0_8_ = uVar8;
        auVar23._12_4_ = DAT_10070d3c0._4_4_;
        dVar21 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar8) - _DAT_10070d3d0) +
                 (auVar23._8_8_ - _UNK_10070d3d8);
        bVar4 = true;
        goto LAB_10016cdf0;
      }
      pbVar16 = pbVar17 + 1;
      iVar15 = iVar15 + -1;
      uVar8 = (ulong)(bVar13 - 0x30) + uVar8 * 10;
      iVar11 = iVar11 + (uint)(uVar8 != 0);
      bVar13 = pbVar17[1];
      pbVar17 = pbVar16;
    } while ('/' < (char)bVar13);
    dVar21 = (double)(long)uVar8;
    iVar11 = 0;
  }
  else {
    iVar15 = 0;
LAB_10016cca6:
    iVar11 = 0;
    if ((bVar13 | 0x20) != 0x65) goto LAB_10016ce35;
    uVar12 = uVar10;
    if (bVar5) {
      uVar12 = uVar8;
    }
    if (!bVar4) {
      auVar22._8_4_ = (int)(uVar12 >> 0x20);
      auVar22._0_8_ = uVar12;
      auVar22._12_4_ = DAT_10070d3c0._4_4_;
      dVar21 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar12) - _DAT_10070d3d0) +
               (auVar22._8_8_ - _UNK_10070d3d8);
      bVar4 = true;
    }
    bVar13 = pbVar16[1];
    bVar3 = false;
    bVar6 = false;
    if (bVar13 == 0x2b) {
LAB_10016cd02:
      bVar3 = bVar6;
      bVar13 = pbVar16[2];
      pbVar16 = pbVar16 + 2;
    }
    else {
      if (bVar13 == 0x2d) {
        bVar6 = true;
        goto LAB_10016cd02;
      }
      pbVar16 = pbVar16 + 1;
    }
    if (9 < (byte)(bVar13 - 0x30)) {
      prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
      std::runtime_error::runtime_error(prVar9,"kParseErrorNumberMissExponent");
      *(undefined ***)prVar9 = &PTR_FUN_10083c0c0;
      *(undefined4 *)(prVar9 + 0x10) = 0xf;
      *(long *)(prVar9 + 0x18) = (long)pbVar16 - lVar2;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(prVar9,&PTR_DAT_10083c098,FUN_10016c08a);
    }
    pbVar16 = pbVar16 + 1;
    iVar14 = bVar13 - 0x30;
    lVar19 = (long)pbVar16 - lVar2;
    while (bVar13 = *pbVar16, (byte)(bVar13 - 0x30) < 10) {
      pbVar16 = pbVar16 + 1;
      iVar14 = (uint)bVar13 + iVar14 * 10 + -0x30;
      lVar19 = lVar19 + 1;
      if (0x134 < iVar14 && !bVar3) {
        prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
        std::runtime_error::runtime_error(prVar9,"kParseErrorNumberTooBig");
        *(undefined ***)prVar9 = &PTR_FUN_10083c0c0;
        *(undefined4 *)(prVar9 + 0x10) = 0xd;
        *(long *)(prVar9 + 0x18) = lVar19;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(prVar9,&PTR_DAT_10083c098,FUN_10016c08a);
      }
    }
    iVar11 = -iVar14;
    if (!bVar3) {
      iVar11 = iVar14;
    }
LAB_10016ce35:
    if (!bVar4) {
      if (bVar5) {
        if (bVar1 == 0x2d) {
          cVar7 = FUN_10016d604(param_3,-uVar8);
        }
        else {
          cVar7 = FUN_10016d662(param_3,uVar8);
        }
      }
      else if (bVar1 == 0x2d) {
        cVar7 = FUN_10016d6c0(param_3,-(int)uVar10);
      }
      else {
        cVar7 = FUN_10016d71e(param_3);
      }
      goto LAB_10016cf03;
    }
  }
  uVar18 = iVar11 + iVar15;
  if ((int)uVar18 < -0x134) {
    dVar20 = 0.0;
    if (0xfffffd97 < uVar18) {
      dVar20 = (dVar21 / _DAT_10070d3a8) /
               *(double *)(&DAT_10070d500 + (ulong)(-uVar18 - 0x134) * 8);
    }
  }
  else if ((int)uVar18 < 0) {
    dVar20 = dVar21 / *(double *)(&DAT_10070d500 + (ulong)-uVar18 * 8);
  }
  else {
    if (0x134 < uVar18) {
                    /* WARNING: Subroutine does not return */
      ___assert_rtn("Pow10","pow10.h",0x34,"n >= 0 && n <= 308");
    }
    dVar20 = dVar21 * *(double *)(&DAT_10070d500 + (ulong)uVar18 * 8);
  }
  if (bVar1 == 0x2d) {
    dVar20 = (double)((ulong)dVar20 ^ _DAT_100700b30);
  }
  cVar7 = FUN_10016d5a4(dVar20,param_3);
LAB_10016cf03:
  if (cVar7 != '\0') {
    *param_2 = pbVar16;
    param_2[1] = lVar2;
    return;
  }
  prVar9 = (runtime_error *)___cxa_allocate_exception(0x20);
  std::runtime_error::runtime_error(prVar9,"kParseErrorTermination");
  *(undefined ***)prVar9 = &PTR_FUN_10083c0c0;
  *(undefined4 *)(prVar9 + 0x10) = 0x10;
  *(long *)(prVar9 + 0x18) = (long)pbVar16 - lVar2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(prVar9,&PTR_DAT_10083c098,FUN_10016c08a);
}

