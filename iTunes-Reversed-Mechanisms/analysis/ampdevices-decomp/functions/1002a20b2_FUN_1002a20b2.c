// name: FUN_1002a20b2
// address: 1002a20b2

void FUN_1002a20b2(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  bool bVar18;
  ulong local_16f8;
  long *local_16e8;
  long *plStack_16e0;
  long local_16d0;
  int local_16c4;
  long local_16c0;
  undefined4 local_16b8;
  undefined4 uStack_16b4;
  undefined4 local_16b0;
  undefined2 uStack_16ac;
  undefined2 uStack_16aa;
  undefined2 uStack_16a8;
  undefined4 local_1698;
  char *local_1694;
  undefined2 local_168c;
  char *local_168a;
  int local_684;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1002a20ca;
  lVar12 = FUN_100108310();
  lVar12 = -lVar12;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2133;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a213b;
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a214b;
    cVar9 = _os_log_type_enabled(uVar13,0x10);
    if (cVar9 != '\0') {
      local_1698 = 0x8220202;
      local_1694 = "Assertion failure";
      local_168c = 0x822;
      local_168a = "params != nullptr";
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2bed;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1698,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a215c;
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2165;
    FUN_1001782e9(0,0);
    goto LAB_1002a2c65;
  }
  pcVar5 = *(code **)(*(long *)param_1[6] + 0x10);
  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a20ee;
  iVar10 = (*pcVar5)();
  if (iVar10 != 0) {
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a20f7;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a20ff;
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a210f;
    cVar9 = _os_log_type_enabled(uVar13,0x10);
    if (cVar9 != '\0') {
      local_1698 = 0x8220202;
      local_1694 = "Assertion failure";
      local_168c = 0x822;
      local_168a = "params->imageConvertCallbacks->OnDelayedActionBegin() == noErr";
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2b9c;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1698,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2120;
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2129;
    FUN_1001782e9(0,0);
    goto LAB_1002a2c65;
  }
  uVar13 = *param_1;
  puVar6 = (undefined8 *)param_1[1];
  plVar7 = (long *)param_1[6];
  lVar16 = param_1[2];
  uVar14 = (ulong)*(uint *)(param_1 + 3);
  uVar8 = param_1[4];
  uVar15 = *puVar6;
  uVar4 = *(undefined4 *)(puVar6 + 1);
  puVar3 = puVar6 + 2;
  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a21bc;
  iVar10 = FUN_100239ad2(uVar15,uVar4,0);
  if (iVar10 != -0x80) {
    if (iVar10 == 0) {
      if (puVar6[3] == 0) {
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2b13;
        uVar13 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2b1b;
        uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2b2b;
        cVar9 = _os_log_type_enabled(uVar13,0x10);
        if (cVar9 != '\0') {
          local_1698 = 0x8220202;
          local_1694 = "Assertion failure";
          local_168c = 0x822;
          local_168a = "imageConvertContext->thumbnailAppendBuffer != nullptr";
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2da8;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1698,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2b3c;
        (*(code *)PTR__objc_release_10082c7b0)(uVar13);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2b45;
        FUN_1001782e9(0,0);
        iVar10 = -0x32;
      }
      else {
        uVar15 = puVar6[4];
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a21fb;
        iVar10 = FUN_1001ceb24(uVar15,0x6f707470,1,uVar14,0);
        if (iVar10 != -0x80) {
          if (iVar10 == 0) {
LAB_1002a225e:
            if (uVar14 != 0) {
              local_16f8 = 1;
              do {
                local_16c0 = lVar16;
                if (*(char *)(lVar16 + 0xcf8) == '\x01') {
                  uVar4 = *(undefined4 *)(lVar16 + 0xcb4);
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a22ac;
                  lVar16 = FUN_1004983e2(uVar13,uVar4);
                  if (lVar16 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a232a;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2332;
                    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2342;
                    cVar9 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar9 != '\0') {
                      local_1698 = 0x8220202;
                      local_1694 = "Assertion failure";
                      local_168c = 0x822;
                      local_168a = "imageInfo != nullptr";
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a27ec;
                      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                          &local_1698,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2353;
                    (*(code *)PTR__objc_release_10082c7b0)(uVar15);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a235c;
                    FUN_1001782e9(0,0);
                  }
                  else {
                    local_16e8 = (long *)0x0;
                    plStack_16e0 = (long *)0x0;
                    lVar17 = local_16c0;
                    local_16d0 = lVar16;
                    if (*(char *)(lVar16 + 0xb2) == '\x01') {
                      cVar9 = *(char *)(lVar16 + 200);
                      if (cVar9 == '\0') {
                        lVar16 = local_16c0 + 0x10;
                        pcVar5 = *(code **)(*plVar7 + 0x38);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2435;
                        iVar10 = (*pcVar5)(plVar7,lVar16,&local_16e8);
                        plVar2 = plStack_16e0;
                        if ((iVar10 == 0) && (local_16e8 != (long *)0x0)) {
                          if (plStack_16e0 != (long *)0x0) {
                            LOCK();
                            plStack_16e0[1] = plStack_16e0[1] + 1;
                            UNLOCK();
                          }
                          pcVar5 = *(code **)(*local_16e8 + 0x88);
                          *(undefined8 *)(&stack0xffffffffffffffd0 + lVar12) = 0;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a275f;
                          local_16c4 = (*pcVar5)(local_16e8,0,0xfffff7ff,&local_1698,0,0);
                          if (local_16c4 != -0x80) {
                            if (local_16c4 == 0) {
                              *(uint *)(local_16d0 + 0xb4) = local_684 + (uint)(local_684 == 0);
                            }
                            else {
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a27f6;
                              uVar15 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a27fe;
                              uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a280e;
                              cVar9 = _os_log_type_enabled(uVar15,0x10);
                              if (cVar9 != '\0') {
                                local_16b8 = 0x8220202;
                                uStack_16b4 = 0x7a0a90;
                                local_16b0 = 1;
                                uStack_16ac = 0x400;
                                uStack_16aa = (undefined2)local_16c4;
                                uStack_16a8 = (undefined2)((uint)local_16c4 >> 0x10);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2a7c;
                                __os_log_error_impl(0x100000000,uVar15,0x10,
                                                    "%{public}s: err == (%d)");
                              }
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a281f;
                              (*(code *)PTR__objc_release_10082c7b0)(uVar15);
                            }
                          }
                          if (plVar2 != (long *)0x0) {
                            LOCK();
                            plVar1 = plVar2 + 1;
                            lVar17 = *plVar1;
                            *plVar1 = *plVar1 + -1;
                            UNLOCK();
                            if (lVar17 == 0) {
                              pcVar5 = *(code **)(*plVar2 + 0x10);
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2847;
                              (*pcVar5)(plVar2);
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a284f;
                              std::__shared_weak_count::__release_weak();
                            }
                          }
                          lVar17 = local_16c0;
                          if (local_16c4 != -0x80) {
                            if (local_16c4 == 0) {
                              pcVar5 = *(code **)(*plVar7 + 0x40);
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2875;
                              cVar9 = (*pcVar5)(plVar7,lVar16);
                              cVar9 = '\x02' - cVar9;
                              *(char *)(local_16d0 + 200) = cVar9;
                              goto LAB_1002a22eb;
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2890;
                            uVar15 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2898;
                            uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a28a8;
                            cVar9 = _os_log_type_enabled(uVar15,0x10);
                            if (cVar9 != '\0') {
                              local_1698 = 0x8220202;
                              local_1694 = "Assertion failure";
                              local_168c = 0x400;
                              local_168a = (char *)CONCAT44(local_168a._4_4_,local_16c4);
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2ad6;
                              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",
                                                  &local_1698);
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a28b9;
                            (*(code *)PTR__objc_release_10082c7b0)(uVar15);
                          }
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2442;
                          uVar15 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a244a;
                          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
LAB_1002a244a:
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a245a;
                          cVar9 = _os_log_type_enabled(uVar15,0x10);
                          if (cVar9 != '\0') {
                            local_1698 = 0x8220202;
                            local_1694 = "Assertion failure";
                            local_168c = 0x822;
                            local_168a = 
                            "legacyCallbacks->GetVideoFileSpecPlayerHandler(&imageConvertWorkItem->originalImageFileSpec, &videoPlayerHandler) == noErr && (videoPlayerHandler != nullptr)"
                            ;
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2971;
                            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                                &local_1698);
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a246b;
                          (*(code *)PTR__objc_release_10082c7b0)(uVar15);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2474;
                          FUN_1001782e9(0,0);
                        }
                        *(undefined1 *)(local_16c0 + 0xcfa) = 4;
                        lVar17 = local_16c0;
                        goto LAB_1002a2483;
                      }
LAB_1002a22eb:
                      if (cVar9 == '\x02') {
                        *(undefined4 *)(local_16d0 + 0xa4) = 0;
                      }
                      if (*(char *)(local_16d0 + 0x80) == '\x05') {
                        *(undefined1 *)(local_16d0 + 0x80) = 0;
                        iVar10 = 0;
                      }
                      else {
                        iVar10 = 0;
                        if ((*(char *)(local_16d0 + 0x80) != '\0') &&
                           (*(int *)(local_16d0 + 0xa4) != 0)) {
                          if (local_16e8 == (long *)0x0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2531;
                            uVar15 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2539;
                            uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2549;
                            cVar9 = _os_log_type_enabled(uVar15,0x10);
                            if (cVar9 != '\0') {
                              local_1698 = 0x8220202;
                              local_1694 = "Assertion failure";
                              local_168c = 0x822;
                              local_168a = "videoPlayerHandler != nullptr";
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2a22;
                              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)"
                                                 );
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a255a;
                            (*(code *)PTR__objc_release_10082c7b0)(uVar15);
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2563;
                            FUN_1001782e9(0,0);
                            lVar17 = local_16c0;
                            if (local_16e8 == (long *)0x0) {
                              pcVar5 = *(code **)(*plVar7 + 0x38);
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2592;
                              iVar10 = (*pcVar5)(plVar7,local_16c0 + 0x10,&local_16e8);
                              if (local_16e8 == (long *)0x0 || iVar10 != 0) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a25b4;
                                uVar15 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a25bc;
                                uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                                goto LAB_1002a244a;
                              }
                            }
                          }
                          goto LAB_1002a236a;
                        }
                      }
                    }
                    else {
LAB_1002a236a:
                      plVar2 = plStack_16e0;
                      local_16b8 = SUB84(local_16e8,0);
                      uStack_16b4 = (undefined4)((ulong)local_16e8 >> 0x20);
                      local_16b0 = SUB84(plStack_16e0,0);
                      uStack_16ac = (undefined2)((ulong)plStack_16e0 >> 0x20);
                      uStack_16aa = (undefined2)((ulong)plStack_16e0 >> 0x30);
                      if (plStack_16e0 != (long *)0x0) {
                        LOCK();
                        plStack_16e0[1] = plStack_16e0[1] + 1;
                        UNLOCK();
                      }
                      uVar15 = puVar6[4];
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a23a0;
                      iVar10 = FUN_1002a5300(puVar6,lVar17,&local_16b8,uVar15);
                      if (plVar2 != (long *)0x0) {
                        LOCK();
                        plVar1 = plVar2 + 1;
                        lVar16 = *plVar1;
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (lVar16 == 0) {
                          pcVar5 = *(code **)(*plVar2 + 0x10);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a23c3;
                          (*pcVar5)(plVar2);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a23cb;
                          std::__shared_weak_count::__release_weak();
                        }
                      }
                      if (iVar10 != -0x80) {
                        if (iVar10 != 0) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a23e3;
                          uVar15 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a23eb;
                          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a23fb;
                          cVar9 = _os_log_type_enabled(uVar15,0x10);
                          if (cVar9 != '\0') {
                            local_1698 = 0x8220202;
                            local_1694 = "Assertion failure";
                            local_168c = 0x400;
                            local_168a = (char *)CONCAT44(local_168a._4_4_,iVar10);
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2915;
                            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)");
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a240c;
                          (*(code *)PTR__objc_release_10082c7b0)(uVar15);
                          lVar17 = local_16c0;
                          if (iVar10 != 0) goto LAB_1002a25c1;
                        }
LAB_1002a2483:
                        *(undefined1 *)(lVar17 + 0xcf8) = 0;
                        uVar15 = *puVar3;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a24b2;
                        iVar11 = FUN_1002a7da8(local_16d0,lVar17,uVar15,uVar8);
                        iVar10 = 0;
                        if ((iVar11 != -0x80) && (iVar11 != 0)) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a24cf;
                          uVar15 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a24d7;
                          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a24e7;
                          cVar9 = _os_log_type_enabled(uVar15,0x10);
                          if (cVar9 != '\0') {
                            local_1698 = 0x8220202;
                            local_1694 = "Assertion failure";
                            local_168c = 0x400;
                            local_168a = (char *)CONCAT44(local_168a._4_4_,iVar11);
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a29c6;
                            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)");
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a24f8;
                          (*(code *)PTR__objc_release_10082c7b0)(uVar15);
                        }
                      }
                    }
LAB_1002a25c1:
                    if (plStack_16e0 != (long *)0x0) {
                      LOCK();
                      plVar2 = plStack_16e0 + 1;
                      lVar16 = *plVar2;
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (lVar16 == 0) {
                        pcVar5 = *(code **)(*plStack_16e0 + 0x10);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a25e8;
                        (*pcVar5)(plStack_16e0);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a25f0;
                        std::__shared_weak_count::__release_weak();
                      }
                    }
                    if (iVar10 != 0) {
                      if (iVar10 != -0x80) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2d2e;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2d36;
                        uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2d46;
                        cVar9 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar9 != '\0') {
                          local_1698 = 0x8220202;
                          local_1694 = "Assertion failure";
                          local_168c = 0x400;
                          local_168a = (char *)CONCAT44(local_168a._4_4_,iVar10);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2e3c;
                          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                              &local_1698,0x12);
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2d57;
                        (*(code *)PTR__objc_release_10082c7b0)(uVar13);
                      }
                      goto LAB_1002a2bf5;
                    }
                  }
                }
                uVar15 = puVar6[4];
                *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2619;
                iVar10 = FUN_1001ceb24(uVar15,0x6f707470,local_16f8,uVar14);
                if (iVar10 != 0) {
                  if ((iVar10 == -0x80) || (iVar10 == 0x2349)) goto LAB_1002a2bf5;
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2643;
                  uVar15 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a264b;
                  uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a265b;
                  cVar9 = _os_log_type_enabled(uVar15,0x10);
                  if (cVar9 != '\0') {
                    local_1698 = 0x8220202;
                    local_1694 = "Assertion failure";
                    local_168c = 0x400;
                    local_168a = (char *)CONCAT44(local_168a._4_4_,iVar10);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2703;
                    __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)");
                  }
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a266f;
                  (*(code *)PTR__objc_release_10082c7b0)(uVar15);
                  if (iVar10 != 0) goto LAB_1002a2bf5;
                }
                lVar16 = local_16c0 + 0xd38;
                bVar18 = local_16f8 != uVar14;
                local_16f8 = local_16f8 + 1;
              } while (bVar18);
            }
            iVar10 = 0;
          }
          else if (iVar10 != 0x2349) {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2225;
            uVar15 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a222d;
            uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a223d;
            cVar9 = _os_log_type_enabled(uVar15,0x10);
            if (cVar9 != '\0') {
              local_1698 = 0x8220202;
              local_1694 = "Assertion failure";
              local_168c = 0x400;
              local_168a = (char *)CONCAT44(local_168a._4_4_,iVar10);
              *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2df2;
              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_1698,0x12
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2255;
            (*(code *)PTR__objc_release_10082c7b0)(uVar15);
            if (iVar10 == 0) goto LAB_1002a225e;
          }
        }
      }
LAB_1002a2bf5:
      uVar13 = *puVar3;
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2c04;
      FUN_10023955c(uVar13);
      *puVar3 = 0;
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2ae0;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2ae8;
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2af8;
      cVar9 = _os_log_type_enabled(uVar13,0x10);
      if (cVar9 != '\0') {
        local_1698 = 0x8220202;
        local_1694 = "Assertion failure";
        local_168c = 0x400;
        local_168a = (char *)CONCAT44(local_168a._4_4_,iVar10);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2cd0;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_1698,0x12);
      }
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2b09;
      (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    }
    if ((iVar10 != -0x80) && (iVar10 != 0)) {
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2c22;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2c2a;
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2c3a;
      cVar9 = _os_log_type_enabled(uVar13,0x10);
      if (cVar9 != '\0') {
        local_1698 = 0x8220202;
        local_1694 = "Assertion failure";
        local_168c = 0x400;
        local_168a = (char *)CONCAT44(local_168a._4_4_,iVar10);
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2d1a;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_1698,0x12);
      }
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2c4b;
      (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    }
  }
  plVar7 = (long *)param_1[6];
  pcVar5 = *(code **)(*plVar7 + 0x18);
  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2c58;
  (*pcVar5)(plVar7,iVar10);
  pcVar5 = *(code **)(*(long *)param_1[6] + 0x28);
  *(undefined8 *)((long)&local_38 + lVar12) = 0x1002a2c65;
  (*pcVar5)();
LAB_1002a2c65:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar12) = &UNK_1002a2e46;
    ___stack_chk_fail();
  }
  return;
}

