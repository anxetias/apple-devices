// name: FUN_1005bac96
// address: 1005bac96

undefined8 FUN_1005bac96(char *param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_1005b7cbc();
  iVar4 = iVar3;
  if (iVar3 != 0 && param_2 == '\0') {
    iVar4 = _AMDeviceConnect(param_1);
  }
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      uVar5 = _CFDictionaryGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_iTunes,0,uVar5);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "dict != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        uVar5 = 0;
        FUN_1001782e9(0,0);
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        if (cVar1 != '\0') {
          uVar5 = _AMDeviceCopyDeviceIdentifier(param_1);
          FUN_1001aaedc(&local_60,uVar5);
          local_54 = (char *)CONCAT44(uStack_5c,local_60);
          local_58 = 0x8420202;
          local_4c = 0x800;
          local_4a = param_1;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AMDeviceCopyDictionaryValue failed for com.apple.mobile.iTunes domain for device %{public}@ (%p)"
                              ,&local_58,0x16);
          FUN_1001ab006(&local_60);
          uVar5 = 0;
        }
      }
      else {
        uVar5 = FUN_100171413(DAT_1008c4d90,0,lVar6);
      }
      FUN_10017060f(lVar6);
      FUN_100171552(uVar5,&cf_FireWireGUID);
      lVar6 = 0;
      cVar1 = FUN_100167dd2(uVar5,&cf_SupportsAirTraffic,0);
      if (cVar1 == '\0') {
        uVar7 = _CFDictionaryGetTypeID();
        lVar6 = FUN_1005b8d4a(param_1,0,0,uVar7);
        if (lVar6 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "dict != __null";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          lVar6 = 0;
          FUN_1001782e9(0,0);
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar1 != '\0') {
            uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
            FUN_1001aaedc(&local_60,uVar7);
            local_54 = (char *)CONCAT44(uStack_5c,local_60);
            local_58 = 0x8420202;
            local_4c = 0x800;
            local_4a = param_1;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDeviceCopyDictionaryValue failed for global domain for device %{public}@ (%p)"
                                ,&local_58,0x16);
            FUN_1001ab006(&local_60);
            lVar6 = 0;
          }
        }
      }
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_ProductVersion,&cf_ProductVersion);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_HumanReadableProductVersionString,
                    &cf_HumanReadableProductVersion);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_MarketingVersion,&cf_MarketingVersion);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_BuildVersion,&cf_BuildVersion);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_SupplementalBuildVersion,&cf_SupplementalBuildVersion);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_ProductType,&cf_ProductType);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_SerialNumber,&cf_SerialNumber);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_UniqueDeviceID,&cf_UniqueDeviceID);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_PhoneNumber,&cf_CTN);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_InternationalMobileEquipmentIdentity,&cf_IMEI);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_IntegratedCircuitCardIdentity,&cf_ICCID);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_InternationalMobileSubscriberIdentity,&cf_IMSI);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_MobileEquipmentIdentifier,&cf_MEID);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_MobileEquipmentInfoCSN,&cf_EID);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_PhoneNumber2,&cf_CTN2);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_InternationalMobileEquipmentIdentity2,&cf_IMEI2);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_IntegratedCircuitCardIdentity2,&cf_ICCID2);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_InternationalMobileSubscriberIdentity2,&cf_IMSI2);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_DeviceColor,&cf_Color);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_DeviceEnclosureColor,&cf_EnclosureColor);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_MarketingName,&cf_MarketingName);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_ModelNumber,&cf_ModelNumber);
      FUN_1005c6ac9(param_1,lVar6,uVar5,&cf_RegionInfo,&cf_RegionInfo);
      FUN_1005c6b4f(param_1,lVar6,uVar5,&cf_BoardId,&cf_BoardID);
      FUN_1005c6b4f(param_1,lVar6,uVar5,&cf_ChipID,&cf_ChipID);
      FUN_1005c6b4f(param_1,lVar6,uVar5,&cf_UniqueChipID,&cf_ECID);
      FUN_10017060f(lVar6);
      uVar7 = _CFNumberGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_disk_usage,&cf_TotalDiskCapacity,uVar7);
      if (lVar6 != 0) {
        FUN_100171502(uVar5,&cf_TotalDiskCapacity,lVar6);
        FUN_10017060f(lVar6);
      }
      uVar7 = _CFNumberGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_disk_usage,&cf_TotalDataCapacity,uVar7);
      if (lVar6 != 0) {
        FUN_100171502(uVar5,&cf_TotalDataCapacity,lVar6);
        FUN_10017060f(lVar6);
      }
      uVar7 = _CFBooleanGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_wireless_lockdown,&cf_SupportsWifiSyncing,
                            uVar7);
      if (lVar6 != 0) {
        FUN_100171502(uVar5,&cf_SupportsWiFiSyncing,lVar6);
        FUN_10017060f(lVar6);
      }
      uVar7 = _CFDictionaryGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_sync_data_class,0,uVar7);
      if (lVar6 != 0) {
        lVar8 = FUN_100171426(lVar6);
        if (0 < lVar8) {
          FUN_100171502(uVar5,&cf_SyncDataClasses,lVar6);
          uVar7 = FUN_100171475(lVar6,&cf_SupportsEncryptedBackups);
          FUN_100171502(uVar5,&cf_SupportsEncryptedBackups,uVar7);
          uVar7 = FUN_100171475(lVar6,&cf_SyncSupportsTasks);
          FUN_100171502(uVar5,&cf_SyncSupportsTasks,uVar7);
        }
      }
      FUN_10017060f(lVar6);
      uVar7 = _CFDictionaryGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_backup,0,uVar7);
      if (lVar6 != 0) {
        lVar8 = FUN_100171426(lVar6);
        if (0 < lVar8) {
          uVar7 = FUN_100171475(lVar6,&cf_WillEncrypt);
          FUN_100171502(uVar5,&cf_WillEncryptBackups,uVar7);
          cVar1 = FUN_100167dd2(lVar6,&cf_RequiresEncryption,0);
          if (cVar1 != '\0') {
            FUN_100171502(uVar5,&cf_RequiresEncryptedBackups,
                          *(undefined8 *)PTR__kCFBooleanTrue_10082e038);
          }
        }
      }
      FUN_10017060f(lVar6);
      uVar7 = _CFDictionaryGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_data_sync,0,uVar7);
      if (lVar6 != 0) {
        lVar8 = FUN_100171426(lVar6);
        if (0 < lVar8) {
          FUN_100171502(uVar5,&cf_OTASources,lVar6);
        }
      }
      FUN_10017060f(lVar6);
      uVar7 = _CFDictionaryGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_tethered_sync,0,uVar7);
      if (lVar6 != 0) {
        lVar8 = FUN_100171426(lVar6);
        if (0 < lVar8) {
          FUN_100171502(uVar5,&cf_DisableTetheredSources,lVar6);
        }
      }
      FUN_10017060f(lVar6);
      uVar7 = _CFBooleanGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_restriction,&cf_ProhibitAppInstall,uVar7);
      if (lVar6 != 0) {
        cVar1 = FUN_100171f12(lVar6);
        if (cVar1 != '\0') {
          FUN_100171502(uVar5,&cf_ProhibitApplicationInstall,
                        *(undefined8 *)PTR__kCFBooleanTrue_10082e038);
        }
      }
      FUN_10017060f(lVar6);
      uVar7 = _CFBooleanGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_restriction,&cf_ProhibitAppDelete,uVar7);
      if (lVar6 != 0) {
        cVar1 = FUN_100171f12(lVar6);
        if (cVar1 != '\0') {
          FUN_100171502(uVar5,&cf_ProhibitApplicationDelete,
                        *(undefined8 *)PTR__kCFBooleanTrue_10082e038);
        }
      }
      FUN_10017060f(lVar6);
      lVar6 = _AMDeviceCopyValue(param_1,&cf_com_apple_mobile_user_preferences,
                                 &cf_FileSharingEnabled);
      if (lVar6 != 0) {
        FUN_100171502(uVar5,&cf_SupportsFileSharing,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
        FUN_10017060f(lVar6);
      }
      uVar7 = _CFNumberGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_fairplay,&cf_FairPlayRentalClockBias,uVar7);
      if (lVar6 == 0) {
        uVar7 = _CFNumberGetTypeID();
        lVar6 = FUN_1005b8d4a(param_1,0,&cf_RentalClockBias,uVar7);
        if (lVar6 != 0) goto LAB_1005bb459;
      }
      else {
LAB_1005bb459:
        FUN_100171502(uVar5,&cf_RentalClockBias,lVar6);
        FUN_10017060f(lVar6);
      }
      uVar7 = _CFNumberGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_fairplay,&cf_RBRequestVersion,uVar7);
      if (lVar6 != 0) {
        FUN_100171502(uVar5,&cf_RBRequestVersion,lVar6);
        FUN_10017060f(lVar6);
      }
      uVar7 = _CFDictionaryGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_iTunes_accessories,0,uVar7);
      if (lVar6 != 0) {
        lVar8 = FUN_100171426(lVar6);
        if (0 < lVar8) {
          FUN_100171502(uVar5,&cf_Accessories,lVar6);
        }
      }
      FUN_10017060f(lVar6);
      cVar1 = FUN_100167dd2(uVar5,&cf_SQLiteDB,0);
      if (cVar1 != '\0') {
        cVar1 = FUN_100167dd2(uVar5,&cf_SupportsAirTraffic,0);
        if (cVar1 == '\0') {
          uVar7 = _CFDictionaryGetTypeID();
          lVar6 = FUN_1005b8d4a(param_1,&
                                        cf_com_apple_mobile_iTunes_SQLMusicLibraryPostProcessCommands
                                ,0,uVar7);
          if (lVar6 != 0) {
            lVar8 = FUN_100171426(lVar6);
            if (0 < lVar8) {
              FUN_100171502(uVar5,&cf_com_apple_mobile_iTunes_SQLMusicLibraryPostProcessCommands,
                            lVar6);
            }
          }
          FUN_10017060f(lVar6);
        }
      }
      uVar7 = _CFBooleanGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_battery,&cf_GasGaugeCapability,uVar7);
      if (lVar6 != 0) {
        FUN_100171502(uVar5,&cf_GasGaugeCapability,lVar6);
        FUN_10017060f(lVar6);
      }
      lVar6 = _AMDeviceCopyValue(param_1,&cf_com_apple_mobile_internal,&cf_IsInternal);
      if (lVar6 != 0) {
        FUN_100171502(uVar5,&cf_IsInternalBuild,lVar6);
        FUN_10017060f(lVar6);
      }
      uVar7 = _CFBooleanGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_internal,&cf_UIBuild,uVar7);
      if (lVar6 != 0) {
        cVar1 = FUN_100171f12(lVar6);
        FUN_100168b0b(uVar5,&cf_IsNonUIBuild,cVar1 == '\0',1);
        FUN_10017060f(lVar6);
      }
      uVar7 = _CFBooleanGetTypeID();
      lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_healthd,&cf_HDHealthInUse,uVar7);
      if (lVar6 != 0) {
        FUN_100171502(uVar5,&cf_HealthInUse,lVar6);
        FUN_10017060f(lVar6);
      }
      if (param_2 != '\0') {
        local_60 = 0;
        iVar4 = FUN_1005be428(param_1,&local_60,0,0);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            if ((local_60 < 10) && ((0x31cU >> (local_60 & 0x1f) & 1) != 0)) {
              uVar2 = FUN_1005c3543(param_1,&cf_still_camera);
              FUN_100168b0b(uVar5,&cf_HasStillCamera,uVar2,1);
              uVar2 = FUN_1005c3543(param_1,&cf_video_camera);
              FUN_100168b0b(uVar5,&cf_HasVideoCamera,uVar2,1);
            }
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
      if (iVar3 == 0) {
        FUN_1005b8595(param_1);
      }
      else {
        _AMDeviceDisconnect();
      }
      goto LAB_1005bb739;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  uVar5 = 0;
LAB_1005bb739:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

