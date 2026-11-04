// name: FUN_1005c4f10
// address: 1005c4f10

int FUN_1005c4f10(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  ulong local_70;
  long local_68;
  undefined1 local_60 [8];
  uint local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  int local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  iVar6 = FUN_1005b7cbc();
  if (iVar6 == -0x80) goto LAB_1005c5439;
  if (iVar6 != 0) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x400;
      local_4a = iVar6;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005c5439;
  }
  local_68 = FUN_1005c49b0();
  if (local_68 == 0) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x822;
      local_4a = 0x7ef605;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    iVar6 = -0x17ffffff;
    if (cVar5 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,"no persistent user id",
                          &local_58,2);
    }
    lVar9 = 0;
    goto LAB_1005c5420;
  }
  cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (param_2 == '\0') {
    if (cVar5 != '\0') {
      uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_60,uVar7);
      local_54 = local_60._0_4_;
      uStack_50 = local_60._4_2_;
      uStack_4e = local_60._6_2_;
      local_4a = (int)local_68;
      uStack_46 = (undefined2)((ulong)local_68 >> 0x20);
      uStack_44 = (undefined2)((ulong)local_68 >> 0x30);
      pcVar11 = "disabling WiFi syncing for device %{public}@ for user id %{public}@";
      goto LAB_1005c50e4;
    }
  }
  else if (cVar5 != '\0') {
    uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(local_60,uVar7);
    local_54 = local_60._0_4_;
    uStack_50 = local_60._4_2_;
    uStack_4e = local_60._6_2_;
    local_4a = (int)local_68;
    uStack_46 = (undefined2)((ulong)local_68 >> 0x20);
    uStack_44 = (undefined2)((ulong)local_68 >> 0x30);
    pcVar11 = "enabling WiFi syncing for device %{public}@ for user id %{public}@";
LAB_1005c50e4:
    local_4c = 0x842;
    local_58 = 0x8420202;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,pcVar11,&local_58,0x16);
    FUN_1001ab006(local_60);
  }
  uVar7 = _CFArrayGetTypeID();
  lVar8 = FUN_1005b8d4a(param_1,&cf_com_apple_iTunes,&cf_WiFiSyncingUserIDs,uVar7);
  if (lVar8 == 0) {
    lVar9 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  }
  else {
    lVar9 = FUN_10017072a(DAT_1008c4d90,0,lVar8);
  }
  FUN_10017060f(lVar8);
  if (lVar9 == 0) {
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar5 != '\0') {
      uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_60,uVar7);
      local_58 = 0x8420202;
      local_54 = local_60._0_4_;
      uStack_50 = local_60._4_2_;
      uStack_4e = local_60._6_2_;
      local_4c = 0x800;
      local_4a = (int)param_1;
      uStack_46 = (undefined2)((ulong)param_1 >> 0x20);
      uStack_44 = (undefined2)((ulong)param_1 >> 0x30);
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                    "AMDeviceCopyMutableArrayValue failed for WiFiSyncingUserIDs for device %{public}@ (%p)"
                    ,&local_58,0x16);
      FUN_1001ab006(local_60);
    }
  }
  if (param_2 == '\0') {
    uVar7 = FUN_10017076e(lVar9);
    lVar8 = FUN_1001708fc(lVar9,0,uVar7,local_68);
    if (-1 < lVar8) {
      FUN_100170bed(lVar9,lVar8);
      cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar5 != '\0') {
        uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
        FUN_1001aaedc(local_60,uVar7);
        local_58 = 0x8420202;
        local_54 = (int)local_68;
        uStack_50 = (undefined2)((ulong)local_68 >> 0x20);
        uStack_4e = (undefined2)((ulong)local_68 >> 0x30);
        local_4c = 0x842;
        local_4a = local_60._0_4_;
        uStack_46 = local_60._4_2_;
        uStack_44 = local_60._6_2_;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "removing user id %{public}@ from WiFiSyncingUserIDs for device %{public}@",
                      &local_58,0x16);
        FUN_1001ab006(local_60);
      }
    }
    lVar8 = FUN_1005c58a3(param_1);
    if (lVar8 != 0) {
      FUN_100171552(lVar8,param_3);
      lVar10 = FUN_100171426(lVar8);
      if (lVar10 < 1) {
        _AMDeviceRemoveValue(param_1,&cf_com_apple_iTunes,&cf_WiFiSyncingLibraries);
      }
      else {
        _AMDeviceSetValue(param_1,&cf_com_apple_iTunes,&cf_WiFiSyncingLibraries,lVar8);
      }
    }
    FUN_10017060f(lVar8);
  }
  else {
    cVar5 = FUN_100164756(lVar9,local_68);
    if (cVar5 == '\0') {
      FUN_1001709a5(lVar9,local_68);
      cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar5 != '\0') {
        uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
        FUN_1001aaedc(local_60,uVar7);
        local_58 = 0x8420202;
        local_54 = (int)local_68;
        uStack_50 = (undefined2)((ulong)local_68 >> 0x20);
        uStack_4e = (undefined2)((ulong)local_68 >> 0x30);
        local_4c = 0x842;
        local_4a = local_60._0_4_;
        uStack_46 = local_60._4_2_;
        uStack_44 = local_60._6_2_;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "adding user id %{public}@ to WiFiSyncingUserIDs for device %{public}@",
                      &local_58,0x16);
        FUN_1001ab006(local_60);
      }
    }
  }
  iVar6 = _AMDeviceGetWirelessBuddyFlags(param_1,&local_70);
  uVar3 = uStack_42;
  uVar1 = uStack_44;
  uStack_44 = (undefined2)param_1;
  uVar2 = uStack_44;
  uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
  uVar4 = uStack_42;
  uStack_44 = uVar1;
  uStack_42 = uVar3;
  if (iVar6 == -0x80) {
LAB_1005c5407:
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar5 != '\0') {
      uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_60,uVar7);
      uStack_4e = local_60._0_2_;
      local_4c = local_60._2_2_;
      local_4a = local_60._4_4_;
      pcVar11 = "AMDeviceGetWirelessBuddyFlags failed (0x%08X) for device %{public}@ (%p)";
      local_54 = iVar6;
LAB_1005c563b:
      iVar6 = local_54;
      uStack_46 = 0x800;
      uStack_50 = 0x842;
      local_58 = 0x4000302;
      uStack_44 = uVar2;
      uStack_42 = uVar4;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,pcVar11,&local_58,0x1c);
      FUN_1001ab006(local_60);
    }
  }
  else {
    if (iVar6 != 0) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x400;
        local_4a = iVar6;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1005c5407;
    }
    lVar8 = FUN_10017076e(lVar9);
    if (0 < lVar8) {
      iVar6 = _AMDeviceSetValue(param_1,&cf_com_apple_iTunes,&cf_WiFiSyncingUserIDs,lVar9);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) {
          local_70 = local_70 | 2;
LAB_1005c5492:
          iVar6 = _AMDeviceSetWirelessBuddyFlags(param_1);
          if (iVar6 != -0x80) {
            if (iVar6 == 0) {
              if (param_2 == '\0') {
                FUN_10036bc91(param_1);
              }
              else {
                FUN_10036b030(param_1);
              }
              iVar6 = 0;
              goto LAB_1005c5420;
            }
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              local_4c = 0x400;
              local_4a = iVar6;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar5 != '\0') {
            uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
            FUN_1001aaedc(local_60,uVar7);
            uStack_4e = local_60._0_2_;
            local_4c = local_60._2_2_;
            local_4a = local_60._4_4_;
            pcVar11 = "AMDeviceSetWirelessBuddyFlags failed (0x%08X) for device %{public}@ (%p)";
            local_54 = iVar6;
            goto LAB_1005c563b;
          }
          goto LAB_1005c5420;
        }
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          local_4c = 0x400;
          local_4a = iVar6;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar5 == '\0') goto LAB_1005c5420;
      uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_60,uVar7);
      uStack_4e = local_60._0_2_;
      local_4c = local_60._2_2_;
      local_4a = local_60._4_4_;
      pcVar11 = "AMDeviceSetValue failed for WiFiSyncingUserIDs (0x%08X) for device %{public}@ (%p)"
      ;
      local_54 = iVar6;
      goto LAB_1005c563b;
    }
    iVar6 = _AMDeviceRemoveValue(param_1,&cf_com_apple_iTunes,&cf_WiFiSyncingUserIDs);
    if (iVar6 != -0x80) {
      if (iVar6 == 0) {
        local_70 = local_70 & 0xfffffffffffffffd;
        goto LAB_1005c5492;
      }
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x400;
        local_4a = iVar6;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar5 != '\0') {
      uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_60,uVar7);
      uStack_4e = local_60._0_2_;
      local_4c = local_60._2_2_;
      local_4a = local_60._4_4_;
      pcVar11 = 
      "AMDeviceRemoveValue failed for WiFiSyncingUserIDs (0x%08X) for device %{public}@ (%p)";
      local_54 = iVar6;
      goto LAB_1005c563b;
    }
  }
LAB_1005c5420:
  FUN_1005b8595(param_1);
  FUN_10017060f(lVar9);
  FUN_10017060f(local_68);
LAB_1005c5439:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

