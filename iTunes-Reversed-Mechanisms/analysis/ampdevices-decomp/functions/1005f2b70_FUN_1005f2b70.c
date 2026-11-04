// name: FUN_1005f2b70
// address: 1005f2b70

undefined8 FUN_1005f2b70(undefined1 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_90 [64];
  int local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10024f22a(local_90);
  if (param_3 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "outSecurityEpoch != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar2 = 0xffffffce;
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = -1;
    cVar1 = FUN_10024d72a(0,2,param_2,0,1,0,local_90,0,0,0,param_1,0,0,0);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = 
        "GetNewestKnownMobileDeviceSoftwareVersionForProductType(nullptr, kDeviceSoftwareTypeRestore, deviceUpdaterFamilyInfo, nullptr, true, kUseCurrentSupportedPayloadVersion, &webBundleInfo, nullptr, nullptr, nullptr, majorVersion)"
        ;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar2 = 0x5c6;
      FUN_1001782e9(0,0);
    }
    else if (local_50 == -1) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "webBundleInfo.mobileDeviceSecurityEpoch != kMobileDeviceSecurityEpochUnknown";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar2 = 0x664;
      FUN_1001782e9(0,0);
    }
    else {
      *param_3 = local_50;
      uVar2 = 0;
    }
  }
  FUN_10024f3ba(local_90);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

