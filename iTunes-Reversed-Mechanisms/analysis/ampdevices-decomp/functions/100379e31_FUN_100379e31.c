// name: FUN_100379e31
// address: 100379e31

void FUN_100379e31(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  double dVar8;
  char *local_50;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  undefined2 local_32;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x202;
      uStack_46 = 0x822;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "info != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((DAT_1008be020 == '\0') && (*(int *)(param_1 + 1) - 1U < 4)) {
    uVar3 = *param_1;
    switch(*(int *)(param_1 + 1)) {
    case 1:
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        iVar2 = _AMDeviceGetInterfaceType(uVar3);
        pcVar6 = "UNKNOWN";
        if (iVar2 == 2) {
          pcVar6 = "WiFi";
        }
        pcVar7 = "USB";
        if (iVar2 != 1) {
          pcVar7 = pcVar6;
        }
        uVar4 = _AMDeviceCopyDeviceIdentifier(uVar3);
        FUN_1001aaedc(&local_50,uVar4);
        local_48 = 0x302;
        uStack_46 = 0x822;
        uStack_44 = SUB84(pcVar7,0);
        uStack_40 = (undefined4)((ulong)pcVar7 >> 0x20);
        local_3c = 0x842;
        local_3a = local_50;
        local_32 = 0x800;
        local_30 = uVar3;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "received kAMDeviceAttached action for %{public}s interface for device %{public}@ (%p)"
                      ,&local_48,0x20);
        FUN_1001ab006(&local_50);
      }
      FUN_10037930c(uVar3,0);
      FUN_10017060f(uVar3);
      break;
    case 2:
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        iVar2 = _AMDeviceGetInterfaceType(uVar3);
        pcVar6 = "UNKNOWN";
        if (iVar2 == 2) {
          pcVar6 = "WiFi";
        }
        pcVar7 = "USB";
        if (iVar2 != 1) {
          pcVar7 = pcVar6;
        }
        uVar4 = _AMDeviceCopyDeviceIdentifier(uVar3);
        FUN_1001aaedc(&local_50,uVar4);
        local_48 = 0x302;
        uStack_46 = 0x822;
        uStack_44 = SUB84(pcVar7,0);
        uStack_40 = (undefined4)((ulong)pcVar7 >> 0x20);
        local_3c = 0x842;
        local_3a = local_50;
        local_32 = 0x800;
        local_30 = uVar3;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "received kAMDeviceDetached action for %{public}s interface for device %{public}@ (%p)"
                      ,&local_48,0x20);
        FUN_1001ab006(&local_50);
      }
      uVar4 = FUN_10039a28c();
      cVar1 = FUN_1002d6e80(uVar4,2);
      if (cVar1 != '\0') {
        uVar4 = _AMDeviceCopyDeviceIdentifier(uVar3);
        FUN_1001aaedc(&local_48,uVar4);
        _AMRLog(5,&cf_receivedkAMDeviceDetachedaction_device____p_,
                CONCAT44(uStack_44,CONCAT22(uStack_46,local_48)),uVar3);
        FUN_1001ab006(&local_48);
      }
      FUN_10036be72(uVar3);
      break;
    case 3:
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_48 = 0;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "received kAMDeviceNotificationStopped action",&local_48,2);
      }
      if (DAT_1008c6720 == param_1[2]) {
        FUN_10037992b(1,&DAT_1008c6720);
        FUN_10037992b(2,&DAT_1008c6718);
        FUN_100379a27();
      }
      else {
        cVar1 = FUN_1005c5ad6();
        if (cVar1 == '\0') break;
      }
      cVar1 = FUN_1001c19cd();
      uVar3 = DAT_1008c4d90;
      if (cVar1 == '\0') {
        dVar8 = (double)FUN_1001711e2();
        lVar5 = FUN_100172d93(dVar8 + DAT_100701ae0,0,uVar3,0,0,FUN_10037a3b4,0);
        if (lVar5 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x202;
            uStack_46 = 0x822;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            local_3c = 0x822;
            local_3a = "timer != __null";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        uVar3 = FUN_100172796();
        FUN_100172b4b(uVar3,lVar5,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
        FUN_100172863(uVar3);
      }
      break;
    case 4:
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        iVar2 = _AMDeviceGetInterfaceType(uVar3);
        pcVar6 = "UNKNOWN";
        if (iVar2 == 2) {
          pcVar6 = "WiFi";
        }
        pcVar7 = "USB";
        if (iVar2 != 1) {
          pcVar7 = pcVar6;
        }
        uVar4 = _AMDeviceCopyDeviceIdentifier(uVar3);
        FUN_1001aaedc(&local_50,uVar4);
        local_48 = 0x302;
        uStack_46 = 0x822;
        uStack_44 = SUB84(pcVar7,0);
        uStack_40 = (undefined4)((ulong)pcVar7 >> 0x20);
        local_3c = 0x842;
        local_3a = local_50;
        local_32 = 0x800;
        local_30 = uVar3;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "received kAMDevicePaired action for %{public}s interface for device %{public}@ (%p)"
                      ,&local_48,0x20);
        FUN_1001ab006(&local_50);
      }
      lVar5 = FUN_10036faf9(uVar3);
      if (lVar5 == 0) {
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
        if (cVar1 != '\0') {
          local_48 = 0x100;
          uStack_46 = 0x800;
          uStack_44 = (undefined4)uVar3;
          uStack_40 = (undefined4)((ulong)uVar3 >> 0x20);
          __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                        "device %p is now paired, retrying kAMDeviceAttached action",&local_48,0xc);
        }
        FUN_10037930c(uVar3,1);
      }
      else {
        FUN_10036d4d2(lVar5);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

