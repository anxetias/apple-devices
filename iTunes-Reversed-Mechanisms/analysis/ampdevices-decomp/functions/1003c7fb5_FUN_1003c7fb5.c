// name: FUN_1003c7fb5
// address: 1003c7fb5

undefined8 FUN_1003c7fb5(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  ulong *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined1 local_f58 [16];
  char *local_f48;
  long local_f40;
  long *local_f38;
  long local_f30;
  long local_f28;
  undefined1 local_f19;
  ulong local_f18;
  long local_f10;
  undefined8 local_f08;
  undefined4 local_f00;
  undefined2 uStack_efc;
  undefined2 uStack_efa;
  undefined2 uStack_ef8;
  undefined6 uStack_ef6;
  undefined4 local_ae8;
  undefined8 local_ae4;
  undefined4 local_a98;
  char *local_a94;
  undefined2 local_a8c;
  char *local_a8a;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  char *local_66a;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003c80cc:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_f10 = param_1;
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_478 = 0x8220202;
        local_474 = "Assertion failure (expected to be true)";
        local_46c = 0x822;
        local_46a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003c80cc;
    }
    if (((*(char *)(local_f10 + 0x37c) != '\0') || (*(char *)(local_f10 + 0x38e) != '\0')) ||
       (*(char *)(local_f10 + 0x39c) != '\0')) {
      if (*(long *)(local_f10 + 0x30) == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x822;
          local_46a = "trackData != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
        }
        uVar5 = 0;
        FUN_1001782e9(0,0);
        goto LAB_1003c9732;
      }
      local_f28 = *(long *)(local_f10 + 0x30);
      FUN_100313e0b();
      local_f19 = FUN_10031b8dc(local_f28);
      FUN_100319a94(local_f28,4,0);
      *(int *)(local_f10 + 0x166d0) = *(int *)(local_f10 + 0x166d0) + 1;
      lVar6 = FUN_1002f930c(local_f28);
      while( true ) {
        if (lVar6 == 0) break;
        *(uint *)(lVar6 + 0xc2) =
             *(uint *)(lVar6 + 0xc2) & 0xfffffeff | *(uint *)(lVar6 + 0xc2) >> 0x17 & 0x100;
        lVar6 = FUN_1002f9451(lVar6);
      }
      local_f08 = (undefined4 *)CONCAT44(local_f08._4_4_,(undefined4)local_f08);
      if ((*(char *)(local_f10 + 0x39c) != '\0') &&
         (local_f08 = (undefined4 *)CONCAT44(local_f08._4_4_,(undefined4)local_f08),
         (*(byte *)(local_f28 + 0x2be0) & 0x20) == 0)) {
        local_f08 = &local_f00;
        local_f00 = 0;
        uStack_efc = 0;
        uStack_efa = 0;
        uStack_ef8 = 0;
        uStack_ef6 = 0;
        iVar4 = FUN_1002441f8(*(undefined4 *)(local_f10 + 0x66b0),local_f10 + 0x6b40,0x626f6f6b,0,
                              &local_478);
        if (iVar4 == 0) {
          iVar4 = FUN_1001888ba(&local_478,"Books.plist",&local_a98,0);
          if (iVar4 == 0) {
            uVar14 = FUN_10016aa24(DAT_1008c4d90,&local_a98,0,0);
            if (uVar14 != 0) {
              lVar6 = FUN_100166844(uVar14,&cf_Books);
              local_f18 = uVar14;
              if (lVar6 != 0) {
                lVar7 = FUN_10017076e(lVar6);
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                lVar9 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  local_678 = 0x4000100;
                  local_674 = (char *)CONCAT44(local_674._4_4_,(int)lVar7);
                  __os_log_impl(0x100000000,lVar9,1,"sync> got %d books in Books.plist",&local_678,8
                               );
                }
                if (0 < lVar7) {
                  lVar9 = 0;
                  do {
                    pcVar10 = (char *)FUN_10016499b(lVar6,lVar9);
                    if (pcVar10 == (char *)0x0) {
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        local_678 = 0x8220202;
                        local_674 = "Assertion failure";
                        local_66c = 0x822;
                        local_66a = "bookInfoDict != nullptr";
                        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                            &local_678,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    else {
                      cVar2 = FUN_100167abd(pcVar10,&cf_PersistentID,&local_ae8);
                      if (cVar2 == '\0') {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        lVar1 = DAT_1008c75b8;
                        cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                        if (cVar2 != '\0') {
                          local_678 = 0x8420102;
                          local_674 = pcVar10;
                          __os_log_impl(0x100000000,lVar1,0x10,
                                        "sync> missing Persistent ID for book info dictionary %{public}@"
                                        ,&local_678,0xc);
                        }
                      }
                      else {
                        FUN_1002b7e7c(&local_f08,&local_ae8);
                      }
                    }
                    lVar9 = lVar9 + 1;
                  } while (lVar7 != lVar9);
                }
              }
              FUN_10017060f(local_f18);
            }
            puVar11 = (ulong *)FUN_1002f930c(local_f28);
            while (puVar11 != (ulong *)0x0) {
              cVar2 = FUN_1002bd03f(puVar11,*(undefined1 *)(local_f10 + 0x39e),
                                    *(undefined1 *)(local_f10 + 0x39d));
              if ((cVar2 != '\0') && (-1 < *(int *)((long)puVar11 + 0xc2))) {
                puVar13 = (undefined4 *)CONCAT26(uStack_efa,CONCAT24(uStack_efc,local_f00));
                if (puVar13 != (undefined4 *)0x0) {
                  uVar14 = *puVar11;
                  puVar12 = &local_f00;
                  do {
                    if (*(ulong *)(puVar13 + 8) >= uVar14) {
                      puVar12 = puVar13;
                    }
                    puVar13 = *(undefined4 **)
                               (puVar13 + (ulong)(*(ulong *)(puVar13 + 8) < uVar14) * 2);
                  } while (puVar13 != (undefined4 *)0x0);
                  if ((puVar12 != &local_f00) && (*(ulong *)(puVar12 + 8) <= uVar14))
                  goto LAB_1003c9ad4;
                }
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                lVar6 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  FUN_100476ac1(&local_678,puVar11);
                  local_ae4 = FUN_1001b83ae(&local_678);
                  local_ae8 = 0x8220102;
                  __os_log_impl(0x100000000,lVar6,1,
                                "sync> book \"%{public}s\" was deleted on device",&local_ae8,0xc);
                  FUN_1001b7a50(&local_678);
                }
                *(byte *)((long)puVar11 + 0xc3) = *(byte *)((long)puVar11 + 0xc3) | 1;
              }
LAB_1003c9ad4:
              puVar11 = (ulong *)FUN_1002f9451(puVar11);
            }
          }
        }
        FUN_1002a41f4(&local_f08,CONCAT26(uStack_efa,CONCAT24(uStack_efc,local_f00)));
      }
      if ((*(char *)(local_f10 + 0x37c) != '\0') || (*(char *)(local_f10 + 0x38e) != '\0')) {
        iVar4 = FUN_100188845(local_f10 + 0x75e0,&cf_iTunesUMediaLibraryDeletes_plist,&local_478,0);
        if (iVar4 == 0) {
          local_f30 = FUN_10016aa24(DAT_1008c4d90,&local_478,0,0);
          if (local_f30 != 0) {
            lVar6 = FUN_100166844(local_f30,&cf_mediaFilePaths);
            if (lVar6 == 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_a98 = 0x8220202;
                local_a94 = "Assertion failure";
                local_a8c = 0x822;
                local_a8a = "assetPathsToDeleteArray != nullptr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a98,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            lVar7 = FUN_10017076e(lVar6);
            if (0 < lVar7) {
              local_f18 = local_f10 + 0x6b40;
              lVar9 = 0;
              do {
                cVar2 = FUN_100164b00(lVar6,lVar9,&local_f08,0x200);
                if (cVar2 == '\0') {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_a98 = 0x8220202;
                    local_a94 = "Assertion failure";
                    local_a8c = 0x822;
                    local_a8a = 
                    "JRCFArrayGetCStringAtIndex( assetPathsToDeleteArray, assetPathsToDeleteIndex, assetPath, sizeof(assetPath) )"
                    ;
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a98
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  iVar4 = FUN_10036de38(local_f18,&local_f08,&local_a98,0);
                  if (iVar4 != -0x80) {
                    if (iVar4 == 0) {
                      iVar4 = FUN_100182d4d(&local_a98);
                      if (iVar4 != -0x80) {
                        if (iVar4 == 0) {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          lVar1 = DAT_1008c75b8;
                          cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                          if (cVar2 != '\0') {
                            local_678 = 0x8220102;
                            local_674 = (char *)&local_f08;
                            __os_log_impl(0x100000000,lVar1,0x10,
                                          "sync> deleted iTunes U media asset path \"%{public}s\"",
                                          &local_678,0xc);
                          }
                          FUN_1001b1464();
                        }
                        else {
                          uVar5 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar5,0x10);
                          if (cVar2 != '\0') {
                            local_66a = (char *)CONCAT44(local_66a._4_4_,iVar4);
                            goto LAB_1003c8816;
                          }
                        }
                      }
                    }
                    else {
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        local_66a = (char *)CONCAT44(local_66a._4_4_,iVar4);
LAB_1003c8816:
                        local_66c = 0x400;
                        local_674 = "Assertion failure";
                        local_678 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                            &local_678,0x12);
                      }
                    }
                  }
                }
                lVar9 = lVar9 + 1;
              } while (lVar7 != lVar9);
            }
            FUN_10017060f(local_f30);
          }
          iVar4 = FUN_100182d4d(&local_478);
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_a98 = 0x8220202;
              local_a94 = "Assertion failure";
              local_a8c = 0x400;
              local_a8a = (char *)CONCAT44(local_a8a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_a98,0x12);
            }
          }
        }
        if (*(char *)(local_f10 + 0x37c) != '\0') {
          FUN_10017060f(*(undefined8 *)(local_f10 + 0x15de8));
          *(undefined8 *)(local_f10 + 0x15de8) = 0;
          lVar6 = local_f10 + 0x159c8;
          cVar2 = FUN_10017cbd0(lVar6);
          if (cVar2 == '\0') {
            iVar4 = FUN_1002441f8(*(undefined4 *)(local_f10 + 0x66b0),local_f10 + 0x6b40,0x70757263,
                                  0,lVar6);
            if ((iVar4 != -0x2b) && (iVar4 != 0)) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_478 = 0x8220202;
                local_474 = "Assertion failure";
                local_46c = 0x822;
                local_46a = "tempStatus == noErr || tempStatus == fnfErr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
          }
          cVar2 = FUN_10017cbd0(lVar6);
          if (cVar2 != '\0') {
            lVar7 = FUN_1003c703a(local_f10,lVar6);
            *(long *)(local_f10 + 0x15de8) = lVar7;
            if (lVar7 != 0) {
              local_f30 = FUN_10048604a(*(undefined8 *)(local_f10 + 0x30));
              if (local_f30 == 0) {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  local_46a = "primaryPlaylist != nullptr";
LAB_1003c9d02:
                  local_46c = 0x822;
                  local_474 = "Assertion failure";
                  local_478 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,
                                      0x16);
                }
LAB_1003c8a69:
                FUN_1001782e9(0,0);
                lVar7 = 0;
              }
              else {
                lVar7 = FUN_100166844(lVar7,&cf_assetOrdering);
                if (lVar7 == 0) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_46a = "assetArray != nullptr";
                    goto LAB_1003c9d02;
                  }
                  goto LAB_1003c8a69;
                }
                FUN_1001705fc(lVar7);
                local_f18 = FUN_10017076e(lVar7);
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                lVar9 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  local_478 = 0x4000100;
                  local_474 = (char *)CONCAT44(local_474._4_4_,(int)local_f18);
                  __os_log_impl(0x100000000,lVar9,1,
                                "sync> %d purchased tracks in StorePurchasesInfo.plist",&local_478,8
                               );
                }
                if (0 < (long)local_f18) {
                  uVar14 = 0;
                  do {
                    uVar5 = FUN_10016499b(lVar7,uVar14);
                    iVar4 = FUN_1003cdec3(lVar6,uVar5,&cf_relativeMediaAssetPath,&local_478);
                    if (iVar4 == 0) {
                      iVar4 = FUN_1003cdec3(lVar6,uVar5,&cf_relativeTrackPropertiesPath,&local_a98);
                      if (iVar4 != -0x80) {
                        if (iVar4 == 0) {
                          uVar8 = FUN_100167d88(uVar5,&cf_trackPersistentID);
                          iVar4 = FUN_1003cea85(local_f10,&local_478,0,uVar8,&local_a98,local_f30,0)
                          ;
                          if (iVar4 != 0) {
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            local_f40 = DAT_1008c75b8;
                            cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                            if (cVar2 != '\0') {
                              uVar5 = FUN_100166c1b(uVar5,&cf_relativeMediaAssetPath);
                              local_f08._0_4_ = 0x8420202;
                              local_f08._4_4_ = (undefined4)uVar5;
                              local_f00 = (undefined4)((ulong)uVar5 >> 0x20);
                              uStack_efc = 0x400;
                              uStack_efa = (undefined2)iVar4;
                              uStack_ef8 = (undefined2)((uint)iVar4 >> 0x10);
                              __os_log_impl(0x100000000,local_f40,0x10,
                                            "sync> could not add purchased track \"%{public}@\" (%d)"
                                            ,&local_f08,0x12);
                            }
                          }
                        }
                        else {
                          uVar5 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar5,0x10);
                          if (cVar2 != '\0') {
                            local_f08._0_4_ = 0x8220202;
                            local_f08._4_4_ = 0x7a0a90;
                            local_f00 = 1;
                            uStack_efc = 0x400;
                            uStack_efa = (undefined2)iVar4;
                            uStack_ef8 = (undefined2)((uint)iVar4 >> 0x10);
                            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                                &local_f08,0x12);
                          }
                        }
                      }
                    }
                    FUN_1001b1464();
                    if (*(char *)(local_f10 + 0x6ad2) != '\0') {
                      iVar4 = FUN_1001b19b0();
                      if (iVar4 == *(int *)(local_f10 + 0x6b08)) break;
                    }
                    if (*(char *)(local_f10 + 0x6acc) != '\0') {
                      iVar4 = FUN_1001b19b0();
                      if (iVar4 == *(int *)(local_f10 + 0x6b10)) break;
                    }
                    uVar14 = uVar14 + 1;
                  } while (uVar14 != local_f18);
                }
              }
              FUN_10017060f(lVar7);
            }
          }
        }
      }
      if (*(char *)(local_f10 + 0x39c) != '\0') {
        local_f40 = FUN_1003c9de1(local_f10,&local_f08);
        if (local_f40 != 0) {
          lVar6 = FUN_10048604a(*(undefined8 *)(local_f10 + 0x30));
          if (lVar6 == 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_478 = 0x8220202;
              local_474 = "Assertion failure";
              local_46c = 0x822;
              local_46a = "primaryPlaylist != nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else {
            local_f18 = FUN_100166844(local_f40,&cf_Books);
            if (local_f18 == 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_478 = 0x8220202;
                local_474 = "Assertion failure";
                local_46c = 0x822;
                local_46a = "booksArray != nullptr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
              local_f30 = FUN_10017076e();
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              lVar7 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                local_478 = 0x4000100;
                local_474 = (char *)CONCAT44(local_474._4_4_,(int)local_f30);
                __os_log_impl(0x100000000,lVar7,1,"sync> %d purchased books in Purchases.plist",
                              &local_478,8);
              }
              if (0 < local_f30) {
                bVar3 = false;
                lVar7 = 0;
                do {
                  lVar9 = FUN_10016499b(local_f18,lVar7);
                  if (lVar9 == 0) {
                    uVar5 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      local_478 = 0x8220202;
                      local_474 = "Assertion failure";
                      local_46c = 0x822;
                      local_46a = "bookInfoDict != nullptr";
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                          &local_478,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  else {
                    cVar2 = FUN_100166ce2(lVar9,&cf_Path,&local_678);
                    if (cVar2 == '\0') {
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        local_478 = 0x8220202;
                        local_474 = "Assertion failure";
                        local_46c = 0x822;
                        local_46a = 
                        "JRCFDictionaryGetUString(bookInfoDict, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"Path\" \"\")), bookPath)"
                        ;
                        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    else {
                      FUN_1001dfe75(&local_678,0x2f,0x2f);
                      iVar4 = FUN_10017d64f(&local_f08,(long)&local_678 + 2,(undefined2)local_678,
                                            &local_a98,&local_ae8,0);
                      if (iVar4 != -0x80) {
                        if (iVar4 == 0) {
                          cVar2 = FUN_100167abd(lVar9,&cf_PersistentID,&local_f48);
                          if (cVar2 == '\0') {
                            local_f48 = (char *)0x0;
                          }
                          pcVar10 = local_f48;
                          local_f38 = (long *)0x0;
                          cVar2 = FUN_10017cbd0(&local_a98);
                          if (cVar2 == '\0') {
                            uVar5 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar5,0x10);
                            if (cVar2 != '\0') {
                              local_58 = 0x8220202;
                              local_54 = "Assertion failure";
                              local_4c = 0x822;
                              local_4a = "JRFileSpecIsValid(bookSpec)";
                              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                                  &local_58);
                            }
                            FUN_1001782e9(0,0);
                            iVar4 = -0x32;
LAB_1003c8ec7:
                            uVar5 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar5,0x10);
                            if (cVar2 != '\0') {
                              local_478 = 0x8220202;
                              local_474 = "Assertion failure";
                              local_46c = 0x400;
                              local_46a = (char *)CONCAT44(local_46a._4_4_,iVar4);
                              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                                  &local_478);
                            }
                          }
                          else {
                            cVar2 = FUN_10017fbfb(&local_a98);
                            if (cVar2 == '\0') {
                              FUN_1001c62d9(&local_478,0x420);
                            }
                            else {
                              iVar4 = FUN_1001887a6(&local_a98,"iTunesMetadata.plist",&local_478);
                              if ((iVar4 != -0x80) && (iVar4 != 0)) {
                                uVar5 = FUN_1001cc310();
                                cVar2 = _os_log_type_enabled(uVar5,0x10);
                                if (cVar2 != '\0') {
                                  local_58 = 0x8220202;
                                  local_54 = "Assertion failure";
                                  local_4c = 0x400;
                                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                                  __os_log_error_impl(0x100000000,uVar5,0x10,
                                                      "%{public}s: err == (%d)",&local_58,0x12);
                                }
                              }
                            }
                            cVar2 = FUN_10017cbd0(&local_478);
                            puVar13 = &local_478;
                            if (cVar2 == '\0') {
                              puVar13 = (undefined4 *)0x0;
                            }
                            iVar4 = FUN_1003cea85(local_f10,&local_a98,&local_ae8,pcVar10,puVar13,
                                                  lVar6,&local_f38);
                            if (iVar4 != 0) {
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              lVar1 = DAT_1008c75b8;
                              cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                              if (cVar2 != '\0') {
                                local_58 = 0x4000100;
                                local_54 = (char *)CONCAT44(local_54._4_4_,iVar4);
                                __os_log_impl(0x100000000,lVar1,0x10,
                                              "sync> could not add purchased book track (%d)",
                                              &local_58);
                              }
                              if (iVar4 != -0x80) goto LAB_1003c8ec7;
                            }
                          }
                          if (local_f38 != (long *)0x0) {
                            cVar2 = FUN_100166ce2(lVar9,&cf_Name,&local_478);
                            if (cVar2 != '\0') {
                              *(uint *)((long)local_f38 + 0xc2) =
                                   *(uint *)((long)local_f38 + 0xc2) & 0xffffffef;
                              FUN_100476cf8(local_f38,&local_478);
                            }
                            if (local_f48 == (char *)0x0) {
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              lVar1 = DAT_1008c75b8;
                              cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
                              if (cVar2 != '\0') {
                                pcVar10 = (char *)*local_f38;
                                FUN_100476ac1(local_f58);
                                local_4a = (char *)FUN_1001b83ae(local_f58);
                                local_58 = 0x8000202;
                                local_4c = 0x822;
                                local_54 = pcVar10;
                                __os_log_impl(0x100000000,lVar1,2,
                                              "sync> setting Persistent ID to %016llX for book \"%{public}s\""
                                              ,&local_58);
                                FUN_1001b7a50(local_f58);
                              }
                              FUN_10016883b(lVar9,&cf_PersistentID,*local_f38,0);
                              bVar3 = true;
                            }
                            else {
                              lVar9 = FUN_100300729(*(undefined8 *)(local_f10 + 0x30));
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              lVar1 = DAT_1008c75b8;
                              if (lVar9 == 0) {
                                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                                pcVar10 = local_f48;
                                if (cVar2 != '\0') {
                                  FUN_100476ac1(local_f58,local_f38);
                                  local_4a = (char *)FUN_1001b83ae(local_f58);
                                  local_58 = 0x8000202;
                                  local_54 = pcVar10;
                                  local_4c = 0x822;
                                  __os_log_impl(0x100000000,lVar1,1,
                                                "sync> setting persistent id %016llX for book \"%{public}s\""
                                                ,&local_58);
                                  FUN_1001b7a50(local_f58);
                                }
                                FUN_100472588(local_f38,local_f48,1);
                              }
                              else {
                                cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                                pcVar10 = local_f48;
                                if (cVar2 != '\0') {
                                  FUN_100476ac1(local_f58,local_f38);
                                  local_4a = (char *)FUN_1001b83ae(local_f58);
                                  local_58 = 0x8000202;
                                  local_54 = pcVar10;
                                  local_4c = 0x822;
                                  __os_log_impl(0x100000000,lVar1,0x10,
                                                "sync> ignoring duplicate persistent id %llu for book \"%{public}s\""
                                                ,&local_58);
                                  FUN_1001b7a50(local_f58);
                                }
                              }
                            }
                          }
                          FUN_1001b1464();
                        }
                        else {
                          uVar5 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar5,0x10);
                          if (cVar2 != '\0') {
                            local_478 = 0x8220202;
                            local_474 = "Assertion failure";
                            local_46c = 0x400;
                            local_46a = (char *)CONCAT44(local_46a._4_4_,iVar4);
                            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                                &local_478);
                          }
                        }
                      }
                    }
                  }
                  lVar7 = lVar7 + 1;
                } while (local_f30 != lVar7);
                if (bVar3) {
                  iVar4 = FUN_10016a60e(local_f40,&local_f08,"Purchases.plist",0,1,100,0);
                  if ((iVar4 != -0x80) && (iVar4 != 0)) {
                    uVar5 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      local_478 = 0x8220202;
                      local_474 = "Assertion failure";
                      local_46c = 0x400;
                      local_46a = (char *)CONCAT44(local_46a._4_4_,iVar4);
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                          &local_478,0x12);
                    }
                  }
                }
              }
            }
          }
          FUN_10017060f(local_f40);
        }
      }
      lVar6 = FUN_1002f930c(local_f28);
      if (lVar6 == 0) {
        local_f18 = 0;
      }
      else {
        local_f18 = 0;
        do {
          lVar7 = FUN_1002f9451(lVar6);
          if ((*(byte *)(lVar6 + 0xc3) & 1) != 0) {
            uVar14 = FUN_1004744bf(lVar6,0);
            if ((uVar14 & 0xc00000) != 0 && (uVar14 & 0x18000) == 0) {
              if (*(char *)(local_f10 + 0x14def) == '\x01') {
                uVar5 = FUN_1004e0c3f(local_f10,1);
                lVar9 = FUN_1002c0a63(uVar5,0xc00000);
              }
              else {
                lVar9 = *(long *)(local_f10 + 0x15370);
              }
              cVar2 = FUN_1002c10ef(lVar9,*(undefined8 *)(lVar6 + 0x188));
              if (cVar2 != '\0') {
                if (*(char *)(local_f10 + 0x14def) == '\x01') {
                  FUN_1002c0ca0(lVar9,*(undefined8 *)(local_f10 + 0x15370));
                  *(undefined1 *)(local_f10 + 0x14def) = 2;
                  local_f18 = local_f18 | 8;
                }
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                lVar1 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  FUN_100476ac1(&local_a98,lVar6);
                  local_474 = (char *)FUN_1001b83ae(&local_a98);
                  local_46a = *(char **)(lVar6 + 0x188);
                  local_478 = 0x8220202;
                  local_46c = 0x800;
                  __os_log_impl(0x100000000,lVar1,1,
                                "sync> removed book \"%{public}s\" (pid %llu) from list of books to sync"
                                ,&local_478,0x16);
                  FUN_1001b7a50(&local_a98);
                }
                local_f18 = local_f18 | 0x20000000;
              }
              if (lVar9 != *(long *)(local_f10 + 0x15370)) {
                FUN_1002c0bbc(lVar9);
              }
            }
            if (*(long *)(lVar6 + 0x58) != 0) {
              FUN_1002b0e52();
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            lVar9 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8);
            if (cVar2 != '\0') {
              FUN_100476ac1(&local_478,lVar6);
              local_a94 = (char *)FUN_1001b83ae(&local_478);
              local_a98 = 0x8220102;
              __os_log_impl(0x100000000,lVar9,1,
                            "sync> removing device purchased track \"%{public}s\" from device database"
                            ,&local_a98,0xc);
              FUN_1001b7a50(&local_478);
            }
            FUN_1004737f5(lVar6);
          }
          lVar6 = lVar7;
        } while (lVar7 != 0);
      }
      FUN_100319a94(local_f28,local_f19,0);
      FUN_1002773d4(local_f28);
      FUN_1004cf6d4(local_f28);
      FUN_1002fbbfc(local_f28);
      FUN_100321e5c(local_f28);
      if (local_f18 != 0) {
        iVar4 = FUN_1004ef324(local_f10,local_f18,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_478 = 0x8220202;
            local_474 = "Assertion failure";
            local_46c = 0x400;
            local_46a = (char *)CONCAT44(local_46a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_478,0x12);
          }
        }
        uVar5 = FUN_1001c156e();
        FUN_1001c6987(uVar5,0x69707372,*(undefined4 *)(local_f10 + 0x28),0,0);
      }
      *(int *)(local_f10 + 0x166d0) = *(int *)(local_f10 + 0x166d0) + -1;
      uVar5 = 0;
      goto LAB_1003c9732;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = 
      "handlerData->deviceInfo.supportsStore || handlerData->deviceInfo.supportsDownloadedPodcasts || handlerData->deviceInfo.supportsBooks"
      ;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar5 = 0xffffffce;
LAB_1003c9732:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

