// name: FUN_1005eef5b
// address: 1005eef5b

int FUN_1005eef5b(long param_1,long param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_a8 [64];
  int local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10024f22a(local_a8);
  if (param_3 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outCarrierSecurityEpoch != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar3 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_1005ef04e;
  }
  *param_3 = -1;
  *(undefined1 *)(param_2 + 0x6512) = 0;
  local_60 = param_1;
  iVar3 = FUN_1005f0bb4(param_2,0);
  if (iVar3 == 0) {
    puVar1 = (undefined8 *)(local_60 + 0x48);
    iVar3 = FUN_10024ae56(local_60,0,0,1,param_2 + 0x63f0,param_2 + 0x304,puVar1,param_4);
    if (iVar3 == -0x80) goto LAB_1005ef04e;
    if (iVar3 == 0) {
      cVar2 = FUN_10017393c(*puVar1,param_2 + 0x6512,0x100,0x8000100);
      if (cVar2 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "::JRCFStringGetCString(deviceUpdaterFamilyInfo.mobileDeviceCarrierString, device->deviceInfo.phoneCarrier, sizeof(device->deviceInfo.phoneCarrier), kCFStringEncodingUTF8)"
          ;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      cVar2 = FUN_10024d72a(0,2,local_60,0,1,0,local_a8,0,0,0,0,0,0,0);
      if (cVar2 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "GetNewestKnownMobileDeviceSoftwareVersionForProductType(nullptr, kDeviceSoftwareTypeRestore, deviceUpdaterFamilyInfo, nullptr, true, kUseCurrentSupportedPayloadVersion, &webBundleInfo, nullptr, nullptr)"
          ;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar3 = 0x5c6;
        FUN_1001782e9(0,0);
      }
      else if (local_68 == -1) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "webBundleInfo.mobileDeviceSecurityEpoch != kMobileDeviceSecurityEpochUnknown";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar3 = 0x664;
        FUN_1001782e9(0,0);
      }
      else {
        *param_3 = local_68;
        iVar3 = 0;
      }
      goto LAB_1005ef04e;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_1005ef04e;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_1005ef04e;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
  }
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_1005ef04e:
  FUN_10024f3ba(local_a8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

