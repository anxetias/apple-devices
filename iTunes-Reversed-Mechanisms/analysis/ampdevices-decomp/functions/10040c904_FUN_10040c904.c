// name: FUN_10040c904
// address: 10040c904

void FUN_10040c904(undefined8 *param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long local_e0;
  undefined4 local_d8;
  char *local_d4;
  undefined2 local_cc;
  int local_ca;
  undefined4 local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined4 uStack_a6;
  undefined2 local_a2;
  undefined8 local_a0;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  cfstringStruct *local_68;
  ulong local_60;
  uint local_58;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  switch(*(undefined4 *)(param_1 + 1)) {
  case 1:
    iVar4 = _AMDeviceGetInterfaceType(*param_1);
    bVar1 = true;
    if ((iVar4 == 2) && (iVar4 = FUN_100189f61(param_1 + 2,&local_68), iVar4 != -0x80)) {
      if (iVar4 == 0) {
        if (local_58 == 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_b8 = 0x8220202;
            iStack_b4 = 0x7a0a90;
            uStack_b0 = 1;
            uStack_ac = 0x822;
            uStack_aa = 0xc5ac;
            uStack_a8 = 0x7c;
            uStack_a6 = 1;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          iVar4 = FUN_10017d477(param_1[0x87],&local_b8,0);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              lVar2 = CONCAT62(uStack_96,local_98);
              uVar12 = (ulong)local_58;
              iVar4 = FUN_1001f8a3d(param_1[0x87],"Payload",uVar12,&local_e0);
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  uVar8 = (uVar12 + lVar2) - 1;
                  bVar1 = local_60 < (uVar8 - uVar8 % uVar12) + local_e0 + param_1[0x86];
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 != '\0') {
                    puVar10 = &local_d8;
                    local_d8 = 0x8220202;
                    local_d4 = "Assertion failure";
                    local_cc = 0x400;
                    local_ca = iVar4;
                    goto LAB_10040d01d;
                  }
                }
              }
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                puVar10 = &local_d8;
                local_d8 = 0x8220202;
                local_d4 = "Assertion failure";
                local_cc = 0x400;
                local_ca = iVar4;
LAB_10040d01d:
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar10,0x12);
              }
            }
          }
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          puVar10 = &local_b8;
          local_b8 = 0x8220202;
          iStack_b4 = 0x7a0a90;
          uStack_b0 = 1;
          uStack_ac = 0x400;
          uStack_aa = (undefined2)iVar4;
          uStack_a8 = (undefined2)((uint)iVar4 >> 0x10);
          goto LAB_10040d01d;
        }
      }
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      uVar11 = param_1[0x88];
      iVar4 = _AMDeviceGetInterfaceType(*param_1);
      pcVar9 = "UNKNOWN";
      if (iVar4 == 2) {
        pcVar9 = "WiFi";
      }
      pcVar7 = "USB";
      if (iVar4 != 1) {
        pcVar7 = pcVar9;
      }
      local_a0 = *param_1;
      pcVar9 = "disabled";
      if (bVar1) {
        pcVar9 = "enabled";
      }
      local_b8 = 0x8420402;
      iStack_b4 = (int)uVar11;
      uStack_b0 = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_ac = 0x822;
      uStack_aa = SUB82(pcVar7,0);
      uStack_a8 = (undefined2)((ulong)pcVar7 >> 0x10);
      uStack_a6 = (undefined4)((ulong)pcVar7 >> 0x20);
      local_a2 = 0x800;
      local_98 = 0x822;
      uStack_96 = SUB86(pcVar9,0);
      uStack_90 = 0;
      __os_log_impl(0x100000000,uVar6,1,
                    "airtraffic> transferring application \"%{public}@\" to %{public}s device %p, unzip on-the-fly is %{public}s"
                    ,&local_b8,0x2a);
    }
    if (bVar1) {
      uVar6 = 0;
    }
    else {
      local_b8 = 0x87ea70;
      iStack_b4 = 1;
      local_68 = *(cfstringStruct **)PTR__kCFBooleanTrue_10082e038;
      uVar6 = FUN_1001713ff(DAT_1008c4d90,&local_b8,&local_68,1,
                            PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    }
    iVar4 = FUN_1005c1d65(*param_1,param_1[0x87],uVar6,FUN_10040d49c,param_1,param_1 + 0x89,
                          param_1 + 0x8a,param_1 + 0x8c);
    if (iVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        puVar10 = &local_b8;
        local_b8 = 0x4000100;
        pcVar9 = "MobileDeviceTransferApplication failed (%08X)";
        iStack_b4 = iVar4;
LAB_10040d26a:
        __os_log_impl(0x100000000,uVar11,0x10,pcVar9,puVar10,8);
      }
    }
    break;
  case 2:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      uVar11 = param_1[0x88];
      iVar4 = _AMDeviceGetInterfaceType(*param_1);
      pcVar9 = "UNKNOWN";
      if (iVar4 == 2) {
        pcVar9 = "WiFi";
      }
      pcVar7 = "USB";
      if (iVar4 != 1) {
        pcVar7 = pcVar9;
      }
      local_a0 = *param_1;
      local_b8 = 0x8420302;
      iStack_b4 = (int)uVar11;
      uStack_b0 = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_ac = 0x822;
      uStack_aa = SUB82(pcVar7,0);
      uStack_a8 = (undefined2)((ulong)pcVar7 >> 0x10);
      uStack_a6 = (undefined4)((ulong)pcVar7 >> 0x20);
      local_a2 = 0x800;
      __os_log_impl(0x100000000,uVar6,1,
                    "airtraffic> installing application \"%{public}@\" on %{public}s device %p",
                    &local_b8,0x20);
    }
    uVar6 = FUN_10020aa8f(param_1[0x87],0);
    iVar4 = FUN_1005c21bf(*param_1,param_1[0x87],uVar6,0,0,param_1 + 0x89,param_1 + 0x8c);
    if (iVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        puVar10 = &local_b8;
        local_b8 = 0x4000100;
        pcVar9 = "MobileDeviceInstallApplication failed (%08X)";
        iStack_b4 = iVar4;
        goto LAB_10040d26a;
      }
    }
    break;
  case 3:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      uVar11 = param_1[0x88];
      iVar4 = _AMDeviceGetInterfaceType(*param_1);
      pcVar9 = "UNKNOWN";
      if (iVar4 == 2) {
        pcVar9 = "WiFi";
      }
      pcVar7 = "USB";
      if (iVar4 != 1) {
        pcVar7 = pcVar9;
      }
      local_a0 = *param_1;
      local_b8 = 0x8420302;
      iStack_b4 = (int)uVar11;
      uStack_b0 = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_ac = 0x822;
      uStack_aa = SUB82(pcVar7,0);
      uStack_a8 = (undefined2)((ulong)pcVar7 >> 0x10);
      uStack_a6 = (undefined4)((ulong)pcVar7 >> 0x20);
      local_a2 = 0x800;
      __os_log_impl(0x100000000,uVar6,1,
                    "airtraffic> upgrading application \"%{public}@\" on %{public}s device %p",
                    &local_b8,0x20);
    }
    uVar6 = FUN_10020aa8f(param_1[0x87],0);
    iVar4 = FUN_1005c25ae(*param_1,param_1[0x87],uVar6,0,0,param_1 + 0x89,param_1 + 0x8c);
    if (iVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        puVar10 = &local_b8;
        local_b8 = 0x4000100;
        pcVar9 = "MobileDeviceUpgradeApplication failed (%08X)";
        iStack_b4 = iVar4;
        goto LAB_10040d26a;
      }
    }
    break;
  case 4:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      uVar11 = param_1[0x88];
      iVar4 = _AMDeviceGetInterfaceType(*param_1);
      pcVar9 = "UNKNOWN";
      if (iVar4 == 2) {
        pcVar9 = "WiFi";
      }
      pcVar7 = "USB";
      if (iVar4 != 1) {
        pcVar7 = pcVar9;
      }
      local_a0 = *param_1;
      local_b8 = 0x8420302;
      iStack_b4 = (int)uVar11;
      uStack_b0 = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_ac = 0x822;
      uStack_aa = SUB82(pcVar7,0);
      uStack_a8 = (undefined2)((ulong)pcVar7 >> 0x10);
      uStack_a6 = (undefined4)((ulong)pcVar7 >> 0x20);
      local_a2 = 0x800;
      __os_log_impl(0x100000000,uVar6,1,
                    "airtraffic> archiving application \"%{public}@\" from %{public}s device %p",
                    &local_b8,0x20);
    }
    iVar4 = FUN_1005c2ce6(*param_1,param_1[0x88],1,0,0,0,param_1 + 0x89,param_1 + 0x8c);
    if (iVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        local_b8 = 0x4000100;
        iStack_b4 = iVar4;
        __os_log_impl(0x100000000,uVar6,0x10,"MobileDeviceRemoveApplicationArchive failed (%08X)",
                      &local_b8,8);
      }
    }
    local_b8 = PTR_cf_ArchiveType_100857940._0_4_;
    iStack_b4 = PTR_cf_ArchiveType_100857940._4_4_;
    uStack_b0 = PTR_cf_SkipUninstall_100857948._0_4_;
    uStack_ac = (undefined2)PTR_cf_SkipUninstall_100857948._4_4_;
    uStack_aa = (undefined2)((uint)PTR_cf_SkipUninstall_100857948._4_4_ >> 0x10);
    local_68 = &cf_ApplicationOnly;
    local_60 = *(ulong *)PTR__kCFBooleanTrue_10082e038;
    uVar6 = FUN_1001713ff(DAT_1008c4d90,&local_b8,&local_68,2,
                          PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    iVar4 = FUN_1005c299d(*param_1,param_1[0x88],uVar6,FUN_10040d49c,param_1,param_1 + 0x89,
                          param_1 + 0x8c);
    if (iVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        puVar10 = &local_d8;
        local_d8 = 0x4000100;
        local_d4 = (char *)CONCAT44(local_d4._4_4_,iVar4);
        pcVar9 = "MobileDeviceArchiveApplication failed (%08X)";
        goto LAB_10040d26a;
      }
    }
    break;
  case 5:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      uVar11 = param_1[0x88];
      iVar4 = _AMDeviceGetInterfaceType(*param_1);
      pcVar9 = "UNKNOWN";
      if (iVar4 == 2) {
        pcVar9 = "WiFi";
      }
      pcVar7 = "USB";
      if (iVar4 != 1) {
        pcVar7 = pcVar9;
      }
      local_a0 = *param_1;
      local_b8 = 0x8420302;
      iStack_b4 = (int)uVar11;
      uStack_b0 = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_ac = 0x822;
      uStack_aa = SUB82(pcVar7,0);
      uStack_a8 = (undefined2)((ulong)pcVar7 >> 0x10);
      uStack_a6 = (undefined4)((ulong)pcVar7 >> 0x20);
      local_a2 = 0x800;
      __os_log_impl(0x100000000,uVar6,1,
                    "airtraffic> removing archive of application \"%{public}@\" from %{public}s device %p"
                    ,&local_b8,0x20);
    }
    iVar5 = FUN_1005c2ce6(*param_1,param_1[0x88],0,0,0,0,0,0);
    iVar4 = 0;
    if (iVar5 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      iVar4 = iVar5;
      if (cVar3 != '\0') {
        local_b8 = 0x4000100;
        iStack_b4 = iVar5;
        __os_log_impl(0x100000000,uVar6,0x10,"MobileDeviceRemoveApplicationArchive failed (%08X)",
                      &local_b8,8);
      }
    }
    goto LAB_10040d2b6;
  default:
    iVar4 = -0x32;
    goto LAB_10040d2b6;
  }
  if (((double)param_1[0x8b] != DAT_100700458) || (NAN((double)param_1[0x8b]) || NAN(DAT_100700458))
     ) {
    param_1[0x8b] = 0x3ff0000000000000;
    FUN_1001e9809(param_1 + 0x95);
  }
  FUN_10017060f(uVar6);
LAB_10040d2b6:
  *(int *)(param_1 + 0x97) = iVar4;
  FUN_1001e9809(param_1 + 0x95);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

