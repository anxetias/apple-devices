// name: FUN_10049118a
// address: 10049118a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10049118a(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4,uint param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  void *pvVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  bool bVar28;
  int iVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 in_XMM1 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar34 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar37;
  undefined4 local_90;
  undefined4 local_7c;
  undefined4 uStack_78;
  ulong local_38;
  
  uVar24 = (uint)param_2;
  uVar16 = (uint)param_4;
  local_90 = 0;
  if (param_5 != uVar16 && 1 < uVar24) {
    uVar20 = (ulong)param_5;
    uVar25 = param_2 & 0xffffffff;
    if (param_5 == 0) {
      iVar23 = 0;
      puVar26 = param_1;
      uVar27 = uVar25;
      do {
        uVar15 = FUN_1001ebdc3();
        uVar7 = *puVar26;
        uVar8 = puVar26[1];
        uVar9 = *(undefined8 *)((long)puVar26 + 0x14);
        uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)puVar26 + 0xc) >> 0x20);
        local_7c = (undefined4)((ulong)uVar8 >> 0x20);
        lVar21 = (ulong)(uint)((int)(long)((double)(uVar27 & 0xffffffff) *
                                          (double)(uVar15 & 0x7fffffff) * DAT_10070c180) + iVar23) *
                 0x1c;
        uVar10 = *(undefined8 *)((long)param_1 + lVar21);
        uVar11 = ((undefined8 *)((long)param_1 + lVar21))[1];
        in_XMM1 = *(undefined1 (*) [16])((long)param_1 + lVar21 + 0xc);
        *(undefined1 (*) [16])((long)puVar26 + 0xc) = in_XMM1;
        *puVar26 = uVar10;
        puVar26[1] = uVar11;
        puVar2 = (undefined8 *)((long)param_1 + lVar21 + 0xc);
        *puVar2 = CONCAT44(uStack_78,local_7c);
        puVar2[1] = uVar9;
        *(undefined8 *)((long)param_1 + lVar21) = uVar7;
        ((undefined8 *)((long)param_1 + lVar21))[1] = uVar8;
        puVar26 = (undefined8 *)((long)puVar26 + 0x1c);
        iVar23 = iVar23 + 1;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    dVar3 = *(double *)(param_3 + uVar20 * 8);
    puVar17 = _malloc(uVar25 * 4);
    if (puVar17 == (undefined4 *)0x0) {
      local_90 = 0xffffff94;
    }
    else {
      if (dVar3 <= DAT_100700b00) {
        puVar18 = (undefined4 *)((long)param_1 + uVar20 * 4 + 8);
        uVar20 = 0;
        do {
          puVar17[uVar20] = *puVar18;
          uVar20 = uVar20 + 1;
          puVar18 = puVar18 + 7;
        } while (uVar25 != uVar20);
        uVar20 = 0;
        uVar15 = 0;
        do {
          if (uVar15 < (uint)puVar17[uVar20]) {
            uVar15 = puVar17[uVar20];
          }
          uVar20 = uVar20 + 1;
        } while (uVar25 != uVar20);
        uVar15 = uVar15 + 1;
        uVar20 = (ulong)uVar15;
        pvVar19 = _malloc(uVar20 * 4);
        auVar14 = _DAT_100700430;
        local_90 = 0xffffff94;
        if (pvVar19 != (void *)0x0) {
          uVar27 = 1;
          if (1 < uVar15) {
            uVar27 = (ulong)uVar15;
          }
          lVar21 = uVar27 - 1;
          auVar29._8_4_ = (int)lVar21;
          auVar29._0_8_ = lVar21;
          auVar29._12_4_ = (int)((ulong)lVar21 >> 0x20);
          auVar33 = pmovsxbq(in_XMM1,_DAT_10074ae90);
          auVar34 = pmovsxbq(in_XMM2,_DAT_10074ae92);
          uVar22 = 0;
          auVar29 = auVar29 ^ _DAT_100700430;
          auVar35 = pmovsxbq(in_XMM5,_DAT_10074ae94);
          do {
            auVar36 = auVar34 ^ auVar14;
            iVar30 = auVar29._4_4_;
            iVar23 = (int)uVar22;
            if ((bool)(~(auVar36._4_4_ == iVar30 && auVar29._0_4_ < auVar36._0_4_ ||
                        iVar30 < auVar36._4_4_) & 1)) {
              *(int *)((long)pvVar19 + uVar22 * 4) = iVar23;
            }
            if (auVar36._12_4_ <= auVar29._12_4_ &&
                (auVar36._12_4_ != auVar29._12_4_ || auVar36._8_4_ <= auVar29._8_4_)) {
              *(int *)((long)pvVar19 + uVar22 * 4 + 4) = iVar23 + 1;
            }
            auVar36 = auVar33 ^ auVar14;
            iVar37 = auVar36._4_4_;
            if (iVar37 <= iVar30 && (iVar37 != iVar30 || auVar36._0_4_ <= auVar29._0_4_)) {
              *(int *)((long)pvVar19 + uVar22 * 4 + 8) = iVar23 + 2;
            }
            if (iVar37 <= iVar30) {
              *(int *)((long)pvVar19 + uVar22 * 4 + 0xc) = iVar23 + 3;
            }
            uVar22 = uVar22 + 4;
            lVar21 = auVar34._8_8_;
            auVar34._0_8_ = auVar34._0_8_ + auVar35._0_8_;
            auVar34._8_8_ = lVar21 + auVar35._8_8_;
            lVar21 = auVar33._8_8_;
            auVar33._0_8_ = auVar33._0_8_ + auVar35._0_8_;
            auVar33._8_8_ = lVar21 + auVar35._8_8_;
          } while ((uVar27 + 3 & 0xfffffffffffffffc) != uVar22);
          lVar21 = 0;
          do {
            uVar15 = FUN_1001ebdc3();
            uVar27 = (ulong)(uint)((int)(long)((double)(uVar20 & 0xffffffff) *
                                              (double)(uVar15 & 0x7fffffff) * DAT_10070c180) +
                                  (int)lVar21);
            uVar5 = *(undefined4 *)((long)pvVar19 + lVar21 * 4);
            *(undefined4 *)((long)pvVar19 + lVar21 * 4) =
                 *(undefined4 *)((long)pvVar19 + uVar27 * 4);
            *(undefined4 *)((long)pvVar19 + uVar27 * 4) = uVar5;
            lVar21 = lVar21 + 1;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
          uVar20 = 0;
          do {
            puVar17[uVar20] = *(undefined4 *)((long)pvVar19 + (ulong)(uint)puVar17[uVar20] * 4);
            uVar20 = uVar20 + 1;
          } while (uVar25 != uVar20);
          uVar20 = param_2 >> 1 & 0x7fffffff;
          do {
            iVar23 = (int)uVar20;
            FUN_100493b4d(param_1,puVar17,uVar20,param_2 & 0xffffffff);
            uVar20 = (ulong)(iVar23 - 1);
          } while (iVar23 != 0);
          uVar20 = (ulong)(uVar24 - 1);
          if (-1 < (int)(uVar24 - 1)) {
            puVar26 = (undefined8 *)(uVar20 * 0x1c + (long)param_1);
            uVar27 = uVar20;
            do {
              uVar8 = *puVar26;
              uVar9 = puVar26[1];
              uVar10 = *(undefined8 *)((long)puVar26 + 0x14);
              uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)puVar26 + 0xc) >> 0x20);
              local_7c = (undefined4)((ulong)uVar9 >> 0x20);
              uVar11 = *param_1;
              uVar12 = param_1[1];
              uVar7 = *(undefined8 *)((long)param_1 + 0x14);
              *(undefined8 *)((long)puVar26 + 0xc) = *(undefined8 *)((long)param_1 + 0xc);
              *(undefined8 *)((long)puVar26 + 0x14) = uVar7;
              *puVar26 = uVar11;
              puVar26[1] = uVar12;
              *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_78,local_7c);
              *(undefined8 *)((long)param_1 + 0x14) = uVar10;
              *param_1 = uVar8;
              param_1[1] = uVar9;
              uVar5 = puVar17[uVar27];
              puVar17[uVar27] = *puVar17;
              *puVar17 = uVar5;
              FUN_100493b4d(param_1,puVar17,0,uVar27 & 0xffffffff);
              puVar26 = (undefined8 *)((long)puVar26 + -0x1c);
              bVar28 = uVar27 != 0;
              uVar27 = uVar27 - 1;
            } while (bVar28);
          }
          if (param_5 < uVar16 - 1) {
            uVar27 = 1;
            puVar26 = param_1;
            do {
              lVar21 = 0;
              while (puVar17[uVar27 + lVar21] == puVar17[uVar27 + lVar21 + -1]) {
                lVar21 = lVar21 + 1;
                if (uVar25 - uVar27 == lVar21) {
                  if ((uint)uVar27 != uVar24) {
                    FUN_10049118a(puVar26,(uVar24 + 1) - (uint)uVar27,param_3,param_4,param_5 + 1);
                  }
                  goto LAB_1004916a5;
                }
              }
              FUN_10049118a(puVar26,lVar21 + 1U,param_3,param_4,param_5 + 1);
              puVar26 = (undefined8 *)((long)puVar26 + (lVar21 + 1U & 0xffffffff) * 0x1c);
              uVar22 = ~uVar27;
              uVar27 = lVar21 + uVar27 + 1;
            } while (uVar22 + uVar25 != lVar21);
          }
LAB_1004916a5:
          if (0.0 < dVar3) {
            uVar25 = 0;
            puVar26 = param_1;
            local_38 = param_2;
            do {
              uVar16 = FUN_1001ebdc3();
              if ((double)(uVar16 & 0x7fffffff) * DAT_10070c180 < dVar3 + dVar3) {
                uVar16 = FUN_1001ebdc3();
                uVar8 = *puVar26;
                uVar9 = puVar26[1];
                uVar10 = *(undefined8 *)((long)puVar26 + 0x14);
                uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)puVar26 + 0xc) >> 0x20);
                local_7c = (undefined4)((ulong)uVar9 >> 0x20);
                lVar21 = (ulong)(uint)((int)(long)((double)(local_38 & 0xffffffff) *
                                                  (double)(uVar16 & 0x7fffffff) * DAT_10070c180) +
                                      (int)uVar25) * 0x1c;
                uVar11 = *(undefined8 *)((long)param_1 + lVar21);
                uVar12 = ((undefined8 *)((long)param_1 + lVar21))[1];
                puVar2 = (undefined8 *)((long)param_1 + lVar21 + 0xc);
                uVar7 = puVar2[1];
                *(undefined8 *)((long)puVar26 + 0xc) = *puVar2;
                *(undefined8 *)((long)puVar26 + 0x14) = uVar7;
                *puVar26 = uVar11;
                puVar26[1] = uVar12;
                puVar2 = (undefined8 *)((long)param_1 + lVar21 + 0xc);
                *puVar2 = CONCAT44(uStack_78,local_7c);
                puVar2[1] = uVar10;
                *(undefined8 *)((long)param_1 + lVar21) = uVar8;
                ((undefined8 *)((long)param_1 + lVar21))[1] = uVar9;
              }
              uVar25 = uVar25 + 1;
              puVar26 = (undefined8 *)((long)puVar26 + 0x1c);
              local_38 = (ulong)((int)local_38 - 1);
            } while (uVar20 != uVar25);
          }
          _free(pvVar19);
          local_90 = 0;
        }
      }
      else {
        if (param_5 < uVar16 - 1) {
          FUN_10049118a(param_1,param_2,param_3,param_4,param_5 + 1);
        }
        puVar18 = (undefined4 *)((long)param_1 + uVar20 * 4 + 8);
        uVar20 = 0;
        do {
          puVar17[uVar20] = *puVar18;
          uVar20 = uVar20 + 1;
          puVar18 = puVar18 + 7;
        } while (uVar25 != uVar20);
        uVar20 = 0;
        uVar16 = 0;
        do {
          if (uVar16 < (uint)puVar17[uVar20]) {
            uVar16 = puVar17[uVar20];
          }
          uVar20 = uVar20 + 1;
        } while (uVar25 != uVar20);
        pvVar19 = _calloc((ulong)(uVar16 + 1),4);
        local_90 = 0xffffff94;
        if (pvVar19 != (void *)0x0) {
          uVar20 = 0;
          do {
            piVar1 = (int *)((long)pvVar19 + (ulong)(uint)puVar17[uVar20] * 4);
            *piVar1 = *piVar1 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar25 != uVar20);
          bVar28 = false;
          uVar20 = 0;
LAB_100491344:
          if ((*(int *)((long)pvVar19 + uVar20 * 4) == 0) ||
             (bVar13 = !bVar28, bVar28 = true, bVar13)) goto LAB_100491359;
          dVar31 = DAT_100700458 - dVar3;
          uVar20 = 0;
          do {
            uVar16 = FUN_1001ebdc3();
            uVar15 = uVar24 - (int)uVar20;
            dVar32 = (double)uVar15;
            uVar27 = (ulong)(uint)((int)(long)((double)(uVar16 & 0x7fffffff) * DAT_10070c180 *
                                              dVar32) + (int)uVar20);
            if (uVar20 != 0) {
              uVar16 = puVar17[uVar20 - 1];
              uVar4 = *(uint *)((long)pvVar19 + (ulong)uVar16 * 4);
              if (uVar4 != uVar15 && uVar4 != 0) {
                bVar28 = false;
                if (dVar3 < DAT_100700458) {
                  uVar15 = FUN_1001ebdc3();
                  bVar28 = (double)(uVar15 & 0x7fffffff) * DAT_10070c180 * dVar32 <
                           (double)uVar4 * (dVar31 + dVar31);
                }
                uVar15 = puVar17[uVar27];
                while (bVar28 != (uVar15 == uVar16)) {
                  uVar15 = (int)uVar27 + 1;
                  uVar27 = (ulong)uVar15;
                  if (uVar15 == uVar24) {
                    uVar27 = uVar20 & 0xffffffff;
                  }
                  uVar15 = puVar17[uVar27];
                }
              }
            }
            lVar21 = uVar20 * 0x1c;
            uVar8 = *(undefined8 *)((long)param_1 + lVar21);
            uVar9 = ((undefined8 *)((long)param_1 + lVar21))[1];
            puVar26 = (undefined8 *)((long)param_1 + lVar21 + 0xc);
            uVar10 = puVar26[1];
            uStack_78 = (undefined4)((ulong)*puVar26 >> 0x20);
            local_7c = (undefined4)((ulong)uVar9 >> 0x20);
            lVar6 = uVar27 * 0x1c;
            uVar11 = *(undefined8 *)((long)param_1 + lVar6);
            uVar12 = ((undefined8 *)((long)param_1 + lVar6))[1];
            puVar26 = (undefined8 *)((long)param_1 + lVar6 + 0xc);
            uVar7 = puVar26[1];
            puVar2 = (undefined8 *)((long)param_1 + lVar21 + 0xc);
            *puVar2 = *puVar26;
            puVar2[1] = uVar7;
            *(undefined8 *)((long)param_1 + lVar21) = uVar11;
            ((undefined8 *)((long)param_1 + lVar21))[1] = uVar12;
            puVar26 = (undefined8 *)((long)param_1 + lVar6 + 0xc);
            *puVar26 = CONCAT44(uStack_78,local_7c);
            puVar26[1] = uVar10;
            *(undefined8 *)((long)param_1 + lVar6) = uVar8;
            ((undefined8 *)((long)param_1 + lVar6))[1] = uVar9;
            uVar5 = puVar17[uVar20];
            puVar17[uVar20] = puVar17[uVar27];
            puVar17[uVar27] = uVar5;
            iVar23 = *(int *)((long)pvVar19 + (ulong)(uint)puVar17[uVar20] * 4);
            if (iVar23 != 0) {
              *(int *)((long)pvVar19 + (ulong)(uint)puVar17[uVar20] * 4) = iVar23 + -1;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar25);
          uVar25 = (ulong)(uVar24 - 1);
          if (puVar17[uVar25] == puVar17[uVar24 - 2]) {
            uVar16 = FUN_1001ebdc3();
            lVar21 = uVar25 * 0x1c;
            uVar7 = *(undefined8 *)((long)param_1 + lVar21);
            uVar8 = ((undefined8 *)((long)param_1 + lVar21))[1];
            puVar26 = (undefined8 *)((long)param_1 + lVar21 + 0xc);
            uVar9 = puVar26[1];
            uStack_78 = (undefined4)((ulong)*puVar26 >> 0x20);
            local_7c = (undefined4)((ulong)uVar8 >> 0x20);
            lVar6 = ((long)((double)uVar25 * (double)(uVar16 & 0x7fffffff) * DAT_10070c180) &
                    0xffffffffU) * 0x1c;
            uVar10 = *(undefined8 *)((long)param_1 + lVar6);
            uVar11 = ((undefined8 *)((long)param_1 + lVar6))[1];
            puVar26 = (undefined8 *)((long)param_1 + lVar6 + 0xc);
            uVar12 = puVar26[1];
            puVar2 = (undefined8 *)((long)param_1 + lVar21 + 0xc);
            *puVar2 = *puVar26;
            puVar2[1] = uVar12;
            *(undefined8 *)((long)param_1 + lVar21) = uVar10;
            ((undefined8 *)((long)param_1 + lVar21))[1] = uVar11;
            puVar26 = (undefined8 *)((long)param_1 + lVar6 + 0xc);
            *puVar26 = CONCAT44(uStack_78,local_7c);
            puVar26[1] = uVar9;
            *(undefined8 *)((long)param_1 + lVar6) = uVar7;
            ((undefined8 *)((long)param_1 + lVar6))[1] = uVar8;
          }
LAB_1004919b4:
          _free(pvVar19);
          local_90 = 0;
        }
      }
      _free(puVar17);
    }
  }
  return local_90;
LAB_100491359:
  uVar15 = (int)uVar20 + 1;
  uVar20 = (ulong)uVar15;
  if (uVar16 < uVar15) goto LAB_1004919b4;
  goto LAB_100491344;
}

