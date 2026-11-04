// name: FUN_1002008a6
// address: 1002008a6

int FUN_1002008a6(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  bool bVar17;
  double dVar18;
  long local_b68;
  long *plStack_b60;
  long local_b58;
  long *plStack_b50;
  long local_b48;
  long *plStack_b40;
  undefined1 local_b38 [12];
  undefined4 local_b2c;
  undefined1 local_b28 [16];
  undefined1 local_b18 [16];
  long local_b08;
  undefined4 local_b00;
  undefined4 local_afc;
  long local_af8;
  long local_af0;
  long local_ae8;
  double local_ae0;
  long local_ad8;
  uint local_acc;
  long local_ac8;
  long local_ac0;
  long *local_ab8;
  char local_aa9;
  long local_aa8;
  long *local_aa0;
  undefined8 local_a98;
  undefined2 uStack_a90;
  undefined2 uStack_a8e;
  undefined2 uStack_a8c;
  undefined2 uStack_a8a;
  undefined2 uStack_a88;
  undefined4 uStack_a86;
  undefined2 local_a82;
  long local_a80;
  long *local_a78;
  long local_a68;
  undefined7 uStack_a60;
  undefined4 uStack_a59;
  undefined8 local_a50;
  undefined8 uStack_a48;
  long *local_a40;
  undefined1 local_678 [512];
  undefined1 local_478 [1056];
  undefined2 local_58;
  undefined2 uStack_56;
  int iStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar12 = *param_1;
  lVar13 = param_1[0xca];
  FUN_1001cc3a4(0);
  FUN_1001b7b04(&local_a98,"RestoreDeviceFromBackup");
  local_ae8 = lVar13;
  local_aa8 = lVar12;
  local_aa0 = param_1;
  FUN_1001cc232(local_b38,&local_a98);
  FUN_1001b7a50(&local_a98);
  if (*(char *)(local_aa8 + 0x6ae9) != '\0') {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_a98._0_2_ = 0x202;
      local_a98._2_2_ = 0x822;
      local_a98._4_4_ = 0x7a0a90;
      uStack_a90 = 1;
      uStack_a8e = 0;
      uStack_a8c = 0x822;
      uStack_a8a = 0xda35;
      uStack_a88 = 0x7a;
      uStack_a86 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
    }
    iVar6 = 0x492;
    FUN_1001782e9(0,0);
    goto LAB_100202757;
  }
  if (*(char *)(local_aa8 + 0x6aea) != '\0') {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_a98._0_2_ = 0x202;
      local_a98._2_2_ = 0x822;
      local_a98._4_4_ = 0x7a0a90;
      uStack_a90 = 1;
      uStack_a8e = 0;
      uStack_a8c = 0x822;
      uStack_a8a = 0xda57;
      uStack_a88 = 0x7a;
      uStack_a86 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
    }
    iVar6 = 0x495;
    FUN_1001782e9(0,0);
    goto LAB_100202757;
  }
  if (*(char *)(local_aa8 + 0x6aeb) != '\0') {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_a98._0_2_ = 0x202;
      local_a98._2_2_ = 0x822;
      local_a98._4_4_ = 0x7a0a90;
      uStack_a90 = 1;
      uStack_a8e = 0;
      uStack_a8c = 0x822;
      uStack_a8a = 0xda77;
      uStack_a88 = 0x7a;
      uStack_a86 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
    }
    iVar6 = 0x493;
    FUN_1001782e9(0,0);
    goto LAB_100202757;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar9 = DAT_1008c75b8;
  cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar4 != '\0') {
    uVar10 = *(undefined8 *)(local_aa8 + 0x152c8);
    local_a98._0_2_ = 0x102;
    local_a98._2_2_ = 0x842;
    local_a98._4_4_ = (int)uVar10;
    uStack_a90 = (undefined2)((ulong)uVar10 >> 0x20);
    uStack_a8e = (undefined2)((ulong)uVar10 >> 0x30);
    __os_log_impl(0x100000000,uVar9,1,"restore> restoring device %{public}@",&local_a98,0xc);
  }
  *(undefined1 *)(local_aa8 + 0x6aeb) = 1;
  uVar5 = FUN_1001b19b0();
  *(undefined4 *)((long)local_aa0 + 0x694) = uVar5;
  if ((*(byte *)((long)local_aa0 + 0x671) & 4) != 0) {
    uVar10 = FUN_1001c156e();
    FUN_1001c6987(uVar10,0x69707273,*(undefined4 *)(local_aa8 + 0x28),0,0);
  }
  FUN_10023318f(local_aa8,"");
  local_aa9 = FUN_100167dd2(local_ae8,&cf_IsEncrypted,0);
  if ((local_aa9 == '\0') || (local_aa0[0xcb] != 0)) {
    uVar14 = 0;
    uVar5 = 0;
LAB_100200add:
    lVar12 = local_aa8;
    local_b2c = uVar14;
    local_b00 = uVar5;
    if ((*(byte *)((long)local_aa0 + 0x671) & 0x10) != 0) {
      if (*(char *)(local_aa8 + 0x3a2) == '\0') {
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 != '\0') {
          local_a98._0_2_ = 0x202;
          local_a98._2_2_ = 0x822;
          local_a98._4_4_ = 0x7a0a90;
          uStack_a90 = 1;
          uStack_a8e = 0;
          uStack_a8c = 0x822;
          uStack_a8a = 0xdba6;
          uStack_a88 = 0x7a;
          uStack_a86 = 1;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      lVar12 = local_aa8;
      uVar9 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        local_a98._0_2_ = 0;
        __os_log_impl(0x100000000,uVar9,1,"restore> waiting for SyncAllowed from AirTraffic",
                      &local_a98,2);
      }
      FUN_1001c334a(local_b28,0x110e0055);
      FUN_1004f0e83(lVar12,&local_a98);
      FUN_1001b8dfc(local_b18,&local_a98);
      FUN_1001bbec4(&local_58,local_b28,local_b18);
      FUN_1001bb41a(&local_58,local_678);
      FUN_1001b7a50(&local_58);
      FUN_1001b7a50(local_b18);
      FUN_1001b7a50(local_b28);
      local_b68 = local_aa0[0xcf];
      plStack_b60 = (long *)local_aa0[0xd0];
      if (local_aa0[0xd0] != 0) {
        LOCK();
        plVar1 = (long *)(local_aa0[0xd0] + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      FUN_1001ceb3c(&local_b68,0x7570726d,0,0xffffffffffffffff,local_678);
      if (plStack_b60 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_b60 + 1;
        lVar13 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_b60 + 0x10))(plStack_b60);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (*(char *)(lVar12 + 0x16841) == '\0') {
        uVar9 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
        do {
          iVar6 = FUN_1001b1a0f();
          iVar7 = FUN_1001b19b0();
          if (iVar6 == iVar7) {
            FUN_1001727b4(DAT_100712588,uVar9,0);
          }
          else {
            FUN_1001b0d8d(DAT_100712588);
          }
        } while (*(char *)(lVar12 + 0x16841) == '\0');
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar9 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        local_a98._0_2_ = 0;
        __os_log_impl(0x100000000,uVar9,1,"restore> got SyncAllowed from AirTraffic",&local_a98,2);
      }
    }
    lVar13 = local_ae8;
    if (local_ae8 == 0) {
      local_ad8 = 0;
      local_ae0 = 0.0;
      local_ab8 = (long *)0x0;
      local_af0 = 0;
      local_b08 = 0;
      lVar11 = 0;
      local_af8 = 0;
      local_ac8 = 0;
    }
    else {
      uVar9 = FUN_100166c1b(local_ae8,&cf_SourceIdentifier);
      lVar11 = FUN_1001705fc(uVar9);
      local_aa0[0xcd] = lVar11;
      if (lVar11 == 0) {
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          iStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "context->sourceTargetIdentifier != nullptr";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        lVar13 = local_ae8;
      }
      local_ac8 = FUN_100166b7f(lVar13,&cf_iTunesFiles);
      local_af8 = FUN_100166b7f(lVar13,&cf_iTunesSettings);
      lVar11 = FUN_100166b7f(lVar13,&cf_SyncSettings);
      local_b08 = FUN_100166b7f(lVar13,&cf_Applications);
      local_af0 = FUN_100166844(lVar13,&cf_InstalledApplications);
      local_ab8 = (long *)FUN_10016696d(lVar13,&cf_iBooksData);
      local_ae0 = (double)FUN_10016696d(lVar13,&cf_iBooksData2);
      local_ad8 = FUN_10016696d(lVar13,&cf_iBooksData3);
      FUN_100167064(lVar13,&cf_ProductType,local_aa0 + 0x86,0x20);
      plVar1 = local_aa0 + 0x8a;
      FUN_100166ce2(lVar13,&cf_DeviceName,plVar1);
      if ((short)*plVar1 == 0) {
        FUN_100166ce2(lVar13,&cf_DisplayName,plVar1);
      }
      cVar4 = FUN_100167064(lVar13,&cf_UniqueIdentifier,&local_a98,0x40);
      if (cVar4 != '\0') {
        if (((*(char *)(lVar12 + 0x337) == '\0') && (*(char *)(lVar12 + 0x244) != '\0')) &&
           (cVar4 = FUN_1001df957(lVar12 + 0x244,&local_a98,1), cVar4 != '\0')) {
          iVar6 = FUN_1001888ba(lVar12 + 0x75e0,"IC-Info.sidb",0,0);
          bVar17 = iVar6 != 0;
        }
        else {
          bVar17 = false;
        }
        *(bool *)((long)local_aa0 + 0x691) = bVar17;
      }
      uVar9 = FUN_100171475(local_ae8,&cf_RestoreCompatibility);
      cVar4 = FUN_100170633(uVar9,&cf_ApplicationDataOnlyCompatible);
      if (cVar4 != '\0') {
        *(byte *)(local_aa0 + 0xce) = *(byte *)(local_aa0 + 0xce) | 0x40;
      }
    }
    if (local_aa0[0xcd] == 0) {
      lVar12 = FUN_1001705fc(*(undefined8 *)(lVar12 + 0x152c8));
      local_aa0[0xcd] = lVar12;
      lVar12 = local_aa8;
    }
    plVar1 = local_aa0 + 0x8a;
    if ((short)local_aa0[0x8a] == 0) {
LAB_10020126f:
      local_ac0 = 0;
    }
    else {
      iVar6 = (int)local_aa0[1];
      if (iVar6 == 0x69506164) {
        pcVar15 = "iPad";
LAB_100201118:
        if (((char)local_aa0[0x86] != '\0') &&
           (cVar4 = FUN_1001e3580(local_aa0 + 0x86,pcVar15,0), cVar4 == '\0')) goto LAB_10020126f;
      }
      else {
        if (iVar6 == 0x69506f74) {
          pcVar15 = "iPod";
          goto LAB_100201118;
        }
        if (iVar6 == 0x6950686e) {
          pcVar15 = "iPhone";
          goto LAB_100201118;
        }
      }
      local_ac0 = FUN_1005babf7(*(undefined8 *)(lVar12 + 0x7168));
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar9 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        FUN_1001b8dfc(&local_a98,plVar1);
        uVar10 = FUN_1001b83ae(&local_a98);
        local_58 = 0x102;
        uStack_56 = 0x820;
        iStack_54 = (int)uVar10;
        uStack_50 = (undefined4)((ulong)uVar10 >> 0x20);
        __os_log_impl(0x100000000,uVar9,1,"restore> setting device name to \"%s\"",&local_58,0xc);
        FUN_1001b7a50(&local_a98);
      }
      iVar6 = FUN_1005bc68e(*(undefined8 *)(lVar12 + 0x7168),plVar1);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) goto LAB_10020127a;
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 != '\0') {
          local_a98._0_2_ = 0x202;
          local_a98._2_2_ = 0x822;
          local_a98._4_4_ = 0x7a0a90;
          uStack_a90 = 1;
          uStack_a8e = 0;
          uStack_a8c = 0x400;
          uStack_a8a = (undefined2)iVar6;
          uStack_a88 = (undefined2)((uint)iVar6 >> 0x10);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_a98,0x12);
        }
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar9 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar4 != '\0') {
        local_a98._0_2_ = 0x100;
        local_a98._2_2_ = 0x400;
        local_a98._4_4_ = iVar6;
        __os_log_impl(0x100000000,uVar9,0x10,"restore> MobileDeviceSetDeviceName failed (0x%08X)",
                      &local_a98,8);
      }
    }
LAB_10020127a:
    FUN_10016bec9(&local_a98,*(undefined8 *)(lVar12 + 0x152c8));
    iVar6 = _AMSUnregisterTarget
                      (CONCAT44(local_a98._4_4_,CONCAT22(local_a98._2_2_,(undefined2)local_a98)));
    FUN_10016d588(&local_a98);
    if (iVar6 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar9 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar4 != '\0') {
        uVar10 = *(undefined8 *)(lVar12 + 0x152c8);
        local_a98._0_2_ = 0x202;
        local_a98._2_2_ = 0x400;
        uStack_a90 = 0x842;
        uStack_a8e = (undefined2)uVar10;
        uStack_a8c = (undefined2)((ulong)uVar10 >> 0x10);
        uStack_a8a = (undefined2)((ulong)uVar10 >> 0x20);
        uStack_a88 = (undefined2)((ulong)uVar10 >> 0x30);
        local_a98._4_4_ = iVar6;
        __os_log_impl(0x100000000,uVar9,0x10,"AMSUnregisterTarget failed (%d) for device %{public}@"
                      ,&local_a98,0x12);
      }
    }
    uVar8 = *(uint *)(local_aa0 + 0xce);
    if ((uVar8 & 0x20) == 0 && lVar11 != 0) {
      local_afc = FUN_1001ff952(local_aa0[0xcc],plVar1,lVar11);
      uVar8 = *(uint *)(local_aa0 + 0xce);
      lVar12 = local_aa8;
    }
    else {
      local_afc = 0;
    }
    if ((uVar8 & 2) == 0 && local_ac8 != 0) {
      FUN_1001b7b04(&local_a98,lVar12 + 0x3ba);
      FUN_1001b7b04(&local_58,"9.0");
      plVar1 = local_aa0;
      iVar6 = FUN_1001e6c16(&local_a98,&local_58);
      FUN_1001b7a50(&local_58);
      FUN_1001b7a50(&local_a98);
      if (iVar6 < 0) {
        *(undefined1 *)((long)plVar1 + 0x692) = 1;
      }
      cVar4 = FUN_100171439(local_ac8,&cf_iTunesPrefs_plist);
      if (cVar4 == '\0') {
        *(undefined1 *)((long)local_aa0 + 0x692) = 1;
      }
      FUN_1001714c2(local_ac8,FUN_10020416d);
      lVar12 = FUN_10016696d(local_ac8,&cf_iTunesPrefs);
      local_acc = (uint)CONCAT71((int7)((ulong)lVar12 >> 8),lVar12 != 0);
      uVar8 = *(uint *)(local_aa0 + 0xce);
      lVar12 = local_aa8;
    }
    else {
      local_acc = (uVar8 & 4) >> 2;
    }
    if ((local_af8 != 0) && ((uVar8 & 2) == 0)) {
      FUN_1001714c2(local_af8,FUN_1002045bc,*(undefined8 *)(lVar12 + 0x7168));
      uVar8 = *(uint *)(local_aa0 + 0xce);
      lVar12 = local_aa8;
    }
    if ((uVar8 >> 9 & 1) == 0) {
      if (*(char *)(lVar12 + 0x380) == '\0') {
        if (local_af0 != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            local_a98._0_2_ = 0x302;
            local_a98._2_2_ = 0x842;
            local_a98._4_4_ = 0x874630;
            uStack_a90 = 1;
            uStack_a8e = 0;
            uStack_a8c = 0x842;
            uStack_a8a = 0x3af0;
            uStack_a88 = 0x87;
            uStack_a86 = 1;
            local_a82 = 0x842;
            local_a80 = local_af0;
            __os_log_impl(0x100000000,uVar9,1,
                          "restore> setting %{public}@ in %{public}@ domain to %{public}@",
                          &local_a98,0x20);
          }
          iVar6 = FUN_1005bbb13(*(undefined8 *)(lVar12 + 0x7168),&cf_com_apple_iTunes,
                                &cf_RestoreApplications,local_af0);
          lVar12 = local_aa8;
          if (iVar6 != -0x80) {
            if (iVar6 == 0) goto LAB_10020182d;
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_a98._0_2_ = 0x202;
              local_a98._2_2_ = 0x822;
              local_a98._4_4_ = 0x7a0a90;
              uStack_a90 = 1;
              uStack_a8e = 0;
              uStack_a8c = 0x400;
              uStack_a8a = (undefined2)iVar6;
              uStack_a88 = (undefined2)((uint)iVar6 >> 0x10);
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_a98,0x12);
            }
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar4 != '\0') {
            local_a98._0_2_ = 0x302;
            local_a98._2_2_ = 0x842;
            local_a98._4_4_ = 0x873af0;
            uStack_a90 = 1;
            uStack_a8e = 0;
            uStack_a8c = 0x842;
            uStack_a8a = 0x4630;
            uStack_a88 = 0x87;
            uStack_a86 = 1;
            local_a82 = 0x400;
            local_a80 = CONCAT44(local_a80._4_4_,iVar6);
            __os_log_impl(0x100000000,uVar9,0x10,
                          "restore> MobileDeviceSetValue(%{public}@, %{public}@) failed (0x%08X)",
                          &local_a98,0x1c);
          }
        }
      }
      else if (local_b08 != 0) {
        uVar9 = FUN_100171413(0,0,local_b08);
        lVar13 = FUN_100171426(uVar9);
        if (0 < lVar13) {
          if (*(ushort *)(lVar12 + 100) < 0xa00) {
            FUN_1001714c2(uVar9,FUN_100204739,0);
          }
          iVar6 = FUN_1002441f8(*(undefined4 *)(lVar12 + 0x66b0),lVar12 + 0x6b40,0x72657374,1,
                                &local_a98);
          if (iVar6 == 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar10 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar4 != '\0') {
              iStack_54 = FUN_100171426(uVar9);
              local_58 = 0x100;
              uStack_56 = 0x400;
              __os_log_impl(0x100000000,uVar10,1,
                            "restore> saving RestoreApplications.plist, application count = %d",
                            &local_58,8);
            }
            iVar6 = FUN_10016a60e(uVar9,&local_a98,"RestoreApplications.plist",0,1,100,0);
            if (iVar6 != -0x80) {
              if (iVar6 == 0) goto LAB_100201535;
              uVar10 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar10,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x202;
                uStack_56 = 0x822;
                iStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar10 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x100;
              uStack_56 = 0x400;
              iStack_54 = iVar6;
              __os_log_impl(0x100000000,uVar10,0x10,
                            "restore> JRCFPropertyListSaveToFile failed for \"RestoreApplications.plist\" (%d)"
                            ,&local_58,8);
            }
          }
        }
LAB_100201535:
        if (local_af0 != 0) {
          lVar13 = FUN_10017072a(0,0);
          FUN_1001714c2(uVar9,FUN_1002049c5,lVar13);
          lVar11 = FUN_10017076e(lVar13);
          if (0 < lVar11) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar10 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar4 != '\0') {
              local_a98._0_2_ = 0x302;
              local_a98._2_2_ = 0x842;
              local_a98._4_4_ = 0x874630;
              uStack_a90 = 1;
              uStack_a8e = 0;
              uStack_a8c = 0x842;
              uStack_a8a = 0x3af0;
              uStack_a88 = 0x87;
              uStack_a86 = 1;
              local_a82 = 0x842;
              local_a80 = lVar13;
              __os_log_impl(0x100000000,uVar10,1,
                            "restore> setting %{public}@ in %{public}@ domain to %{public}@",
                            &local_a98,0x20);
            }
            iVar6 = FUN_1005bbb13(*(undefined8 *)(lVar12 + 0x7168),&cf_com_apple_iTunes,
                                  &cf_RestoreApplications,lVar13);
            if (iVar6 != -0x80) {
              if (iVar6 == 0) goto LAB_1002016ba;
              uVar10 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar10,0x10);
              if (cVar4 != '\0') {
                local_a98._0_2_ = 0x202;
                local_a98._2_2_ = 0x822;
                local_a98._4_4_ = 0x7a0a90;
                uStack_a90 = 1;
                uStack_a8e = 0;
                uStack_a8c = 0x400;
                uStack_a8a = (undefined2)iVar6;
                uStack_a88 = (undefined2)((uint)iVar6 >> 0x10);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_a98,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar10 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar4 != '\0') {
              local_a98._0_2_ = 0x302;
              local_a98._2_2_ = 0x842;
              local_a98._4_4_ = 0x873af0;
              uStack_a90 = 1;
              uStack_a8e = 0;
              uStack_a8c = 0x842;
              uStack_a8a = 0x4630;
              uStack_a88 = 0x87;
              uStack_a86 = 1;
              local_a82 = 0x400;
              local_a80 = CONCAT44(local_a80._4_4_,iVar6);
              __os_log_impl(0x100000000,uVar10,0x10,
                            "restore> MobileDeviceSetValue(%{public}@, %{public}@) failed (0x%08X)",
                            &local_a98,0x1c);
            }
          }
LAB_1002016ba:
          FUN_10017060f(lVar13);
        }
        FUN_10017060f(uVar9);
      }
    }
LAB_10020182d:
    if (((*(char *)(lVar12 + 0x39c) != '\0') &&
        ((local_ab8 != (long *)0x0 || local_ae0 != 0.0) || local_ad8 != 0)) &&
       (iVar6 = FUN_1002441f8(*(undefined4 *)(lVar12 + 0x66b0),lVar12 + 0x6b40,0x626f6f6b,1,
                              &local_a98), iVar6 == 0)) {
      if ((local_ab8 != (long *)0x0) &&
         (iVar6 = FUN_1001888ba(&local_a98,"iBooksData.plist",0,0), iVar6 == -0x2b)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          local_58 = 0;
          __os_log_impl(0x100000000,uVar9,1,"restore> saving iBooksData.plist",&local_58,2);
        }
        FUN_10016614c(local_ab8,&local_a98,"iBooksData.plist",0,0);
      }
      if ((local_ae0 != 0.0) &&
         (iVar6 = FUN_1001888ba(&local_a98,"iBooksData2.plist",0,0), iVar6 == -0x2b)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          local_58 = 0;
          __os_log_impl(0x100000000,uVar9,1,"restore> saving iBooksData2.plist",&local_58,2);
        }
        FUN_10016614c(local_ae0,&local_a98,"iBooksData2.plist",0,0);
      }
      if ((local_ad8 != 0) &&
         (iVar6 = FUN_1001888ba(&local_a98,"iBooksData3.plist",0,0), iVar6 == -0x2b)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          local_58 = 0;
          __os_log_impl(0x100000000,uVar9,1,"restore> saving iBooksData3.plist",&local_58,2);
        }
        FUN_10016614c(local_ad8,&local_a98,"iBooksData3.plist",0,0);
      }
    }
    if ((char)local_acc == '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      lVar12 = local_aa8;
      uVar9 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        local_a98._0_2_ = 0;
        __os_log_impl(0x100000000,uVar9,1,"restore> saving iTunesPrefs",&local_a98,2);
      }
      if (*(int *)(lVar12 + 0x14cd0) != 0x69707266) {
        FUN_1002455a1(local_aa8 + 0x14cd0);
      }
      *(undefined1 *)(local_aa8 + 0x14cd8) = 1;
      FUN_1004ef324(local_aa8,8,0);
    }
    if ((*(byte *)(local_aa0 + 0xce) & 0x10) == 0) {
      FUN_1005bfc22(*(undefined8 *)(local_aa8 + 0x7168),0x5ff < *(ushort *)(local_aa8 + 100));
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    lVar12 = local_aa8;
    uVar9 = DAT_1008c75b8;
    cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar4 != '\0') {
      local_a98._0_2_ = 0;
      __os_log_impl(0x100000000,uVar9,1,"restore> creating SyncAfterRestore",&local_a98,2);
    }
    iVar6 = FUN_100189206(lVar12 + 0x75e0,"SyncAfterRestore",local_478);
    if (iVar6 == -0x80) {
LAB_1002019eb:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar9 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar4 != '\0') {
        local_a98._0_2_ = 0x100;
        local_a98._2_2_ = 0x400;
        local_a98._4_4_ = iVar6;
        __os_log_impl(0x100000000,uVar9,0x10,"restore> failed to create SyncAfterRestore (%d)",
                      &local_a98,8);
      }
    }
    else if (iVar6 != 0) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_a98._0_2_ = 0x202;
        local_a98._2_2_ = 0x822;
        local_a98._4_4_ = 0x7a0a90;
        uStack_a90 = 1;
        uStack_a8e = 0;
        uStack_a8c = 0x400;
        uStack_a8a = (undefined2)iVar6;
        uStack_a88 = (undefined2)((uint)iVar6 >> 0x10);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_a98,0x12);
      }
      goto LAB_1002019eb;
    }
    local_ae0 = (double)FUN_1001ebd46();
    FUN_1001c334a(local_b28,0x110e0055);
    lVar12 = local_aa8;
    FUN_1004f0e83(local_aa8,&local_a98);
    plVar3 = local_aa0;
    FUN_1001b8dfc(local_b18,&local_a98);
    FUN_1001bbec4(&local_58,local_b28,local_b18);
    FUN_1001bb41a(&local_58,local_678);
    local_ad8 = lVar12 + 0x50;
    FUN_1001b7a50(&local_58);
    FUN_1001b7a50(local_b18);
    FUN_1001b7a50(local_b28);
    plVar1 = plVar3 + 0xd1;
    uVar9 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
    local_ab8 = plVar3 + 0xcb;
    while( true ) {
      *(undefined1 *)(plVar3 + 0xd2) = 0;
      *plVar1 = 0;
      iVar6 = FUN_1001ee6ff(FUN_100204abe,local_aa0,0xfffffffe,0,0,"RestoreMobileDeviceThread");
      if (iVar6 != 0) {
        if (iVar6 != -0x80) {
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_a98._0_2_ = 0x202;
            local_a98._2_2_ = 0x822;
            local_a98._4_4_ = 0x7a0a90;
            uStack_a90 = 1;
            uStack_a8e = 0;
            uStack_a8c = 0x400;
            uStack_a8a = (undefined2)iVar6;
            uStack_a88 = (undefined2)((uint)iVar6 >> 0x10);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_a98,0x12);
          }
        }
        goto LAB_100202561;
      }
      local_b58 = local_aa0[0xcf];
      plStack_b50 = (long *)local_aa0[0xd0];
      if (local_aa0[0xd0] != 0) {
        LOCK();
        plVar2 = (long *)(local_aa0[0xd0] + 8);
        *plVar2 = *plVar2 + 1;
        UNLOCK();
      }
      FUN_1001ceb3c(&local_b58,0x7570726d,0,0xffffffffffffffff);
      if (plStack_b50 != (long *)0x0) {
        LOCK();
        plVar2 = plStack_b50 + 1;
        lVar12 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_b50 + 0x10))(plStack_b50);
          std::__shared_weak_count::__release_weak();
        }
      }
      while ((char)local_aa0[0xd2] == '\0') {
        iVar6 = (int)*plVar1;
        if (iVar6 - 1U < 100) {
          local_b48 = local_aa0[0xcf];
          plStack_b40 = (long *)local_aa0[0xd0];
          if (local_aa0[0xd0] != 0) {
            LOCK();
            plVar2 = (long *)(local_aa0[0xd0] + 8);
            *plVar2 = *plVar2 + 1;
            UNLOCK();
            iVar6 = (int)*plVar1;
          }
          FUN_1001ceb3c(&local_b48,0x7570726d,(long)iVar6,100);
          if (plStack_b40 != (long *)0x0) {
            LOCK();
            plVar2 = plStack_b40 + 1;
            lVar12 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plStack_b40 + 0x10))(plStack_b40);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        iVar6 = FUN_1001b1a0f();
        iVar7 = FUN_1001b19b0();
        if (iVar6 == iVar7) {
          FUN_1001727b4(DAT_100712580,uVar9,0);
        }
        else {
          FUN_1001b0be5();
        }
      }
      if (*(int *)((long)local_aa0 + 0x68c) != -0x1f) break;
      FUN_10017060f(*local_ab8);
      *local_ab8 = 0;
      uVar5 = FUN_100545604(local_aa8,1,0);
      bVar17 = (char)uVar5 != '\0';
      if ((*(int *)((long)local_aa0 + 0x68c) != -0x1f) || (local_b00 = uVar5, (char)uVar5 == '\0'))
      goto LAB_100201d87;
    }
    bVar17 = (char)local_b00 != '\0';
LAB_100201d87:
    lVar12 = *local_ab8;
    dVar18 = (double)FUN_1001ebd46();
    FUN_1003679f7(dVar18 - local_ae0,local_ad8,lVar12 != 0,*(undefined4 *)((long)local_aa0 + 0x68c))
    ;
    if (*(int *)((long)local_aa0 + 0x68c) == 0) {
      *(undefined1 *)(local_aa8 + 0x6afb) = 1;
    }
    else {
      iVar6 = FUN_100182d4d(local_478);
      if (iVar6 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          local_a98._0_2_ = 0;
          __os_log_impl(0x100000000,uVar9,1,"restore> deleted SyncAfterRestore",&local_a98,2);
        }
      }
      if ((*(byte *)((long)local_aa0 + 0x671) & 2) == 0) {
        if ((*(char *)(local_aa8 + 0x380) != '\0') &&
           (iVar6 = FUN_100245a5f(*(undefined4 *)(local_aa8 + 0x66b0),local_aa8 + 0x6b40,0x72657374,
                                  "RestoreApplications.plist"), iVar6 == 0)) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            local_a98._0_2_ = 0;
            __os_log_impl(0x100000000,uVar9,1,"restore> deleted RestoreApplications.plist",
                          &local_a98,2);
          }
        }
        iVar6 = FUN_1005bbf1e(*(undefined8 *)(local_aa8 + 0x7168),&cf_com_apple_iTunes,
                              &cf_RestoreApplications);
        if (iVar6 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            local_a98._0_2_ = 0x202;
            local_a98._2_2_ = 0x842;
            local_a98._4_4_ = 0x874630;
            uStack_a90 = 1;
            uStack_a8e = 0;
            uStack_a8c = 0x842;
            uStack_a8a = 0x3af0;
            uStack_a88 = 0x87;
            uStack_a86 = 1;
            __os_log_impl(0x100000000,uVar9,1,"restore> removed %{public}@ in %{public}@ domain",
                          &local_a98,0x16);
          }
        }
      }
      if ((local_af8 != 0) && ((*(byte *)(local_aa0 + 0xce) & 2) == 0)) {
        FUN_1001714c2(local_af8,FUN_100204f0f,*(undefined8 *)(local_aa8 + 0x7168));
      }
      if ((local_ac8 != 0) && ((*(byte *)(local_aa0 + 0xce) & 2) == 0)) {
        FUN_1001714c2(local_ac8,FUN_100205082,local_aa0);
      }
      if ((char)local_afc != '\0') {
        FUN_10016bec9(&local_a98,*(undefined8 *)(local_aa8 + 0x152c8));
        iVar6 = _AMSUnregisterTarget
                          (CONCAT44(local_a98._4_4_,CONCAT22(local_a98._2_2_,(undefined2)local_a98))
                          );
        FUN_10016d588(&local_a98);
        if (iVar6 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            uVar10 = *(undefined8 *)(local_aa8 + 0x152c8);
            local_a98._0_2_ = 0x102;
            local_a98._2_2_ = 0x842;
            local_a98._4_4_ = (int)uVar10;
            uStack_a90 = (undefined2)((ulong)uVar10 >> 0x20);
            uStack_a8e = (undefined2)((ulong)uVar10 >> 0x30);
            pcVar15 = "restore> unregistered target \"%{public}@\"";
            uVar10 = 1;
            uVar16 = 0xc;
            goto LAB_1002023e4;
          }
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar4 != '\0') {
            uVar10 = *(undefined8 *)(local_aa8 + 0x152c8);
            local_a98._0_2_ = 0x202;
            local_a98._2_2_ = 0x400;
            uStack_a90 = 0x842;
            uStack_a8e = (undefined2)uVar10;
            uStack_a8c = (undefined2)((ulong)uVar10 >> 0x10);
            uStack_a8a = (undefined2)((ulong)uVar10 >> 0x20);
            uStack_a88 = (undefined2)((ulong)uVar10 >> 0x30);
            pcVar15 = "AMSUnregisterTarget failed (%d) for device %{public}@";
            uVar10 = 0x10;
            uVar16 = 0x12;
            local_a98._4_4_ = iVar6;
LAB_1002023e4:
            __os_log_impl(0x100000000,uVar9,uVar10,pcVar15,&local_a98,uVar16);
          }
        }
      }
      if ((local_ac0 != 0) &&
         (iVar6 = FUN_1005bc787(*(undefined8 *)(local_aa8 + 0x7168),local_ac0), iVar6 == 0)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          local_a98._0_2_ = 0x202;
          local_a98._2_2_ = 0x842;
          local_a98._4_4_ = 0x874650;
          uStack_a90 = 1;
          uStack_a8e = 0;
          uStack_a8c = 0x842;
          uStack_a8a = (undefined2)local_ac0;
          uStack_a88 = (undefined2)((ulong)local_ac0 >> 0x10);
          uStack_a86 = (undefined4)((ulong)local_ac0 >> 0x20);
          __os_log_impl(0x100000000,uVar9,1,"restore> restored %{public}@ to \"%{public}@\"",
                        &local_a98,0x16);
        }
      }
      if (((char)local_acc == '\0') &&
         (iVar6 = FUN_100245a5f(*(undefined4 *)(local_aa8 + 0x66b0),local_aa8 + 0x6b40,0x6974756e,
                                "iTunesPrefs"), iVar6 == 0)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          local_a98._0_2_ = 0;
          __os_log_impl(0x100000000,uVar9,1,"restore> deleted iTunesPrefs",&local_a98,2);
        }
      }
      iVar6 = 0;
      if (*(int *)((long)local_aa0 + 0x68c) != 0) goto LAB_100202561;
    }
    iVar6 = 0;
    if (local_aa9 == '\0') {
      lVar12 = 0;
    }
    else {
      if (((*(byte *)((long)local_aa0 + 0x671) & 8) == 0) && (((byte)local_b2c & bVar17) == 0))
      goto LAB_100202561;
      lVar12 = *local_ab8;
    }
    FUN_1001fc6d2(local_aa8,lVar12);
  }
  else {
    local_a98._0_2_ = 0;
    local_a98._2_2_ = 0;
    local_a98._4_4_ = 0;
    lVar12 = FUN_100166c1b(local_ae8,&cf_TargetIdentifier);
    local_58 = 0;
    uStack_56 = 0;
    iStack_54 = 0;
    if ((lVar12 == 0) ||
       (iVar6 = _AMSGetBackupPasswordFromKeychainForTarget(lVar12,&local_a98), iVar6 != 0)) {
LAB_1002010ca:
      cVar4 = FUN_1001fc52f(local_aa8,&local_58);
      if (CONCAT44(iStack_54,CONCAT22(uStack_56,local_58)) == 0 || cVar4 == '\0') {
        uVar14 = 0;
      }
      else {
        FUN_10017060f();
        local_58 = 0;
        uStack_56 = 0;
        iStack_54 = 0;
        uVar14 = (undefined4)CONCAT71((int7)((ulong)uVar9 >> 8),1);
      }
    }
    else {
      uVar9 = CONCAT71((int7)((ulong)uVar9 >> 8),1);
      uVar14 = (undefined4)uVar9;
      if (CONCAT44(local_a98._4_4_,CONCAT22(local_a98._2_2_,(undefined2)local_a98)) == 0)
      goto LAB_1002010ca;
    }
    uVar5 = FUN_100545604(local_aa8,0,
                          CONCAT44(local_a98._4_4_,CONCAT22(local_a98._2_2_,(undefined2)local_a98)),
                          local_aa0 + 0xcb);
    FUN_10017060f(CONCAT44(local_a98._4_4_,CONCAT22(local_a98._2_2_,(undefined2)local_a98)));
    if ((char)uVar5 != '\0') goto LAB_100200add;
    local_ac0 = 0;
    iVar6 = -0x80;
  }
LAB_100202561:
  FUN_10017060f(local_ac0);
  FUN_10017060f(local_aa0[0xca]);
  local_aa0[0xca] = 0;
  FUN_10017060f(local_aa0[0xcb]);
  local_aa0[0xcb] = 0;
  FUN_10017060f(local_aa0[0xcc]);
  local_aa0[0xcc] = 0;
  FUN_10017060f(local_aa0[0xcd]);
  local_aa0[0xcd] = 0;
  *(undefined1 *)(local_aa8 + 0x6aeb) = 0;
  if ((*(byte *)((long)local_aa0 + 0x671) & 4) != 0) {
    uVar9 = FUN_1001c156e();
    FUN_1001c6987(uVar9,0x69707266,*(undefined4 *)(local_aa8 + 0x28),(long)iVar6,
                  (long)*(int *)((long)local_aa0 + 0x68c));
  }
  iVar7 = *(int *)((long)local_aa0 + 0x68c);
  if (iVar7 == 0) {
    if (*(char *)(DAT_1008c76a0 + 0x1a93) == '\0') {
      FUN_1002055e2(*(undefined4 *)(local_aa8 + 0x28),*(undefined4 *)(local_aa8 + 0x66b0));
    }
    else {
      uVar9 = FUN_1001705fc(local_ae8);
      FUN_100205207(*(undefined4 *)(local_aa8 + 0x28),*(undefined4 *)(local_aa8 + 0x66b0),uVar9);
    }
  }
  else {
    uVar8 = *(uint *)(local_aa8 + 0x28);
    local_a98._0_2_ = 0xd670;
    local_a98._2_2_ = 0x83;
    local_a98._4_4_ = 1;
    uStack_a90 = 0x570c;
    uStack_a8e = 0x20;
    uStack_a8c = 1;
    uStack_a8a = 0;
    uStack_a88 = (undefined2)uVar8;
    uStack_a86 = (undefined4)(CONCAT44(iVar7,uVar8) >> 0x10);
    local_a82 = (undefined2)((uint)iVar7 >> 0x10);
    local_a50 = 0;
    uStack_a48 = 0;
    local_a40 = (long *)0x0;
    uStack_a60 = 0;
    uStack_a59 = 0;
    local_a68 = (ulong)uVar8 << 0x20;
    local_a78 = &local_a98;
    FUN_10017869a(&local_a98);
    if (local_a40 != (long *)0x0) {
      LOCK();
      plVar1 = local_a40 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*local_a40 + 0x10))(local_a40);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_a78 == &local_a98) {
      lVar12 = 0x20;
    }
    else {
      lVar12 = 0x28;
      if (local_a78 == (long *)0x0) goto LAB_100202757;
    }
    (**(code **)(*local_a78 + lVar12))();
  }
LAB_100202757:
  FUN_1001cc23c(local_b38);
  FUN_1001cc4fc(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

