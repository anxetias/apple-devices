// name: FUN_1005f0bb4
// address: 1005f0bb4

undefined8 FUN_1005f0bb4(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) && (param_2 = *(long *)(param_1 + 0x68a8), param_2 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "recoveryDeviceRef != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
    goto LAB_1005f0d64;
  }
  lVar2 = _AMRecoveryModeDeviceCopyIMEI(param_2);
  if (lVar2 == 0) {
    uVar5 = 0x661;
    lVar3 = 0;
  }
  else {
    lVar3 = _AMRecoveryModeDeviceCopySerialNumber(param_2);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      uVar5 = 0x662;
      if (cVar1 != '\0') {
        local_3a = "serialNumberString != nullptr";
LAB_1005f0dfa:
        local_3c = 0x822;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
    }
    else {
      cVar1 = FUN_10017393c(lVar2,param_1 + 0x63f0,0x20,0x600);
      if (cVar1 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        uVar5 = 0xffffffce;
        if (cVar1 != '\0') {
          local_3a = 
          "JRCFStringGetCString(imeiString, device->deviceInfo.phoneIMEI, sizeof(device->deviceInfo.phoneIMEI), kCFStringEncodingASCII)"
          ;
          goto LAB_1005f0dfa;
        }
      }
      else {
        cVar1 = FUN_10017393c(lVar3,param_1 + 0x304,0x100,0x600);
        uVar5 = 0;
        if (cVar1 != '\0') goto LAB_1005f0d54;
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        uVar5 = 0xffffffce;
        if (cVar1 != '\0') {
          local_3a = 
          "JRCFStringGetCString(serialNumberString, device->deviceInfo.userSerialNumber, sizeof(device->deviceInfo.userSerialNumber), kCFStringEncodingASCII)"
          ;
          goto LAB_1005f0dfa;
        }
      }
    }
    FUN_1001782e9(0,0);
  }
LAB_1005f0d54:
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar2);
LAB_1005f0d64:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

