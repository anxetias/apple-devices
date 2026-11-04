// name: FUN_100111faa
// address: 100111faa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100111faa(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  double dVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  undefined4 *puVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  float fVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  double dVar53;
  float fVar56;
  double dVar54;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar55 [16];
  float fVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  double dVar68;
  double dVar69;
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  float fVar80;
  float fVar81;
  double local_6d8;
  undefined8 uStack_6a0;
  ulong local_680;
  double local_668;
  double dStack_660;
  uint local_658;
  uint uStack_654;
  undefined1 local_638 [20];
  uint local_624;
  ulong local_618;
  uint local_600 [12];
  uint auStack_5d0 [210];
  double adStack_288 [24];
  double adStack_1c8 [26];
  uint local_f8;
  uint local_f4;
  undefined1 local_f0 [88];
  uint local_98 [2];
  float local_90 [22];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_600[0] = param_2;
  if (1 < (int)param_2) {
    uVar29 = param_3 * 2;
    if (param_3 < 0) {
      uVar29 = param_3 * -2;
      local_6d8 = DAT_100701ac0;
      dVar42 = DAT_100701ab8;
      dVar53 = DAT_100701ac8;
    }
    else {
      local_6d8 = DAT_100701aa8;
      dVar42 = DAT_100700b18;
      dVar53 = DAT_100701ab0;
    }
    uVar36 = uVar29 * param_2;
    uVar30 = 0;
    uVar9 = param_2;
    if ((param_2 & 0xf) == 0) {
      uVar30 = 0;
      uVar23 = param_2;
      do {
        local_600[uVar30 + 2] = 4;
        uVar30 = uVar30 + 1;
        uVar9 = uVar23 >> 4;
        uVar28 = uVar23 & 0xf0;
        uVar23 = uVar9;
      } while (uVar28 == 0);
    }
    iVar7 = uVar36 - uVar29;
    iVar25 = 9;
    uVar23 = 3;
    do {
      if ((int)uVar9 % iVar25 == 0) {
        puVar8 = local_600 + (long)(int)uVar30 + 2;
        do {
          *puVar8 = uVar23;
          lVar17 = (long)(int)uVar9;
          uVar9 = (uint)(lVar17 / (long)iVar25);
          puVar8 = puVar8 + 1;
          uVar30 = (ulong)((int)uVar30 + 1);
        } while ((int)((long)((ulong)(uint)((int)uVar9 >> 0x1f) << 0x20 |
                             lVar17 / (long)iVar25 & 0xffffffffU) % (long)iVar25) == 0);
      }
      iVar20 = (int)uVar30;
      uVar23 = uVar23 + 2;
      iVar25 = uVar23 * uVar23;
    } while (iVar25 <= (int)uVar9);
    if ((int)uVar9 < 5) {
      local_600[(long)iVar20 + 2] = uVar9;
      uVar30 = (ulong)((uint)(uVar9 != 1) + iVar20);
    }
    else {
      if ((uVar9 & 3) == 0) {
        uVar9 = uVar9 >> 2;
        uVar30 = (ulong)(iVar20 + 1);
        local_600[(long)iVar20 + 2] = 2;
      }
      iVar20 = (int)uVar30;
      uVar23 = 2;
      uVar30 = uVar30 & 0xffffffff;
      do {
        if ((int)uVar9 % (int)uVar23 == 0) {
          iVar25 = (int)uVar30;
          uVar30 = (ulong)(iVar25 + 1);
          local_600[(long)iVar25 + 2] = uVar23;
          uVar9 = (int)uVar9 / (int)uVar23;
        }
        uVar28 = (uVar23 - ((int)(uVar23 + 1) >> 0x1f)) + 1 & 0xfffffffe;
        uVar23 = uVar28 + 1;
      } while ((int)uVar28 < (int)uVar9);
    }
    if (iVar20 != 0) {
      puVar8 = local_600 + (long)(int)uVar30 + 2;
      lVar17 = 0;
      do {
        *puVar8 = local_600[(long)iVar20 + lVar17 + 1];
        lVar17 = lVar17 + -1;
        puVar8 = puVar8 + 1;
      } while (-lVar17 != (long)iVar20);
      uVar30 = (ulong)(uint)((int)uVar30 - (int)lVar17);
    }
    local_668 = 0.0;
    iVar25 = (int)uVar30;
    if (0xb < iVar25) goto LAB_100113684;
    iVar35 = uVar29 * 2;
    dVar6 = DAT_100701ad0 - local_6d8 * local_6d8;
    dVar43 = DAT_100701ad8 * local_6d8;
    dVar44 = (double)(CONCAT44(_UNK_100700b34,_DAT_100700b30) ^ (ulong)local_6d8);
    iVar37 = uVar29 + 1;
    iVar10 = (1 - param_2) * uVar29;
    local_668 = 0.0;
    dStack_660 = 0.0;
    local_638._0_16_ = ZEXT816(0);
    local_680 = 0;
    uVar33 = (ulong)uVar36;
    local_624 = 0;
    local_618 = 0;
    local_600[1] = uVar36;
    do {
      while( true ) {
        iVar11 = (int)uVar33;
        dVar61 = ((double)(int)uVar29 * dVar42) / (double)iVar11;
        dVar45 = (double)_sin(dVar61);
        dVar45 = (dVar45 + dVar45) * dVar45;
        dVar46 = (double)_sin(dVar61 + dVar61);
        dVar61 = DAT_100701ae0;
        uVar9 = local_600[local_680 + 2];
        lVar17 = (long)(int)uVar9;
        local_680 = local_680 + 1;
        if (lVar17 == 4) break;
        uVar22 = CONCAT44(_UNK_100700b34,_DAT_100700b30);
        if (uVar9 == 2) {
          uVar9 = (int)(uVar33 >> 0x1f) + iVar11 >> 1;
          uVar33 = (ulong)uVar9;
          iVar11 = 1;
          do {
            do {
              lVar14 = (long)(int)(iVar11 + uVar9);
              lVar17 = (long)iVar11;
              uVar2 = *(undefined8 *)(param_1 + -4 + lVar14 * 4);
              fVar60 = (float)uVar2;
              *(float *)(param_1 + -4 + lVar14 * 4) = *(float *)(param_1 + -4 + lVar17 * 4) - fVar60
              ;
              fVar80 = (float)((ulong)uVar2 >> 0x20);
              *(float *)(param_1 + lVar14 * 4) = *(float *)(param_1 + lVar17 * 4) - fVar80;
              uVar2 = *(undefined8 *)(param_1 + -4 + lVar17 * 4);
              *(ulong *)(param_1 + -4 + lVar17 * 4) =
                   CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar80,(float)uVar2 + fVar60);
              iVar11 = iVar11 + uVar9 + uVar9;
              iVar12 = iVar11 - iVar7;
            } while (iVar12 == 0 || iVar11 < iVar7);
            iVar11 = iVar12;
          } while (iVar12 <= (int)uVar29);
          if ((int)uVar9 < iVar12) goto LAB_100113249;
          iVar11 = uVar9 + 2;
          dVar47 = DAT_100700458 - dVar45;
          dVar69 = dVar46;
          dVar62 = dVar47;
          do {
            do {
              do {
                do {
                  lVar17 = (long)iVar12;
                  lVar14 = (long)(int)(iVar12 + uVar9);
                  fVar60 = *(float *)(param_1 + -4 + lVar14 * 4);
                  fVar80 = *(float *)(param_1 + -4 + lVar17 * 4);
                  fVar81 = *(float *)(param_1 + lVar17 * 4);
                  fVar67 = *(float *)(param_1 + lVar14 * 4);
                  *(float *)(param_1 + -4 + lVar17 * 4) = fVar80 + fVar60;
                  dVar48 = (double)(fVar80 - fVar60);
                  dVar77 = (double)(fVar81 - fVar67);
                  *(float *)(param_1 + lVar17 * 4) = fVar81 + *(float *)(param_1 + lVar14 * 4);
                  *(ulong *)(param_1 + -4 + lVar14 * 4) =
                       CONCAT44((float)(dVar48 * dVar69 + dVar77 * dVar62),
                                (float)(dVar48 * dVar62 + dVar77 * (double)((ulong)dVar69 ^ uVar22))
                               );
                  iVar12 = iVar12 + uVar9 + uVar9;
                } while (iVar12 < (int)local_600[1]);
                iVar15 = iVar12 + -uVar36;
                dVar62 = (double)((ulong)dVar62 ^ uVar22);
                iVar12 = iVar11 - iVar15;
              } while (iVar15 < iVar12);
              fVar60 = (float)(dVar62 - (dVar45 * dVar62 + dVar46 * dVar69));
              dVar69 = dVar69 * (double)((ulong)dVar45 ^ uVar22) + dVar46 * dVar62 + dVar69;
              dVar62 = dVar61 - (dVar69 * dVar69 + (double)(fVar60 * fVar60));
              iVar12 = iVar12 + uVar29;
              dVar69 = dVar69 * dVar62;
              dVar62 = dVar62 * (double)fVar60;
            } while (iVar12 < iVar15);
            iVar11 = iVar11 + iVar35;
            iVar12 = (int)(iVar11 - uVar9) / 2 + uVar29;
            dVar69 = dVar46;
            dVar62 = dVar47;
          } while (iVar12 <= iVar35);
        }
        else {
          uVar33 = (long)iVar11 / (long)(int)uVar9 & 0xffffffff;
          uVar75 = SUB84(DAT_100701ae0,0);
          uVar76 = (undefined4)((ulong)DAT_100701ae0 >> 0x20);
          iVar12 = (int)((long)iVar11 / (long)(int)uVar9);
          if (uVar9 == 3) {
            iVar15 = 1;
            do {
              do {
                lVar14 = (long)(iVar15 + iVar12);
                iVar13 = iVar15 + iVar12 + iVar12;
                lVar17 = (long)iVar13;
                uVar2 = *(undefined8 *)(param_1 + -4 + (long)iVar15 * 4);
                uVar3 = *(undefined8 *)(param_1 + -4 + lVar14 * 4);
                uVar4 = *(undefined8 *)(param_1 + -4 + lVar17 * 4);
                fVar60 = (float)uVar4 + (float)uVar3;
                fVar81 = (float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar3 >> 0x20);
                fVar80 = (float)uVar2;
                fVar67 = (float)((ulong)uVar2 >> 0x20);
                *(ulong *)(param_1 + -4 + (long)iVar15 * 4) =
                     CONCAT44(fVar67 + fVar81,fVar80 + fVar60);
                fVar80 = fVar60 * DAT_100701ce0 + fVar80;
                fVar67 = fVar81 * DAT_100701ce0 + fVar67;
                fVar60 = (float)((double)(*(float *)(param_1 + -4 + lVar14 * 4) -
                                         *(float *)(param_1 + -4 + lVar17 * 4)) * dVar53);
                fVar81 = (float)((double)(*(float *)(param_1 + lVar14 * 4) -
                                         *(float *)(param_1 + lVar17 * 4)) * dVar53);
                *(float *)(param_1 + -4 + lVar14 * 4) = fVar80 - fVar81;
                *(float *)(param_1 + -4 + lVar17 * 4) = fVar80 + fVar81;
                *(float *)(param_1 + lVar14 * 4) = fVar67 + fVar60;
                *(float *)(param_1 + lVar17 * 4) = fVar67 - fVar60;
                iVar13 = iVar13 + iVar12;
                iVar15 = iVar13;
              } while (iVar13 < iVar7);
              iVar15 = iVar13 - iVar7;
            } while (iVar13 - iVar7 <= iVar12);
          }
          else if (uVar9 == 5) {
            iVar15 = 1;
            do {
              do {
                iVar13 = iVar15 + iVar12 + iVar12;
                uVar9 = iVar13 + iVar12;
                local_618 = (ulong)uVar9;
                lVar24 = (long)(iVar15 + iVar12);
                lVar17 = (long)(int)(uVar9 + iVar12);
                lVar18 = (long)iVar13;
                lVar14 = (long)(int)uVar9;
                uVar2 = *(undefined8 *)(param_1 + -4 + lVar24 * 4);
                uVar3 = *(undefined8 *)(param_1 + -4 + lVar17 * 4);
                fVar51 = (float)uVar2;
                fVar60 = (float)uVar3;
                fVar81 = (float)((ulong)uVar3 >> 0x20);
                fVar57 = (float)((ulong)uVar2 >> 0x20);
                fVar52 = fVar51 + fVar60;
                fVar56 = fVar57 + fVar81;
                uVar2 = *(undefined8 *)(param_1 + -4 + lVar18 * 4);
                fVar71 = (float)uVar2;
                fVar73 = (float)((ulong)uVar2 >> 0x20);
                uVar2 = *(undefined8 *)(param_1 + -4 + lVar14 * 4);
                fVar80 = (float)uVar2;
                fVar67 = (float)((ulong)uVar2 >> 0x20);
                fVar72 = fVar71 + fVar80;
                fVar74 = fVar73 + fVar67;
                uVar2 = *(undefined8 *)(param_1 + -4 + (long)iVar15 * 4);
                fVar58 = (float)uVar2;
                fVar59 = (float)((ulong)uVar2 >> 0x20);
                dVar48 = (double)fVar52;
                *(ulong *)(param_1 + -4 + (long)iVar15 * 4) =
                     CONCAT44(fVar56 + fVar59 + fVar74,fVar52 + fVar58 + fVar72);
                dVar62 = (double)fVar72;
                dVar77 = (double)fVar58;
                fVar52 = (float)(dVar48 * DAT_100701ae8 + dVar6 * dVar62 + dVar77);
                dVar54 = (double)fVar56;
                dVar69 = (double)fVar74;
                dVar79 = dVar54 * DAT_100701ae8;
                dVar63 = (double)(fVar51 - fVar60);
                dVar78 = (double)(fVar71 - fVar80);
                dVar68 = (double)(fVar57 - fVar81);
                dVar47 = (double)(fVar73 - fVar67);
                fVar80 = (float)(dVar68 * local_6d8 + dVar43 * dVar47);
                *(float *)(param_1 + -4 + lVar24 * 4) = fVar52 - fVar80;
                dVar61 = (double)fVar59;
                fVar60 = (float)(dVar79 + dVar6 * dVar69 + dVar61);
                fVar81 = (float)(dVar63 * local_6d8 + dVar43 * dVar78);
                *(float *)(param_1 + -4 + lVar17 * 4) = fVar52 + fVar80;
                *(float *)(param_1 + lVar24 * 4) = fVar81 + fVar60;
                *(float *)(param_1 + lVar17 * 4) = fVar60 - fVar81;
                dVar69 = dVar69 * DAT_100701ae8;
                fVar60 = (float)(dVar48 * dVar6 + dVar62 * DAT_100701ae8 + dVar77);
                fVar67 = (float)(dVar68 * dVar43 + dVar47 * dVar44);
                *(float *)(param_1 + -4 + lVar18 * 4) = fVar60 - fVar67;
                fVar80 = (float)(dVar54 * dVar6 + dVar69 + dVar61);
                fVar81 = (float)(dVar63 * dVar43 + dVar78 * dVar44);
                *(float *)(param_1 + -4 + lVar14 * 4) = fVar60 + fVar67;
                *(float *)(param_1 + lVar18 * 4) = fVar81 + fVar80;
                *(float *)(param_1 + lVar14 * 4) = fVar80 - fVar81;
                iVar13 = uVar9 + iVar12 + iVar12;
                iVar15 = iVar13;
              } while (iVar13 < iVar7);
              iVar15 = iVar13 - iVar7;
            } while (iVar13 - iVar7 <= iVar12);
            uVar22 = CONCAT44(_UNK_100700b34,_DAT_100700b30);
            uVar75 = SUB84(DAT_100701ae0,0);
            uVar76 = (undefined4)((ulong)DAT_100701ae0 >> 0x20);
          }
          else {
            if (uVar9 == local_624) {
              lVar17 = (long)(int)local_624;
            }
            else {
              auVar65 = ___sincos_stret((dVar42 + dVar42) / (double)(int)uVar9);
              if (0x17 < (int)uVar9) goto LAB_100111fd7;
              adStack_1c8[lVar17 + 1] = 1.0;
              adStack_288[lVar17 + 1] = 0.0;
              uVar22 = CONCAT44(_UNK_100700b34,_DAT_100700b30);
              uVar75 = SUB84(DAT_100701ae0,0);
              uVar76 = (undefined4)((ulong)DAT_100701ae0 >> 0x20);
              lVar14 = 2;
              lVar18 = lVar17;
              do {
                dVar61 = adStack_288[lVar18 + 1];
                dVar69 = adStack_1c8[lVar18 + 1] * auVar65._8_8_ + auVar65._0_8_ * dVar61;
                adStack_1c8[lVar14] = dVar69;
                dVar61 = adStack_1c8[lVar18 + 1] * auVar65._0_8_ - dVar61 * auVar65._8_8_;
                adStack_288[lVar14] = dVar61;
                adStack_1c8[lVar18] = dVar69;
                adStack_288[lVar18] = (double)((ulong)dVar61 ^ uVar22);
                lVar18 = lVar18 + -1;
                bVar5 = lVar14 < lVar18;
                lVar14 = lVar14 + 1;
                local_624 = uVar9;
              } while (bVar5);
            }
            iVar15 = 1;
            do {
              iVar13 = iVar15 + iVar12;
              iVar26 = (iVar11 - iVar12) + iVar15;
              uVar41 = (long)iVar15;
              do {
                lVar14 = (long)iVar13;
                uVar1 = uVar41 + (long)iVar11;
                uVar2 = *(undefined8 *)(param_1 + -4 + uVar41 * 4);
                fVar81 = (float)uVar2;
                fVar67 = (float)((ulong)uVar2 >> 0x20);
                local_98[0] = 0;
                local_f8 = 0;
                uVar21 = 0x58;
                uVar40 = 0xffffffffffffffff;
                fVar60 = fVar81;
                fVar80 = fVar67;
                iVar15 = iVar26;
                do {
                  uVar39 = uVar40;
                  lVar18 = (long)iVar15;
                  uVar2 = *(undefined8 *)(param_1 + -4 + lVar14 * 4);
                  uVar3 = *(undefined8 *)(param_1 + -4 + lVar18 * 4);
                  fVar51 = (float)uVar2;
                  fVar52 = (float)uVar3;
                  auVar64._0_4_ = fVar51 + fVar52;
                  fVar56 = (float)((ulong)uVar3 >> 0x20);
                  fVar57 = (float)((ulong)uVar2 >> 0x20);
                  auVar64._4_4_ = fVar57 + fVar56;
                  auVar64._8_8_ = 0;
                  local_90[uVar39] = auVar64._0_4_;
                  uVar2 = extractps(auVar64,1);
                  *(undefined8 *)(local_f0 + uVar39 * 4) = uVar2;
                  auVar49._0_4_ = fVar51 - fVar52;
                  auVar49._4_4_ = fVar57 - fVar56;
                  auVar49._8_8_ = 0;
                  uVar2 = extractps(auVar49,1);
                  *(undefined8 *)(local_f0 + uVar39 * 4 + 4) = uVar2;
                  fVar60 = fVar60 + auVar64._0_4_;
                  fVar80 = fVar80 + auVar64._4_4_;
                  local_90[uVar39 + 1] = auVar49._0_4_;
                  lVar14 = lVar14 + iVar12;
                  uVar21 = uVar21 - 8;
                  uVar40 = uVar39 + 2;
                  iVar15 = iVar15 - iVar12;
                } while (lVar14 < lVar18);
                if (uVar40 < 0x16) {
                  uVar22 = uVar21 & 0x3fffffff8 | 4;
                  ___bzero(local_90 + uVar39 + 1,uVar22);
                  ___bzero(local_f0 + uVar40 * 4 + -4,uVar22);
                  uVar75 = SUB84(DAT_100701ae0,0);
                  uVar76 = (undefined4)((ulong)DAT_100701ae0 >> 0x20);
                  uVar22 = CONCAT44(_UNK_100700b34,_DAT_100700b30);
                }
                *(ulong *)(param_1 + -4 + uVar41 * 4) = CONCAT44(fVar80,fVar60);
                iVar15 = 1;
                uVar40 = uVar1;
                do {
                  fVar56 = 0.0;
                  fVar57 = 0.0;
                  fVar58 = 0.0;
                  fVar59 = 0.0;
                  lVar14 = 1;
                  iVar16 = iVar15;
                  fVar60 = fVar81;
                  fVar80 = fVar67;
                  fVar51 = 0.0;
                  fVar52 = 0.0;
                  do {
                    auVar65 = insertps(ZEXT416(local_98[lVar14]),(&local_f8)[lVar14],0x10);
                    auVar70 = insertps(ZEXT416(*(uint *)(local_f0 + lVar14 * 4 + -4)),
                                       local_90[lVar14 + -1],0x10);
                    lVar14 = lVar14 + 2;
                    fVar60 = fVar60 + (float)(adStack_1c8[(long)iVar16 + 1] * (double)auVar65._0_4_)
                    ;
                    fVar80 = fVar80 + (float)(adStack_1c8[(long)iVar16 + 1] * (double)auVar65._4_4_)
                    ;
                    fVar51 = fVar51 + 0.0;
                    fVar52 = fVar52 + 0.0;
                    uVar9 = 0;
                    if ((int)local_624 < iVar16 + iVar15) {
                      uVar9 = local_624;
                    }
                    fVar56 = fVar56 + (float)(adStack_288[(long)iVar16 + 1] * (double)auVar70._0_4_)
                    ;
                    fVar57 = fVar57 + (float)(adStack_288[(long)iVar16 + 1] * (double)auVar70._4_4_)
                    ;
                    fVar58 = fVar58 + 0.0;
                    fVar59 = fVar59 + 0.0;
                    iVar16 = (iVar16 + iVar15) - uVar9;
                  } while (lVar14 < lVar17);
                  uVar41 = uVar41 + (long)iVar12;
                  uVar9 = (int)uVar40 - iVar12;
                  uVar40 = (ulong)uVar9;
                  iVar16 = local_624 - iVar15;
                  auVar66._0_8_ = CONCAT44(fVar80 - fVar57,fVar60 - fVar56);
                  auVar66._8_4_ = fVar51 - fVar58;
                  auVar66._12_4_ = fVar52 - fVar59;
                  auVar50._0_4_ = fVar60 + fVar56;
                  auVar50._4_4_ = fVar80 + fVar57;
                  auVar50._8_4_ = fVar51 + fVar58;
                  auVar50._12_4_ = fVar52 + fVar59;
                  auVar55._8_4_ = auVar66._8_4_;
                  auVar55._0_8_ = auVar66._0_8_;
                  auVar55._12_4_ = auVar66._12_4_;
                  auVar65 = blendps(auVar55,auVar50,2);
                  *(long *)(param_1 + -4 + uVar41 * 4) = auVar65._0_8_;
                  auVar65 = blendps(auVar50,auVar66,2);
                  *(long *)(param_1 + -4 + (long)(int)uVar9 * 4) = auVar65._0_8_;
                  iVar15 = iVar15 + 1;
                } while (iVar15 < iVar16);
                iVar13 = iVar13 + iVar11;
                iVar26 = iVar26 + iVar11;
                uVar41 = uVar1;
              } while ((long)uVar1 <= (long)iVar7);
              iVar15 = (int)uVar1 - iVar7;
            } while (iVar15 <= iVar12);
          }
          if (local_680 == uVar30) goto LAB_100113249;
          dVar62 = DAT_100700458 - dVar45;
          dVar69 = dVar62;
          dVar61 = dVar46;
          iVar15 = iVar37;
          do {
            iVar13 = iVar15 + iVar12;
            dVar47 = dVar69;
            dVar48 = dVar61;
            do {
              lVar17 = (long)iVar13;
              iVar15 = ((iVar10 + iVar12) - iVar11) + iVar13;
              iVar26 = ((3 - param_2) * uVar29 - iVar11) + iVar13;
              iVar13 = -uVar36 + iVar12 + iVar13;
              do {
                dVar77 = (double)*(float *)(param_1 + -4 + lVar17 * 4);
                dVar54 = (double)*(float *)(param_1 + lVar17 * 4);
                *(ulong *)(param_1 + -4 + lVar17 * 4) =
                     CONCAT44((float)(dVar77 * dVar48 + dVar54 * dVar47),
                              (float)(dVar77 * dVar47 + dVar54 * (double)((ulong)dVar48 ^ uVar22)));
                lVar17 = lVar17 + iVar11;
                iVar15 = iVar15 + iVar11;
                iVar26 = iVar26 + iVar11;
                iVar13 = iVar13 + iVar11;
              } while (lVar17 <= (int)uVar36);
              dVar77 = dVar47 * dVar61;
              dVar47 = dVar47 * dVar69 +
                       (double)CONCAT44((uint)((ulong)(double)(float)(dVar48 * dVar61) >> 0x20) ^
                                        (uint)(uVar22 >> 0x20),
                                        SUB84((double)(float)(dVar48 * dVar61),0) ^ (uint)uVar22);
              dVar48 = dVar77 + dVar69 * dVar48;
            } while (iVar13 <= iVar11);
            dVar77 = dVar69 - (dVar69 * dVar45 + dVar61 * dVar46);
            dVar61 = dVar69 * dVar46 + dVar61 * (double)((ulong)dVar45 ^ uVar22) + dVar61;
            dVar47 = (double)CONCAT44(uVar76,uVar75) - (dVar77 * dVar77 + dVar61 * dVar61);
            dVar77 = dVar47 * dVar77;
            dVar69 = dVar77;
            dVar61 = dVar47 * dVar61;
          } while ((iVar15 <= iVar12) ||
                  (dVar69 = dVar62, dVar61 = dVar46, iVar15 = iVar26, iVar26 <= iVar35));
          local_638._8_4_ = SUB84(dVar48,0);
          local_638._0_8_ = dVar77;
          local_638._12_4_ = (int)((ulong)dVar48 >> 0x20);
        }
      }
      iVar12 = iVar11 + 3;
      if (-1 < iVar11) {
        iVar12 = iVar11;
      }
      uVar9 = iVar12 >> 2;
      uVar33 = (ulong)uVar9;
      local_658 = SUB84(dVar45,0);
      uStack_654 = (uint)((ulong)dVar45 >> 0x20);
      dVar69 = 0.0;
      uStack_6a0 = (double)CONCAT44(uStack_654 ^ _UNK_100700b34,local_658 ^ _DAT_100700b30);
      dVar61 = DAT_100700458;
      iVar11 = 1;
      do {
        do {
          iVar12 = iVar11;
          uVar22 = CONCAT44(_UNK_100700b34,_DAT_100700b30);
          dVar62 = (double)(local_638._8_8_ ^ uVar22);
          auVar65._8_4_ = (int)local_638._8_8_;
          auVar65._0_8_ = local_638._0_8_;
          auVar65._12_4_ = (int)((ulong)local_638._8_8_ >> 0x20);
          do {
            lVar17 = (long)(int)(uVar9 * 2 + iVar12);
            lVar18 = (long)(int)(iVar12 + uVar9);
            lVar14 = (long)(int)(uVar9 * 3 + iVar12);
            uVar2 = *(undefined8 *)(param_1 + -4 + (long)iVar12 * 4);
            fVar60 = (float)uVar2;
            fVar81 = (float)((ulong)uVar2 >> 0x20);
            uVar2 = *(undefined8 *)(param_1 + -4 + lVar17 * 4);
            fVar58 = (float)uVar2;
            fVar59 = (float)((ulong)uVar2 >> 0x20);
            uVar2 = *(undefined8 *)(param_1 + -4 + lVar18 * 4);
            fVar51 = (float)uVar2;
            fVar52 = (float)((ulong)uVar2 >> 0x20);
            uVar2 = *(undefined8 *)(param_1 + -4 + lVar14 * 4);
            fVar71 = (float)uVar2;
            fVar56 = fVar51 + fVar71;
            fVar72 = (float)((ulong)uVar2 >> 0x20);
            fVar57 = fVar52 + fVar72;
            fVar80 = fVar60 + fVar58;
            fVar67 = fVar81 + fVar59;
            fVar52 = fVar52 - fVar72;
            fVar51 = fVar51 - fVar71;
            fVar81 = fVar81 - fVar59;
            fVar60 = fVar60 - fVar58;
            *(ulong *)(param_1 + -4 + (long)iVar12 * 4) = CONCAT44(fVar67 + fVar57,fVar80 + fVar56);
            if (param_3 < 0) {
              fVar58 = fVar52 + fVar60;
              fVar59 = fVar51 + fVar81;
              fVar51 = fVar81 - fVar51;
              fVar52 = fVar60 - fVar52;
            }
            else {
              fVar58 = fVar60 - fVar52;
              fVar59 = fVar81 - fVar51;
              fVar51 = fVar51 + fVar81;
              fVar52 = fVar52 + fVar60;
            }
            fVar80 = fVar80 - fVar56;
            fVar67 = fVar67 - fVar57;
            if ((dVar69 != DAT_100701af0) || (NAN(dVar69) || NAN(DAT_100701af0))) {
              dVar48 = (double)fVar58;
              dVar77 = (double)fVar52;
              dVar47 = (double)fVar80;
              local_638._8_8_ = auVar65._8_8_;
              fVar58 = (float)(dVar48 * dVar61 + (double)((ulong)dVar69 ^ uVar22) * (double)fVar51);
              fVar52 = (float)(dVar77 * local_668 +
                              (double)((ulong)dStack_660 ^ uVar22) * (double)fVar59);
              fVar51 = (float)(dVar48 * dVar69 + (double)fVar51 * dVar61);
              fVar80 = (float)(dVar47 * (double)local_638._0_8_ + (double)fVar67 * dVar62);
              fVar67 = (float)(dVar47 * (double)local_638._8_8_ +
                              (double)fVar67 * (double)local_638._0_8_);
              fVar59 = (float)(dVar77 * dStack_660 + (double)fVar59 * local_668);
            }
            iVar12 = iVar12 + uVar9 + uVar9 * 3;
            *(float *)(param_1 + -4 + lVar18 * 4) = fVar58;
            *(float *)(param_1 + -4 + lVar17 * 4) = fVar80;
            *(float *)(param_1 + -4 + lVar14 * 4) = fVar52;
            *(float *)(param_1 + lVar18 * 4) = fVar51;
            auVar70._4_4_ = fVar67;
            auVar70._0_4_ = fVar80;
            auVar70._8_8_ = 0;
            uVar2 = extractps(auVar70,1);
            *(undefined8 *)(param_1 + lVar17 * 4) = uVar2;
            *(float *)(param_1 + lVar14 * 4) = fVar59;
          } while (iVar12 <= (int)local_600[1]);
          dVar47 = dVar61 - (dVar61 * dVar45 + dVar69 * dVar46);
          dVar69 = dVar61 * dVar46 + dVar69 * uStack_6a0 + dVar69;
          dVar62 = DAT_100701ae0 - (dVar47 * dVar47 + dVar69 * dVar69);
          dVar61 = dVar62 * dVar47;
          dVar69 = dVar62 * dVar69;
          local_638._8_8_ = (dVar61 + dVar61) * dVar69;
          local_638._0_8_ = dVar61 * dVar61 - dVar69 * dVar69;
          local_668 = (double)local_638._0_8_ * dVar61 +
                      dVar69 * (double)(local_638._8_8_ ^ CONCAT44(_UNK_100700b34,_DAT_100700b30));
          dStack_660 = (double)local_638._0_8_ * dVar69 + dVar61 * (double)local_638._8_8_;
          uVar22 = (ulong)local_638._8_8_ >> 0x20;
          iVar11 = iVar10 + iVar12;
        } while (iVar10 + iVar12 <= (int)uVar9);
        dVar69 = 0.0;
        dVar61 = DAT_100700458;
        iVar11 = ((2 - param_2) * uVar29 - uVar9) + iVar12;
      } while ((int)((iVar10 - uVar9) + iVar12) < 1);
      local_638._8_4_ = (int)local_638._8_8_;
      local_638._12_4_ = (int)uVar22;
      local_618 = (ulong)(iVar12 - uVar9);
    } while (uVar9 != uVar29);
    local_618 = (ulong)(iVar12 - uVar9);
LAB_100113249:
    uVar9 = local_600[1];
    auStack_5d0[2] = local_600[1];
    if (iVar20 == 0) {
      uVar36 = 1;
      uVar23 = uVar29;
    }
    else {
      lVar14 = (long)(int)((uint)(iVar20 * 2 < iVar25) + iVar20 * 2);
      auStack_5d0[lVar14 + 2] = uVar29;
      lVar17 = 2;
      do {
        uVar23 = local_600[lVar17];
        auStack_5d0[lVar17 + 1] = (int)auStack_5d0[lVar17] / (int)uVar23;
        uVar23 = uVar23 * auStack_5d0[lVar14 + 2];
        auStack_5d0[lVar14 + 1] = uVar23;
        lVar14 = lVar14 + -1;
        bVar5 = lVar17 < lVar14;
        lVar17 = lVar17 + 1;
      } while (bVar5);
      uVar30 = (ulong)(auStack_5d0[3] + 1);
LAB_1001132d7:
      uVar30 = (ulong)(int)uVar30;
      puVar34 = (undefined4 *)(param_1 + (long)iVar37 * 4);
      do {
        uVar75 = puVar34[-1];
        puVar34[-1] = *(undefined4 *)(param_1 + -4 + uVar30 * 4);
        *(undefined4 *)(param_1 + -4 + uVar30 * 4) = uVar75;
        uVar75 = *puVar34;
        *puVar34 = *(undefined4 *)(param_1 + uVar30 * 4);
        *(undefined4 *)(param_1 + uVar30 * 4) = uVar75;
        uVar30 = uVar30 + (long)(int)auStack_5d0[3];
        iVar37 = iVar37 + uVar29;
        puVar34 = puVar34 + (int)uVar29;
        puVar8 = auStack_5d0 + 4;
        uVar28 = auStack_5d0[3];
        uVar32 = auStack_5d0[2];
      } while ((long)uVar30 < (long)(int)uVar36);
      do {
        do {
          uVar31 = uVar28;
          uVar28 = *puVar8;
          uVar27 = ((int)uVar30 - uVar32) + uVar28;
          uVar30 = (ulong)uVar27;
          puVar8 = puVar8 + 1;
          uVar32 = uVar31;
        } while ((int)uVar31 < (int)uVar27);
        do {
          if (iVar37 < (int)uVar30) goto LAB_1001132d7;
          iVar37 = iVar37 + uVar29;
          uVar28 = (int)uVar30 + auStack_5d0[3];
          uVar30 = (ulong)uVar28;
        } while ((int)uVar28 < (int)local_600[1]);
        puVar8 = auStack_5d0 + 4;
        uVar28 = auStack_5d0[3];
        uVar32 = auStack_5d0[2];
      } while (iVar37 < (int)local_600[1]);
      uVar36 = iVar20 * 2 | 1;
      local_618 = (ulong)uVar23;
    }
    local_668 = 4.94065645841247e-324;
    if (iVar25 <= (int)uVar36) goto LAB_100113684;
    lVar17 = (long)iVar20;
    uVar36 = auStack_5d0[lVar17 + 2];
    local_600[(long)(iVar25 - iVar20) + 2] = 1;
    iVar7 = iVar25 + iVar20 * -2;
    puVar8 = local_600 + (((long)iVar25 + 1) - lVar17);
    uVar28 = 1;
    do {
      uVar28 = uVar28 * *puVar8;
      *puVar8 = uVar28;
      puVar8 = puVar8 + -1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar28 = local_600[lVar17 + 2];
    if ((int)uVar28 < 0xd3) {
      if (1 < (int)uVar28) {
        uVar32 = local_600[(long)(iVar20 + 1) + 2];
        uVar30 = 0;
        uVar31 = 0;
        do {
          uVar31 = uVar31 + uVar32;
          puVar8 = local_600 + (long)(iVar20 + 2) + 2;
          uVar27 = uVar32;
          uVar38 = uVar28;
          if ((int)uVar28 <= (int)uVar31) {
            do {
              uVar19 = uVar27;
              uVar27 = *puVar8;
              uVar31 = (uVar31 - uVar38) + uVar27;
              puVar8 = puVar8 + 1;
              uVar38 = uVar19;
            } while ((int)uVar19 <= (int)uVar31);
          }
          auStack_5d0[uVar30 + 2] = uVar31;
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar28 - 1);
      }
      uVar30 = 0;
      do {
        while( true ) {
          uVar30 = (long)(int)uVar30;
          do {
            uVar33 = uVar30;
            uVar32 = auStack_5d0[uVar33 + 2];
            uVar30 = uVar33 + 1;
          } while ((int)uVar32 < 0);
          uVar31 = (uint)uVar30;
          if (uVar31 == uVar32) break;
          do {
            lVar17 = (long)(int)uVar32;
            uVar32 = auStack_5d0[lVar17 + 1];
            auStack_5d0[lVar17 + 1] = -uVar32;
          } while (uVar32 != uVar31);
          local_618 = uVar30 & 0xffffffff;
        }
        auStack_5d0[uVar33 + 2] = -uVar31;
      } while (uVar32 != uVar28 - 1);
      uVar9 = uVar9 - uVar36;
      if (-1 < (int)uVar9) {
        local_600[0] = ((local_600[0] - 1) * uVar29 - uVar36) + 1;
        do {
          local_600[1] = uVar9;
          uVar30 = (ulong)((int)local_618 + 1);
          do {
            uVar30 = (ulong)(int)uVar30;
            do {
              uVar28 = auStack_5d0[uVar30];
              uVar30 = uVar30 - 1;
            } while ((int)uVar28 < 0);
            uVar32 = uVar23;
            do {
              uVar31 = uVar29 * 0x17;
              if ((int)uVar32 < (int)(uVar29 * 0x17)) {
                uVar31 = uVar32;
              }
              iVar7 = uVar28 * uVar23 + local_600[0] + uVar32;
              uVar32 = uVar32 - uVar31;
              iVar25 = (uVar9 - uVar29) + 1 + uVar28 * uVar23 + uVar32;
              iVar20 = -uVar31;
              iVar35 = 0;
              lVar17 = 0;
              do {
                lVar14 = (long)(iVar7 + iVar35);
                *(undefined4 *)((long)local_98 + lVar17) =
                     *(undefined4 *)(param_1 + -4 + lVar14 * 4);
                *(undefined4 *)((long)&local_f8 + lVar17) = *(undefined4 *)(param_1 + lVar14 * 4);
                lVar17 = lVar17 + 4;
                iVar35 = iVar35 - uVar29;
                uVar27 = uVar28;
              } while (iVar20 != iVar35);
              do {
                iVar35 = iVar25 + uVar31;
                uVar38 = auStack_5d0[(long)(int)uVar27 + 1];
                iVar7 = iVar35 - (uVar27 + uVar38) * uVar23;
                do {
                  *(undefined4 *)(param_1 + -4 + (long)iVar35 * 4) =
                       *(undefined4 *)(param_1 + -4 + (long)iVar7 * 4);
                  *(undefined4 *)(param_1 + (long)iVar35 * 4) =
                       *(undefined4 *)(param_1 + (long)iVar7 * 4);
                  iVar35 = iVar35 - uVar29;
                  iVar7 = iVar7 - uVar29;
                } while (iVar35 != iVar25);
                uVar27 = -uVar38;
                iVar25 = iVar7;
              } while (uVar27 != (uint)uVar30);
              iVar7 = iVar7 + uVar31;
              lVar17 = 0;
              do {
                *(undefined4 *)(param_1 + -4 + (long)iVar7 * 4) =
                     *(undefined4 *)((long)local_98 + lVar17);
                *(undefined4 *)(param_1 + (long)iVar7 * 4) =
                     *(undefined4 *)((long)&local_f8 + lVar17);
                iVar7 = iVar7 - uVar29;
                lVar17 = lVar17 + 4;
                iVar20 = iVar20 + uVar29;
              } while (iVar20 != 0);
            } while (uVar32 != 0);
          } while (uVar30 != 1);
          local_600[0] = local_600[0] - uVar36;
          uVar9 = uVar9 - uVar36;
        } while (-1 < (int)uVar9);
      }
      goto LAB_100113684;
    }
  }
LAB_100111fd7:
  local_668 = 0.0;
LAB_100113684:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_668;
}

