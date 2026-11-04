// name: FUN_1005121a5
// address: 1005121a5

void FUN_1005121a5(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10051225d:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100512444;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_10051225d;
  }
  cVar2 = FUN_100170633(param_2,&cf_com_apple_itunes_client_syncCancelRequest);
  if ((cVar2 == '\0') &&
     (cVar2 = FUN_100170633(param_2,&cf_com_apple_itunes_client_syncSuspendRequest), cVar2 == '\0'))
  {
    cVar2 = FUN_100170633(param_2,&cf_com_apple_itunes_client_syncResumeRequest);
    if (cVar2 == '\0') {
      cVar2 = FUN_100170633(param_2,&cf_com_apple_mobile_lockdown_disk_usage_changed);
      if (cVar2 == '\0') {
        cVar2 = FUN_100170633(param_2,&cf_com_apple_mobile_data_sync_domain_changed);
        if (cVar2 == '\0') {
          cVar2 = FUN_100170633(param_2,&cf_com_apple_mobile_backup_domain_changed);
          if (cVar2 == '\0') {
            cVar2 = FUN_100170633(param_2,&cf_com_apple_mobile_application_installed);
            if (((cVar2 == '\0') &&
                (cVar2 = FUN_100170633(param_2,&cf_com_apple_itunesstored_application_installed),
                cVar2 == '\0')) &&
               (cVar2 = FUN_100170633(param_2,&cf_com_apple_mobile_application_uninstalled),
               cVar2 == '\0')) {
              cVar2 = FUN_100170633(param_2,&cf_com_apple_mobile_lockdown_phone_number_changed);
              if ((cVar2 != '\0') ||
                 (cVar2 = FUN_100170633(param_2,&cf_com_apple_commcenter_SimStatus_changed),
                 cVar2 != '\0')) {
                uVar5 = 0x69706463;
                goto LAB_100512395;
              }
              cVar2 = FUN_100170633(param_2,&cf_com_apple_mobile_lockdown_device_name_changed);
              if (cVar2 == '\0') {
                cVar2 = FUN_100170633(param_2,&cf_com_apple_springboard_attemptactivation);
                if (cVar2 == '\0') {
                  cVar2 = FUN_100170633(param_2,&cf_com_apple_mobile_lockdown_activation_state);
                  if (cVar2 == '\0') {
                    cVar2 = FUN_100170633(param_2,&cf_com_apple_purplebuddy_SetupStateChanged);
                    if (cVar2 == '\0') {
                      cVar2 = FUN_100170633(param_2,&cf_com_apple_system_powersources_percent);
                      if (cVar2 != '\0') {
                        FUN_10050b368(param_1);
                      }
                    }
                    else {
                      uVar5 = *(undefined8 *)(param_1 + 0x7168);
                      uVar7 = _CFStringGetTypeID();
                      pcVar8 = (char *)FUN_1005ba383(uVar5,&cf_com_apple_purplebuddy,&cf_SetupState,
                                                     uVar7,0);
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar5 = DAT_1008c75b8;
                      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar2 != '\0') {
                        local_54 = *(char **)(param_1 + 0x152c8);
                        local_58 = 0x8420202;
                        local_4c = 0x842;
                        local_4a = pcVar8;
                        __os_log_impl(0x100000000,uVar5,1,
                                      "PurpleBuddy setup state for device %{public}@ is %{public}@",
                                      &local_58,0x16);
                      }
                      cVar2 = FUN_100170633(pcVar8,&cf_SetupUsingiTunes);
                      if (cVar2 == '\0') {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = *(char *)(param_1 + 0x14cd8) == '\0';
                      }
                      cVar2 = FUN_100170633(pcVar8,&cf_RestoringFromBackup);
                      cVar3 = FUN_100170633(pcVar8,&cf_BackgroundRestoringFromiCloudBackup);
                      FUN_10017060f(pcVar8);
                      if ((bool)*(char *)(param_1 + 0x6af5) != bVar9) {
                        *(bool *)(param_1 + 0x6af5) = bVar9;
                        uVar5 = FUN_1001c156e();
                        FUN_1001c6987(uVar5,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
                      }
                      if ((*(char *)(param_1 + 0x6aec) != cVar2) ||
                         (*(char *)(param_1 + 0x6aed) != cVar3)) {
                        *(char *)(param_1 + 0x6aec) = cVar2;
                        *(char *)(param_1 + 0x6aed) = cVar3;
                        uVar5 = FUN_1001c156e();
                        FUN_1001c6987(uVar5,0x69706372,*(undefined4 *)(param_1 + 0x28),cVar2,cVar3);
                      }
                    }
                  }
                  else {
                    FUN_100332bcb(param_1,1);
                  }
                }
              }
              else {
                lVar1 = param_1 + 0x6f64;
                iVar4 = FUN_1005bc4ab(*(undefined8 *)(param_1 + 0x7168),lVar1);
                if (iVar4 == -0x80) goto LAB_100512444;
                if (iVar4 != 0) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                  goto LAB_100512444;
                }
                FUN_100189fe6(param_1 + 0x6b40,lVar1);
                lVar6 = FUN_10048604a(*(undefined8 *)(param_1 + 0x30));
                if (lVar6 != 0) {
                  FUN_100512841(lVar6,lVar1);
                }
              }
            }
            else {
              FUN_1004ef6b9(param_1,1);
              if ((*(char *)(param_1 + 0x3a2) == '\0') &&
                 (iVar4 = FUN_1005bd9cb(*(undefined8 *)(param_1 + 0x7168)), iVar4 != 0))
              goto LAB_100512310;
            }
          }
          else {
            FUN_100500aa3(param_1,1,1,0x69706463);
            FUN_10050ffe0(param_1,1);
          }
        }
        else {
          uVar5 = 0x69706f61;
LAB_100512395:
          FUN_100500aa3(param_1,1,1,uVar5);
        }
      }
      else {
LAB_100512310:
        FUN_1004e4afa(param_1,1);
      }
    }
    else {
      uVar5 = FUN_1004e7f5c(param_1);
      FUN_100603fea(param_1,uVar5);
    }
  }
  else {
    FUN_1004e2d0e(param_1,0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x20) != 0)) {
      FUN_100407827();
    }
  }
  uVar5 = FUN_1001c156e();
  FUN_1001c6987(uVar5,0x6970646e,*(undefined4 *)(param_1 + 0x28),param_2,0);
LAB_100512444:
  FUN_10017060f(param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

