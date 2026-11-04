// name: FUN_100606570
// address: 100606570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100606570(undefined8 param_1,long param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined7 uVar14;
  ulong uVar12;
  ulong uVar13;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  bool bVar19;
  bool bVar20;
  double dVar21;
  undefined1 local_980 [8];
  long local_978;
  long local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined4 local_954;
  long local_950;
  uint local_948;
  uint local_944;
  undefined2 uStack_940;
  undefined2 uStack_93e;
  undefined2 uStack_93c;
  char *local_93a;
  undefined2 local_932;
  long local_930;
  undefined2 local_928;
  long local_926;
  undefined2 local_91e;
  long local_91c;
  undefined2 local_914;
  char *local_912;
  undefined4 local_528;
  undefined4 local_524;
  long local_518;
  long local_510;
  void *local_508;
  undefined8 *local_500;
  ulong local_4f0;
  uint local_4e8;
  long local_4e0;
  undefined8 local_4d8;
  int local_4b8;
  int local_4b4;
  char *local_158;
  long local_150;
  undefined1 local_118 [48];
  long local_e8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  char local_50;
  undefined1 local_4f;
  undefined1 local_4c;
  char local_4b;
  undefined1 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001cc3a4(0);
  FUN_1001b7b04(&local_528,"SynchronizeDevice");
  FUN_1001cc232(local_980,&local_528);
  FUN_1001b7a50(&local_528);
  local_950 = CONCAT71(local_950._1_7_,*(undefined1 *)(param_2 + 0x6add));
  local_a8[0] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (*(int *)(param_2 + 8) != 0x64756c63) {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_948 = 0x8220202;
      local_944 = 0x7ab58c;
      uStack_940 = 1;
      uStack_93e = 0;
      uStack_93c = 0x822;
      local_93a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_948,0x16);
    }
    cVar5 = FUN_1001782e9(0,1);
    if (cVar5 == '\0') {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_948 = 0x8220202;
        local_944 = 0x7a0a90;
        uStack_940 = 1;
        uStack_93e = 0;
        uStack_93c = 0x822;
        local_93a = "DulcimerHandlerDataIsValid(handlerData)";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_948,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100606f19;
    }
  }
  FUN_100585817(*(undefined8 *)(param_2 + 0x30));
  FUN_1001c62d9(&local_528,0x4f0);
  FUN_1004e17a4(param_2);
  local_528 = 0x73796e63;
  local_524 = *(undefined4 *)(param_2 + 0x66b0);
  local_4f0 = *(ulong *)(param_2 + 0x6b20);
  local_4e8 = *(uint *)(param_2 + 0x6b38);
  local_518 = param_2;
  local_510 = FUN_1004e0c3f(param_2,1);
  if (local_510 != 0) {
    local_500 = operator_new(0x220,(nothrow_t *)PTR_nothrow_10082c970);
    if (local_500 != (undefined8 *)0x0) {
      local_500[4] = 0;
      local_500[5] = 0;
      local_500[2] = 0;
      local_500[3] = 0;
      *local_500 = 0;
      local_500[1] = 0;
      *(undefined1 *)(local_500 + 6) = 0;
      *(undefined8 *)((long)local_500 + 0x34) = 0;
      *(undefined8 *)((long)local_500 + 0x3c) = 0;
      *(undefined8 *)((long)local_500 + 0x44) = 0;
      *(undefined8 *)((long)local_500 + 0x4c) = 0;
      ___bzero(local_500 + 0xb,0x1c8);
    }
    uVar8 = FUN_100432267(*(undefined4 *)(param_2 + 0x28));
    uVar16 = (ulong)uVar8;
    if (uVar8 == 0xffffff80) goto LAB_100606a7d;
    if (uVar8 == 0) {
      FUN_1001ceabd(local_118,0,FUN_1006154b7,&local_528,0,0);
      uVar8 = FUN_1001e96d3(&local_60,1,0);
      uVar16 = (ulong)uVar8;
      if (uVar8 != 0xffffff80) {
        if (uVar8 != 0) {
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
            goto LAB_100606a61;
          }
          goto LAB_100606a74;
        }
        uVar8 = FUN_1001e9c3e(local_a8);
        uVar16 = (ulong)uVar8;
        if (uVar8 == 0xffffff80) goto LAB_100606a7d;
        if (uVar8 != 0) {
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
            goto LAB_100606a61;
          }
          goto LAB_100606a74;
        }
        local_4e0 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x7168));
        local_4d8 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x152c8));
        if ((*(char *)(param_2 + 0x37d) != '\0') &&
           (local_e8 = FUN_1004ecc52(param_2,*(undefined1 *)(param_2 + 0x3a2)), local_e8 == 0)) {
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_948 = 0x8220202;
            local_944 = 0x7a0a90;
            uStack_940 = 1;
            uStack_93e = 0;
            uStack_93c = 0x822;
            local_93a = "context->installedApplicationsDict != nullptr";
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_948,0x16);
          }
          FUN_1001782e9(0,0);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar5 != '\0') {
            local_948 = local_948 & 0xffff0000;
            __os_log_impl(0x100000000,uVar16,0x10,"sync> failed to look up installed applications",
                          &local_948,2);
          }
        }
        if ((*(char *)((long)local_508 + 0x379) == '\0') || (*(char *)(param_2 + 0x38b) == '\0')) {
          local_4c = 0;
        }
        else if (*(char *)(param_2 + 0x38c) == '\0') {
          local_4c = 1;
        }
        else {
          local_4c = FUN_100537ef0(0);
        }
        if ((((*(char *)((long)local_508 + 0xd30) == '\0') ||
             (*(char *)((long)local_508 + 0x394) == '\0')) ||
            (*(char *)((long)local_508 + 0x28a) == '\0')) ||
           (*(char *)((long)local_508 + 0x31c) == '\0')) {
          local_4b = false;
        }
        else {
          local_4b = *(char *)((long)local_508 + 0x28b) != '\x01';
        }
        local_40 = FUN_1001ebd46();
        local_48 = 1;
        goto LAB_100607091;
      }
      goto LAB_100606a7d;
    }
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
LAB_100606a61:
      uStack_93c = 0x400;
      uStack_93e = 0;
      uStack_940 = 1;
      local_944 = 0x7a0a90;
      local_948 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12);
    }
LAB_100606a74:
    if ((int)uVar16 != 0) goto LAB_100606a7d;
LAB_100607091:
    FUN_1001b153d();
    do {
      if (*(int *)(param_2 + 0x6b14) == 0) {
        if (*(long *)(param_2 + 0x16688) != 0) {
          FUN_100394a78(param_2,1);
        }
        if ((*(long *)(param_2 + 0x30) == 0) ||
           ((*(byte *)(*(long *)(param_2 + 0x30) + 0x2be0) & 0x20) == 0)) goto LAB_1006070df;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar16 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          local_948 = local_948 & 0xffff0000;
          __os_log_impl(0x100000000,uVar16,1,"sync> aborting copy fiber",&local_948,2);
        }
        FUN_100407827(*(undefined8 *)(param_2 + 0x30));
        uVar16 = 0xffffff80;
        goto LAB_100607224;
      }
      FUN_1001b153d();
    } while (*(char *)(param_2 + 0x6acc) == '\0');
LAB_100606a96:
    uVar16 = 0xffffff80;
    goto LAB_100606a9c;
  }
  uVar10 = FUN_1001cc310();
  cVar5 = _os_log_type_enabled(uVar10,0x10);
  if (cVar5 != '\0') {
    local_948 = 0x8220202;
    local_944 = 0x7a0a90;
    uStack_940 = 1;
    uStack_93e = 0;
    uStack_93c = 0x822;
    local_93a = "context->libraryTrackData != nullptr";
    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_948,0x16);
  }
  uVar16 = 0xffffffce;
  FUN_1001782e9(0,0);
LAB_100606a7d:
  FUN_1004e1e68(param_2);
  local_518 = 0;
  if ((int)uVar16 == -0x80) goto LAB_100606a96;
  uVar10 = FUN_1001cc310();
  cVar5 = _os_log_type_enabled(uVar10,0x10);
  local_968 = (ulong)local_968._4_4_ << 0x20;
  if (cVar5 != '\0') {
    local_948 = 0x8220202;
    local_944 = 0x7a0a90;
    uStack_940 = 1;
    uStack_93e = 0;
    uStack_93c = 0x400;
    local_93a = (char *)CONCAT44(local_93a._4_4_,(int)uVar16);
    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12);
    goto LAB_100606a9c;
  }
  goto LAB_100606acf;
LAB_1006070df:
  FUN_1004e7a5c(param_2);
  if ((*(char *)(param_2 + 0x6acf) != '\0') && (*(int *)(param_2 + 0x152dc) == -0x80)) {
    uVar8 = FUN_1004ee8bd(param_2,0);
    uVar16 = (ulong)uVar8;
    if (uVar8 != 0xffffff80) {
      if (uVar8 == 0) goto LAB_100607118;
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_948 = 0x8220202;
        local_944 = 0x7a0a90;
        uStack_940 = 1;
        uStack_93e = 0;
        uStack_93c = 0x400;
        local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12);
      }
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar12 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      local_948 = 0x4000100;
      local_944 = uVar8;
      __os_log_impl(0x100000000,uVar12,1,"sync> SetIPodSyncInProgress(false) failed (%d)",&local_948
                    ,8);
    }
    local_968 = (ulong)local_968._4_4_ << 0x20;
    local_960 = (double)((ulong)local_960._4_4_ << 0x20);
    local_954 = 0;
    cVar5 = (char)local_950;
    goto LAB_100606aea;
  }
LAB_100607118:
  if (*(int *)(param_2 + 0x67b4) != 0x72657374) {
    FUN_100602d40(&local_528,0x73746172,0);
  }
  uVar8 = FUN_1004ee8bd(param_2,1);
  lVar4 = local_4e0;
  if (uVar8 == 0xffffff80) {
LAB_100607265:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar16 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      local_948 = 0x4000100;
      local_944 = uVar8;
      __os_log_impl(0x100000000,uVar16,1,"sync> SetIPodSyncInProgress(true) failed (%d)",&local_948,
                    8);
    }
    local_968 = (ulong)local_968._4_4_ << 0x20;
    local_960 = (double)((ulong)local_960._4_4_ << 0x20);
    local_954 = 0;
    uVar16 = (ulong)uVar8;
    cVar5 = (char)local_950;
  }
  else {
    if (uVar8 != 0) {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_948 = 0x8220202;
        local_944 = 0x7a0a90;
        uStack_940 = 1;
        uStack_93e = 0;
        uStack_93c = 0x400;
        local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12);
      }
      goto LAB_100607265;
    }
    *(undefined8 *)(param_2 + 0x69bc) = 0;
    uVar8 = 0;
    if (*(long *)(param_2 + 0x16688) == 0) {
      local_954 = 0;
    }
    else {
      local_954 = 0;
      if ((local_4f0 & 0x9f008b9e0) != 0) {
        *(undefined4 *)(param_2 + 0x69c0) = 2;
        local_954 = 1;
        uVar8 = 2;
      }
    }
    if ((local_4f0 & 0x3000000) != 0 && *(char *)(param_2 + 0x35a) != '\0') {
      uVar8 = uVar8 | 1;
      *(uint *)(param_2 + 0x69c0) = uVar8;
    }
    bVar19 = *(char *)(param_2 + 0x359) != '\0';
    bVar20 = (local_4f0 & 0x4800000) != 0;
    if ((local_4f0 & 0x409800839e0) != 0 || bVar20 && bVar19) {
      *(uint *)(param_2 + 0x69c0) =
           uVar8 + (bVar20 && bVar19) +
           (uint)((local_4f0 & 0x900000000) != 0) + ((uint)(local_4f0 >> 0x13) & 1) +
           (uint)((local_4f0 >> 0x2a & 1) != 0) + (uint)((local_4f0 & 0x800019e0) != 0) +
           (uint)(((uint)local_4f0 >> 0xd & 1) != 0);
    }
    local_968 = CONCAT44(local_968._4_4_,
                         (int)CONCAT71((int7)(local_4f0 >> 8),(local_4f0 & 0x18e0) == 0));
    if (local_4e0 != 0) {
      uVar8 = FUN_1005b7cbc(local_4e0);
      if (uVar8 == 0) {
        FUN_1005b8595(lVar4);
        goto LAB_10060768b;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar16 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar5 != '\0') {
        local_948 = 0x4000200;
        uStack_940 = 0x400;
        uStack_93e = (undefined2)uVar8;
        uStack_93c = (undefined2)(uVar8 >> 0x10);
        local_944 = uVar8;
        __os_log_impl(0x100000000,uVar16,1,
                      "sync> failed to start session with device (%d / 0x%08X), initiating pairing",
                      &local_948,0xe);
      }
      FUN_100602d40(&local_528,0x70616972,0);
      local_960 = (double)FUN_1001ebd46();
      local_960 = local_960 + _DAT_100707dc0;
      do {
        uVar8 = FUN_1005b93eb(lVar4);
        if (uVar8 == 0) goto LAB_10060768b;
        FUN_1001b0d8d(DAT_100700458);
        if ((local_518 != 0) && (*(char *)(local_518 + 0x6acc) != '\0')) {
          uVar16 = 0xffffff80;
          local_960 = (double)((ulong)local_960 & 0xffffffff00000000);
          goto LAB_100607ab8;
        }
      } while (((uVar8 == 0xe8000096) || (uVar8 == 0xe800001a)) &&
              (dVar21 = (double)FUN_1001ebd46(), dVar21 < local_960));
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar12 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar16 = 0x479;
      if (cVar5 != '\0') {
        local_948 = 0x4000200;
        uStack_940 = 0x400;
        uStack_93e = (undefined2)uVar8;
        uStack_93c = (undefined2)(uVar8 >> 0x10);
        local_944 = uVar8;
        __os_log_impl(0x100000000,uVar12,1,"sync> failed to pair with device (%d / 0x%08X)",
                      &local_948,0xe);
      }
LAB_10060779f:
      local_960 = (double)((ulong)local_960 & 0xffffffff00000000);
      goto LAB_1006077a9;
    }
LAB_10060768b:
    uVar12 = local_4f0;
    local_960 = (double)((ulong)local_960 & 0xffffffff00000000);
    uVar16 = 0;
    if ((char)local_954 != '\0') {
      cVar5 = *(char *)(param_2 + 0x337);
      *(int *)(param_2 + 0x69bc) = *(int *)(param_2 + 0x69bc) + 1;
      FUN_100602d40(&local_528,0x77737461,0);
      uVar8 = 0x2d;
      if ((uVar12 & 0x9f00019e0) == 0) {
        uVar8 = 0;
      }
      uVar15 = uVar8 + 0x40;
      if ((uVar12 & 0xa000) == 0) {
        uVar15 = uVar8;
      }
      uVar8 = uVar15 & 0xffffffcd;
      if (cVar5 != '\0') {
        uVar8 = uVar15;
      }
      uVar8 = FUN_1003338b9(DAT_100744e18,param_2,uVar8,((uint)uVar12 >> 0x13 & 1) * 9,1,
                            local_968 & 0xff);
      uVar16 = (ulong)uVar8;
      if (uVar8 == 0) {
        pvVar11 = (void *)FUN_1003c7fb5(param_2);
        uVar16 = 0;
        if (*(char *)(param_2 + 0x6abf) == '\0') {
          local_960 = (double)CONCAT44(local_960._4_4_,(int)CONCAT71((int7)((ulong)pvVar11 >> 8),1))
          ;
        }
        else {
          uVar10 = 2;
          if ((*(char *)(param_2 + 0x39c) == '\0') ||
             (pvVar11 = local_508, *(char *)((long)local_508 + 0x39e) == '\0')) {
            local_960 = (double)CONCAT44(local_960._4_4_,
                                         (int)CONCAT71((int7)((ulong)pvVar11 >> 8),1));
          }
          else {
            uVar14 = (undefined7)((ulong)local_508 >> 8);
            if (*(char *)((long)local_508 + 0xd69) == '\0') {
              local_960 = (double)CONCAT44(local_960._4_4_,(int)CONCAT71(uVar14,1));
              uVar10 = 0x82;
            }
            else {
              if (DAT_1008c75c0 == -1) {
                local_960 = (double)CONCAT44(local_960._4_4_,(int)CONCAT71(uVar14,1));
              }
              else {
                local_960 = (double)CONCAT44(local_960._4_4_,(int)CONCAT71(uVar14,1));
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar12 = DAT_1008c75b8;
              cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar5 != '\0') {
                local_948 = local_948 & 0xffff0000;
                __os_log_impl(0x100000000,uVar12,1,
                              "sync> not reverse-syncing device-downloaded books because iCloud backup is enabled"
                              ,&local_948,2);
              }
            }
          }
          uVar8 = FUN_10060514d(param_2,uVar10);
          local_4e8 = local_4e8 | uVar8;
          if ((local_4e8 != 0) && (((uint)local_4f0 >> 0x13 & 1) == 0)) {
            local_4f0 = local_4f0 | 0x80000;
            *(int *)(param_2 + 0x69c0) = *(int *)(param_2 + 0x69c0) + 1;
          }
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          local_948 = 0x4000100;
          local_944 = uVar8;
          __os_log_impl(0x100000000,uVar12,1,"sync> NotifyAirTrafficSyncStarted failed (%d)",
                        &local_948,8);
        }
        if (uVar8 - 0x48e < 0xfffffffe) goto LAB_10060779f;
        local_4f0 = local_4f0 & 0x4000000;
        local_960 = (double)((ulong)local_960 & 0xffffffff00000000);
      }
    }
    if ((*(long *)(param_2 + 0x16688) == 0) &&
       (iVar9 = FUN_1001888ba(param_2 + 0x75e0,"DBTemp",&local_948,0), iVar9 == 0)) {
      FUN_100182d59(&local_948,1);
    }
    if ((*(char *)(param_2 + 0x35a) == '\0') || ((local_4f0 & 0x3000000) == 0)) {
LAB_100607a75:
      if ((*(char *)(param_2 + 0x359) != '\0') && ((local_4f0 & 0x4800000) != 0)) {
        *(int *)(param_2 + 0x69bc) = *(int *)(param_2 + 0x69bc) + 1;
        uVar12 = FUN_100609b51(&local_528);
        uVar8 = (uint)uVar12;
        uVar13 = uVar12 & 0xffffffff;
        if (uVar8 != 0xffffff80) {
          if (uVar8 == 0) goto LAB_100607ab3;
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_948 = 0x8220202;
            local_944 = 0x7a0a90;
            uStack_940 = 1;
            uStack_93e = 0;
            uStack_93c = 0x400;
            local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar16 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          uStack_93e = (undefined2)uVar12;
          uStack_93c = (undefined2)(uVar12 >> 0x10);
          pcVar17 = "sync> SynchronizeMobileSyncDevice failed (%d / %08X)";
          local_944 = uVar8;
          goto LAB_1006080af;
        }
        goto LAB_1006080c5;
      }
LAB_100607ab3:
      if ((int)uVar16 == 0) {
        if (((uint)local_4f0 >> 0x1c & 1) != 0) {
          if (*(char *)(param_2 + 0x6ac4) == '\0') {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_948 = 0x8220202;
              local_944 = 0x7a0a90;
              uStack_940 = 1;
              uStack_93e = 0;
              uStack_93c = 0x822;
              local_93a = "handlerData->updatePlayCountsDuringSync";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_948,0x16
                                 );
            }
            FUN_1001782e9(0,0);
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 != '\0') {
            local_948 = local_948 & 0xffff0000;
            __os_log_impl(0x100000000,uVar16,1,"sync> updating play counts from device",&local_948,2
                         );
          }
          cVar5 = FUN_1004ded5a(param_2,0);
          if (cVar5 != '\0') {
            FUN_100609d02(&local_528);
          }
          uVar16 = FUN_100601f45(&local_528);
          iVar9 = (int)uVar16;
          uVar16 = uVar16 & 0xffffffff;
          if (iVar9 != -0x80) {
            if (iVar9 == 0) goto LAB_100607ba0;
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 == '\0') goto LAB_100607ab8;
            local_93a = (char *)CONCAT44(local_93a._4_4_,iVar9);
LAB_1006083b4:
            uStack_93c = 0x400;
            uStack_93e = 0;
            uStack_940 = 1;
            local_944 = 0x7a0a90;
            local_948 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12);
          }
          goto LAB_100607ab8;
        }
LAB_100607ba0:
        if ((local_4f0 >> 0x28 & 1) != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 != '\0') {
            local_948 = local_948 & 0xffff0000;
            __os_log_impl(0x100000000,uVar16,1,"sync> installing provisioning profiles",&local_948,2
                         );
          }
          uVar8 = FUN_100609de9(&local_528);
          uVar13 = (ulong)uVar8;
          if (uVar8 != 0xffffff80) {
            if (uVar8 == 0) goto LAB_100607c2d;
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_948 = 0x8220202;
              local_944 = 0x7a0a90;
              uStack_940 = 1;
              uStack_93e = 0;
              uStack_93c = 0x400;
              local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12)
              ;
            }
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 == '\0') goto LAB_1006080c5;
          uStack_93e = (undefined2)uVar8;
          uStack_93c = (undefined2)(uVar8 >> 0x10);
          pcVar17 = "sync> InstallMobileDeviceProfiles failed (%d / %08X)";
          local_944 = uVar8;
LAB_10060831f:
          uStack_940 = 0x400;
          local_948 = 0x4000200;
          __os_log_impl(0x100000000,uVar16,1,pcVar17,&local_948,0xe);
          goto LAB_1006080c5;
        }
LAB_100607c2d:
        if (((uint)local_4f0 >> 0x13 & 1) != 0) {
          *(int *)(param_2 + 0x69bc) = *(int *)(param_2 + 0x69bc) + 1;
          uVar8 = FUN_100609fbb(&local_528);
          uVar13 = (ulong)uVar8;
          if (uVar8 != 0xffffff80) {
            if (uVar8 == 0) {
              if (((byte)(uint)(local_4f0 >> 0x2c) & 1 & *(byte *)((long)local_500 + 0x1a)) != 1)
              goto LAB_100607c37;
              *(undefined1 *)((long)local_500 + 1) = 1;
              uVar13 = 0x468;
            }
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_948 = 0x8220202;
              local_944 = 0x7a0a90;
              uStack_940 = 1;
              uStack_93e = 0;
              uStack_93c = 0x400;
              local_93a = (char *)CONCAT44(local_93a._4_4_,(int)uVar13);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12)
              ;
            }
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 == '\0') goto LAB_1006080c5;
          uStack_93e = (undefined2)uVar13;
          uStack_93c = (undefined2)(uVar13 >> 0x10);
          pcVar17 = "sync> ReverseSyncIPodPurchasedItems failed (%d / %08X)";
          local_944 = (uint)uVar13;
          goto LAB_10060831f;
        }
LAB_100607c37:
        if (((uint)local_4f0 >> 0x1d & 1) != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 != '\0') {
            local_948 = local_948 & 0xffff0000;
            __os_log_impl(0x100000000,uVar16,1,"sync> copying playlists from device",&local_948,2);
          }
          cVar5 = FUN_1004d0f38(param_2);
          if (cVar5 != '\0') {
            FUN_100609d02(&local_528);
          }
          uVar16 = FUN_100601f45(&local_528);
          iVar9 = (int)uVar16;
          uVar16 = uVar16 & 0xffffffff;
          if (iVar9 != -0x80) {
            if (iVar9 == 0) goto LAB_100607cdb;
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_93a = (char *)CONCAT44(local_93a._4_4_,iVar9);
              goto LAB_1006083b4;
            }
          }
          goto LAB_100607ab8;
        }
LAB_100607cdb:
        if ((local_4f0 >> 0x2c & 1) != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 != '\0') {
            local_948 = local_948 & 0xffff0000;
            __os_log_impl(0x100000000,uVar16,1,"sync> switching home music library",&local_948,2);
          }
          FUN_100430bbe(param_2,1);
          *(undefined1 *)(param_2 + 0x6ac0) = 1;
          *(undefined1 *)(param_2 + 0x14cdb) = 1;
          *(undefined1 *)(param_2 + 0x14d69) = 1;
          *(undefined1 *)(param_2 + 0x14d79) = 1;
          *(undefined1 *)(param_2 + 0x14ded) = 1;
          *(undefined1 *)(param_2 + 0x14def) = 1;
          *(byte *)(param_2 + 0x6b25) = *(byte *)(param_2 + 0x6b25) & 0xef;
          local_4f0 = local_4f0 & 0xffffefffffffffff;
          FUN_100609d02();
          if (*(long *)(param_2 + 0x16640) != 0) {
            FUN_1005a9036(*(long *)(param_2 + 0x16640),local_118);
          }
        }
        if ((short)local_4f0 < 0 && *(char *)(param_2 + 0x3a2) == '\0') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 != '\0') {
            local_948 = local_948 & 0xffff0000;
            __os_log_impl(0x100000000,uVar16,1,"sync> deleting photo database",&local_948,2);
          }
          uVar8 = FUN_1003d2d21(&local_528);
          uVar16 = (ulong)uVar8;
          uVar6 = FUN_1002454ac(param_2 + 0x6b40,*(undefined4 *)(param_2 + 0x66b0));
          local_950 = CONCAT71(local_950._1_7_,uVar6);
          if (uVar8 != 0xffffff80) {
            if (uVar8 == 0) goto LAB_100607e50;
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_948 = 0x8220202;
              local_944 = 0x7a0a90;
              uStack_940 = 1;
              uStack_93e = 0;
              uStack_93c = 0x400;
              local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12)
              ;
            }
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar12 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 == '\0') goto LAB_1006077a9;
          uStack_93e = (undefined2)uVar8;
          uStack_93c = (undefined2)(uVar8 >> 0x10);
          pcVar17 = "sync> DeleteIPodPhotoDB failed (%d / %08X)";
          local_944 = uVar8;
LAB_100609080:
          uStack_940 = 0x400;
          local_948 = 0x4000200;
          uVar10 = 0xe;
LAB_10060908e:
          __os_log_impl(0x100000000,uVar12,1,pcVar17,&local_948,uVar10);
LAB_1006077a9:
          cVar5 = (char)local_950;
        }
        else {
LAB_100607e50:
          if (((uint)local_4f0 >> 0x10 & 1) != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> deleting artwork database",&local_948,2);
            }
            uVar8 = FUN_1003d30ab(&local_528);
            uVar16 = (ulong)uVar8;
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) goto LAB_100607ed2;
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 == '\0') goto LAB_1006077a9;
            uStack_93e = (undefined2)uVar8;
            uStack_93c = (undefined2)(uVar8 >> 0x10);
            pcVar17 = "sync> DeleteIPodArtworkDB failed (%d / %08X)";
            local_944 = uVar8;
            goto LAB_100609080;
          }
LAB_100607ed2:
          if ((local_4f0 & 0x18e0) == 0) {
            if (local_4b4 != 0 || local_4b8 != 0) {
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x822;
                local_93a = 
                "(context.appleUserIDList.numValidIDs == 0) && (context.appleUserIDList.numRestrictedIDs == 0)"
                ;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_948,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            FUN_10031e6ef(*(undefined8 *)(param_2 + 0x30),0,1,&local_4b8,0);
          }
          if ((((local_4f0 & 0x19e0) != 0) ||
              (((*(char *)(param_2 + 0x14cda) == '\0' && (*(char *)(param_2 + 0x36d) != '\0')) &&
               (*(char *)(param_2 + 0x6abf) != '\0')))) && (*(char *)(param_2 + 0x6ac0) == '\0')) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> syncing play counts",&local_948,2);
            }
            uVar8 = FUN_10060a31a(&local_528);
            uVar16 = (ulong)uVar8;
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) goto LAB_100608423;
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 == '\0') goto LAB_1006077a9;
            uStack_93e = (undefined2)uVar8;
            uStack_93c = (undefined2)(uVar8 >> 0x10);
            pcVar17 = "sync> SynchronizeIPodPlayCounts failed (%d / %08X)";
            local_944 = uVar8;
            goto LAB_100609080;
          }
LAB_100608423:
          if ((local_4f0 & 0x900000000) != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> transferring rentals from device",&local_948
                            ,2);
            }
            *(int *)(param_2 + 0x69bc) = *(int *)(param_2 + 0x69bc) + 1;
            uVar8 = FUN_10060aced(&local_528);
            uVar16 = (ulong)uVar8;
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) goto LAB_1006084b8;
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 == '\0') goto LAB_1006077a9;
            uStack_93e = (undefined2)uVar8;
            uStack_93c = (undefined2)(uVar8 >> 0x10);
            pcVar17 = "sync> TransferRentalsFromIPod failed (%d / %08X)";
            local_944 = uVar8;
            goto LAB_100609080;
          }
LAB_1006084b8:
          if ((local_4f0 >> 0x2a & 1) != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> updating speech clips",&local_948,2);
            }
            *(int *)(param_2 + 0x69bc) = *(int *)(param_2 + 0x69bc) + 1;
            uVar8 = FUN_10060b3a5(&local_528);
            uVar16 = (ulong)uVar8;
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) goto LAB_100608545;
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              uStack_93e = (undefined2)uVar8;
              uStack_93c = (undefined2)(uVar8 >> 0x10);
              pcVar17 = "sync> SynchronizeIPodSpeechClips failed (%d / %08X)";
              local_944 = uVar8;
              goto LAB_100609080;
            }
            goto LAB_1006077a9;
          }
LAB_100608545:
          if ((local_4f0 & 0x800019e0) != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> syncing tracks",&local_948,2);
            }
            *(int *)(param_2 + 0x69bc) = *(int *)(param_2 + 0x69bc) + 1;
            uVar8 = FUN_10060c116(&local_528);
            uVar16 = (ulong)uVar8;
            if (uVar8 == 0) {
LAB_1006085d1:
              FUN_100585969(*(undefined8 *)(param_2 + 0x30),1);
              FUN_100585817(*(undefined8 *)(param_2 + 0x30));
              goto LAB_100608888;
            }
            if (uVar8 == 0x458) {
              local_4f0 = local_4f0 & 0xffffffffffffbfff;
              goto LAB_1006085d1;
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 == '\0') goto LAB_1006077a9;
            local_948 = 0x4000100;
            pcVar17 = "sync> SynchronizeIPodTracks failed (%d)";
            uVar10 = 8;
            local_944 = uVar8;
            goto LAB_10060908e;
          }
          if ((local_4f0 >> 0x2d & 1) != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> syncing flash UI device",&local_948,2);
            }
            uVar8 = FUN_100613ae5(&local_528);
            uVar16 = (ulong)uVar8;
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) goto LAB_100608888;
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              uStack_93e = (undefined2)uVar8;
              uStack_93c = (undefined2)(uVar8 >> 0x10);
              pcVar17 = "sync> SynchronizeFlashUIIPod failed (%d / %08X)";
              local_944 = uVar8;
              goto LAB_100609080;
            }
            goto LAB_1006077a9;
          }
LAB_100608888:
          uVar8 = (uint)local_4f0;
          if ((uVar8 >> 0xe & 1) != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> syncing album artwork",&local_948,2);
            }
            uVar8 = FUN_1003d30ab(&local_528);
            uVar16 = (ulong)uVar8;
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) {
                uVar8 = FUN_100614018(&local_528);
                uVar16 = (ulong)uVar8;
                if (uVar8 != 0xffffff80) {
                  if (uVar8 == 0) {
                    uVar8 = (uint)local_4f0;
                    goto LAB_100608899;
                  }
                  uVar10 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar5 != '\0') {
                    local_948 = 0x8220202;
                    local_944 = 0x7a0a90;
                    uStack_940 = 1;
                    uStack_93e = 0;
                    uStack_93c = 0x400;
                    local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948
                                        ,0x12);
                  }
                }
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar12 = DAT_1008c75b8;
                cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar5 != '\0') {
                  uStack_93e = (undefined2)uVar8;
                  uStack_93c = (undefined2)(uVar8 >> 0x10);
                  pcVar17 = "sync> UpdateIPodAlbumArtwork failed (%d / %08X)";
                  local_944 = uVar8;
                  goto LAB_100609080;
                }
                goto LAB_1006077a9;
              }
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              uStack_93e = (undefined2)uVar8;
              uStack_93c = (undefined2)(uVar8 >> 0x10);
              pcVar17 = "sync> DeleteIPodArtworkDB failed (%d / %08X)";
              local_944 = uVar8;
              goto LAB_100609080;
            }
            goto LAB_1006077a9;
          }
LAB_100608899:
          if ((uVar8 >> 0xd & 1) != 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> syncing photos",&local_948,2);
            }
            uVar8 = FUN_1003d43a8(&local_528);
            uVar16 = (ulong)uVar8;
            cVar5 = '\x01';
            if (*(char *)(param_2 + 0x3a2) == '\0') {
              cVar5 = FUN_1002454ac(param_2 + 0x6b40,*(undefined4 *)(param_2 + 0x66b0));
            }
            FUN_1004315a1(param_2,local_118);
            FUN_1004ef324(param_2,8,0);
            local_4f = 1;
            if (uVar8 == 0xffffff80 && *(char *)(param_2 + 0x6acd) != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar16 = DAT_1008c75b8;
              cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar7 != '\0') {
                local_948 = local_948 & 0xffff0000;
                __os_log_impl(0x100000000,uVar16,1,"sync> restarting sync due to photo sync skip",
                              &local_948,2);
              }
              uVar16 = *(ulong *)(param_2 + 0x6b20) & 0xfffffffffeffdfff;
              *(ulong *)(param_2 + 0x6b20) = uVar16;
              FUN_100605ae4(param_2,uVar16,*(undefined4 *)(param_2 + 0x6b38));
              uVar16 = 0xffffff80;
              goto LAB_100606aea;
            }
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) goto LAB_100608e03;
              uVar10 = FUN_1001cc310();
              cVar7 = _os_log_type_enabled(uVar10,0x10);
              if (cVar7 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar7 != '\0') {
              local_948 = 0x4000200;
              uStack_940 = 0x400;
              uStack_93e = (undefined2)uVar8;
              uStack_93c = (undefined2)(uVar8 >> 0x10);
              local_944 = uVar8;
              __os_log_impl(0x100000000,uVar12,1,"sync> SynchronizeIPodPhotos failed (%d / %08X)",
                            &local_948,0xe);
            }
            goto LAB_100606aea;
          }
          if (((short)uVar8 < 0) && (*(char *)(param_2 + 0x3a2) != '\0')) {
            uVar13 = FUN_100390d60(param_2,1,0xff);
            uVar8 = (uint)uVar13;
            uVar16 = uVar13 & 0xffffffff;
            if (uVar8 != 0xffffff80) {
              cVar5 = '\x02';
              if (uVar8 == 0) goto LAB_100608e03;
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              uStack_93e = (undefined2)uVar13;
              uStack_93c = (undefined2)(uVar13 >> 0x10);
              pcVar17 = "sync> SaveITImageLibraryPLSRepresentationToDevice failed (%d / %08X)";
              local_944 = uVar8;
              goto LAB_100609080;
            }
            goto LAB_1006077a9;
          }
          cVar5 = (char)local_950;
LAB_100608e03:
          uVar12 = 0;
          uVar16 = uVar12;
          if ((local_4b != '\0') && ((local_4f0 & 0x800039e0) != 0)) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar7 != '\0') {
              local_948 = local_948 & 0xffff0000;
              __os_log_impl(0x100000000,uVar16,1,"sync> autofilling free space",&local_948,2);
            }
            uVar8 = FUN_100614502(&local_528);
            uVar16 = (ulong)uVar8;
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) {
                FUN_100585969(*(undefined8 *)(param_2 + 0x30),1);
                FUN_100585817(*(undefined8 *)(param_2 + 0x30));
                uVar16 = uVar12;
                goto LAB_100606aea;
              }
              uVar10 = FUN_1001cc310();
              cVar7 = _os_log_type_enabled(uVar10,0x10);
              if (cVar7 != '\0') {
                local_948 = 0x8220202;
                local_944 = 0x7a0a90;
                uStack_940 = 1;
                uStack_93e = 0;
                uStack_93c = 0x400;
                local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,
                                    0x12);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar12 = DAT_1008c75b8;
            cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar7 != '\0') {
              local_948 = 0x4000200;
              uStack_940 = 0x400;
              uStack_93e = (undefined2)uVar8;
              uStack_93c = (undefined2)(uVar8 >> 0x10);
              local_944 = uVar8;
              __os_log_impl(0x100000000,uVar12,1,"sync> AutoFillIPodTracks failed (%d / %08X)",
                            &local_948,0xe);
            }
          }
        }
      }
      else {
LAB_100607ab8:
        cVar5 = (char)local_950;
      }
    }
    else {
      *(int *)(param_2 + 0x69bc) = *(int *)(param_2 + 0x69bc) + 1;
      uVar12 = FUN_10060987b(&local_528);
      uVar8 = (uint)uVar12;
      uVar13 = uVar12 & 0xffffffff;
      if (uVar8 != 0xffffff80) {
        if (uVar8 == 0) goto LAB_100607a75;
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_948 = 0x8220202;
          local_944 = 0x7a0a90;
          uStack_940 = 1;
          uStack_93e = 0;
          uStack_93c = 0x400;
          local_93a = (char *)CONCAT44(local_93a._4_4_,uVar8);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_948,0x12);
        }
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar16 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar5 != '\0') {
        uStack_93e = (undefined2)uVar12;
        uStack_93c = (undefined2)(uVar12 >> 0x10);
        pcVar17 = "sync> BackupMobileSyncDevice failed (%d / %08X)";
        local_944 = uVar8;
LAB_1006080af:
        uStack_940 = 0x400;
        local_948 = 0x4000200;
        __os_log_impl(0x100000000,uVar16,1,pcVar17,&local_948,0xe);
      }
LAB_1006080c5:
      uVar16 = uVar13;
      cVar5 = (char)local_950;
    }
  }
  goto LAB_100606aea;
  while( true ) {
    FUN_1001b153d();
    if (*(char *)(param_2 + 0x6acc) != '\0') break;
LAB_100607224:
    if ((*(byte *)(*(long *)(param_2 + 0x30) + 0x2be0) & 0x20) == 0) goto LAB_1006070df;
  }
LAB_100606a9c:
  local_968 = local_968 & 0xffffffff00000000;
LAB_100606acf:
  local_960 = (double)((ulong)local_960._4_4_ << 0x20);
  local_954 = 0;
  cVar5 = (char)local_950;
LAB_100606aea:
  iVar9 = (int)uVar16;
  if (*(char *)(param_2 + 0x6acb) != '\0') {
    FUN_100602d40(&local_528,0x72657374,0);
  }
  if (*(char *)(param_2 + 0x6add) == cVar5) {
    if (local_50 != '\0') goto LAB_100606b1e;
  }
  else {
    *(char *)(param_2 + 0x6add) = cVar5;
LAB_100606b1e:
    local_50 = '\0';
    FUN_1004efbf5(param_2,FUN_100615358);
  }
  *(undefined1 *)(param_2 + 0x6aca) = 0;
  *(undefined1 *)(param_2 + 0x6acc) = 0;
  *(undefined1 *)(param_2 + 0x6ac0) = 0;
  *(undefined1 *)(param_2 + 0x1684a) = 0;
  *(undefined1 *)(param_2 + 0x6acd) = 0;
  FUN_1004eeb56(param_2,uVar16);
  if ((local_4f0 & 0x800019e0) != 0) {
    FUN_1002d79dd(param_2);
    *(undefined2 *)(param_2 + 0x15428) = 0;
  }
  FUN_100585969(*(undefined8 *)(param_2 + 0x30),1);
  if ((*(char *)(param_2 + 0x6acb) == '\0') &&
     ((((local_4f0 & 0x800159e0) != 0 ||
       (cVar5 = FUN_100316309(*(undefined8 *)(param_2 + 0x30),0xf), cVar5 != '\0')) ||
      (*(char *)(param_2 + 0x1542a) != '\0')))) {
    FUN_1004ef324(param_2,1,local_968 & 0xff);
  }
  if ((*(int *)(param_2 + 0x166d8) != 0) && (*(int *)(param_2 + 0x152d8) != 0x489)) {
    if ((char)local_954 != '\0') {
      *(int *)(param_2 + 0x69bc) = *(int *)(param_2 + 0x69bc) + 1;
    }
    if (*(char *)(param_2 + 0x6acb) == '\0') {
      if (*(int *)(param_2 + 0x152d8) != -0x80) {
        FUN_100602d40(&local_528,0x77666d64,0);
      }
      iVar9 = FUN_1003362a8(DAT_100700af8,param_2);
      if (iVar9 == 0) {
        uVar2 = *(undefined4 *)(param_2 + 0x152d8);
        pcVar17 = (char *)0x0;
        local_978 = 0;
        local_970 = 0;
        if (*(char *)(local_518 + 0x16845) != '\0') {
          if ((*(int *)(local_518 + 0x152d8) == 0) &&
             (iVar9 = FUN_1004e51a7(local_518,&local_978,&local_970), iVar9 == 0)) {
            local_950 = (long)local_158 - local_150;
            pcVar18 = (char *)(local_950 - local_970);
            if (pcVar18 == (char *)0x0 || local_950 < local_970) {
              pcVar18 = (char *)0x0;
LAB_1006078ab:
              pcVar17 = pcVar18;
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
            }
            else {
              pcVar17 = (char *)(local_978 - local_970);
              if (pcVar18 <= pcVar17) goto LAB_1006078ab;
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              local_968 = DAT_1008c75b8;
              cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar5 != '\0') {
                local_948 = 0x8000200;
                local_944 = (uint)pcVar18;
                uStack_940 = (undefined2)((ulong)pcVar18 >> 0x20);
                uStack_93e = (undefined2)((ulong)pcVar18 >> 0x30);
                uStack_93c = 0x800;
                local_93a = pcVar17;
                __os_log_impl(0x100000000,local_968,1,
                              "airtraffic> required purge bytes %lld exceeds available purgeable bytes %lld"
                              ,&local_948,0x16);
                pcVar18 = pcVar17;
                goto LAB_1006078ab;
              }
            }
            uVar16 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_948 = 0x8000600;
              local_944 = (uint)local_150;
              uStack_940 = (undefined2)((ulong)local_150 >> 0x20);
              uStack_93e = (undefined2)((ulong)local_150 >> 0x30);
              uStack_93c = 0x800;
              local_93a = local_158;
              local_932 = 0x800;
              local_930 = local_978;
              local_928 = 0x800;
              local_926 = local_970;
              local_91e = 0x800;
              local_91c = local_950;
              local_914 = 0x800;
              local_912 = pcVar17;
              __os_log_impl(0x100000000,uVar16,1,
                            "airtraffic> pending delete bytes = %llu, pending copy bytes = %llu, available bytes = %lld, actual free bytes = %lld, required free bytes = %lld, required purge bytes = %llu"
                            ,&local_948,0x3e);
            }
          }
          else {
            pcVar17 = (char *)0x0;
          }
        }
        iVar9 = FUN_100334fa6(DAT_100700af8,param_2,uVar2,pcVar17);
        if (iVar9 == 0) {
          iVar9 = 0;
          goto LAB_100606d0a;
        }
      }
      FUN_1004eeb56(param_2,iVar9);
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar16 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar5 != '\0') {
        local_948 = local_948 & 0xffff0000;
        __os_log_impl(0x100000000,uVar16,1,
                      "airtraffic> not sending SyncFinished due to sync restart",&local_948,2);
      }
    }
  }
LAB_100606d0a:
  if (*(char *)(param_2 + 0x3a2) == '\0') {
    FUN_1004ded16(param_2,0);
  }
  if ((iVar9 == 0x468) || (iVar9 == 0)) {
    FUN_1005c9432(param_2,local_500,(uint)local_4f0 & 1);
  }
  *(undefined4 *)(param_2 + 0x6b10) = 0;
  if (*(char *)(param_2 + 0x6acb) == '\0') {
    if ((char)local_960 == '\0') {
      if ((*(long *)(param_2 + 0x30) != 0) && (cVar5 = FUN_100402ecf(), cVar5 == '\0')) {
        if (*(int *)(param_2 + 0x15398) == *(int *)(param_2 + 0x1539c)) {
          FUN_1004e7aad(param_2,1);
        }
        FUN_1004eecd1(param_2);
      }
    }
    else {
      FUN_10032fec1(param_2);
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar16 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      local_948 = local_948 & 0xffff0000;
      __os_log_impl(0x100000000,uVar16,1,"sync> restarting sync fiber",&local_948,2);
    }
    *(undefined1 *)(param_2 + 0x6acb) = 0;
    *(undefined1 *)(param_2 + 0x6acc) = 0;
    FUN_100605ae4(param_2,*(ulong *)(param_2 + 0x6b20) & 0xfffffffffffffff7,
                  *(undefined4 *)(param_2 + 0x6b38));
    FUN_10023318f(param_2,"");
  }
  FUN_1004dd69c(param_2,"");
  puVar3 = local_500;
  if (*(long *)(param_2 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)(param_2 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + -1;
  }
  if (local_500 != (undefined8 *)0x0) {
    FUN_1003380d0(local_500);
    operator_delete(puVar3);
  }
  local_500 = (undefined8 *)0x0;
  if (local_508 != (void *)0x0) {
    FUN_10022ad5e(local_508);
    operator_delete(local_508);
    local_508 = (void *)0x0;
  }
  FUN_10017060f(local_4e0);
  local_4e0 = 0;
  FUN_10017060f(local_4d8);
  local_4d8 = 0;
  FUN_10017060f(local_e8);
  local_e8 = 0;
  FUN_1001e9bb5();
  FUN_1001e9d75(local_a8);
  if (local_518 != 0) {
    FUN_1004e1e68();
  }
  FUN_1001c62d9(&local_528,0x4f0);
LAB_100606f19:
  FUN_1001cc23c(local_980);
  FUN_1001cc4fc(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

