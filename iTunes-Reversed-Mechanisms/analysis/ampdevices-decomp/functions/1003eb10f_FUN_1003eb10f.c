// name: FUN_1003eb10f
// address: 1003eb10f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1003eb10f(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  size_t sVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  undefined4 *puVar21;
  void *pvVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  undefined4 *puVar26;
  float fVar27;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int local_7a4;
  int local_7a0;
  undefined4 local_79c;
  undefined8 local_798;
  undefined8 local_790;
  ulong local_788;
  ulong local_780;
  undefined2 local_772;
  int local_770;
  int local_76c;
  undefined4 *local_768;
  undefined4 *local_760;
  long *local_758;
  ulong local_750;
  int local_744;
  ulong local_740;
  long *local_738;
  undefined8 local_730;
  uint local_724;
  ulong local_720;
  undefined4 *local_718;
  ulong local_710;
  long local_708;
  long local_700;
  long *local_6f8;
  int local_6ec;
  ulong local_6e8;
  long *local_6e0;
  undefined4 local_6d8;
  undefined2 uStack_6d4;
  undefined2 uStack_6d2;
  undefined1 uStack_6d0;
  undefined2 uStack_6cf;
  undefined1 uStack_6cd;
  undefined1 uStack_6cc;
  undefined1 uStack_6cb;
  undefined1 uStack_6ca;
  undefined1 uStack_6c9;
  undefined2 uStack_6c8;
  undefined2 uStack_6c6;
  undefined1 uStack_6c4;
  undefined1 uStack_6c3;
  undefined1 uStack_6c2;
  undefined1 uStack_6c1;
  undefined1 local_6c0 [3];
  undefined1 local_6bd;
  undefined1 local_6bc;
  undefined1 local_6bb;
  undefined2 local_6ba;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined1 local_4b6 [3];
  undefined2 local_4b3;
  undefined1 local_4b1;
  undefined1 local_4b0;
  undefined1 local_4af;
  undefined1 local_4ae;
  undefined1 local_4ad;
  undefined1 local_4ac;
  uint local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined2 uStack_26c;
  undefined2 uStack_26a;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined1 local_254 [12];
  undefined8 local_248;
  uint local_240;
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003ebe35:
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_6d8 = 0x8220202;
      uStack_6d4 = 0xa90;
      uStack_6d2 = 0x7a;
      uStack_6d0 = 1;
      uStack_6cf = 0;
      uStack_6cd = 0;
      uStack_6cc = 0x22;
      uStack_6cb = 8;
      uStack_6ca = 0xb2;
      uStack_6c9 = 0xd2;
      uStack_6c8 = 0x7a;
      uStack_6c6 = 1;
      uStack_6c4 = 0;
      uStack_6c3 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_6d8 = 0x8220202;
        uStack_6d4 = 0xb58c;
        uStack_6d2 = 0x7a;
        uStack_6d0 = 1;
        uStack_6cf = 0;
        uStack_6cd = 0;
        uStack_6cc = 0x22;
        uStack_6cb = 8;
        uStack_6ca = 0x10;
        uStack_6c9 = 0xd7;
        uStack_6c8 = 0x7a;
        uStack_6c6 = 1;
        uStack_6c4 = 0;
        uStack_6c3 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1003ebe35;
    }
    if (param_2 == 0) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_6d8 = 0x8220202;
        uStack_6d4 = 0xa90;
        uStack_6d2 = 0x7a;
        uStack_6d0 = 1;
        uStack_6cf = 0;
        uStack_6cd = 0;
        uStack_6cc = 0x22;
        uStack_6cb = 8;
        uStack_6ca = 0x7c;
        uStack_6c9 = 1;
        uStack_6c8 = 0x7a;
        uStack_6c6 = 1;
        uStack_6c4 = 0;
        uStack_6c3 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (*(long *)(param_1 + 0x30) == 0) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_6d8 = 0x8220202;
        uStack_6d4 = 0xa90;
        uStack_6d2 = 0x7a;
        uStack_6d0 = 1;
        uStack_6cf = 0;
        uStack_6cd = 0;
        uStack_6cc = 0x22;
        uStack_6cb = 8;
        uStack_6ca = 0xdf;
        uStack_6c9 = 4;
        uStack_6c8 = 0x7c;
        uStack_6c6 = 1;
        uStack_6c4 = 0;
        uStack_6c3 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      local_788 = (ulong)*(uint *)(param_1 + 0x3b4);
      if ((ushort)((short)*(uint *)(param_1 + 0x3b4) - 1U) < 2) {
        local_708 = param_1;
        local_700 = param_2;
        local_710 = FUN_10048604a();
        uVar16 = 0;
        puVar21 = (undefined4 *)0x0;
        if (local_710 != 0) {
          puVar21 = (undefined4 *)(ulong)*(uint *)(*(long *)(local_710 + 0x78) + 0x18);
        }
        if (*(long *)(local_708 + 0x30) != 0) {
          uVar16 = *(undefined4 *)(*(long *)(local_708 + 0x30) + 0x98);
        }
        local_780 = CONCAT44(local_780._4_4_,uVar16);
        local_6e8 = CONCAT44(local_6e8._4_4_,(uint)((short)local_788 == 1) * 2 + 0x75);
        iVar7 = (int)puVar21;
        if ((short)local_788 == 2) {
          if (iVar7 == 0) {
            uVar18 = 0;
          }
          else {
            iVar23 = 0;
            uVar18 = 0;
            do {
              lVar11 = FUN_10037ddf6(*(undefined8 *)(local_710 + 0x3c0),local_6e8 & 0xffffffff,0,
                                     iVar23);
              if (lVar11 == 0) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_238 = 0x8220202;
                  local_234 = "Assertion failure";
                  local_22c = 0x822;
                  local_22a = "playlistTrack != nullptr";
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else if ((*(byte *)(*(long *)(lVar11 + 8) + 0xc3) & 0x80) == 0) {
                uVar9 = FUN_1002e2e73(lVar11);
                cVar4 = FUN_1002b16f5(uVar9);
                uVar18 = uVar18 + (cVar4 == '\0');
              }
              iVar23 = iVar23 + 1;
            } while (iVar7 != iVar23);
          }
          FUN_1001c62d9(&local_6d8,0x40);
          local_6d8 = 0x73686462;
          uStack_6d0 = 0x40;
          uStack_6cf = 0;
          uStack_6cd = 0;
          uVar16 = 0x2010001;
          if (*(char *)(local_708 + 0x394) == '\0') {
            uVar16 = 0x2000003;
          }
          uStack_6d4 = (undefined2)uVar16;
          uStack_6d2 = (undefined2)((uint)uVar16 >> 0x10);
          uStack_6cc = SUB81(puVar21,0);
          uStack_6cb = (undefined1)((ulong)puVar21 >> 8);
          uStack_6ca = (undefined1)((ulong)puVar21 >> 0x10);
          uStack_6c9 = (undefined1)((ulong)puVar21 >> 0x18);
          if ((*(char *)(local_708 + 0x367) != '\0') && (*(char *)(local_708 + 0x14d55) != '\0')) {
            local_6bc = *(undefined1 *)(local_708 + 0x14d54);
          }
          if (*(char *)(local_708 + 0x368) != '\0') {
            local_6ba = CONCAT11(local_6ba._1_1_,*(undefined1 *)(local_708 + 0x14df5));
          }
          if (*(char *)(local_708 + 0x14dc9) == '\0') {
            local_6bb = false;
          }
          else {
            local_6bb = *(char *)(local_708 + 0x14dd5) == '\0';
          }
          local_720 = 0x40;
          local_6b8 = uVar18;
          uVar18 = FUN_100160894(local_700);
          uVar19 = (ulong)uVar18;
          if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
          if (uVar18 == 0) {
            local_798 = 0;
            local_790 = 0;
            if (iVar7 == 0) {
LAB_1003ec46f:
              local_6d8 = 0;
              uStack_6d4 = 0;
              uStack_6d2 = 0;
              uStack_6d0 = 0;
              uStack_6cf = 0;
              uStack_6cd = 0;
              uStack_6cc = 0;
              uStack_6cb = 0;
              uStack_6ca = 0;
              uStack_6c9 = 0;
              uStack_6c8 = 0;
              uStack_6c6 = 0;
              uStack_6c4 = 0;
              uStack_6c3 = 0;
              uStack_6c2 = 0;
              uStack_6c1 = 0;
              iVar7 = (int)local_780;
              FUN_1003ed6c6(&local_6d8,local_780 & 0xffffffff);
              if (iVar7 == 0) {
                local_710 = 0;
              }
              else {
                iVar7 = 0;
                local_710 = 0;
                do {
                  lVar11 = FUN_1002f8ed5(*(undefined8 *)(local_708 + 0x30),iVar7,1);
                  if (lVar11 == 0) {
                    uVar9 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar4 != '\0') {
                      local_238 = 0x8220202;
                      local_234 = "Assertion failure";
                      local_22c = 0x822;
                      local_22a = "playlist != nullptr";
                      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                          &local_238,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  else if (((((ulong)*(ushort *)(lVar11 + 0x10) < 0x21) &&
                            ((0x140000810U >> ((ulong)*(ushort *)(lVar11 + 0x10) & 0x3f) & 1) != 0))
                           || (cVar4 = FUN_1002bded4(lVar11), cVar4 != '\0')) &&
                          (*(int *)(*(long *)(lVar11 + 0x78) + 0x18) != 0)) {
                    plVar25 = (long *)CONCAT17(uStack_6c9,
                                               CONCAT16(uStack_6ca,
                                                        CONCAT15(uStack_6cb,
                                                                 CONCAT14(uStack_6cc,
                                                                          CONCAT13(uStack_6cd,
                                                                                   CONCAT21(
                                                  uStack_6cf,uStack_6d0))))));
                    plVar1 = (long *)CONCAT17(uStack_6c1,
                                              CONCAT16(uStack_6c2,
                                                       CONCAT15(uStack_6c3,
                                                                CONCAT14(uStack_6c4,
                                                                         CONCAT22(uStack_6c6,
                                                                                  uStack_6c8)))));
                    if (plVar25 < plVar1) {
                      *plVar25 = lVar11;
                      plVar25 = plVar25 + 1;
                    }
                    else {
                      lVar14 = CONCAT26(uStack_6d2,CONCAT24(uStack_6d4,local_6d8));
                      lVar24 = (long)plVar25 - lVar14 >> 3;
                      uVar19 = lVar24 + 1;
                      if (0x1fffffffffffffff < uVar19) {
                        FUN_1003f9990();
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      uVar12 = (long)plVar1 - lVar14;
                      uVar15 = (long)uVar12 >> 2;
                      if (uVar15 <= uVar19) {
                        uVar15 = uVar19;
                      }
                      if (0x7ffffffffffffff7 < uVar12) {
                        uVar15 = 0x1fffffffffffffff;
                      }
                      if (uVar15 == 0) {
                        auVar28 = ZEXT816(0);
                      }
                      else {
                        auVar28 = FUN_1003f99a0();
                      }
                      lVar13 = auVar28._0_8_;
                      plVar1 = (long *)(lVar13 + lVar24 * 8);
                      lVar14 = lVar13 + auVar28._8_8_ * 8;
                      *plVar1 = lVar11;
                      plVar25 = (long *)(lVar13 + lVar24 * 8 + 8);
                      pvVar3 = (void *)CONCAT26(uStack_6d2,CONCAT24(uStack_6d4,local_6d8));
                      sVar17 = CONCAT17(uStack_6c9,
                                        CONCAT16(uStack_6ca,
                                                 CONCAT15(uStack_6cb,
                                                          CONCAT14(uStack_6cc,
                                                                   CONCAT13(uStack_6cd,
                                                                            CONCAT21(uStack_6cf,
                                                                                     uStack_6d0)))))
                                       ) - (long)pvVar3;
                      pvVar22 = (void *)((long)plVar1 - sVar17);
                      _memcpy(pvVar22,pvVar3,sVar17);
                      pvVar3 = (void *)CONCAT26(uStack_6d2,CONCAT24(uStack_6d4,local_6d8));
                      local_6d8 = (uint)pvVar22;
                      uStack_6d4 = (undefined2)((ulong)pvVar22 >> 0x20);
                      uStack_6d2 = (undefined2)((ulong)pvVar22 >> 0x30);
                      uStack_6c8 = (undefined2)lVar14;
                      uStack_6c6 = (undefined2)((ulong)lVar14 >> 0x10);
                      uStack_6c4 = (undefined1)((ulong)lVar14 >> 0x20);
                      uStack_6c3 = (undefined1)((ulong)lVar14 >> 0x28);
                      uStack_6c2 = (undefined1)((ulong)lVar14 >> 0x30);
                      uStack_6c1 = (undefined1)((ulong)lVar14 >> 0x38);
                      if (pvVar3 != (void *)0x0) {
                        operator_delete(pvVar3);
                      }
                    }
                    uStack_6d0 = SUB81(plVar25,0);
                    uStack_6cf = (undefined2)((ulong)plVar25 >> 8);
                    uStack_6cd = (undefined1)((ulong)plVar25 >> 0x18);
                    uStack_6cc = (undefined1)((ulong)plVar25 >> 0x20);
                    uStack_6cb = (undefined1)((ulong)plVar25 >> 0x28);
                    uStack_6ca = (undefined1)((ulong)plVar25 >> 0x30);
                    uStack_6c9 = (undefined1)((ulong)plVar25 >> 0x38);
                    if ((*(short *)(lVar11 + 0x10) == 0xb) && (*(char *)(local_708 + 0x392) != '\0')
                       ) {
                      iVar23 = *(int *)(*(long *)(lVar11 + 0x78) + 0x18);
                      if (iVar23 != 0) {
                        iVar5 = 0;
                        do {
                          lVar14 = FUN_10037ddf6(*(undefined8 *)(lVar11 + 0x3c0),5,0,iVar5);
                          if (lVar14 == 0) {
                            uVar9 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar9,0x10);
                            if (cVar4 != '\0') {
                              local_238 = 0x8220202;
                              local_234 = "Assertion failure";
                              local_22c = 0x822;
                              local_22a = "playlistItem != nullptr";
                              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                                  &local_238,0x16);
                            }
                            FUN_1001782e9(0,0);
                          }
                          else if (*(long *)(lVar14 + 8) != 0) {
                            local_710 = (ulong)((int)local_710 +
                                               (uint)((*(uint *)(*(long *)(lVar14 + 8) + 0xc2) >>
                                                       0x1a & 1) != 0));
                          }
                          iVar5 = iVar5 + 1;
                        } while (iVar23 != iVar5);
                      }
                    }
                    else {
                      local_710 = (ulong)((int)local_710 + 1);
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 != (int)local_780);
              }
              plVar25 = (long *)CONCAT26(uStack_6d2,CONCAT24(uStack_6d4,local_6d8));
              local_6e0 = (long *)CONCAT17(uStack_6c9,
                                           CONCAT16(uStack_6ca,
                                                    CONCAT15(uStack_6cb,
                                                             CONCAT14(uStack_6cc,
                                                                      CONCAT13(uStack_6cd,
                                                                               CONCAT21(uStack_6cf,
                                                                                        uStack_6d0))
                                                                     ))));
              FUN_1003ed735(plVar25);
              lVar11 = local_700;
              iVar7 = 0x44;
              if (*(char *)(local_708 + 0x394) == '\0') {
                iVar7 = 0x14;
              }
              local_780 = (ulong)(uint)(iVar7 + (int)local_710 * 4);
              puVar21 = (undefined4 *)FUN_1001c6429();
              if (puVar21 == (undefined4 *)0x0) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_238 = 0x8220202;
                  local_234 = "Assertion failure";
                  local_22c = 0x822;
                  local_22a = "dbPlaylistsHeaderBuffer != nullptr";
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,
                                      0x16);
                }
                local_6e8 = 0;
                uVar9 = FUN_1001782e9(0,0);
                uVar19 = 0xffffff94;
                local_768 = (undefined4 *)
                            CONCAT44(local_768._4_4_,(int)CONCAT71((int7)((ulong)uVar9 >> 8),1));
                uVar15 = local_6e8;
              }
              else {
                cVar4 = *(char *)(local_708 + 0x394);
                local_724 = CONCAT31(local_724._1_3_,cVar4);
                local_760 = (undefined4 *)0x0;
                if (cVar4 == '\0') {
                  local_760 = puVar21;
                }
                local_6e8 = 0;
                puVar26 = puVar21;
                if (cVar4 == '\0') {
                  puVar26 = (undefined4 *)0x0;
                }
                *puVar21 = 0x73687068;
                puVar21[1] = (int)local_780;
                uVar15 = FUN_100160255(lVar11,&local_790);
                uVar19 = uVar15 & 0xffffffff;
                local_768 = (undefined4 *)
                            CONCAT44(local_768._4_4_,(int)CONCAT71((int7)(uVar15 >> 8),1));
                iVar7 = (int)uVar15;
                local_718 = puVar21;
                uVar15 = local_6e8;
                if (iVar7 != -0x80) {
                  if (iVar7 == 0) {
                    local_720 = local_780;
                    uVar18 = FUN_100160894(lVar11,&local_720,puVar21);
                    uVar19 = (ulong)uVar18;
                    uVar15 = local_6e8;
                    if (uVar18 != 0xffffff80) {
                      if (uVar18 == 0) {
                        local_6f8 = plVar25;
                        if (plVar25 == local_6e0) {
                          local_730 = (undefined4 *)((ulong)local_730._4_4_ << 0x20);
                          local_738 = (long *)CONCAT44(local_738._4_4_,0xffffffff);
                          local_740 = CONCAT44(local_740._4_4_,0xffffffff);
                          local_76c = 0;
                          local_6e8._0_4_ = -1;
                          local_6ec = 0;
                          local_744 = -1;
                          local_770 = 0;
                          uVar15 = 0;
                        }
                        else {
                          local_750 = local_708 + 0x50;
                          local_760 = local_760 + 5;
                          if ((char)local_724 != '\0') {
                            local_760 = puVar26 + 0x11;
                          }
                          local_744 = -1;
                          uVar15 = 0;
                          local_770 = 0;
                          local_6ec = 0;
                          local_6e8._0_4_ = -1;
                          local_76c = 0;
                          local_740 = CONCAT44(local_740._4_4_,0xffffffff);
                          local_730 = (undefined4 *)((ulong)local_730._4_4_ << 0x20);
                          local_738 = (long *)CONCAT44(local_738._4_4_,0xffffffff);
                          do {
                            lVar11 = *plVar25;
                            iVar7 = (int)uVar15;
                            if ((*(short *)(lVar11 + 0x10) == 0xb) &&
                               (*(char *)(local_708 + 0x392) == '\0')) {
                              local_6ec = local_6ec + 1;
                              iVar23 = iVar7;
                              if ((int)local_6e8 != -1) {
                                uVar9 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(uVar9,0x10);
                                if (cVar4 != '\0') {
                                  local_238 = 0x8220202;
                                  local_234 = "Assertion failure";
                                  local_22c = 0x822;
                                  local_22a = "firstPodcastPlaylistIndex == -1";
                                  __os_log_error_impl(0x100000000,uVar9,0x10,
                                                      "%{public}s: (%{public}s)",&local_238,0x16);
                                }
                                FUN_1001782e9(0,0);
                                iVar23 = (int)local_6e8;
                              }
                            }
                            else {
                              cVar4 = FUN_1002bded4(lVar11);
                              iVar23 = (int)local_6e8;
                              if (cVar4 == '\0') {
                                if (*(short *)(lVar11 + 0x10) == 0x20) {
                                  local_770 = local_770 + 1;
                                  if (local_744 == -1) {
                                    local_744 = iVar7;
                                  }
                                }
                                else if (*(short *)(lVar11 + 0x10) == 0x1e) {
                                  local_76c = local_76c + 1;
                                  iVar5 = (int)local_740;
                                  if ((int)local_740 == -1) {
                                    iVar5 = iVar7;
                                  }
                                  local_740 = CONCAT44(local_740._4_4_,iVar5);
                                }
                              }
                              else {
                                local_730 = (undefined4 *)
                                            CONCAT44(local_730._4_4_,(int)local_730 + 1);
                                iVar5 = (uint)local_738;
                                if ((uint)local_738 == -1) {
                                  iVar5 = iVar7;
                                }
                                local_738 = (long *)CONCAT44(local_738._4_4_,iVar5);
                              }
                            }
                            local_6e8._0_4_ = iVar23;
                            local_758 = plVar25;
                            if ((*(short *)(lVar11 + 0x10) == 0xb) &&
                               (*(char *)(local_708 + 0x392) != '\0')) {
                              iVar7 = *(int *)(*(long *)(lVar11 + 0x78) + 0x18);
                              if (iVar7 != 0) {
                                iVar23 = 0;
                                do {
                                  lVar14 = FUN_10037ddf6(*(undefined8 *)(lVar11 + 0x3c0),5,0,iVar23)
                                  ;
                                  if (lVar14 == 0) {
                                    uVar9 = FUN_1001cc310();
                                    cVar4 = _os_log_type_enabled(uVar9,0x10);
                                    if (cVar4 != '\0') {
                                      local_238 = 0x8220202;
                                      local_234 = "Assertion failure";
                                      local_22c = 0x822;
                                      local_22a = "playlistItem != nullptr";
                                      __os_log_error_impl(0x100000000,uVar9,0x10,
                                                          "%{public}s: (%{public}s)",&local_238,0x16
                                                         );
                                    }
                                    FUN_1001782e9(0,0);
                                  }
                                  else if ((*(long *)(lVar14 + 8) != 0) &&
                                          ((*(byte *)(*(long *)(lVar14 + 8) + 0xc5) & 4) != 0)) {
                                    uVar9 = FUN_1002ba359(lVar14);
                                    uVar18 = FUN_1003ed87b(lVar11,uVar9,local_700,&local_278);
                                    plVar25 = local_6f8;
                                    uVar19 = (ulong)uVar18;
                                    if (uVar18 != 0) {
                                      if (uVar18 != 0xffffff80) {
                                        uVar9 = FUN_1001cc310();
                                        cVar4 = _os_log_type_enabled(uVar9,0x10);
                                        if (cVar4 != '\0') {
                                          local_238 = 0x8220202;
                                          local_234 = "Assertion failure";
                                          local_22c = 0x400;
                                          local_22a = (char *)CONCAT44(local_22a._4_4_,uVar18);
                                          __os_log_error_impl(0x100000000,uVar9,0x10,
                                                              "%{public}s: err == (%d)",&local_238,
                                                              0x12);
                                        }
                                      }
                                      goto LAB_1003ed34f;
                                    }
                                    local_760[uVar15] = local_278;
                                    if ((int)local_6e8 == -1) {
                                      local_6e8._0_4_ = (int)uVar15;
                                    }
                                    uVar18 = (int)uVar15 + 1;
                                    uVar15 = (ulong)uVar18;
                                    if ((uint)local_710 < uVar18) {
                                      uVar9 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(uVar9,0x10);
                                      if (cVar4 != '\0') {
                                        local_238 = 0x8220202;
                                        local_234 = "Assertion failure";
                                        local_22c = 0x822;
                                        local_22a = "numSavedPlaylists <= numPlaylistsToSave";
                                        __os_log_error_impl(0x100000000,uVar9,0x10,
                                                            "%{public}s: (%{public}s)",&local_238,
                                                            0x16);
                                      }
                                      FUN_1001782e9(0,0);
                                    }
                                    local_6ec = local_6ec + 1;
                                  }
                                  iVar23 = iVar23 + 1;
                                } while (iVar7 != iVar23);
                              }
                            }
                            else {
                              uVar18 = FUN_1003edefa(lVar11,local_750,local_700,&local_278);
                              uVar19 = (ulong)uVar18;
                              if (uVar18 != 0) {
                                plVar25 = local_6f8;
                                if (uVar18 == 0xffffff80) goto LAB_1003ed34f;
                                local_6e8 = uVar15;
                                uVar9 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(uVar9,0x10);
                                plVar25 = local_6f8;
                                uVar15 = local_6e8;
                                if (cVar4 == '\0') goto LAB_1003ed34f;
                                local_22a = (char *)CONCAT44(local_22a._4_4_,uVar18);
                                goto LAB_1003ed53e;
                              }
                              local_760[uVar15] = local_278;
                              uVar15 = (ulong)(iVar7 + 1U);
                              if ((uint)local_710 < iVar7 + 1U) {
                                uVar9 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(uVar9,0x10);
                                if (cVar4 != '\0') {
                                  local_238 = 0x8220202;
                                  local_234 = "Assertion failure";
                                  local_22c = 0x822;
                                  local_22a = "numSavedPlaylists <= numPlaylistsToSave";
                                  __os_log_error_impl(0x100000000,uVar9,0x10,
                                                      "%{public}s: (%{public}s)",&local_238,0x16);
                                }
                                FUN_1001782e9(0,0);
                              }
                            }
                            plVar25 = local_758 + 1;
                          } while (plVar25 != local_6e0);
                        }
                        plVar25 = local_6f8;
                        if ((char)local_724 == '\0') {
                          *(short *)(local_718 + 3) = (short)(int)local_6e8;
                          *(short *)((long)local_718 + 0xe) = (short)local_738;
                          *(short *)(local_718 + 4) = (short)local_740;
                        }
                        else {
                          local_718[3] = (uint)local_738;
                          local_718[4] = (int)local_730;
                          local_718[5] = (int)local_740;
                          local_718[6] = local_76c;
                          local_718[7] = (int)local_6e8;
                          local_718[8] = local_6ec;
                          *(undefined8 *)(local_718 + 9) = 0xffffffff;
                          local_718[0xb] = local_744;
                          local_718[0xc] = local_770;
                        }
                        local_718[2] = (int)uVar15;
                        local_720 = local_780;
                        local_6e8 = uVar15;
                        uVar18 = FUN_100160a0d(local_700,local_790);
                        uVar19 = (ulong)uVar18;
                        uVar15 = local_6e8;
                        if (uVar18 != 0xffffff80) {
                          if (uVar18 == 0) {
                            local_768 = (undefined4 *)((ulong)local_768 & 0xffffffff00000000);
                            FUN_1001c64c1(local_718);
                            uVar19 = 0;
                            uVar15 = local_6e8;
                          }
                          else {
                            uVar9 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar9,0x10);
                            plVar25 = local_6f8;
                            uVar15 = local_6e8;
                            if (cVar4 != '\0') {
                              local_22a = (char *)CONCAT44(local_22a._4_4_,uVar18);
LAB_1003ed53e:
                              local_22c = 0x400;
                              local_234 = "Assertion failure";
                              local_238 = 0x8220202;
                              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",
                                                  &local_238,0x12);
                              plVar25 = local_6f8;
                              uVar15 = local_6e8;
                            }
                          }
                        }
                      }
                      else {
                        uVar9 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar9,0x10);
                        uVar15 = local_6e8;
                        if (cVar4 != '\0') {
                          local_22a = (char *)CONCAT44(local_22a._4_4_,uVar18);
                          goto LAB_1003ed0a6;
                        }
                      }
                    }
                  }
                  else {
                    uVar9 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar9,0x10);
                    uVar15 = local_6e8;
                    if (cVar4 != '\0') {
                      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
LAB_1003ed0a6:
                      local_22c = 0x400;
                      local_234 = "Assertion failure";
                      local_238 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",
                                          &local_238,0x12);
                      uVar15 = local_6e8;
                    }
                  }
                }
              }
LAB_1003ed34f:
              local_6e8 = uVar15;
              if (plVar25 != (long *)0x0) {
                operator_delete(plVar25);
              }
              uVar15 = local_6e8;
              if ((short)local_788 != 2 || (char)local_768 != '\0') goto LAB_1003ebed8;
              local_720 = 0x40;
              uVar18 = FUN_100160639(local_700,0,&local_720,&local_6d8);
              uVar19 = (ulong)uVar18;
              if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
              if (uVar18 != 0) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_238 = 0x8220202;
                  local_234 = "Assertion failure";
                  local_22c = 0x400;
                  local_22a = (char *)CONCAT44(local_22a._4_4_,uVar18);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_238,
                                      0x12);
                }
                if (uVar18 != 0) goto LAB_1003ebed8;
              }
              uStack_6c8 = (undefined2)uVar15;
              uStack_6c6 = (undefined2)(uVar15 >> 0x10);
              local_6b4 = (undefined4)local_798;
              local_6b0 = (undefined4)local_790;
              local_720 = 0x40;
              uVar18 = FUN_100160a0d(local_700,0);
              uVar19 = (ulong)uVar18;
              if ((uVar18 == 0xffffff80) || (uVar18 == 0)) goto LAB_1003ebed8;
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 == '\0') goto LAB_1003ebed8;
              puVar20 = &local_238;
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x400;
              local_22a = (char *)CONCAT44(local_22a._4_4_,uVar18);
            }
            else {
              local_740 = (long)puVar21 * 4 + 0x14;
              uVar15 = local_740 & 0xffffffff;
              local_760 = puVar21;
              local_730 = (undefined4 *)FUN_1001c6429(uVar15);
              if (local_730 == (undefined4 *)0x0) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_6d8 = 0x8220202;
                  uStack_6d4 = 0xa90;
                  uStack_6d2 = 0x7a;
                  uStack_6d0 = 1;
                  uStack_6cf = 0;
                  uStack_6cd = 0;
                  uStack_6cc = 0x22;
                  uStack_6cb = 8;
                  uStack_6ca = 2;
                  uStack_6c9 = 0xb3;
                  uStack_6c8 = 0x7c;
                  uStack_6c6 = 1;
                  uStack_6c4 = 0;
                  uStack_6c3 = 0;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
LAB_1003ec7a0:
                uVar19 = 0xffffff94;
                goto LAB_1003ebed8;
              }
              *local_730 = 0x73687468;
              local_730[1] = (int)local_740;
              local_730[2] = iVar7;
              uVar18 = FUN_100160255(local_700,&local_798);
              uVar19 = (ulong)uVar18;
              if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
              if (uVar18 == 0) {
                local_720 = uVar15;
                uVar18 = FUN_100160894(local_700,&local_720,local_730);
                uVar19 = (ulong)uVar18;
                if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
                if (uVar18 == 0) goto LAB_1003eb31e;
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 == '\0') goto LAB_1003ebed8;
                puVar20 = &local_6d8;
                local_6d8 = 0x8220202;
                uStack_6d4 = 0xa90;
                uStack_6d2 = 0x7a;
                uStack_6d0 = 1;
                uStack_6cf = 0;
                uStack_6cd = 0;
                uStack_6cc = 0;
                uStack_6cb = 4;
                uStack_6ca = (undefined1)uVar18;
                uStack_6c9 = (undefined1)(uVar18 >> 8);
                uStack_6c8 = (undefined2)(uVar18 >> 0x10);
              }
              else {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 == '\0') goto LAB_1003ebed8;
                puVar20 = &local_6d8;
                local_6d8 = 0x8220202;
                uStack_6d4 = 0xa90;
                uStack_6d2 = 0x7a;
                uStack_6d0 = 1;
                uStack_6cf = 0;
                uStack_6cd = 0;
                uStack_6cc = 0;
                uStack_6cb = 4;
                uStack_6ca = (undefined1)uVar18;
                uStack_6c9 = (undefined1)(uVar18 >> 8);
                uStack_6c8 = (undefined2)(uVar18 >> 0x10);
              }
            }
          }
          else {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 == '\0') goto LAB_1003ebed8;
            puVar20 = &local_238;
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x400;
            local_22a = (char *)CONCAT44(local_22a._4_4_,uVar18);
          }
        }
        else {
          uVar18 = 0x10800;
          if (*(char *)(local_708 + 0x367) == '\0') {
            uVar18 = (uint)(*(char *)(local_708 + 0x366) != '\0') << 8 | 0x10600;
          }
          FUN_1001c62d9(&local_6d8,0x12);
          FUN_1003ed5f6(puVar21,&local_6d8);
          FUN_1003ed5f6(uVar18,(long)&local_6d8 + 3);
          uStack_6d2 = 0;
          uStack_6d0 = 0x12;
          if ((*(char *)(local_708 + 0x367) != '\0') && (*(char *)(local_708 + 0x14d55) != '\0')) {
            uStack_6c9 = *(undefined1 *)(local_708 + 0x14d54);
          }
          local_720 = 0x12;
          uVar18 = FUN_100160894(local_700,&local_720,&local_6d8);
          uVar19 = (ulong)uVar18;
          if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
          if (uVar18 == 0) {
            uVar19 = 0;
            local_798 = 0;
            local_790 = 0;
            if (iVar7 == 0) goto LAB_1003ebed8;
            local_740 = 0;
            local_730 = (undefined4 *)0x0;
            local_760 = puVar21;
LAB_1003eb31e:
            puVar21 = (undefined4 *)0x0;
LAB_1003eb320:
            do {
              local_768 = puVar21;
              puVar10 = (undefined8 *)FUN_100380761(local_710,local_6e8 & 0xffffffff,0);
              if (puVar10 == (undefined8 *)0x0) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_6d8 = 0x8220202;
                  uStack_6d4 = 0xa90;
                  uStack_6d2 = 0x7a;
                  uStack_6d0 = 1;
                  uStack_6cf = 0;
                  uStack_6cd = 0;
                  uStack_6cc = 0x22;
                  uStack_6cb = 8;
                  uStack_6ca = 0x1f;
                  uStack_6c9 = 0x58;
                  uStack_6c8 = 0x7b;
                  uStack_6c6 = 1;
                  uStack_6c4 = 0;
                  uStack_6c3 = 0;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else if (puVar10[2] == 0) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_6d8 = 0x8220202;
                  uStack_6d4 = 0xa90;
                  uStack_6d2 = 0x7a;
                  uStack_6d0 = 1;
                  uStack_6cf = 0;
                  uStack_6cd = 0;
                  uStack_6cc = 0x22;
                  uStack_6cb = 8;
                  uStack_6ca = 0x50;
                  uStack_6c9 = 0x69;
                  uStack_6c8 = 0x7b;
                  uStack_6c6 = 1;
                  uStack_6c4 = 0;
                  uStack_6c3 = 0;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
LAB_1003eb447:
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_6d8 = 0x8220202;
                  uStack_6d4 = 0xa90;
                  uStack_6d2 = 0x7a;
                  uStack_6d0 = 1;
                  uStack_6cf = 0;
                  uStack_6cd = 0;
                  uStack_6cc = 0x22;
                  uStack_6cb = 8;
                  uStack_6ca = 0x77;
                  uStack_6c9 = 0x8e;
                  uStack_6c8 = 0x7b;
                  uStack_6c6 = 1;
                  uStack_6c4 = 0;
                  uStack_6c3 = 0;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                plVar25 = puVar10 + 0xb;
                do {
                  plVar25 = (long *)*plVar25;
                  if (plVar25 == (long *)0x0) goto LAB_1003eb447;
                } while (*(int *)((long)plVar25 + 0x3c) != 0x46494c45);
                if (*(char *)(local_708 + 0x366) == '\0') {
                  iVar7 = (int)(((float)(int)*(short *)((long)puVar10 + 0x12a) * DAT_10070bcf0) /
                               _DAT_10070bcc0);
                  uVar18 = 0;
                  if (-0x65 < iVar7) {
                    if (99 < iVar7) {
                      iVar7 = 100;
                    }
                    uVar18 = iVar7 + 100;
                  }
                }
                else {
                  fVar27 = (float)FUN_100480492(puVar10);
                  local_6e0 = (long *)CONCAT44(local_6e0._4_4_,fVar27);
                  uVar18 = 0xffffff70;
                  if ((fVar27 != DAT_10070bcfc) || (NAN(fVar27) || NAN(DAT_10070bcfc))) {
                    if (*(char *)(local_708 + 0x14d48) == '\0') {
                      local_718 = (undefined4 *)((ulong)local_718 & 0xffffffff00000000);
                    }
                    else {
                      if ((*(short *)((long)plVar25 + 0x5a) != 0) &&
                         (*(short *)((long)plVar25 + 0x5a) == -1)) {
                        *(undefined2 *)((long)plVar25 + 0x5a) = 0;
                      }
                      fVar27 = (float)_log10f();
                      local_718 = (undefined4 *)CONCAT44(local_718._4_4_,fVar27 * DAT_100740ce0);
                    }
                    uVar9 = _log10f();
                    fVar27 = (float)uVar9 * DAT_100740ce0 + local_718._0_4_;
                    if (DAT_100747da0 <= fVar27) {
                      auVar28._0_4_ = (uint)fVar27 & _DAT_100700430;
                      auVar28._4_4_ = (uint)((ulong)uVar9 >> 0x20) & _UNK_100700434;
                      auVar28._8_4_ = (uint)extraout_XMM0_Qb & _UNK_100700438;
                      auVar28._12_4_ = (uint)((ulong)extraout_XMM0_Qb >> 0x20) & _UNK_10070043c;
                      auVar29._4_12_ = SUB1612(auVar28 | _DAT_100747d90,4);
                      auVar29._0_4_ = SUB164(auVar28 | _DAT_100747d90,0) + fVar27;
                      auVar28 = roundss(ZEXT416(0),auVar29,0xb);
                      uVar18 = (uint)auVar28._0_4_;
                    }
                  }
                  if (0x11 < (int)uVar18) {
                    uVar18 = 0x12;
                  }
                }
                local_724 = uVar18;
                FUN_10031ab0f(plVar25,&local_772,1);
                FUN_10053577f(local_772,&local_7a4,&local_7a0);
                if (local_7a4 < 0x6d703461) {
                  if (local_7a4 == 0x616c6163) {
                    local_758 = (long *)CONCAT44(local_758._4_4_,5);
                  }
                  else if (local_7a4 == 0x61756462) {
                    local_758 = (long *)CONCAT44(local_758._4_4_,(uint)(local_7a0 != 4) * 2 + 1);
                  }
                  else {
LAB_1003eb6c0:
                    iVar7 = FUN_1004e9858(plVar25,1);
                    uVar16 = 0;
                    if (iVar7 == 0x41494646) {
                      uVar16 = 6;
                    }
                    if (iVar7 == 0x57415645) {
                      uVar16 = 4;
                    }
                    local_758 = (long *)CONCAT44(local_758._4_4_,uVar16);
                  }
                }
                else if (local_7a4 == 0x6d706567) {
                  local_758 = (long *)CONCAT44(local_758._4_4_,1);
                }
                else {
                  if (local_7a4 != 0x6d703461) goto LAB_1003eb6c0;
                  local_758 = (long *)CONCAT44(local_758._4_4_,2);
                }
                uVar18 = FUN_10047f424(puVar10);
                if (*(int *)(puVar10[0x10] + 4) == 0) {
                  local_750 = 0;
                  uVar8 = 0;
                  local_6f8 = (long *)0x0;
                  iVar7 = 0;
                  local_6e0 = (long *)0x0;
                  local_718 = (undefined4 *)((ulong)local_718 & 0xffffffff00000000);
                  if (*(int *)(puVar10[0x10] + 8) != 0 || uVar18 != 0) goto LAB_1003eb767;
                }
                else {
LAB_1003eb767:
                  FUN_100241e02(&local_6d8,puVar10[0xb],0x82,0,0,0,0,0);
                  plVar1 = (long *)CONCAT26(uStack_6d2,CONCAT24(uStack_6d4,local_6d8));
                  local_738 = (long *)CONCAT17(uStack_6c9,
                                               CONCAT16(uStack_6ca,
                                                        CONCAT15(uStack_6cb,
                                                                 CONCAT14(uStack_6cc,
                                                                          CONCAT13(uStack_6cd,
                                                                                   CONCAT21(
                                                  uStack_6cf,uStack_6d0))))));
                  if (plVar1 == (long *)0x0) {
                    local_750 = 0;
                    local_6f8 = (long *)0x0;
                    iVar7 = 0;
                    local_6e0 = (long *)0x0;
                    iVar23 = 0;
                    uVar8 = 0;
                  }
                  else {
                    FUN_1002b3b9a(plVar25,&local_6d8);
                    local_248 = *(undefined8 *)(puVar10[0x10] + 4);
                    local_278 = 0;
                    uStack_274 = 0;
                    uStack_270 = 0;
                    uStack_26c = 0;
                    uStack_26a = 0;
                    uStack_268 = 0;
                    uStack_266 = 0;
                    local_240 = uVar18;
                    iVar5 = (**(code **)(*plVar1 + 0x98))(plVar1,3,&local_248,local_254);
                    local_750 = 0;
                    local_6f8 = (long *)0x0;
                    iVar7 = 0;
                    local_6e0 = (long *)0x0;
                    iVar23 = 0;
                    uVar8 = 0;
                    if (iVar5 == 0) {
                      iVar7 = *(int *)(puVar10[0x10] + 4);
                      iVar5 = *(int *)(puVar10[0x10] + 8);
                      iVar23 = 0;
                      if (CONCAT44(uStack_274,local_278) != 0) {
                        iVar23 = iVar7;
                      }
                      local_6e0 = (long *)(ulong)local_278;
                      if (iVar7 == 0) {
                        local_6e0 = (long *)0x0;
                        iVar23 = iVar7;
                      }
                      iVar7 = 0;
                      if (CONCAT26(uStack_26a,CONCAT24(uStack_26c,uStack_270)) != 0) {
                        iVar7 = iVar5;
                      }
                      local_6f8 = (long *)((ulong)CONCAT24(uStack_26c,uStack_270) & 0xffffffff);
                      if (iVar5 == 0) {
                        local_6f8 = (long *)0x0;
                        iVar7 = iVar5;
                      }
                      uVar8 = 0;
                      if (CONCAT62(uStack_266,uStack_268) != 0) {
                        uVar8 = uVar18;
                      }
                      local_750 = CONCAT62(uStack_266,uStack_268) & 0xffffffff;
                      if (uVar18 == 0) {
                        local_750 = 0;
                        uVar8 = uVar18;
                      }
                    }
                  }
                  local_718 = (undefined4 *)CONCAT44(local_718._4_4_,iVar23);
                  if (local_738 != (long *)0x0) {
                    LOCK();
                    plVar1 = local_738 + 1;
                    lVar11 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar11 == 0) {
                      (**(code **)(*local_738 + 0x10))(local_738);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                }
                local_738 = (long *)CONCAT44(local_738._4_4_,iVar7);
                FUN_1001c62d9(&local_238,0x200);
                FUN_100320fae(plVar25,&local_238,0x100,&local_79c);
                cVar4 = FUN_1002b16f5(plVar25);
                uVar9 = FUN_10047f358(puVar10);
                local_6ec = CONCAT31(local_6ec._1_3_,(char)uVar9);
                if (cVar4 == '\0') {
                  uVar16 = (undefined4)
                           CONCAT71((int7)((ulong)uVar9 >> 8),
                                    (*(byte *)((long)puVar10 + 0xc3) & 0x80) == 0);
                }
                else {
                  uVar16 = 0;
                }
                if ((short)local_788 != 2) {
                  FUN_1001c62d9(&local_6d8,0x22e);
                  local_6d8 = 0x5a2e0200;
                  uStack_6d4 = 0x1a5;
                  FUN_1003ed5f6((ulong)local_758 & 0xffffffff,&local_6bd);
                  local_6ba = 0x200;
                  local_6b8 = local_6b8 & 0xffffff00;
                  FUN_1003ed5f6((uint)local_718._0_4_ >> 8,&uStack_6d2);
                  uStack_6cc = (undefined1)((ulong)local_6e0 >> 0x10);
                  uStack_6cb = (undefined1)((ulong)local_6e0 >> 8);
                  uStack_6cf = 0;
                  uStack_6cd = (undefined1)((ulong)local_6e0 >> 0x18);
                  uStack_6ca = SUB81(local_6e0,0);
                  FUN_1003ed5f6((uint)local_738 >> 8,&uStack_6c9);
                  uStack_6c3 = (undefined1)((ulong)local_6f8 >> 0x10);
                  uStack_6c2 = (undefined1)((ulong)local_6f8 >> 8);
                  uStack_6c6 = 0;
                  uStack_6c4 = (undefined1)((ulong)local_6f8 >> 0x18);
                  uStack_6c1 = SUB81(local_6f8,0);
                  FUN_1003ed5f6(uVar8 >> 8,local_4b6);
                  local_4b0 = (undefined1)(local_750 >> 0x10);
                  local_4af = (undefined1)(local_750 >> 8);
                  local_4b3 = 0;
                  local_4b1 = (undefined1)(local_750 >> 0x18);
                  local_4ae = (undefined1)local_750;
                  FUN_1003ed5f6(local_724 & 0xffffff,local_6c0);
                  local_4ac = (undefined1)local_6ec;
                  local_4ad = (char)uVar16;
                  FUN_1001c631b(&local_238,(long)&local_6b8 + 1,0x200);
                  local_720 = 0x22e;
                  uVar18 = FUN_100160894(local_700,&local_720,&local_6d8);
                  uVar19 = (ulong)uVar18;
                  if (uVar18 != 0) {
                    if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
                    uVar9 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar4 == '\0') goto LAB_1003ebed8;
                    puVar20 = &local_278;
                    local_278 = 0x8220202;
                    uStack_274 = 0x7a0a90;
                    uStack_270 = 1;
                    uStack_26c = 0x400;
                    uStack_26a = (undefined2)uVar18;
                    uStack_268 = (undefined2)(uVar18 >> 0x10);
                    goto LAB_1003ec30b;
                  }
                  puVar21 = (undefined4 *)((long)local_768 + 1);
                  uVar19 = 0;
                  if (puVar21 == local_760) goto LAB_1003ebed8;
                  goto LAB_1003eb320;
                }
                local_750 = CONCAT44(local_750._4_4_,uVar16);
                if (((*(byte *)(plVar25 + 9) & 0x20) == 0) ||
                   (local_6e0 = (long *)FUN_1002af284(plVar25), local_6e0 == (long *)0x0)) {
                  uVar18 = 0;
                  local_6e0 = (long *)0x0;
                }
                else {
                  uVar18 = FUN_100176d97();
                }
                uVar15 = (ulong)uVar18;
                local_6f8 = (long *)(uVar15 * 4 + 0x174);
                puVar21 = (undefined4 *)FUN_1001c6429((ulong)local_6f8 & 0xffffffff);
                if (puVar21 == (undefined4 *)0x0) {
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 != '\0') {
                    local_6d8 = 0x8220202;
                    uStack_6d4 = 0xa90;
                    uStack_6d2 = 0x7a;
                    uStack_6d0 = 1;
                    uStack_6cf = 0;
                    uStack_6cd = 0;
                    uStack_6cc = 0x22;
                    uStack_6cb = 8;
                    uStack_6ca = 0x1c;
                    uStack_6c9 = 0xb3;
                    uStack_6c8 = 0x7c;
                    uStack_6c6 = 1;
                    uStack_6c4 = 0;
                    uStack_6c3 = 0;
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  goto LAB_1003ec7a0;
                }
                iVar7 = (uint)local_738;
                if ((uint)local_738 == 0) {
                  iVar7 = *(int *)((long)plVar25 + 100);
                }
                *puVar21 = 0x73687472;
                puVar21[1] = (int)local_6f8;
                puVar21[2] = local_718._0_4_;
                puVar21[3] = iVar7;
                puVar21[4] = local_724;
                puVar21[5] = local_758._0_4_;
                puVar21[0x46] = uVar8;
                *(char *)(puVar21 + 0x47) = (char)local_750;
                *(undefined1 *)((long)puVar21 + 0x11d) = (undefined1)local_6ec;
                *(byte *)((long)puVar21 + 0x11e) =
                     (byte)(*(uint *)((long)puVar10 + 0xc2) >> 0x11) & 1;
                uVar6 = 0;
                uVar16 = 0;
                if (puVar10[5] != 0) {
                  uVar16 = *(undefined4 *)(puVar10[5] + 0x18);
                }
                if (puVar10[8] != 0) {
                  uVar6 = *(undefined4 *)(puVar10[8] + 0x14);
                }
                puVar21[0x4e] = uVar16;
                puVar21[0x54] = uVar6;
                *(undefined2 *)(puVar21 + 0x4f) = *(undefined2 *)((long)puVar10 + 0x136);
                *(undefined2 *)((long)puVar21 + 0x13e) = *(undefined2 *)((long)puVar10 + 0x13a);
                *(undefined8 *)(puVar21 + 0x52) = *puVar10;
                if ((*(byte *)(plVar25 + 0x1c) & 1) != 0) {
                  *(undefined8 *)(puVar21 + 0x48) = *(undefined8 *)((long)plVar25 + 0xe4);
                  uVar9 = plVar25[0x1b];
                  *(long *)(puVar21 + 0x4a) = plVar25[0x1a];
                  *(undefined8 *)(puVar21 + 0x4c) = uVar9;
                }
                if ((*(long *)(plVar25[2] + 8) != 0) &&
                   ((iVar7 = FUN_1002b1325(plVar25), iVar7 == 0x41415820 || (iVar7 == 0x41412020))))
                {
                  puVar21[0x50] = *(undefined4 *)(plVar25[2] + 8);
                }
                uVar8 = FUN_1001e73f2(&local_238,local_79c,puVar21 + 6,0x100);
                uVar19 = (ulong)uVar8;
                if (uVar8 != 0) {
                  if (uVar8 == 0xffffff80) goto LAB_1003ebed8;
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 == '\0') goto LAB_1003ebed8;
                  puVar20 = &local_6d8;
                  local_6d8 = 0x8220202;
                  uStack_6d4 = 0xa90;
                  uStack_6d2 = 0x7a;
                  uStack_6d0 = 1;
                  uStack_6cf = 0;
                  uStack_6cd = 0;
                  uStack_6cc = 0;
                  uStack_6cb = 4;
                  uStack_6ca = (undefined1)uVar8;
                  uStack_6c9 = (undefined1)(uVar8 >> 8);
                  uStack_6c8 = (undefined2)(uVar8 >> 0x10);
                  goto LAB_1003ec30b;
                }
                if (uVar15 != 0) {
                  uVar19 = 0;
                  do {
                    uVar12 = uVar19 + 1;
                    iVar7 = FUN_100176e67(local_6e0,uVar12 & 0xffffffff,0x6e616d65);
                    if (iVar7 == -1) {
                      uVar18 = (uint)uVar19;
                      uVar15 = uVar19;
                      break;
                    }
                    puVar21[uVar19 + 0x5d] = iVar7;
                    uVar19 = uVar12;
                  } while (uVar15 != uVar12);
                  local_6f8 = (long *)(uVar15 * 4 + 0x174);
                  puVar21[1] = (int)local_6f8;
                  puVar21[0x51] = uVar18;
                }
                uVar18 = FUN_100160255(local_700,&local_278);
                uVar19 = (ulong)uVar18;
                if (uVar18 != 0) {
                  if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 == '\0') goto LAB_1003ebed8;
                  puVar20 = &local_6d8;
                  local_6d8 = 0x8220202;
                  uStack_6d4 = 0xa90;
                  uStack_6d2 = 0x7a;
                  uStack_6d0 = 1;
                  uStack_6cf = 0;
                  uStack_6cd = 0;
                  uStack_6cc = 0;
                  uStack_6cb = 4;
                  uStack_6ca = (undefined1)uVar18;
                  uStack_6c9 = (undefined1)(uVar18 >> 8);
                  uStack_6c8 = (undefined2)(uVar18 >> 0x10);
                  goto LAB_1003ec30b;
                }
                local_730[(long)local_768 + 5] = local_278;
                local_720 = (ulong)local_6f8 & 0xffffffff;
                uVar18 = FUN_100160894(local_700,&local_720,puVar21);
                uVar19 = (ulong)uVar18;
                FUN_1001c64c1(puVar21);
                FUN_100175848(local_6e0);
                if (uVar18 != 0) {
                  if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 == '\0') goto LAB_1003ebed8;
                  puVar20 = &local_6d8;
                  local_6d8 = 0x8220202;
                  uStack_6d4 = 0xa90;
                  uStack_6d2 = 0x7a;
                  uStack_6d0 = 1;
                  uStack_6cf = 0;
                  uStack_6cd = 0;
                  uStack_6cc = 0;
                  uStack_6cb = 4;
                  uStack_6ca = (undefined1)uVar18;
                  uStack_6c9 = (undefined1)(uVar18 >> 8);
                  uStack_6c8 = (undefined2)(uVar18 >> 0x10);
                  goto LAB_1003ec30b;
                }
              }
              puVar21 = (undefined4 *)((long)local_768 + 1);
            } while (puVar21 != local_760);
            uVar19 = 0;
            if ((short)local_788 != 2) goto LAB_1003ebed8;
            local_720 = local_740 & 0xffffffff;
            uVar18 = FUN_100160a0d(local_700,local_798,&local_720,local_730);
            uVar19 = (ulong)uVar18;
            if (uVar18 == 0xffffff80) goto LAB_1003ebed8;
            if (uVar18 == 0) {
              FUN_1001c64c1(local_730);
              goto LAB_1003ec46f;
            }
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 == '\0') goto LAB_1003ebed8;
            puVar20 = &local_6d8;
            local_6d8 = 0x8220202;
            uStack_6d4 = 0xa90;
            uStack_6d2 = 0x7a;
            uStack_6d0 = 1;
            uStack_6cf = 0;
            uStack_6cd = 0;
            uStack_6cc = 0;
            uStack_6cb = 4;
            uStack_6ca = (undefined1)uVar18;
            uStack_6c9 = (undefined1)(uVar18 >> 8);
            uStack_6c8 = (undefined2)(uVar18 >> 0x10);
          }
          else {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 == '\0') goto LAB_1003ebed8;
            puVar20 = &local_238;
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x400;
            local_22a = (char *)CONCAT44(local_22a._4_4_,uVar18);
          }
        }
LAB_1003ec30b:
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",puVar20,0x12);
        goto LAB_1003ebed8;
      }
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_6d8 = 0x8220202;
        uStack_6d4 = 0xa90;
        uStack_6d2 = 0x7a;
        uStack_6d0 = 1;
        uStack_6cf = 0;
        uStack_6cd = 0;
        uStack_6cc = 0x22;
        uStack_6cb = 8;
        uStack_6ca = 0xe1;
        uStack_6c9 = 0xb2;
        uStack_6c8 = 0x7c;
        uStack_6c6 = 1;
        uStack_6c4 = 0;
        uStack_6c3 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6d8,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  uVar19 = 0xffffffce;
LAB_1003ebed8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

