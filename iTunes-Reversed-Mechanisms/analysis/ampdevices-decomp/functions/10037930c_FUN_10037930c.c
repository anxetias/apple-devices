// name: FUN_10037930c
// address: 10037930c

void FUN_10037930c(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long local_60;
  undefined4 local_58;
  long local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = _AMDeviceGetInterfaceType();
  if (iVar2 == 1) {
    uVar3 = _CFStringGetTypeID();
    lVar4 = FUN_1005ba740(param_1,0,&cf_DeviceClass,uVar3,0);
  }
  else {
    lVar4 = 0;
  }
  cVar1 = FUN_100170633(lVar4,&cf_AppleTV);
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(lVar4,&cf_Watch);
    if (cVar1 != '\0') goto LAB_100379399;
    cVar1 = FUN_100170633(lVar4,&cf_AudioAccessory);
    if (cVar1 != '\0') goto LAB_100379399;
    if (lVar4 == 0) {
LAB_1003794c7:
      iVar2 = _AMDeviceGetInterfaceType(param_1);
      if (iVar2 == 2) {
        cVar1 = FUN_1005c4a3d(param_1);
        if (cVar1 == '\0') {
          uVar3 = FUN_1005c49b0();
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
          if (cVar1 != '\0') {
            uVar5 = _AMDeviceCopyDeviceIdentifier(param_1);
            FUN_1001aaedc(&local_60,uVar5);
            local_58 = 0x8420302;
            local_54 = local_60;
            local_4c = 0x800;
            local_42 = 0x842;
            local_4a = param_1;
            local_40 = uVar3;
            __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                          "ignoring kAMDeviceAttached action, WiFi syncing not enabled for device %{public}@ (%p) for user id %{public}@"
                          ,&local_58,0x20);
            FUN_1001ab006(&local_60);
          }
          FUN_10017060f(uVar3);
          goto LAB_10037945c;
        }
      }
      FUN_10036b63c(param_1);
      goto LAB_10037945c;
    }
    cVar1 = FUN_100170633(lVar4,&cf_iPhone);
    if (cVar1 != '\0') goto LAB_1003794c7;
    cVar1 = FUN_100170633(lVar4,&cf_iPod);
    if (cVar1 != '\0') goto LAB_1003794c7;
    cVar1 = FUN_100170633(lVar4,&cf_iPad);
    if (cVar1 != '\0') goto LAB_1003794c7;
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar1 == '\0') goto LAB_10037945c;
    pcVar6 = "ignoring kAMDeviceAttached action for unknown device class \"%{public}@\"";
  }
  else {
LAB_100379399:
    if (param_2 == '\0') {
      uVar3 = FUN_10039a28c();
      cVar1 = FUN_1002d6e80(uVar3,2);
      if (cVar1 != '\0') {
        if (DAT_1008bde70 != (code *)0x0) {
          (*DAT_1008bde70)(param_1,0,DAT_1008bde78);
        }
        goto LAB_10037945c;
      }
      cVar1 = FUN_100170633(lVar4,&cf_AppleTV);
      if (cVar1 == '\0') {
        cVar1 = FUN_100170633(lVar4,&cf_Watch);
        if (cVar1 != '\0') goto LAB_100379445;
      }
      else {
LAB_100379445:
        FUN_1005b93eb(param_1);
      }
      FUN_1003703a4(param_1,0x61666361,0);
      goto LAB_10037945c;
    }
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar1 == '\0') goto LAB_10037945c;
    pcVar6 = "ignoring kAMDeviceAttached retry for device class \"%{public}@\"";
  }
  local_58 = 0x8420102;
  local_54 = lVar4;
  __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,pcVar6,&local_58,0xc);
LAB_10037945c:
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

