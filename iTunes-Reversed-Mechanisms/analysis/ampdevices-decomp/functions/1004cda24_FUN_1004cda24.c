// name: FUN_1004cda24
// address: 1004cda24

ulong FUN_1004cda24(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  code *pcVar5;
  long lVar6;
  bool bVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  bool bVar23;
  ulong uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 local_1120 [80];
  long local_10d0;
  undefined8 local_10c8;
  int local_10bc;
  long local_10b8;
  long local_10b0;
  undefined4 *local_10a8;
  long local_10a0;
  long *local_1098;
  uint local_108c;
  undefined1 *local_1088;
  char local_107a;
  char local_1079;
  uint local_1078 [128];
  undefined1 local_e78 [512];
  undefined8 local_c78;
  undefined8 uStack_c70;
  long local_a78 [2];
  undefined1 local_a68 [496];
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  char *local_86a;
  undefined8 local_458;
  undefined4 uStack_450;
  ushort uStack_44c;
  undefined2 uStack_44a;
  undefined2 uStack_448;
  undefined4 uStack_446;
  long *local_438;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1004cda3c;
  auVar27 = FUN_100108310();
  plVar22 = auVar27._8_8_;
  lVar6 = -auVar27._0_8_;
  iVar12 = (int)param_2;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (iVar12 < 0x74646474) {
    if (iVar12 < 0x7464636c) {
      if (iVar12 == 0x74646164) {
        *(undefined2 *)(param_4 + 0x28) = 1;
        if (*(int *)(param_4 + 0x2c) != 0) {
          uVar21 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
          do {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce50c;
            FUN_1001ee7ac();
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce51e;
            FUN_1001727b4((int)DAT_100711ee8,uVar21,0);
          } while (*(int *)(param_4 + 0x2c) != 0);
        }
        uVar24 = 0;
        if (DAT_1008bfc00 != 0) {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce53d;
          FUN_1005fc3d8();
        }
        goto LAB_1004cf0df;
      }
      if (iVar12 == 0x7464634c) {
        uVar24 = 0;
        if ((*(char *)((long)plVar22 + 1) != '\x06') || (DAT_1008bfc10 != '\0')) goto LAB_1004cf0df;
        *(undefined1 *)(param_4 + 0x29) = 1;
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdc56;
        FUN_10032f0f2(local_a78);
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdc65;
        FUN_10032f0f2(local_a68);
        local_1088 = *(undefined1 **)(param_4 + 0x20);
        if ((local_1088[0x1bb0] & 1) != 0) {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdc89;
          lVar17 = FUN_1002796f8(1,0);
          if (lVar17 == 0) {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce9e3;
            uVar21 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce9f3;
            cVar9 = _os_log_type_enabled(uVar21,0x10);
            if (cVar9 != '\0') {
              local_458._0_4_ = 0x8220202;
              local_458._4_4_ = 0x7a0a90;
              uStack_450 = 1;
              uStack_44c = 0x822;
              uStack_44a = 0x6e46;
              uStack_448 = 0x7b;
              uStack_446 = 1;
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf15c;
              __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_458,0x16
                                 );
            }
            iVar12 = -0x32;
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cea0a;
            FUN_1001782e9(0,0);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdcad;
            iVar12 = FUN_100533411(1,0,1,&local_878);
            if (iVar12 == -0x80) goto LAB_1004cea27;
            if (iVar12 != 0) {
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdcc3;
              uVar21 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdcd3;
              cVar9 = _os_log_type_enabled(uVar21,0x10);
              if (cVar9 != '\0') {
                local_458._0_4_ = 0x8220202;
                local_458._4_4_ = 0x7a0a90;
                uStack_450 = 1;
                uStack_44c = 0x400;
                uStack_44a = (undefined2)iVar12;
                uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf1a6;
                __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: err == (%d)",&local_458,
                                    0x12);
              }
              if (iVar12 != 0) goto LAB_1004cea0a;
            }
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdced;
            lVar18 = FUN_1001a8610(lVar17 + 0x50);
            iVar12 = 0x1197;
            if ((lVar18 != 0) && (*(char *)(lVar17 + 0x1e) == '\0')) {
              local_1098 = (long *)(local_1088 + 0x2cb0);
LAB_1004cdd1a:
              local_c78 = 0;
              uStack_c70 = (long *)0x0;
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdd30;
              FUN_100626980(&local_458);
              uVar8 = uStack_450;
              uVar15 = local_458._4_4_;
              uVar16 = (undefined4)local_458;
              plVar22 = uStack_c70;
              uVar13 = CONCAT22(uStack_44a,uStack_44c);
              local_458._0_4_ = 0;
              local_458._4_4_ = 0;
              uStack_450 = 0;
              uStack_44c = 0;
              uStack_44a = 0;
              local_c78 = CONCAT44(uVar15,uVar16);
              uStack_c70 = (long *)CONCAT44(uVar13,uVar8);
              if (plVar22 != (long *)0x0) {
                LOCK();
                plVar1 = plVar22 + 1;
                lVar17 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  pcVar5 = *(code **)(*plVar22 + 0x10);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdd6f;
                  (*pcVar5)(plVar22);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdd77;
                  std::__shared_weak_count::__release_weak();
                }
              }
              plVar22 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,uStack_450));
              if (plVar22 != (long *)0x0) {
                LOCK();
                plVar1 = plVar22 + 1;
                lVar17 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  pcVar5 = *(code **)(*plVar22 + 0x10);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdd9e;
                  (*pcVar5)(plVar22);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdda6;
                  std::__shared_weak_count::__release_weak();
                }
              }
              lVar17 = local_c78;
              if (local_c78 == 0) {
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdfd5;
                uVar21 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdfe5;
                cVar9 = _os_log_type_enabled(uVar21,0x10);
                if (cVar9 != '\0') {
                  local_458._0_4_ = 0x8220202;
                  local_458._4_4_ = 0x7a0a90;
                  uStack_450 = 1;
                  uStack_44c = 0x822;
                  uStack_44a = 0x596d;
                  uStack_448 = 0x7d;
                  uStack_446 = 1;
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce357;
                  __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_458,
                                      0x16);
                }
                iVar12 = -0x6c;
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdffc;
                FUN_1001782e9(0,0);
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cddc7;
                uVar21 = FUN_10030806a(local_1088,1);
                *(undefined8 *)(lVar17 + 0x50) = uVar21;
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdddc;
                pvVar19 = operator_new__(0x50,(nothrow_t *)PTR_nothrow_10082c970);
                if (pvVar19 == (void *)0x0) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce006;
                  uVar21 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce016;
                  cVar9 = _os_log_type_enabled(uVar21,0x10);
                  if (cVar9 != '\0') {
                    local_458._0_4_ = 0x8220202;
                    local_458._4_4_ = 0x7a0a90;
                    uStack_450 = 1;
                    uStack_44c = 0x822;
                    uStack_44a = 0x597c;
                    uStack_448 = 0x7d;
                    uStack_446 = 1;
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce3b3;
                    __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",
                                        &local_458,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce027;
                  FUN_1001782e9(0,0);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce02c;
                  uVar21 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce03c;
                  cVar9 = _os_log_type_enabled(uVar21,0x10);
                  if (cVar9 != '\0') {
                    local_458._0_4_ = 0x8220202;
                    local_458._4_4_ = 0x7a0a90;
                    uStack_450 = 1;
                    uStack_44c = 0x822;
                    uStack_44a = 0x597c;
                    uStack_448 = 0x7d;
                    uStack_446 = 1;
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce40f;
                    __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",
                                        &local_458,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce04d;
                  FUN_1001782e9(0,0);
                  iVar12 = -0x6c;
                  lVar17 = 0;
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cddfc;
                  FUN_1001c631b(&PTR_s_extras_10085a6c0,pvVar19,0x50);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cde08;
                  uVar21 = FUN_1001e57c4("Extras.itdb");
                  *(undefined8 *)((long)pvVar19 + 8) = uVar21;
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cde18;
                  uVar21 = FUN_1001e57c4("Genius.itdb");
                  *(undefined8 *)((long)pvVar19 + 0x30) = uVar21;
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cde28;
                  lVar17 = FUN_1002796f8(1,0);
                  lVar17 = lVar17 + 0x50;
                  bVar23 = false;
                  lVar18 = 0;
                  do {
                    pcVar3 = *(char **)((long)pvVar19 + lVar18 * 0x28);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cde48;
                    iVar12 = _strcmp(pcVar3,"genius");
                    if (iVar12 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cde54;
                      lVar20 = FUN_1001a8610(lVar17);
                      if (lVar20 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cde61;
                        uVar21 = FUN_1001a8626(lVar17);
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cde6c;
                        uVar13 = FUN_1001a8610(lVar17);
                        local_1078[0] = 0x10;
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cde8e;
                        iVar12 = FUN_1000b1120(uVar21,uVar13,local_e78,local_1078);
                        if (iVar12 != 0) {
                          if (iVar12 != -0x80) {
                            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce06d;
                            uVar21 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce07d;
                            cVar9 = _os_log_type_enabled(uVar21,0x10);
                            if (cVar9 != '\0') {
                              local_458._0_4_ = 0x8220202;
                              local_458._4_4_ = 0x7a0a90;
                              uStack_450 = 1;
                              uStack_44c = 0x400;
                              uStack_44a = (undefined2)iVar12;
                              uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
                              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce464;
                              __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: err == (%d)",
                                                  &local_458,0x12);
                            }
                          }
                          lVar17 = 2;
                          goto LAB_1004ce106;
                        }
                        *(undefined1 **)((long)pvVar19 + lVar18 * 0x28 + 0x18) = local_e78;
                        *(ulong *)((long)pvVar19 + lVar18 * 0x28 + 0x20) = (ulong)local_1078[0];
                      }
                    }
                    lVar18 = 1;
                    bVar7 = !bVar23;
                    bVar23 = true;
                  } while (bVar7);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdee3;
                  iVar12 = FUN_100628c8c(local_c78,&DAT_10085a670,2);
                  lVar17 = 2;
                  if (iVar12 != -0x80) {
                    if (iVar12 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdf22;
                      iVar12 = FUN_1006293da(local_c78,pvVar19,2,&local_878,0x10,0);
                      if (iVar12 != -0x80) {
                        if (iVar12 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdf4a;
                          FUN_100203686(local_1098,&local_c78);
                          iVar14 = 0;
                          iVar12 = 0;
                          if (*(long *)(local_c78 + 0x1470) != 0) {
                            local_10a0 = *(long *)(local_c78 + 0x1468);
                            lVar18 = *(long *)(local_c78 + 0x1478);
                            iVar12 = iVar14;
                            if (local_10a0 != 0 && lVar18 != 0) {
                              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdfab;
                              iVar14 = FUN_10053391c(1,&local_878,0,&local_458,0);
                              if (iVar14 == 0) {
                                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdfcb;
                                FUN_10018cc9a(&local_458,lVar18,local_10a0,0);
                              }
                            }
                          }
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce0ee;
                          uVar21 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce0fe;
                          cVar9 = _os_log_type_enabled(uVar21,0x10);
                          if (cVar9 != '\0') {
                            uStack_44a = (undefined2)iVar12;
                            uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
                            goto LAB_1004ce4a7;
                          }
                        }
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce092;
                      uVar21 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce0a2;
                      cVar9 = _os_log_type_enabled(uVar21,0x10);
                      if (cVar9 != '\0') {
                        uStack_44a = (undefined2)iVar12;
                        uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
LAB_1004ce4a7:
                        uStack_44c = 0x400;
                        uStack_450 = 1;
                        local_458._4_4_ = 0x7a0a90;
                        local_458._0_4_ = 0x8220202;
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce4b9;
                        __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: err == (%d)",
                                            &local_458);
                      }
                    }
                  }
                }
LAB_1004ce106:
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce117;
                FUN_1001c62d9(local_e78,0x10);
                if ((iVar12 != 0) && (local_c78 != 0)) {
                  local_458._0_4_ = 0;
                  local_458._4_4_ = 0;
                  uStack_450 = 0;
                  uStack_44c = 0;
                  uStack_44a = 0;
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce143;
                  FUN_100217418(local_1098,&local_458);
                  plVar22 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,uStack_450));
                  if (plVar22 != (long *)0x0) {
                    LOCK();
                    plVar1 = plVar22 + 1;
                    lVar18 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar18 == 0) {
                      pcVar5 = *(code **)(*plVar22 + 0x10);
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce16b;
                      (*pcVar5)(plVar22);
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce173;
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                }
                if (pvVar19 != (void *)0x0) {
                  puVar25 = (undefined8 *)((long)pvVar19 + 8);
                  do {
                    pvVar4 = (void *)*puVar25;
                    if (pvVar4 != (void *)0x0) {
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce18f;
                      _free(pvVar4);
                    }
                    puVar25 = puVar25 + 5;
                    lVar17 = lVar17 + -1;
                  } while (lVar17 != 0);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce1a0;
                  operator_delete__(pvVar19);
                }
                *(int *)(local_1088 + 0x2cc0) = iVar12;
              }
              if (uStack_c70 != (long *)0x0) {
                LOCK();
                plVar22 = uStack_c70 + 1;
                lVar17 = *plVar22;
                *plVar22 = *plVar22 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  pcVar5 = *(code **)(*uStack_c70 + 0x10);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce1d8;
                  (*pcVar5)(uStack_c70);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce1e0;
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (iVar12 != 0) {
                if (iVar12 == -0x80) goto LAB_1004cea27;
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce1f4;
                uVar21 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce204;
                cVar9 = _os_log_type_enabled(uVar21,0x10);
                if (cVar9 != '\0') {
                  local_458._0_4_ = 0x8220202;
                  local_458._4_4_ = 0x7a0a90;
                  uStack_450 = 1;
                  uStack_44c = 0x400;
                  uStack_44a = (undefined2)iVar12;
                  uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce2fb;
                  __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: err == (%d)",&local_458);
                }
                if (iVar12 != 0) goto LAB_1004cea0a;
              }
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce223;
              iVar12 = FUN_1003694bc(local_1088,0);
              if ((iVar12 != 0x32e2) && (iVar12 != 0x32d3)) goto LAB_1004cea27;
              lVar17 = *local_1098;
              if (lVar17 != 0) {
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce252;
                FUN_100626be2(lVar17,1);
                local_458._0_4_ = 0;
                local_458._4_4_ = 0;
                uStack_450 = 0;
                uStack_44c = 0;
                uStack_44a = 0;
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce26f;
                FUN_100217418(local_1098,&local_458);
                plVar22 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,uStack_450));
                if (plVar22 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar22 + 1;
                  lVar17 = *plVar1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (lVar17 == 0) {
                    pcVar5 = *(code **)(*plVar22 + 0x10);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce29e;
                    (*pcVar5)(plVar22);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce2a6;
                    std::__shared_weak_count::__release_weak();
                  }
                }
              }
              goto LAB_1004cdd1a;
            }
          }
LAB_1004cea0a:
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cea0f;
          uVar21 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cea1f;
          cVar9 = _os_log_type_enabled(uVar21,0x10);
          if (cVar9 != '\0') {
            local_458._0_4_ = 0x8220202;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44c = 0x400;
            uStack_44a = (undefined2)iVar12;
            uStack_448 = (undefined2)((uint)iVar12 >> 0x10);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ced73;
            __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: err == (%d)",&local_458,0x12);
          }
        }
LAB_1004cea27:
        uVar24 = 0;
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cea3c;
        FUN_100533007(FUN_10053310d,0,0,0);
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cea44;
        FUN_1001a8fac(local_a68);
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cea50;
        FUN_1001a8fac(local_a78);
        DAT_1008bfc10 = '\x01';
        goto LAB_1004cf0df;
      }
    }
    else {
      if (iVar12 == 0x7464636c) {
        uVar24 = 0;
        if (*(long *)(param_4 + 0x20) != 0) {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce58c;
          FUN_10036965e();
          local_458._0_4_ = 0;
          local_458._4_4_ = 0;
          uStack_450 = 0;
          uStack_44c = 0;
          uStack_44a = 0;
          lVar17 = *(long *)(param_4 + 0x20);
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce5aa;
          FUN_100217418(lVar17 + 0x2cb0,&local_458);
          plVar22 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,uStack_450));
          if (plVar22 != (long *)0x0) {
            LOCK();
            plVar1 = plVar22 + 1;
            lVar17 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar17 == 0) {
              pcVar5 = *(code **)(*plVar22 + 0x10);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce5ce;
              (*pcVar5)(plVar22);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce5d6;
              std::__shared_weak_count::__release_weak();
            }
          }
          *(undefined4 *)(*(long *)(param_4 + 0x20) + 0x2cc0) = 0;
          *(undefined8 *)(param_4 + 0x20) = 0;
        }
        goto LAB_1004cf0df;
      }
      if (iVar12 == 0x7464636f) {
        *(undefined1 *)(plVar22 + 2) = 1;
        uVar24 = 0;
        if ((*(byte *)(param_1 + 0x1bb0) & 1) != 0) {
          lVar17 = *plVar22;
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce642;
          cVar9 = FUN_10027be37((char)lVar17);
          uVar24 = 0;
          if (cVar9 != '\0') {
            lVar17 = *plVar22;
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce664;
            uVar15 = FUN_10032046f(param_1,(char)lVar17,1,&local_458,0);
            uVar24 = (ulong)uVar15;
            if (uVar15 != 0xffffff80) {
              if (uVar15 == 0) {
                lVar17 = plVar22[1];
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce689;
                cVar9 = FUN_100183bb2(&local_458,lVar17);
                if (cVar9 == '\0') {
                  *(undefined1 *)(plVar22 + 2) = 0;
                }
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce964;
                uVar21 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce974;
                cVar9 = _os_log_type_enabled(uVar21,0x10);
                if (cVar9 != '\0') {
                  local_878 = 0x8220202;
                  local_874 = "Assertion failure";
                  local_86c = 0x400;
                  local_86a = (char *)CONCAT44(local_86a._4_4_,uVar15);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce9c1;
                  __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: err == (%d)",&local_878,
                                      0x12);
                }
              }
            }
          }
        }
        goto LAB_1004cf0df;
      }
      if (iVar12 == 0x74646466) {
        lVar17 = plVar22[1];
        if (((lVar17 == 0) || (*(long *)(lVar17 + 8) == 0)) ||
           (*(long *)(*(long *)(lVar17 + 8) + 0x10) == 0)) {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce822;
          uVar21 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce832;
          cVar9 = _os_log_type_enabled(uVar21,0x10);
          if (cVar9 != '\0') {
            local_458._0_4_ = 0x8220202;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44c = 0x822;
            uStack_44a = 0x8f12;
            uStack_448 = 0x7b;
            uStack_446 = 1;
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceaa8;
            __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce846;
          FUN_1001782e9(0,0);
          uVar24 = 0;
          goto LAB_1004cf0df;
        }
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdad7;
        FUN_1003c3248(lVar17,1,0,0,0,0);
        if ((*(uint *)(lVar17 + 0x48) & 0x300) == 0x100) {
          local_458._0_4_ = 0;
          local_458._4_4_ = 0;
          uStack_450 = 0;
          uStack_44c = 0;
          uStack_44a = 0;
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdb07;
          FUN_10031f08e(lVar17,0,&local_458,0,0,0);
        }
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdb0f;
        cVar9 = FUN_10044b0bd(lVar17);
        if (cVar9 != '\0') {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdb22;
          iVar12 = FUN_1002b4324(lVar17,&local_458);
          if (iVar12 == 0) {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdb32;
            FUN_10018e077(&local_458);
          }
        }
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdb3c;
        FUN_10031ad67(lVar17,0);
      }
    }
  }
  else {
    if (0x74646c63 < iVar12) {
      if (iVar12 == 0x7464756c) {
        if (*(int *)(*plVar22 + 0x3c) != 0x46494c45) {
          uVar24 = FUN_100318904(param_1,0x7464756c,plVar22);
          return uVar24;
        }
        uVar24 = FUN_100537450(*plVar22,0,0);
        return uVar24;
      }
      if (iVar12 == 0x7464706c) {
        lVar17 = *plVar22;
        if (((lVar17 == 0) || (lVar18 = *(long *)(lVar17 + 8), lVar18 == 0)) ||
           (lVar20 = *(long *)(lVar18 + 0x10), lVar20 == 0)) {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce850;
          uVar21 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce860;
          cVar9 = _os_log_type_enabled(uVar21,0x10);
          if (cVar9 != '\0') {
            local_458._0_4_ = 0x8220202;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44c = 0x822;
            uStack_44a = 0x8d38;
            uStack_448 = 0x7b;
            uStack_446 = 1;
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceaf9;
            __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce871;
          FUN_1001782e9(0,0);
          uVar24 = 0xffffffce;
          goto LAB_1004cf0df;
        }
        uVar15 = *(uint *)(lVar17 + 0x48);
        uVar24 = 0;
        if ((uVar15 & 1) != 0) goto LAB_1004cf0df;
        uVar26 = *(uint *)(plVar22 + 1);
        if ((((uVar26 & 2) != 0) && (*(char *)(lVar17 + 0x44) != '\x01')) &&
           ((*(byte *)(lVar20 + 0x1bb0) & 1) != 0)) {
          uVar2 = uVar26 & 0xfffffffd;
          if ((*(byte *)(lVar18 + 0xd4) & 8) == 0) {
            uVar2 = uVar26;
          }
          if ((uVar15 & 0x20) == 0) {
            uVar26 = uVar2;
          }
        }
        *(uint *)(lVar17 + 0x48) = uVar15 | 1;
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce710;
        FUN_1002ae6f7(lVar17);
        if (*(int *)(lVar17 + 0x3c) == 0x46494c45) {
          cVar9 = *(char *)(lVar17 + 0x44);
          local_1088 = (undefined1 *)plVar22[3];
          local_1098 = (long *)plVar22[4];
          local_10a0 = CONCAT71(local_10a0._1_7_,cVar9);
          if (((uVar26 & 0x40) != 0) &&
             (local_1098 != (long *)0x0 || local_1088 != (undefined1 *)0x0)) {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce75b;
            uVar21 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce76b;
            cVar9 = _os_log_type_enabled(uVar21,0x10);
            if (cVar9 != '\0') {
              local_878 = 0x8220202;
              local_874 = "Assertion failure";
              local_86c = 0x822;
              local_86a = "fileNamePtr == nullptr && fileInfoPtr == nullptr";
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf1f7;
              __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_878,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce77c;
            FUN_1001782e9(0,0);
            cVar9 = *(char *)(lVar17 + 0x44);
          }
          local_108c = CONCAT31((int3)(uVar26 >> 8),(byte)uVar26 >> 3) & 0xffffff01;
          if (local_1088 == (undefined1 *)0x0) {
            local_1088 = local_1120;
          }
          if (cVar9 == '\x01') {
LAB_1004ce7c7:
            if (((local_1098 != (long *)0x0) || ((uVar26 & 0x40) == 0)) ||
               (local_1088 != local_1120)) {
              uVar21 = *(undefined8 *)(lVar17 + 0x80);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceb11;
              iVar12 = FUN_10017d477(uVar21,local_1088,local_1098);
              if (iVar12 == 0) {
                uVar21 = *(undefined8 *)(lVar17 + 0x80);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cebaa;
                uVar13 = FUN_100189e40(uVar21);
                *(undefined4 *)(*(long *)(lVar17 + 0x80) + 0x430) = uVar13;
                lVar18 = *(long *)(lVar17 + 0x80);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cebc9;
                FUN_100536603(local_1088,lVar18);
                if ((uVar26 & 2) == 0) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cebe9;
                  FUN_10030ceed(lVar17,local_1088,uVar26 >> 6 & 2,0);
                }
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cebf1;
                cVar9 = FUN_1004cf445(lVar17);
                uVar15 = 1;
                if (cVar9 == '\0') {
                  uVar15 = local_108c & 0xff;
                }
                local_108c = uVar15;
                bVar10 = *(byte *)(lVar17 + 0x44);
                if (bVar10 != 1) goto LAB_1004cec14;
                goto LAB_1004ce7f6;
              }
              *(undefined1 *)(lVar17 + 0x44) = 3;
              goto LAB_1004cec45;
            }
LAB_1004ce7f6:
            lVar18 = plVar22[2];
            if (lVar18 != 0) {
              uVar21 = *(undefined8 *)(lVar17 + 0x80);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce814;
              FUN_1001c631b(uVar21,lVar18,0x420);
              bVar10 = *(byte *)(lVar17 + 0x44);
              goto LAB_1004cec14;
            }
            if (((uVar26 & 4) == 0) && ((char)local_108c != '\0')) {
              local_10a8 = (undefined4 *)0x0;
              uVar24 = 0;
              goto LAB_1004cf088;
            }
            uVar24 = 0;
            if (((byte)local_10a0 & 0xfe) != 2) goto LAB_1004cf0da;
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cedac;
            FUN_1002b532a(lVar17,0xf);
            uVar24 = 0;
LAB_1004cf0d2:
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf0da;
            FUN_1002b48e9(lVar17);
          }
          else {
            uVar21 = *(undefined8 *)(lVar17 + 0x80);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce7bb;
            FUN_10017cbfd(uVar21);
            bVar10 = *(byte *)(lVar17 + 0x44);
            if (bVar10 == 1) goto LAB_1004ce7c7;
LAB_1004cec14:
            if ((bVar10 == 0) || (bVar10 == 3)) {
LAB_1004cec45:
              local_107a = '\0';
              local_1079 = '\0';
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cec67;
              iVar12 = FUN_10031fe30(lVar17,&local_458,0);
              local_10a8 = (undefined4 *)(undefined8 *)0x0;
              if (iVar12 == 0) {
                local_10a8 = (undefined4 *)&local_458;
              }
              uVar21 = *(undefined8 *)(lVar17 + 0x80);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cec8c;
              uVar15 = FUN_1004cf4a5(lVar17,local_10a8,uVar21,&local_1079);
              uVar24 = (ulong)uVar15;
              if (uVar15 == 0) goto LAB_1004cef87;
              if ((uVar26 >> 8 & 1) == 0) {
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cecb1;
                FUN_1002b486a(local_a78,lVar17);
                if (local_a78[0] == 0) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ced84;
                  FUN_1001a85d4(local_a78);
                  uVar24 = 0xffffffd5;
                  goto LAB_1004cedc9;
                }
                uVar21 = *(undefined8 *)(lVar17 + 0x80);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cecdd;
                uVar15 = FUN_100170286(local_a78[0],uVar21,uVar26 & 1,&local_107a,0);
                uVar24 = (ulong)uVar15;
                if ((uVar15 == 0) && (local_107a == '\0')) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ced12;
                  iVar12 = FUN_1004cf4a5(lVar17,local_10a8,&local_878,&local_1079);
                  if (iVar12 != 0) {
                    local_1079 = '\x01';
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ced29;
                  FUN_1001a85d4(local_a78);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cedc0;
                  FUN_1001a85d4(local_a78);
                  if (uVar15 != 0) goto LAB_1004cedc9;
                }
LAB_1004cef87:
                uVar21 = *(undefined8 *)(lVar17 + 0x80);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cefa1;
                uVar15 = FUN_10017d477(uVar21,local_1088,local_1098);
                uVar24 = (ulong)uVar15;
                if (uVar15 != 0) goto LAB_1004cefa8;
                uVar21 = *(undefined8 *)(lVar17 + 0x80);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cefea;
                uVar13 = FUN_100189e40(uVar21);
                *(undefined4 *)(*(long *)(lVar17 + 0x80) + 0x430) = uVar13;
                lVar18 = *(long *)(lVar17 + 0x80);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf009;
                uVar21 = FUN_100536603(local_1088,lVar18);
                *(undefined1 *)(lVar17 + 0x44) = 1;
                if ((uVar26 & 2) == 0) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf02e;
                  uVar21 = FUN_10030ceed(lVar17,local_1088,uVar26 >> 6 & 2,0);
                }
                if ((local_107a == '\0') && (local_1079 == '\0')) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf048;
                  uVar21 = FUN_1004cf445(lVar17);
                  if ((char)uVar21 != '\0') goto LAB_1004cf04c;
                }
                else {
LAB_1004cf04c:
                  local_108c = (uint)CONCAT71((int7)((ulong)uVar21 >> 8),1);
                }
                lVar18 = plVar22[2];
                uVar24 = 0;
                if (lVar18 != 0) {
                  uVar21 = *(undefined8 *)(lVar17 + 0x80);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf071;
                  FUN_1001c631b(uVar21,lVar18,0x420);
                }
              }
              else {
LAB_1004cedc9:
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cedd1;
                uVar11 = FUN_1002b458b(lVar17);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceddc;
                cVar9 = FUN_1004d5f83(lVar20,uVar11);
                if ((cVar9 == '\x01') && (uVar24 = 0xffffffd5, *(long *)(lVar17 + 0x98) != 0)) {
                  lVar18 = *(long *)(lVar17 + 8);
                  local_10c8 = *(undefined8 *)(lVar17 + 0x80);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cee20;
                  iVar12 = FUN_1002b3f68(lVar17,&local_10d0,&local_10bc);
                  if ((local_10bc != 0 && local_10d0 != 0) && iVar12 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cee67;
                    local_10b8 = FUN_10017444a(DAT_1008c4d90,local_10d0,local_10bc,0x8000100,0);
                    if (local_10b8 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cee83;
                      local_10b0 = FUN_1001749dd();
                      if (local_10b0 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf208;
                        FUN_10017060f(local_10b8);
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceea7;
                        FUN_100476928(lVar18,local_e78);
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceeb6;
                        FUN_1004779ac(lVar18,&local_878);
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceec5;
                        FUN_1004772c4(lVar18,local_a78);
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceed7;
                        FUN_10047dc87(lVar18,&local_c78);
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceeea;
                        FUN_1001e115f(local_10b0,local_1078);
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceef4;
                        uVar16 = FUN_1004744bf(lVar18,0);
                        uVar13 = *(undefined4 *)(*(long *)(lVar18 + 0x78) + 0xc);
                        uVar15 = *(uint *)(lVar18 + 0xc2);
                        uVar2 = *(uint *)(lVar17 + 0x48);
                        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar6) = local_10c8;
                        *(uint *)(&stack0xffffffffffffffe8 + lVar6) = uVar2 >> 0x13 & 1;
                        *(uint *)(&stack0xffffffffffffffe0 + lVar6) = uVar15 >> 10 & 1;
                        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar6) = uVar13;
                        *(undefined8 **)(&stack0xffffffffffffffd0 + lVar6) = &local_c78;
                        *(undefined4 *)(&stack0xfffffffffffffff0 + lVar6) = 1;
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cef60;
                        uVar15 = FUN_100533cd0(local_10a8,uVar16,local_e78,local_1078,&local_878,
                                               local_a78);
                        uVar24 = (ulong)uVar15;
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cef6f;
                        FUN_10017060f(local_10b0);
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cef7b;
                        FUN_10017060f(local_10b8);
                        if (uVar15 == 0) {
                          local_1079 = '\x01';
                          goto LAB_1004cef87;
                        }
                      }
                    }
                  }
                }
LAB_1004cefa8:
                if ((*(char *)(lVar17 + 0x45) == '\0') && (*(char *)(lVar17 + 0x44) != '\x02')) {
                  *(undefined1 *)(lVar17 + 0x44) = 2;
                  if ((byte)local_10a0 == '\x01') {
                    uVar21 = *(undefined8 *)(lVar17 + 8);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cefd9;
                    FUN_1002fef76(uVar21);
                  }
                }
              }
              bVar10 = *(byte *)(lVar17 + 0x44);
            }
            else {
              local_10a8 = (undefined4 *)0x0;
              if (bVar10 == 2) {
                uVar24 = 0;
                if ((uVar26 & 0x11) != 0) goto LAB_1004cec45;
              }
              else {
                uVar24 = 0;
              }
            }
            if ((((uVar26 & 4) == 0) && ((char)local_108c != '\0')) && (bVar10 == 1)) {
LAB_1004cf088:
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf09e;
              FUN_100537450(lVar17,local_1088,local_10a8);
              bVar10 = *(byte *)(lVar17 + 0x44);
            }
            if ((((byte)local_10a0 & 0xfe) != 2) == ((bVar10 & 0xfe) == 2)) {
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf0ce;
              FUN_1002b532a(lVar17,0xf);
              if ((bVar10 & 0xfe) != 2) goto LAB_1004cf0d2;
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce9d6;
          uVar15 = FUN_100318904(lVar20,0x7464706c,plVar22);
          uVar24 = (ulong)uVar15;
        }
LAB_1004cf0da:
        *(byte *)(lVar17 + 0x48) = *(byte *)(lVar17 + 0x48) & 0xfe;
        goto LAB_1004cf0df;
      }
      if (iVar12 != 0x74646c64) goto LAB_1004ce561;
      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdb7d;
      bVar10 = FUN_10031b8dc(param_1);
      if (DAT_1008bfc00 == 0) {
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce8ac;
        uVar21 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce8bc;
        cVar9 = _os_log_type_enabled(uVar21,0x10);
        if (cVar9 != '\0') {
          local_458._0_4_ = 0x8220202;
          local_458._4_4_ = 0x7a0a90;
          uStack_450 = 1;
          uStack_44c = 0x822;
          uStack_44a = 0x58c1;
          uStack_448 = 0x7d;
          uStack_446 = 1;
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ceb6f;
          __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce8cd;
        FUN_1001782e9(0,0);
        uVar24 = 0x234f;
        goto LAB_1004cf0df;
      }
      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdb9c;
      FUN_100319a94(param_1,4,0);
      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdba8;
      FUN_10032f0f2(&local_878);
      uStack_450 = *(undefined4 *)(param_1 + 0x88);
      local_458._0_4_ = 0x85e830;
      local_458._4_4_ = 1;
      uStack_44c = (ushort)bVar10;
      uStack_44a = 0;
      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cdbeb;
      local_438 = &local_458;
      uVar15 = FUN_1005fc148(DAT_1008bfc00,&local_878,&local_458);
      uVar24 = (ulong)uVar15;
      if (local_438 == &local_458) {
        lVar17 = 0x20;
LAB_1004ce8dd:
        pcVar5 = *(code **)(*local_438 + lVar17);
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce8e3;
        (*pcVar5)();
      }
      else {
        lVar17 = 0x28;
        if (local_438 != (long *)0x0) goto LAB_1004ce8dd;
      }
      if (uVar15 != 0) {
        if (DAT_1008c7d20 != -1) {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004cf220;
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar21 = DAT_1008c7d18;
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce90a;
        cVar9 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        if (cVar9 != '\0') {
          local_458._0_4_ = 0x4000100;
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce941;
          local_458._4_4_ = uVar15;
          __os_log_impl(0x100000000,uVar21,0x10,
                        "**ERROR**: StartLoadingDatabaseItems() failed! error:%d",&local_458,8);
        }
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce94e;
        FUN_100319a94(param_1,bVar10,uVar15);
      }
      *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce95a;
      FUN_1001a8fac(&local_878);
      goto LAB_1004cf0df;
    }
    if (iVar12 == 0x74646474) {
      lVar17 = *(long *)(param_1 + 0x2cb0);
      if (lVar17 != 0) {
        lVar18 = *plVar22;
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce556;
        uVar15 = FUN_10062aada(lVar17,lVar18);
        uVar24 = (ulong)uVar15;
        if (uVar15 != 0) goto LAB_1004cf0df;
      }
    }
    else if ((iVar12 == 0x74646773) && ((int)*plVar22 == 0x6e706c79)) {
      *(int *)(plVar22 + 1) = 1;
      uVar24 = 0;
      goto LAB_1004cf0df;
    }
  }
LAB_1004ce561:
  *(undefined8 *)((long)&local_38 + lVar6) = 0x1004ce56f;
  uVar15 = FUN_100318904(param_1,param_2 & 0xffffffff,plVar22);
  uVar24 = (ulong)uVar15;
LAB_1004cf0df:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar24;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar6) = &UNK_1004cf22a;
  ___stack_chk_fail();
}

