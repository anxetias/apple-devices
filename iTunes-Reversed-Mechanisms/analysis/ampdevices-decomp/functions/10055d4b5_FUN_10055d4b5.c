// name: FUN_10055d4b5
// address: 10055d4b5

void FUN_10055d4b5(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined8 local_88;
  int local_7c;
  int local_78;
  char local_71;
  long local_70;
  uint local_68;
  int local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 local_52;
  char *local_50;
  undefined2 local_48;
  char *local_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pvVar14 = (void *)FUN_1001eada7(&DAT_1008c25b8);
  do {
    if (pvVar14 == (void *)0x0) {
      DAT_1008c7878 = 0;
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (DAT_1008c7874 == '\0') {
      iVar13 = *(int *)((long)pvVar14 + 8);
      pcVar19 = *(char **)((long)pvVar14 + 0x10);
      lVar15 = _AMDeviceCopyDeviceIdentifier(pcVar19);
      local_78 = _AMDeviceGetInterfaceType(pcVar19);
      if (lVar15 == 0) {
        uVar16 = FUN_1001cc310();
        cVar11 = _os_log_type_enabled(uVar16,0x10);
        if (cVar11 != '\0') {
          local_68 = 0x8220202;
          local_64 = 0x7a0a90;
          uStack_60 = 1;
          uStack_5e = 0;
          uStack_5c = 0x822;
          uStack_5a = 0x51a0;
          uStack_58 = 0x7a;
          uStack_56 = 1;
          __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
      }
      uVar9 = uStack_56;
      uVar3 = uStack_58;
      uVar2 = uStack_5a;
      uStack_5a = (undefined2)lVar15;
      uVar8 = uStack_5a;
      uStack_58 = (undefined2)((ulong)lVar15 >> 0x10);
      uVar6 = uStack_58;
      uStack_56 = (undefined4)((ulong)lVar15 >> 0x20);
      uVar10 = uStack_56;
      uStack_5a = uVar2;
      uStack_58 = uVar3;
      uStack_56 = uVar9;
      if (iVar13 == 0x61666364) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar16 = DAT_1008c75b8;
        cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar11 != '\0') {
          pcVar17 = "USB";
          if (local_78 == 2) {
            pcVar17 = "WiFi";
          }
          local_68 = 0x8220302;
          local_64 = (int)pcVar17;
          uStack_60 = (undefined2)((ulong)pcVar17 >> 0x20);
          uStack_5e = 0;
          uStack_5c = 0x842;
          local_52 = 0x800;
          uStack_5a = uVar8;
          uStack_58 = uVar6;
          uStack_56 = uVar10;
          local_50 = pcVar19;
          __os_log_impl(0x100000000,uVar16,1,
                        "support> handling kAFCDeviceDetachedMessage for %{public}s interface for device %{public}@ (%p)"
                        ,&local_68,0x20);
        }
        local_70 = FUN_1002645db(lVar15);
        uVar3 = uStack_5e;
        uVar2 = uStack_60;
        iVar13 = local_64;
        if (local_70 != 0) {
          uStack_60 = (undefined2)((ulong)pcVar19 >> 0x20);
          uVar4 = uStack_60;
          uStack_5e = (undefined2)((ulong)pcVar19 >> 0x30);
          uVar5 = uStack_5e;
          local_64 = (int)pcVar19;
          iVar1 = local_64;
          local_64 = iVar13;
          uStack_60 = uVar2;
          uStack_5e = uVar3;
          if (local_78 == 2) {
            cVar11 = FUN_100170633(*(undefined8 *)(local_70 + 0x6de0),pcVar19);
            if (cVar11 == '\0') {
              uVar16 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar16,0x10);
              if (cVar11 != '\0') {
                local_68 = 0x8220202;
                local_64 = 0x7a0a90;
                uStack_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x822;
                uStack_5a = 0x7bc6;
                uStack_58 = 0x7e;
                uStack_56 = 1;
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_68,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar16 = DAT_1008c75b8;
              cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar11 == '\0') goto LAB_10055e17d;
              local_50 = *(char **)(local_70 + 0x6de0);
              pcVar19 = 
              "support> unexpected WiFi interface %p for device %{public}@, already have WiFi interface %p"
              ;
LAB_10055e00b:
              local_52 = 0x800;
              uStack_5c = 0x842;
              local_68 = 0x8000302;
              uVar20 = 1;
              uVar21 = 0x20;
              local_64 = iVar1;
              uStack_60 = uVar4;
              uStack_5e = uVar5;
              uStack_5a = uVar8;
              uStack_58 = uVar6;
              uStack_56 = uVar10;
              goto LAB_10055e015;
            }
            lVar18 = 0x6de0;
LAB_10055daa8:
            puVar22 = (undefined8 *)(local_70 + lVar18);
            FUN_10017060f(*puVar22);
            *puVar22 = 0;
            if (((*(char *)(local_70 + 0x6df7) != '\0') && (*(long *)(local_70 + 0x6e08) != 0)) &&
               (*(char **)(local_70 + 0x6e10) == pcVar19)) {
              FUN_10055c435(local_70,0);
              lVar18 = FUN_10055ae0c(local_70);
              if (lVar18 != 0) {
                FUN_10055c435(local_70,1);
              }
            }
            FUN_10026394e(local_70);
            lVar18 = local_70;
            FUN_10026473a(local_70,0x696e7464,0,0);
            FUN_100264854(lVar18);
            if (*(long *)(local_70 + 0x6dd8) == 0) {
              if (*(char *)(local_70 + 0x36) != '\0') {
                FUN_100264de6(local_70);
                lVar18 = local_70;
                FUN_10026473a(local_70,0x706f6475,0,0);
                FUN_100264854(lVar18);
                if (*(long *)(local_70 + 0x6dd8) != 0) goto LAB_10055e178;
              }
              lVar18 = local_70;
              if ((*(long *)(local_70 + 0x6de0) == 0) &&
                 ((*(char *)(local_70 + 0x45) == '\0' || (*(char *)(local_70 + 0x6dfa) == '\0')))) {
                if (local_78 != 2) {
                  *(undefined1 *)(local_70 + 0x34) = 0;
                }
                if (*(char *)(local_70 + 0x37) == '\0') {
                  *(undefined1 *)(local_70 + 0x37) = 1;
                  FUN_10026473a(local_70,0x706f6472,0,0);
                  FUN_100264854(lVar18);
                  FUN_100264ec8(local_70);
                }
              }
            }
LAB_10055e178:
            FUN_100264ec8(local_70);
          }
          else {
            cVar11 = FUN_100170633(*(undefined8 *)(local_70 + 0x6dd8),pcVar19);
            if (cVar11 != '\0') {
              lVar18 = 0x6dd8;
              goto LAB_10055daa8;
            }
            uVar16 = FUN_1001cc310();
            cVar11 = _os_log_type_enabled(uVar16,0x10);
            if (cVar11 != '\0') {
              local_68 = 0x8220202;
              local_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              uStack_5a = 0x7bf2;
              uStack_58 = 0x7e;
              uStack_56 = 1;
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar11 != '\0') {
              local_50 = *(char **)(local_70 + 0x6dd8);
              pcVar19 = 
              "support> unexpected USB interface %p for device %{public}@, already have USB interface %p"
              ;
              goto LAB_10055e00b;
            }
          }
        }
      }
      else if (iVar13 == 0x61666361) {
        local_71 = FUN_10017cbd0((long)pvVar14 + 0x18);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar16 = DAT_1008c75b8;
        cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar11 != '\0') {
          pcVar17 = "USB";
          if (local_78 == 2) {
            pcVar17 = "WiFi";
          }
          local_68 = 0x8220302;
          local_64 = (int)pcVar17;
          uStack_60 = (undefined2)((ulong)pcVar17 >> 0x20);
          uStack_5e = 0;
          uStack_5c = 0x842;
          local_52 = 0x800;
          uStack_5a = uVar8;
          uStack_58 = uVar6;
          uStack_56 = uVar10;
          local_50 = pcVar19;
          __os_log_impl(0x100000000,uVar16,1,
                        "support> handling kAFCDeviceAttachedMessage for %{public}s interface for device %{public}@ (%p)"
                        ,&local_68,0x20);
        }
        local_70 = FUN_1002645db(lVar15);
        uVar4 = uStack_5e;
        uVar2 = uStack_60;
        iVar13 = local_64;
        uStack_60 = (undefined2)((ulong)lVar15 >> 0x20);
        uVar3 = uStack_60;
        uStack_5e = (undefined2)((ulong)lVar15 >> 0x30);
        uVar5 = uStack_5e;
        local_64 = (int)lVar15;
        iVar1 = local_64;
        local_64 = iVar13;
        uStack_60 = uVar2;
        uStack_5e = uVar4;
        if (local_70 == 0) {
          iVar13 = FUN_1005bc3be(pcVar19,&local_7c);
          if (iVar13 == -0x80) {
LAB_10055dbf7:
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar11 == '\0') goto LAB_10055e17d;
            pcVar19 = "MobileDeviceGetDeviceClass failed (0x%08X) for device %{public}@";
            local_64 = iVar13;
          }
          else {
            if (iVar13 != 0) {
              uVar16 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar16,0x10);
              if (cVar11 != '\0') {
                local_68 = 0x8220202;
                local_64 = 0x7a0a90;
                uStack_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x400;
                uStack_5a = (undefined2)iVar13;
                uStack_58 = (undefined2)((uint)iVar13 >> 0x10);
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_68,0x12
                                   );
              }
              goto LAB_10055dbf7;
            }
            if (local_7c == 0) {
              uVar16 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar16,0x10);
              if (cVar11 != '\0') {
                local_68 = 0x8220202;
                local_64 = 0x7a0a90;
                uStack_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x822;
                uStack_5a = 0x2e55;
                uStack_58 = 0x7b;
                uStack_56 = 1;
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_68,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar16 = DAT_1008c75b8;
              cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar11 != '\0') {
                uStack_5a = SUB82(pcVar19,0);
                uStack_58 = (undefined2)((ulong)pcVar19 >> 0x10);
                uStack_56 = (undefined4)((ulong)pcVar19 >> 0x20);
                pcVar19 = "support> ignoring unknown device class for device %{public}@ (%p)";
                goto LAB_10055da79;
              }
              goto LAB_10055e17d;
            }
            iVar13 = FUN_1005b916f(pcVar19,&local_88);
            if (iVar13 != -0x80) {
              if (iVar13 == 0) {
                iVar13 = FUN_100263a04(local_88,local_88,0x100,local_7c,1,&DAT_1008c2548,&local_70);
                if (iVar13 != -0x80) {
                  if (iVar13 == 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar16 = DAT_1008c75b8;
                    cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                    if (cVar11 != '\0') {
                      local_68 = 0x8000202;
                      local_64 = (int)local_70;
                      uStack_60 = (undefined2)((ulong)local_70 >> 0x20);
                      uStack_5e = (undefined2)((ulong)local_70 >> 0x30);
                      uStack_5c = 0x842;
                      uStack_5a = uVar8;
                      uStack_58 = uVar6;
                      uStack_56 = uVar10;
                      __os_log_impl(0x100000000,uVar16,1,
                                    "support> created new device %p for device %{public}@",&local_68
                                    ,0x16);
                    }
                    if (local_70 != 0) {
                      if (*(char *)(local_70 + 0x40) != '\0') {
                        uVar16 = FUN_1001cc310();
                        cVar11 = _os_log_type_enabled(uVar16,0x10);
                        if (cVar11 != '\0') {
                          local_68 = 0x8220202;
                          local_64 = 0x7a0a90;
                          uStack_60 = 1;
                          uStack_5e = 0;
                          uStack_5c = 0x822;
                          uStack_5a = 0x7b55;
                          uStack_58 = 0x7e;
                          uStack_56 = 1;
                          __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",
                                              &local_68,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      uVar16 = FUN_1001705fc(lVar15);
                      *(undefined8 *)(local_70 + 0x6dc8) = uVar16;
                      lVar18 = FUN_1005bac08(pcVar19);
                      *(long *)(local_70 + 0x6dd0) = lVar18;
                      *(undefined4 *)(local_70 + 0x6df0) = 0xffffffff;
                      if (lVar18 == 0) {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar16 = DAT_1008c75b8;
                        cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                        if (cVar11 != '\0') {
                          local_68 = 0x8420102;
                          local_64 = iVar1;
                          uStack_60 = uVar3;
                          uStack_5e = uVar5;
                          __os_log_impl(0x100000000,uVar16,0x10,
                                        "MobileDeviceCopyProductVersion failed for device %{public}@"
                                        ,&local_68,0xc);
                        }
                      }
                      if (local_71 == '\0') {
                        *(undefined1 *)(local_70 + 0x41) = 1;
                        *(undefined2 *)(local_70 + 0x6df5) = 0;
                        bVar23 = false;
                      }
                      else {
                        uVar12 = FUN_1005c4887(pcVar19);
                        *(undefined1 *)(local_70 + 0x6df5) = uVar12;
                        uVar12 = FUN_1005c4770(pcVar19);
                        *(undefined1 *)(local_70 + 0x6df6) = uVar12;
                        lVar18 = FUN_100173bb7(*(undefined8 *)(local_70 + 0x6dd0),&cf_6_0,0x40);
                        bVar23 = -1 < lVar18;
                      }
                      *(bool *)(local_70 + 0x6df7) = bVar23;
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar16 = DAT_1008c75b8;
                      cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar11 != '\0') {
                        pcVar17 = "YES";
                        if (*(char *)(local_70 + 0x6df5) == '\0') {
                          pcVar17 = "NO";
                        }
                        local_50 = "YES";
                        if (*(char *)(local_70 + 0x6df6) == '\0') {
                          local_50 = "NO";
                        }
                        local_46 = "YES";
                        if (*(char *)(local_70 + 0x6df7) == '\0') {
                          local_46 = "NO";
                        }
                        local_68 = 0x8420402;
                        uStack_5c = 0x822;
                        uStack_5a = SUB82(pcVar17,0);
                        uStack_58 = (undefined2)((ulong)pcVar17 >> 0x10);
                        uStack_56 = (undefined4)((ulong)pcVar17 >> 0x20);
                        local_52 = 0x822;
                        local_48 = 0x822;
                        pcVar17 = 
                        "airtraffic> device %{public}@, supportsWiFi = %{public}s, supportsAirTraffic = %{public}s, supportsPowerAssertions = %{public}s"
                        ;
                        uVar20 = 0x2a;
                        local_64 = iVar1;
                        uStack_60 = uVar3;
                        uStack_5e = uVar5;
                        goto LAB_10055d66c;
                      }
                      goto LAB_10055d671;
                    }
                    uVar16 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar11 != '\0') {
                      local_68 = 0x8220202;
                      local_64 = 0x7a0a90;
                      uStack_60 = 1;
                      uStack_5e = 0;
                      uStack_5c = 0x822;
                      uStack_5a = 0x7679;
                      uStack_58 = 0x7d;
                      uStack_56 = 1;
                      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",
                                          &local_68,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  else {
                    uVar16 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar11 != '\0') {
                      local_68 = 0x8220202;
                      local_64 = 0x7a0a90;
                      uStack_60 = 1;
                      uStack_5e = 0;
                      uStack_5c = 0x400;
                      uStack_5a = (undefined2)iVar13;
                      uStack_58 = (undefined2)((uint)iVar13 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                          &local_68,0x12);
                    }
                  }
                }
                goto LAB_10055e17d;
              }
              uVar16 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar16,0x10);
              if (cVar11 != '\0') {
                local_68 = 0x8220202;
                local_64 = 0x7a0a90;
                uStack_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x400;
                uStack_5a = (undefined2)iVar13;
                uStack_58 = (undefined2)((uint)iVar13 >> 0x10);
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_68,0x12
                                   );
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar11 == '\0') goto LAB_10055e17d;
            pcVar19 = "MobileDeviceGetDeviceID failed (0x%08X) for device %{public}@";
            local_64 = iVar13;
          }
          uStack_60 = 0x842;
          local_68 = 0x4000202;
          uVar20 = 0x10;
          uVar21 = 0x12;
          uStack_5e = uVar8;
          uStack_5c = uVar6;
          uStack_5a = uVar3;
          uStack_58 = uVar5;
LAB_10055e015:
          __os_log_impl(0x100000000,uVar16,uVar20,pcVar19,&local_68,uVar21);
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar11 != '\0') {
            local_68 = 0x8000202;
            local_64 = (int)local_70;
            uStack_60 = (undefined2)((ulong)local_70 >> 0x20);
            uStack_5e = (undefined2)((ulong)local_70 >> 0x30);
            uStack_5c = 0x842;
            pcVar17 = "support> found existing device %p for device %{public}@";
            uVar20 = 0x16;
            uStack_5a = uVar8;
            uStack_58 = uVar6;
            uStack_56 = uVar10;
LAB_10055d66c:
            __os_log_impl(0x100000000,uVar16,1,pcVar17,&local_68,uVar20);
          }
LAB_10055d671:
          if (local_78 == 2) {
            if (*(long *)(local_70 + 0x6de0) == 0) {
              if (*(char *)(local_70 + 0x6df5) == '\0') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar16 = DAT_1008c75b8;
                cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                if (cVar11 != '\0') {
                  local_68 = 0x8420102;
                  local_64 = iVar1;
                  uStack_60 = uVar3;
                  uStack_5e = uVar5;
                  __os_log_impl(0x100000000,uVar16,0x10,
                                "got WiFi interface for device %{public}@, but supportsWiFi flag is false"
                                ,&local_68,0xc);
                }
              }
              uVar16 = FUN_1001705fc(pcVar19);
              *(undefined8 *)(local_70 + 0x6de0) = uVar16;
              *(undefined1 *)(local_70 + 0x6dfa) = 1;
LAB_10055dcef:
              FUN_10026394e();
              if (*(char *)(local_70 + 0x6df7) != '\0') {
                FUN_10055c435(local_70,1);
              }
              lVar18 = local_70;
              if (local_71 == '\0') {
                FUN_10026473a(local_70,0x72617761,0,0);
                FUN_100264854(lVar18);
                lVar18 = local_70;
                FUN_10026473a(local_70,0x696e7461,0);
                FUN_100264854(lVar18);
              }
              else {
                if ((*(char *)(local_70 + 0x6df6) != '\0') && (*(char *)(local_70 + 0x6df7) == '\0')
                   ) {
                  lVar18 = _ATHostConnectionCreate(*(undefined8 *)(local_70 + 0x6dc8),0);
                  *(long *)(local_70 + 0x6e00) = lVar18;
                  if (lVar18 == 0) {
                    uVar16 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar11 != '\0') {
                      local_68 = 0x8220202;
                      local_64 = 0x7a0a90;
                      uStack_60 = 1;
                      uStack_5e = 0;
                      uStack_5c = 0x822;
                      uStack_5a = 0x7b9f;
                      uStack_58 = 0x7e;
                      uStack_56 = 1;
                      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",
                                          &local_68,0x16);
                    }
                    FUN_1001782e9(0,0);
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar16 = DAT_1008c75b8;
                    cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                    if (cVar11 != '\0') {
                      local_68 = local_68 & 0xffff0000;
                      __os_log_impl(0x100000000,uVar16,0x10,"ATHostConnectionCreate failed",
                                    &local_68,2);
                    }
                  }
                  FUN_10055c435(local_70,1);
                }
                if ((*(char *)(local_70 + 0x6df5) != '\0') && (*(long *)(local_70 + 0x6de8) == 0)) {
                  iVar13 = FUN_1005c5ee3(pcVar19,0,local_70 + 0x6de8);
                  uVar4 = uStack_5c;
                  uVar2 = uStack_5e;
                  uStack_5e = (undefined2)iVar13;
                  uVar6 = uStack_5e;
                  uStack_5c = (undefined2)((uint)iVar13 >> 0x10);
                  uVar7 = uStack_5c;
                  uStack_5e = uVar2;
                  uStack_5c = uVar4;
                  if (iVar13 != -0x80) {
                    if (iVar13 == 0) goto LAB_10055ddf4;
                    uVar16 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar11 != '\0') {
                      local_68 = 0x8220202;
                      local_64 = 0x7a0a90;
                      uStack_60 = 1;
                      uStack_5e = 0;
                      uStack_5c = 0x400;
                      uStack_5a = uVar6;
                      uStack_58 = uVar7;
                      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                          &local_68,0x12);
                    }
                  }
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar16 = DAT_1008c75b8;
                  cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                  if (cVar11 != '\0') {
                    local_68 = 0x4000302;
                    uStack_60 = 0x400;
                    uStack_5a = 0x842;
                    uStack_56 = (undefined4)((ulong)lVar15 >> 0x10);
                    local_64 = iVar13;
                    uStack_5e = uVar6;
                    uStack_5c = uVar7;
                    uStack_58 = uVar8;
                    local_52 = uVar5;
                    __os_log_impl(0x100000000,uVar16,0x10,
                                  "AMDeviceCreateWakeupToken failed (%d / 0x%08X) for device %{public}@"
                                  ,&local_68,0x18);
                  }
                }
LAB_10055ddf4:
                lVar18 = local_70;
                if ((*(long *)(local_70 + 0x6dd8) == 0) || (*(long *)(local_70 + 0x6de0) == 0)) {
                  FUN_10026473a(local_70,0x706f6461,0,0);
                  FUN_100264854(lVar18);
                }
                lVar18 = local_70;
                FUN_10026473a(local_70,0x696e7461,0,0);
                FUN_100264854(lVar18);
                cVar11 = FUN_10017cbd0(local_70 + 0x48);
                if (cVar11 == '\0') {
                  FUN_100264a2f(local_70,(long)pvVar14 + 0x18);
                  FUN_100264704(local_70,0x706f646d,0);
                }
                if (*(char *)(local_70 + 0x6df4) != '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar16 = DAT_1008c75b8;
                  cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar11 != '\0') {
                    local_68 = 0x8420102;
                    local_64 = iVar1;
                    uStack_60 = uVar3;
                    uStack_5e = uVar5;
                    __os_log_impl(0x100000000,uVar16,1,
                                  "support> finished wakeup for device %{public}@",&local_68,0xc);
                  }
                  *(undefined1 *)(local_70 + 0x6df4) = 0;
                }
              }
              if (*(char *)(local_70 + 0x6df7) != '\0') {
                if (*(int *)(local_70 + 0x2c) == 0) {
                  FUN_10055c435(local_70,0);
                }
                else {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar16 = DAT_1008c75b8;
                  cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar11 != '\0') {
                    iVar13 = _AMDeviceGetInterfaceType(*(undefined8 *)(local_70 + 0x6e10));
                    pcVar19 = "UNKNOWN";
                    if (iVar13 == 2) {
                      pcVar19 = "WiFi";
                    }
                    if (iVar13 == 1) {
                      pcVar19 = "USB";
                    }
                    uVar20 = *(undefined8 *)(local_70 + 0x6dc8);
                    local_68 = 0x8220302;
                    local_64 = (int)pcVar19;
                    uStack_60 = (undefined2)((ulong)pcVar19 >> 0x20);
                    uStack_5e = 0;
                    uStack_5c = 0x842;
                    uStack_5a = (undefined2)uVar20;
                    uStack_58 = (undefined2)((ulong)uVar20 >> 0x10);
                    uStack_56 = (undefined4)((ulong)uVar20 >> 0x20);
                    local_52 = 0x400;
                    local_50 = (char *)CONCAT44(local_50._4_4_,*(undefined4 *)(local_70 + 0x2c));
                    __os_log_impl(0x100000000,uVar16,1,
                                  "support> not releasing power assertion for %{public}s interface for device %{public}@ since lock count is %u"
                                  ,&local_68,0x1c);
                  }
                }
              }
              goto LAB_10055e178;
            }
            uVar16 = FUN_1001cc310();
            cVar11 = _os_log_type_enabled(uVar16,0x10);
            if (cVar11 != '\0') {
              local_68 = 0x8220202;
              local_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              uStack_5a = 0x7b7e;
              uStack_58 = 0x7e;
              uStack_56 = 1;
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar11 != '\0') {
              uVar20 = *(undefined8 *)(local_70 + 0x6de0);
              uStack_5a = (undefined2)uVar20;
              uStack_58 = (undefined2)((ulong)uVar20 >> 0x10);
              uStack_56 = (undefined4)((ulong)uVar20 >> 0x20);
              pcVar19 = "support> already have WiFi interface for device %{public}@ (%p)";
LAB_10055da79:
              uStack_5c = 0x800;
              local_68 = 0x8420202;
              uVar20 = 1;
              uVar21 = 0x16;
              local_64 = iVar1;
              uStack_60 = uVar3;
              uStack_5e = uVar5;
              goto LAB_10055e015;
            }
          }
          else {
            if (*(long *)(local_70 + 0x6dd8) == 0) {
              uVar16 = FUN_1001705fc(pcVar19);
              *(undefined8 *)(local_70 + 0x6dd8) = uVar16;
              goto LAB_10055dcef;
            }
            uVar16 = FUN_1001cc310();
            cVar11 = _os_log_type_enabled(uVar16,0x10);
            if (cVar11 != '\0') {
              local_68 = 0x8220202;
              local_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              uStack_5a = 0x7af7;
              uStack_58 = 0x7e;
              uStack_56 = 1;
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar11 != '\0') {
              uVar20 = *(undefined8 *)(local_70 + 0x6dd8);
              uStack_5a = (undefined2)uVar20;
              uStack_58 = (undefined2)((ulong)uVar20 >> 0x10);
              uStack_56 = (undefined4)((ulong)uVar20 >> 0x20);
              pcVar19 = "support> already have USB interface for device %{public}@ (%p)";
              goto LAB_10055da79;
            }
          }
        }
      }
LAB_10055e17d:
      FUN_10017060f(lVar15);
    }
    FUN_10017060f(*(undefined8 *)((long)pvVar14 + 0x10));
    operator_delete(pvVar14);
    pvVar14 = (void *)FUN_1001eada7(&DAT_1008c25b8);
  } while( true );
}

