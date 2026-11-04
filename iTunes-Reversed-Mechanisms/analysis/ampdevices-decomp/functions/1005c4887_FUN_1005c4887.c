// name: FUN_1005c4887
// address: 1005c4887

char FUN_1005c4887(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_68;
  char local_59;
  undefined4 local_58;
  int local_54;
  undefined2 local_50;
  undefined8 local_4e;
  undefined2 local_46;
  undefined8 local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_59 = '\0';
  iVar2 = FUN_1005bbcf4(param_1,&cf_com_apple_mobile_wireless_lockdown,&cf_SupportsWifiSyncing);
  if (iVar2 != 0) {
    iVar3 = _AMDeviceGetInterfaceType(param_1);
    local_59 = iVar3 == 2;
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(&local_68,uVar4);
      local_3a = "is";
      if (local_59 == '\0') {
        local_3a = "is not";
      }
      local_58 = 0x4000402;
      local_50 = 0x842;
      local_4e = local_68;
      local_46 = 0x800;
      local_3c = 0x822;
      local_54 = iVar2;
      local_44 = param_1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "failed to get SupportsWifiSyncing flag (0x%08X) for device %{public}@ (%p), assuming WiFi syncing %{public}s supported"
                          ,&local_58,0x26);
      FUN_1001ab006(&local_68);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return local_59;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

