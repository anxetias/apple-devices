// name: FUN_1005bd4a2
// address: 1005bd4a2

int FUN_1005bd4a2(char *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *local_50;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1005b7cbc();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar3 = _CFDictionaryGetTypeID();
      lVar4 = FUN_1005b8d4a(param_1,&cf_com_apple_disk_usage,0,uVar3);
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "diskUsageDict != __null";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        iVar2 = -0x17fffff8;
        if (cVar1 != '\0') {
          uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
          FUN_1001aaedc(&local_50,uVar3);
          local_48 = 0x8420202;
          local_44 = local_50;
          local_3c = 0x800;
          local_3a = param_1;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AMDeviceCopyValue failed for kAMDDiskUsageDomain for device %{public}@ (%p)"
                              ,&local_48,0x16);
          FUN_1001ab006(&local_50);
        }
      }
      else {
        uVar3 = FUN_100167d88(lVar4,&cf_TotalDataCapacity);
        *param_2 = uVar3;
        uVar3 = FUN_100167d88(lVar4,&cf_TotalDataAvailable);
        param_2[1] = uVar3;
        uVar3 = FUN_100167d88(lVar4,&cf_AmountDataReserved);
        param_2[2] = uVar3;
        uVar3 = FUN_100167d88(lVar4,&cf_MobileApplicationUsage);
        param_2[3] = uVar3;
        uVar3 = FUN_100167d88(lVar4,&cf_TotalSystemCapacity);
        param_2[4] = uVar3;
        lVar5 = FUN_100167d88(lVar4,&cf_TotalDataAvailable);
        lVar6 = FUN_100167d88(lVar4,&cf_AmountDataAvailable);
        param_2[5] = lVar5 - lVar6;
        uVar3 = _CFStringGetTypeID();
        lVar5 = FUN_1005b8d4a(param_1,0,&cf_BuildVersion,uVar3);
        if (lVar5 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "buildVersion != __null";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          iVar2 = 0;
          FUN_1001782e9(0,0);
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar1 != '\0') {
            local_48 = local_48 & 0xffff0000;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDeviceCopyStringValue failed for kAMDBuildVersionKey",&local_48,2
                               );
          }
        }
        else {
          lVar6 = FUN_100173bb7(lVar5,&cf_7C88,0x40);
          if (lVar6 != 1) {
            param_2[2] = 0xa000000;
          }
          FUN_10017060f(lVar5);
          iVar2 = 0;
        }
      }
      FUN_1005b8595(param_1);
      FUN_10017060f(lVar4);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

