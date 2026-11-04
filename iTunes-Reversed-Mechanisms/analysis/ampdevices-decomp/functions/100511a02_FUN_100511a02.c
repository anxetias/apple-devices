// name: FUN_100511a02
// address: 100511a02

void FUN_100511a02(long param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100511b6d:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100511c43;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_100511b6d;
  }
  if (*(long *)(param_1 + 0x15210) != 0) {
    _AMDSecureShutdownNotificationProxy();
    FUN_10017060f(*(undefined8 *)(param_1 + 0x15210));
    *(undefined8 *)(param_1 + 0x15210) = 0;
  }
  if (*(long *)(param_1 + 0x7168) == 0) goto LAB_100511c43;
  uVar4 = FUN_100170720(0,0,PTR__kCFTypeArrayCallBacks_10082e130);
  FUN_1001709a5(uVar4,&cf_com_apple_mobile_lockdown_phone_number_changed);
  FUN_1001709a5(uVar4,&cf_com_apple_mobile_lockdown_device_name_changed);
  FUN_1001709a5(uVar4,&cf_com_apple_springboard_attemptactivation);
  FUN_1001709a5(uVar4,&cf_com_apple_mobile_lockdown_activation_state);
  FUN_1001709a5(uVar4,&cf_com_apple_mobile_lockdown_disk_usage_changed);
  FUN_1001709a5(uVar4,&cf_com_apple_mobile_data_sync_domain_changed);
  FUN_1001709a5(uVar4,&cf_com_apple_mobile_backup_domain_changed);
  FUN_1001709a5(uVar4,&cf_com_apple_mobile_application_installed);
  FUN_1001709a5(uVar4,&cf_com_apple_mobile_application_uninstalled);
  uVar1 = *(ushort *)(param_1 + 100);
  if (0x7ff < uVar1) {
    FUN_1001709a5(uVar4,&cf_com_apple_system_powersources_percent);
    uVar1 = *(ushort *)(param_1 + 100);
  }
  if (uVar1 < 0x500) {
    FUN_1001709a5(uVar4,&cf_com_apple_itunes_client_syncCancelRequest);
    pcVar7 = &cf_com_apple_itunes_client_syncResumeRequest;
    pcVar6 = &cf_com_apple_itunes_client_syncSuspendRequest;
  }
  else {
    pcVar7 = &cf_com_apple_purplebuddy_SetupStateChanged;
    pcVar6 = &cf_com_apple_itunesstored_application_installed;
  }
  FUN_1001709a5(uVar4,pcVar6);
  FUN_1001709a5(uVar4,pcVar7);
  if (0xeff < *(ushort *)(param_1 + 100)) {
    FUN_1001709a5(uVar4,&cf_com_apple_commcenter_SimStatus_changed);
  }
  FUN_1004e17a4(param_1);
  iVar3 = FUN_1005bf386(*(undefined8 *)(param_1 + 0x7168),uVar4,FUN_100511e0d,
                        *(undefined4 *)(param_1 + 0x28),FUN_100512022,param_1);
  if (iVar3 == -0x80) {
LAB_100511c33:
    FUN_1004e1e68(param_1);
  }
  else if (iVar3 != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_100511c33;
  }
  FUN_10017060f(uVar4);
LAB_100511c43:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

