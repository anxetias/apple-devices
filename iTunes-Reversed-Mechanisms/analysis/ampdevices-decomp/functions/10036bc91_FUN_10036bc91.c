// name: FUN_10036bc91
// address: 10036bc91

void FUN_10036bc91(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "device != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10036bdac;
  }
  iVar2 = _AMDeviceGetInterfaceType();
  if (iVar2 != 2) {
    param_1 = (char *)FUN_10036b291(param_1);
    if (param_1 == (char *)0x0) goto LAB_10036bdac;
    iVar2 = _AMDeviceGetInterfaceType(param_1);
    if (iVar2 != 2) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "AMDeviceHasWiFiInterface(device)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10036bdac;
    }
  }
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (cVar1 != '\0') {
    uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(&local_40,uVar3);
    local_38 = 0x8420202;
    local_34 = local_40;
    local_2c = 0x800;
    local_2a = param_1;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                  "simulating kAMDeviceDetached action for WiFi interface for device %{public}@ (%p)"
                  ,&local_38,0x16);
    FUN_1001ab006(&local_40);
  }
  FUN_10036be72(param_1);
LAB_10036bdac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

