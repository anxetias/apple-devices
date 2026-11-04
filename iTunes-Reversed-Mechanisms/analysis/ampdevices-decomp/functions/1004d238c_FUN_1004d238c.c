// name: FUN_1004d238c
// address: 1004d238c

void FUN_1004d238c(long param_1,undefined8 param_2,char param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined7 uVar13;
  long lVar12;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  bool bVar17;
  bool bVar18;
  undefined8 local_900;
  undefined1 local_8f8 [16];
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  undefined8 local_8c8;
  undefined1 local_8c0 [16];
  long local_8b0;
  long local_8a8;
  long local_8a0;
  char local_891;
  char *local_890;
  long local_888;
  undefined4 local_87c;
  undefined4 local_878;
  uint *local_874;
  undefined2 local_86c;
  uint local_86a;
  uint local_858;
  char *local_854;
  undefined2 local_84c;
  undefined8 local_84a;
  uint local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  undefined2 local_422;
  char *local_420;
  undefined2 local_418;
  undefined8 local_416;
  undefined2 local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_888 = 0;
  FUN_10017d520(local_8d8);
  local_238[0] = 0;
  if (*(char *)(param_1 + 0x6a6d) == '\0') {
    if (*(char *)(param_1 + 0x6aed) != '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 == '\0') goto LAB_1004d24af;
      local_854 = (char *)FUN_1001b83ae(local_8d8);
      pcVar14 = "sync> ignoring \"%{public}s\" because device is being restored from cloud backup";
      goto LAB_1004d249c;
    }
    pcVar14 = (char *)0x0;
    local_8a0 = FUN_10016aa24(DAT_1008c4d90,param_2,0,0);
    if (local_8a0 != 0) {
      local_890 = (char *)FUN_100167d88(local_8a0,&cf_playlistPersistentID);
      if (param_4 == '\0') {
LAB_1004d2659:
        local_8a8 = *(long *)(param_1 + 0x30);
        bVar18 = true;
      }
      else {
        if (*(char *)(param_1 + 0x14cda) == '\0') {
          pcVar14 = (char *)((ulong)pcVar14 & 0xffffffffffffff00);
          if (((local_890 != (char *)0x0 && *(char *)(param_1 + 0x6ac2) != '\0') &&
              (*(char *)(param_1 + 0x14d2a) != '\0')) &&
             (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15328),local_890), cVar2 != '\0')) {
            uVar11 = FUN_1004e0c3f(param_1,1);
            uVar11 = FUN_10048b5ec(uVar11,local_890);
            FUN_1004919da(uVar11,&local_858);
            if (((local_858 & 0x200004) != 0) && ((local_858 & 0xffdffffb) == 0))
            goto LAB_1004d2534;
          }
          goto LAB_1004d2659;
        }
LAB_1004d2534:
        local_8a8 = FUN_1004e0c3f(param_1,1);
        bVar18 = false;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_854 = (char *)FUN_1001b83ae(local_8d8);
        local_858 = 0x8220102;
        pcVar14 = "sync> processing \"%{public}s\"";
        __os_log_impl(0x100000000,uVar11,1,"sync> processing \"%{public}s\"",&local_858,0xc);
      }
      local_8c8 = FUN_100167d88(local_8a0,&cf_parentPersistentID);
      local_8b0 = FUN_100166844(local_8a0,&cf_trackPersistentIDs);
      cVar2 = '\x01';
      if (param_3 == '\0') {
        cVar2 = FUN_100171439(local_8a0,&cf_seedTrackPersistentID);
      }
      cVar3 = FUN_100167dd2(local_8a0,&cf_deleteWithoutSyncing,0);
      if ((cVar3 == '\0') ||
         ((pcVar14 = (char *)((ulong)pcVar14 & 0xffffffffffffff00),
          local_8b0 != 0 && *(char *)(param_1 + 0x3a2) == '\0' &&
          (lVar8 = FUN_10017076e(local_8b0), 0 < lVar8)))) {
        if (cVar2 != '\0') {
          pcVar9 = (char *)FUN_100167d88(local_8a0,&cf_seedTrackPersistentID);
          if (pcVar9 == (char *)0x0) {
            uVar11 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar11,0x10);
            if (cVar2 != '\0') {
              local_858 = 0x8220202;
              local_854 = "Assertion failure";
              local_84c = 0x822;
              local_84a = "seedTrackPersistentID != 0";
              pcVar14 = "%{public}s: (%{public}s)";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_858,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar11 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            local_87c = (undefined4)CONCAT71((int7)((ulong)pcVar14 >> 8),1);
            bVar18 = true;
            if (cVar2 != '\0') {
              local_858 = local_858 & 0xffff0000;
              pcVar14 = "sync> missing seedTrackPersistentID";
              goto LAB_1004d2960;
            }
          }
          else {
            pcVar10 = (char *)FUN_1004d4848(param_1,local_8a8,pcVar9);
            if (pcVar10 != (char *)0x0) {
              if (local_890 != (char *)0x0) {
                pcVar14 = pcVar10;
                local_888 = FUN_1004d49f3(param_1,local_8a8,local_890,pcVar10);
              }
              goto LAB_1004d2ac2;
            }
            uVar11 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar11,0x10);
            if (cVar2 != '\0') {
              local_858 = 0x8220202;
              local_854 = "Assertion failure";
              local_84c = 0x822;
              local_84a = "seedTrack != nullptr";
              pcVar14 = "%{public}s: (%{public}s)";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_858,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar11 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            local_87c = (undefined4)CONCAT71((int7)((ulong)pcVar14 >> 8),1);
            bVar18 = true;
            if (cVar2 != '\0') {
              local_858 = 0x8000100;
              pcVar14 = "sync> couldn\'t find seed track with persistent ID %llu";
              uVar15 = 0xc;
              local_854 = pcVar9;
              goto LAB_1004d296e;
            }
          }
          goto LAB_1004d297b;
        }
        uVar7 = FUN_100167d66(local_8a0,&cf_distinguishedKind);
        bVar17 = (uVar7 & 0xffff) != 0;
        pcVar14 = (char *)CONCAT71((int7)((ulong)pcVar14 >> 8),bVar17);
        if ((ushort)((short)uVar7 - 0xcfU) < 0xfff9 && bVar17) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          local_87c = (undefined4)CONCAT71((int7)((ulong)pcVar14 >> 8),1);
          bVar18 = true;
          if (cVar2 != '\0') {
            local_854 = (char *)FUN_100166c1b(local_8a0,&cf_name);
            local_858 = 0x8420202;
            local_84c = 0x400;
            local_84a = (char *)(CONCAT44(local_84a._4_4_,uVar7) & 0xffffffff0000ffff);
            pcVar14 = "sync> ignoring distinguished playlist \"%{public}@\" (%d)";
            uVar15 = 0x12;
            goto LAB_1004d296e;
          }
          goto LAB_1004d297b;
        }
        if (local_890 != (char *)0x0) {
          local_888 = FUN_10048b5ec(local_8a8);
        }
        pcVar10 = (char *)0x0;
LAB_1004d2ac2:
        if (local_888 != 0) {
          FUN_1004870ae(local_888,local_238);
        }
        cVar3 = FUN_100167dd2(local_8a0,&cf_playlistDeleted,0);
        lVar8 = local_8a0;
        if (cVar3 == '\0') {
          if (cVar2 != '\0') {
            if (local_8b0 == 0) {
              uVar11 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar11,0x10);
              if (cVar2 != '\0') {
                local_858 = 0x8220202;
                local_854 = "Assertion failure";
                local_84c = 0x822;
                local_84a = "trackPersistentIDs != nullptr";
                pcVar14 = "%{public}s: (%{public}s)";
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_858,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar11 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              local_87c = (undefined4)CONCAT71((int7)((ulong)pcVar14 >> 8),1);
              bVar18 = true;
              if (cVar2 != '\0') {
                local_858 = local_858 & 0xffff0000;
                pcVar14 = "sync> missing trackPersistentIDs";
                goto LAB_1004d2960;
              }
              goto LAB_1004d297b;
            }
            if (local_888 == 0) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar15 = local_8c8;
              uVar11 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                local_858 = local_858 & 0xffff0000;
                __os_log_impl(0x100000000,uVar11,1,"sync> creating new genius playlist",&local_858,2
                             );
              }
              uVar11 = FUN_1004d4cb6(local_8a8,pcVar10,local_890,uVar15,&local_888);
              uVar13 = (undefined7)((ulong)uVar11 >> 8);
              local_87c = (undefined4)CONCAT71(uVar13,1);
              iVar6 = (int)uVar11;
              if (iVar6 == -0x80) goto LAB_1004d3276;
              local_890 = (char *)CONCAT44(local_890._4_4_,(int)CONCAT71(uVar13,1));
              if (iVar6 != 0) {
                uVar11 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar11,0x10);
                local_87c = (undefined4)CONCAT71((int7)((ulong)uVar15 >> 8),1);
                bVar18 = true;
                if (cVar2 != '\0') {
                  local_84a = (char *)CONCAT44(local_84a._4_4_,iVar6);
                  goto LAB_1004d3327;
                }
                goto LAB_1004d297b;
              }
              goto LAB_1004d3962;
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar11 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              local_858 = local_858 & 0xffff0000;
              pcVar14 = "sync> updating existing genius playlist";
              __os_log_impl(0x100000000,uVar11,1,"sync> updating existing genius playlist",
                            &local_858,2);
            }
            uVar11 = FUN_10048b1e7(local_888);
            iVar6 = (int)uVar11;
            if (iVar6 == -0x80) goto LAB_1004d316a;
            if (iVar6 != 0) {
              uVar11 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar11,0x10);
              local_87c = (undefined4)CONCAT71((int7)((ulong)pcVar14 >> 8),1);
              bVar18 = true;
              if (cVar2 == '\0') goto LAB_1004d297b;
              local_84a = (char *)CONCAT44(local_84a._4_4_,iVar6);
LAB_1004d3327:
              local_84c = 0x400;
              local_854 = "Assertion failure";
              local_858 = 0x8220202;
              uVar11 = __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                           &local_858,0x12);
              goto LAB_1004d2973;
            }
            local_87c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1);
            goto LAB_1004d2cef;
          }
          if (local_888 == 0) {
            bVar17 = true;
            local_87c = 1;
LAB_1004d2ff0:
            if (local_8b0 == 0) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar11 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                pcVar14 = "sync> missing trackPersistentIDs";
LAB_1004d3263:
                local_438 = local_438 & 0xffff0000;
                __os_log_impl(0x100000000,uVar11,1,pcVar14,&local_438,2);
              }
            }
            else if ((local_890 == (char *)0x0) && (lVar16 = FUN_10017076e(local_8b0), lVar16 < 1))
            {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar11 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                pcVar14 = "sync> empty trackPersistentIDs";
                goto LAB_1004d3263;
              }
            }
            else {
              FUN_100166ce2(lVar8,&cf_name,&local_858);
              if (local_888 == 0) {
                if ((short)local_858 == 0) {
                  uVar11 = FUN_1004d4654(local_8a8,&local_858,&local_888);
                  iVar6 = (int)uVar11;
                  if (iVar6 != -0x80) {
                    local_890 = (char *)CONCAT44(local_890._4_4_,
                                                 (int)CONCAT71((int7)((ulong)uVar11 >> 8),1));
                    if (iVar6 == 0) goto LAB_1004d3962;
                    uVar11 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar2 != '\0') {
                      local_42a = (char *)CONCAT44(local_42a._4_4_,iVar6);
LAB_1004d3eec:
                      local_42c = 0x400;
                      local_434 = "Assertion failure";
                      local_438 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                          &local_438,0x12);
                    }
                  }
                }
                else {
                  uVar11 = FUN_1001e4e7c("Purchased",&local_858,0);
                  if ((char)uVar11 != '\0') {
                    local_888 = 0;
                    local_890 = (char *)CONCAT44(local_890._4_4_,
                                                 (int)CONCAT71((int7)((ulong)uVar11 >> 8),1));
LAB_1004d3962:
                    if (local_888 == 0) goto LAB_1004d2a8f;
                    FUN_1001b7a44(local_8c0);
                    if ((((*(byte *)(local_888 + 0x298) & 1) == 0) ||
                        (*(char *)(local_888 + 0x2a3) != '\0')) &&
                       (lVar8 = FUN_10017076e(local_8b0), 0 < lVar8)) {
                      lVar16 = 0;
                      do {
                        pcVar14 = (char *)FUN_10016516d(local_8b0,lVar16);
                        lVar12 = FUN_1004d4848(param_1,local_8a8,pcVar14);
                        if (lVar12 == 0) {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar11 = DAT_1008c75b8;
                          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar2 != '\0') {
                            local_858 = 0x8000100;
                            local_854 = pcVar14;
                            __os_log_impl(0x100000000,uVar11,1,
                                          "sync> couldn\'t find track with persistent ID %llu",
                                          &local_858,0xc);
                          }
                        }
                        else {
                          FUN_100489a1f(local_888,lVar12,0,0);
                        }
                        lVar16 = lVar16 + 1;
                      } while (lVar8 != lVar16);
                    }
                    cVar2 = FUN_100166e24(local_8a0,&cf_description,local_8c0);
                    if (cVar2 != '\0') {
                      FUN_100487e4d(local_888,local_8c0);
                    }
                    cVar2 = FUN_10016769f(local_8a0,&cf_likedState,&local_891);
                    if (((byte)(local_891 - 1U) < 3 && cVar2 != '\0') &&
                       (((char)local_890 != '\0' ||
                        ((cVar2 = FUN_100488488(local_888,0), cVar2 != local_891 &&
                         (*(char *)(local_888 + 0x439) != local_891)))))) {
                      FUN_1004885dd(local_888,local_891,0,1);
                    }
                    if ((*(char *)(param_1 + 0x3af) != '\0') &&
                       (cVar2 = FUN_100167dd2(local_8a0,&cf_is_external_vendor_playlist,0),
                       lVar16 = local_888, lVar8 = local_8a0, cVar2 != '\0')) {
                      uVar11 = FUN_100166c1b(local_8a0,&cf_external_vendor_identifier);
                      FUN_1001b7eb0(&local_858,uVar11);
                      FUN_1004883c9(lVar16,&local_858);
                      FUN_1001b7a50(&local_858);
                      lVar16 = local_888;
                      uVar11 = FUN_100166c1b(lVar8,&cf_external_vendor_display_name);
                      FUN_1001b7eb0(&local_858,uVar11);
                      FUN_100488418(lVar16,&local_858);
                      FUN_1001b7a50(&local_858);
                      lVar16 = local_888;
                      uVar11 = FUN_100166c1b(lVar8,&cf_external_tag);
                      FUN_1001b7eb0(&local_858,uVar11);
                      FUN_100488467(lVar16,&local_858);
                      FUN_1001b7a50(&local_858);
                    }
                    lVar8 = *(long *)(local_888 + 8);
                    lVar16 = FUN_1004e0c3f(param_1,1);
                    if (((lVar8 == lVar16) &&
                        (cVar2 = FUN_100167064(local_8a0,&cf_artworkFilePath,&local_438,0x200),
                        cVar2 != '\0')) && ((char)local_438 != '\0')) {
                      uVar7 = FUN_10036de38(param_1 + 0x6b40,&local_438,&local_858,0);
                      if (uVar7 == 0) {
                        local_900 = 0;
                        uVar7 = FUN_100180f0c(&local_858,0,&local_900,1);
                        if (uVar7 == 0) {
                          FUN_1001a78d6(local_8f8,local_900);
                          bVar4 = FUN_100492cae(local_888,local_8f8);
                          if (bVar4 != 0) {
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar11 = DAT_1008c75b8;
                            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                            if (cVar2 != '\0') {
                              FUN_1001b8dfc(local_8e8,local_238);
                              local_874 = (uint *)FUN_1001b83ae(local_8e8);
                              local_86a = (uint)bVar4;
                              local_878 = 0x8220202;
                              local_86c = 0x400;
                              __os_log_impl(0x100000000,uVar11,1,
                                            "sync> failed to set artwork for playlist \"%{public}s\" (%d)"
                                            ,&local_878,0x12);
                              FUN_1001b7a50(local_8e8);
                            }
                          }
                          FUN_1001a85d4(local_8f8);
                        }
                        else {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar11 = DAT_1008c75b8;
                          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar2 != '\0') {
                            pcVar14 = 
                            "sync> failed to read playlist artwork file \"%{public}s\" (%d)";
                            local_86a = uVar7;
                            goto LAB_1004d3e1c;
                          }
                        }
                      }
                      else {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar11 = DAT_1008c75b8;
                        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar2 != '\0') {
                          pcVar14 = 
                          "sync> failed to create playlist artwork file spec \"%{public}s\" (%d)";
                          local_86a = uVar7;
LAB_1004d3e1c:
                          local_86c = 0x400;
                          local_878 = 0x8220202;
                          local_874 = &local_438;
                          __os_log_impl(0x100000000,uVar11,1,pcVar14,&local_878,0x12);
                        }
                      }
                    }
                    FUN_1001b7a50(local_8c0);
                    bVar18 = (char)local_890 == '\0';
                    goto LAB_1004d297b;
                  }
                  if ((!bVar17) && (lVar8 = FUN_10048b91a(local_8a8,&local_858,0), lVar8 != 0)) {
                    FUN_1001e1c39(&local_858,&local_438);
                    FUN_1004d5432(local_8a8,&local_438,&local_858);
                  }
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar11 = DAT_1008c75b8;
                  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar2 != '\0') {
                    FUN_1001b8dfc(&local_878,&local_858);
                    local_434 = (char *)FUN_1001b83ae(&local_878);
                    local_42a = "in library";
                    if (local_8a8 == *(long *)(param_1 + 0x30)) {
                      local_42a = "on device";
                    }
                    local_438 = 0x8220302;
                    local_42c = 0x822;
                    local_422 = 0x800;
                    local_420 = local_890;
                    __os_log_impl(0x100000000,uVar11,1,
                                  "sync> creating new playlist \"%{public}s\" %{public}s, persistent id %llu"
                                  ,&local_438,0x20);
                    FUN_1001b7a50(&local_878);
                  }
                  uVar11 = FUN_1004d56ad(local_8a8,&local_858,local_890,local_8c8,&local_888);
                  iVar6 = (int)uVar11;
                  if (iVar6 != -0x80) {
                    local_890 = (char *)CONCAT44(local_890._4_4_,
                                                 (int)CONCAT71((int7)((ulong)uVar11 >> 8),1));
                    if (iVar6 == 0) goto LAB_1004d3962;
                    uVar11 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar2 != '\0') {
                      local_42a = (char *)CONCAT44(local_42a._4_4_,iVar6);
                      goto LAB_1004d3eec;
                    }
                  }
                }
              }
              else {
                uVar5 = FUN_10048c0ca();
                cVar2 = FUN_10048c208(uVar5);
                if (cVar2 == '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar11 = DAT_1008c75b8;
                  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar2 != '\0') {
                    pcVar14 = "smart ";
                    if ((*(byte *)(local_888 + 0x298) & 1) == 0) {
                      pcVar14 = "";
                    }
                    FUN_1001b8dfc(&local_878,local_238);
                    local_42a = (char *)FUN_1001b83ae(&local_878);
                    local_420 = "in library";
                    if (local_8a8 == *(long *)(param_1 + 0x30)) {
                      local_420 = "on device";
                    }
                    local_416 = *(undefined8 *)(local_888 + 0x60);
                    local_438 = 0x8220402;
                    local_42c = 0x822;
                    local_422 = 0x822;
                    local_418 = 0x800;
                    local_434 = pcVar14;
                    __os_log_impl(0x100000000,uVar11,1,
                                  "sync> updating existing %{public}splaylist \"%{public}s\" %{public}s, persistent id %llu"
                                  ,&local_438,0x2a);
                    FUN_1001b7a50(&local_878);
                  }
                  if ((*(byte *)(local_888 + 0x298) & 1) != 0) {
LAB_1004d3547:
                    if (((short)local_858 != 0) &&
                       (cVar2 = FUN_1001e3edc(&local_858,local_238,0x20), cVar2 == '\0')) {
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar11 = DAT_1008c75b8;
                      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar2 != '\0') {
                        FUN_1001b8dfc(&local_878,local_238);
                        pcVar14 = (char *)FUN_1001b83ae(&local_878);
                        FUN_1001b8dfc(local_8c0,&local_858);
                        local_42a = (char *)FUN_1001b83ae(local_8c0);
                        local_438 = 0x8220202;
                        local_42c = 0x822;
                        local_434 = pcVar14;
                        __os_log_impl(0x100000000,uVar11,1,
                                      "sync> renaming existing playlist \"%{public}s\" to \"%{public}s\""
                                      ,&local_438,0x16);
                        FUN_1001b7a50(local_8c0);
                        FUN_1001b7a50(&local_878);
                      }
                      iVar6 = FUN_10048fb22(local_888,&local_858,0);
                      local_890 = (char *)((ulong)local_890 & 0xffffffff00000000);
                      if ((iVar6 == -0x80) || (iVar6 == 0)) goto LAB_1004d3962;
                      uVar11 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar2 != '\0') {
                        local_438 = 0x8220202;
                        local_434 = "Assertion failure";
                        local_42c = 0x400;
                        local_42a = (char *)CONCAT44(local_42a._4_4_,iVar6);
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                            &local_438,0x12);
                      }
                    }
LAB_1004d2cef:
                    local_890 = (char *)((ulong)local_890 & 0xffffffff00000000);
                    goto LAB_1004d3962;
                  }
                  iVar6 = FUN_10048b1e7();
                  if (iVar6 != -0x80) {
                    if (iVar6 == 0) goto LAB_1004d3547;
                    uVar11 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar2 != '\0') {
                      local_42a = (char *)CONCAT44(local_42a._4_4_,iVar6);
                      goto LAB_1004d3eec;
                    }
                  }
                }
                else {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar11 = DAT_1008c75b8;
                  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar2 != '\0') {
                    FUN_1001b8dfc(&local_878,local_238);
                    local_434 = (char *)FUN_1001b83ae(&local_878);
                    local_438 = 0x8220202;
                    local_42c = 0x400;
                    local_42a = (char *)CONCAT44(local_42a._4_4_,(uint)*(ushort *)(local_888 + 0x10)
                                                );
                    __os_log_impl(0x100000000,uVar11,1,
                                  "sync> ignoring attempt to modify distinguished media playlist \"%{public}s\" (%d)"
                                  ,&local_438,0x12);
                    FUN_1001b7a50(&local_878);
                  }
                  local_888 = 0;
                }
              }
            }
          }
          else {
            if ((*(byte *)(local_888 + 0x240) & 4) == 0) {
              bVar17 = true;
              bVar1 = true;
              if (!bVar18) {
                if ((((*(byte *)(local_888 + 0x298) & 1) != 0) ||
                    (lVar16 = FUN_10048b8d6(*(undefined8 *)(param_1 + 0x30),local_890), lVar16 == 0)
                    ) || (*(int *)(local_888 + 0x270) == *(int *)(lVar16 + 0x270))) {
                  local_87c = 0;
                  goto LAB_1004d2ff0;
                }
                cVar2 = FUN_1004d5120(local_888,local_8b0);
                if (cVar2 != '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar11 = DAT_1008c75b8;
                  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar2 != '\0') {
                    FUN_1001b8dfc(&local_438,local_238);
                    local_874 = (uint *)FUN_1001b83ae(&local_438);
                    local_878 = 0x8220102;
                    __os_log_impl(0x100000000,uVar11,1,
                                  "sync> on-the-go playlist matches library playlist \"%{public}s\""
                                  ,&local_878,0xc);
                    FUN_1001b7a50(&local_438);
                  }
                  local_87c = 0;
                  goto LAB_1004d3276;
                }
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar11 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  FUN_1001b8dfc(&local_438,local_238);
                  local_874 = (uint *)FUN_1001b83ae(&local_438);
                  local_878 = 0x8220102;
                  __os_log_impl(0x100000000,uVar11,1,
                                "sync> library playlist \"%{public}s\" was modified",&local_878,0xc)
                  ;
                  FUN_1001b7a50(&local_438);
                }
                local_888 = 0;
                bVar1 = false;
              }
              bVar17 = bVar1;
              local_87c = 0;
              lVar8 = local_8a0;
              goto LAB_1004d2ff0;
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar15 = DAT_1008c75b8;
            uVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
            if ((char)uVar11 != '\0') {
              local_438 = local_438 & 0xffff0000;
              uVar11 = __os_log_impl(0x100000000,uVar15,1,
                                     "sync> ignoring attempt to edit primary playlist",&local_438,2)
              ;
            }
            local_888 = 0;
LAB_1004d316a:
            local_87c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1);
          }
LAB_1004d3276:
          bVar18 = true;
          goto LAB_1004d297b;
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar11 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_858 = local_858 & 0xffff0000;
          __os_log_impl(0x100000000,uVar11,1,"sync> playlistDeleted flag set",&local_858,2);
        }
        if (local_888 != 0) {
          if ((*(byte *)(local_888 + 0x240) & 4) == 0) {
            if ((*(ushort *)(local_888 + 0x10) - 200 < 7) || (*(ushort *)(local_888 + 0x10) == 0)) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar11 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                FUN_1001b8dfc(&local_438,local_238);
                local_854 = (char *)FUN_1001b83ae(&local_438);
                local_84a = "library";
                if (local_8a8 == *(long *)(param_1 + 0x30)) {
                  local_84a = "device";
                }
                local_858 = 0x8220202;
                local_84c = 0x822;
                __os_log_impl(0x100000000,uVar11,1,
                              "sync> deleting existing playlist \"%{public}s\" from %{public}s",
                              &local_858,0x16);
                FUN_1001b7a50(&local_438);
              }
              FUN_100488d27(local_888,0,0);
              FUN_10043822b(param_1,local_890,0);
            }
            else {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar11 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                FUN_1001b8dfc(&local_438,local_238);
                local_854 = (char *)FUN_1001b83ae(&local_438);
                local_858 = 0x8220202;
                local_84c = 0x400;
                local_84a = (char *)CONCAT44(local_84a._4_4_,(uint)*(ushort *)(local_888 + 0x10));
                __os_log_impl(0x100000000,uVar11,1,
                              "sync> ignoring attempt to delete distinguished playlist \"%{public}s\" (%d)"
                              ,&local_858,0x12);
                FUN_1001b7a50(&local_438);
              }
            }
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar11 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              local_858 = local_858 & 0xffff0000;
              __os_log_impl(0x100000000,uVar11,1,"sync> ignoring attempt to delete primary playlist"
                            ,&local_858,2);
            }
          }
          local_888 = 0;
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar11 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        local_87c = (undefined4)CONCAT71((int7)((ulong)pcVar14 >> 8),1);
        bVar18 = true;
        if (cVar2 != '\0') {
          local_858 = local_858 & 0xffff0000;
          pcVar14 = "sync> deleteWithoutSyncing flag set";
LAB_1004d2960:
          uVar15 = 2;
LAB_1004d296e:
          uVar11 = __os_log_impl(0x100000000,uVar11,1,pcVar14,&local_858,uVar15);
LAB_1004d2973:
          bVar18 = true;
          local_87c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1);
        }
LAB_1004d297b:
        if (local_888 != 0) {
          if (((char)local_87c == '\0') || (*(int *)(*(long *)(local_888 + 0x78) + 0x18) != 0)) {
            FUN_100316c04();
            if (!bVar18) {
              FUN_100436de8(param_1,local_888,0,0);
            }
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar11 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              FUN_100486d8f(&local_438,local_888);
              local_854 = (char *)FUN_1001b83ae(&local_438);
              local_84a = "in library";
              if (local_8a8 == *(long *)(param_1 + 0x30)) {
                local_84a = "on device";
              }
              local_858 = 0x8220202;
              local_84c = 0x822;
              __os_log_impl(0x100000000,uVar11,1,
                            "sync> deleting empty playlist \"%{public}s\" %{public}s",&local_858,
                            0x16);
              FUN_1001b7a50(&local_438);
            }
            FUN_100488d27(local_888,0,0);
          }
          FUN_1002fbbfc(local_8a8);
        }
      }
LAB_1004d2a8f:
      FUN_10017060f(local_8a0);
      goto LAB_1004d24af;
    }
    uVar11 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar11,0x10);
    if (cVar2 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "playlistDict != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 == '\0') goto LAB_1004d24af;
    local_854 = (char *)FUN_1001b83ae(local_8d8);
    pcVar14 = "sync> failed to parse \"%{public}s\"";
    uVar15 = 0x10;
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 == '\0') goto LAB_1004d24af;
    local_854 = (char *)FUN_1001b83ae(local_8d8);
    pcVar14 = "sync> ignoring \"%{public}s\" because cloud music library was enabled on device";
LAB_1004d249c:
    uVar15 = 1;
  }
  local_858 = 0x8220102;
  __os_log_impl(0x100000000,uVar11,uVar15,pcVar14,&local_858,0xc);
LAB_1004d24af:
  FUN_1001b7a50(local_8d8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

