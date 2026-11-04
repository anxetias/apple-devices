// name: FUN_1005c4b38
// address: 1005c4b38

undefined1 FUN_1005c4b38(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  ulong local_68;
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
  local_68 = 0;
  iVar2 = FUN_1005b7cbc();
  if (iVar2 != 0) {
    uVar6 = 0;
    goto LAB_1005c4c75;
  }
  iVar2 = _AMDeviceGetWirelessBuddyFlags(param_1,&local_68);
  if (iVar2 == -0x80) {
LAB_1005c4c3b:
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_60,uVar3);
      local_58 = 0x4000302;
      uStack_50 = 0x842;
      uStack_4e = local_60._0_2_;
      local_4c = local_60._2_2_;
      local_4a = local_60._4_4_;
      uStack_46 = 0x800;
      uStack_44 = (undefined2)param_1;
      uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
      local_54 = iVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceGetWirelessBuddyFlags failed (0x%08X) for device %{public}@ (%p)"
                          ,&local_58,0x1c);
LAB_1005c4e37:
      FUN_1001ab006(local_60);
    }
LAB_1005c4c54:
    lVar5 = 0;
    lVar4 = 0;
LAB_1005c4c5a:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1005c4c3b;
    }
    if ((local_68 & 2) == 0) {
      iVar2 = _AMDeviceGetInterfaceType(param_1);
      if (iVar2 == 2) {
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
        if (cVar1 == '\0') goto LAB_1005c4c54;
        uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
        FUN_1001aaedc(local_60,uVar3);
        local_58 = 0x8420102;
        local_54 = local_60._0_4_;
        uStack_50 = local_60._4_2_;
        uStack_4e = local_60._6_2_;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "kAMDSyncOverWifi flag not set for WiFi device %{public}@",&local_58,0xc);
        goto LAB_1005c4e37;
      }
      goto LAB_1005c4c54;
    }
    lVar4 = FUN_1005c49b0();
    if (lVar4 == 0) {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_58 = local_58 & 0xffff0000;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"no persistent user id",&local_58
                      ,2);
      }
      goto LAB_1005c4c54;
    }
    uVar3 = _CFArrayGetTypeID();
    lVar5 = FUN_1005b8d4a(param_1,&cf_com_apple_iTunes,&cf_WiFiSyncingUserIDs,uVar3);
    if (lVar5 == 0) {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar1 != '\0') {
        uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
        FUN_1001aaedc(local_60,uVar3);
        local_58 = 0x8420202;
        local_54 = local_60._0_4_;
        uStack_50 = local_60._4_2_;
        uStack_4e = local_60._6_2_;
        local_4c = 0x800;
        local_4a = (int)param_1;
        uStack_46 = (undefined2)((ulong)param_1 >> 0x20);
        uStack_44 = (undefined2)((ulong)param_1 >> 0x30);
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AMDeviceCopyArrayValue failed for WiFiSyncingUserIDs for device %{public}@ (%p)"
                            ,&local_58,0x16);
        FUN_1001ab006(local_60);
      }
      lVar5 = 0;
      goto LAB_1005c4c5a;
    }
    cVar1 = FUN_100164756(lVar5,lVar4);
    uVar6 = 1;
    if (cVar1 == '\0') {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        iVar2 = FUN_10017076e(lVar5);
        uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
        FUN_1001aaedc(local_60,uVar3);
        local_58 = 0x8420302;
        local_54 = (int)lVar4;
        uStack_50 = (undefined2)((ulong)lVar4 >> 0x20);
        uStack_4e = (undefined2)((ulong)lVar4 >> 0x30);
        local_4c = 0x400;
        uStack_46 = 0x842;
        uStack_44 = local_60._0_2_;
        uStack_42 = local_60._2_6_;
        local_4a = iVar2;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "user id %{public}@ not found in WiFiSyncingUserIDs (%d) for device %{public}@"
                      ,&local_58,0x1c);
        FUN_1001ab006(local_60);
      }
      goto LAB_1005c4c5a;
    }
  }
  FUN_1005b8595(param_1);
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar4);
LAB_1005c4c75:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

