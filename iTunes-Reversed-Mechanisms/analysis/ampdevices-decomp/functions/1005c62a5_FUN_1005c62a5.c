// name: FUN_1005c62a5
// address: 1005c62a5

void FUN_1005c62a5(char *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001705e9();
  lVar3 = _CFStringGetTypeID();
  if (lVar2 == lVar3) {
    lVar2 = FUN_1001705e9(param_2);
    lVar3 = _CFDataGetTypeID();
    if (lVar2 == lVar3) {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_48 = 0x8420102;
        local_44 = param_1;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"waking up device %{public}@",
                      &local_48,0xc);
      }
      lVar2 = FUN_100172686(DAT_1008c4d90,param_2,0,0,0);
      if (lVar2 != 0) {
        uVar4 = FUN_1001705fc(param_1);
        lVar3 = _AMDeviceWakeupOperationCreateWithToken(FUN_1005c7152,uVar4,lVar2,0);
        if (lVar3 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "wakeupOp != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar1 != '\0') {
            local_48 = local_48 & 0xffff0000;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDeviceWakeupOperationCreateWithToken failed",&local_48,2);
          }
        }
        else {
          uVar4 = _CFRunLoopGetMain();
          cVar1 = _AMDeviceWakeupOperationSchedule
                            (lVar3,uVar4,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
          if (cVar1 == '\0') {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "success";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
            if (cVar1 != '\0') {
              local_48 = local_48 & 0xffff0000;
              __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                  "AMDeviceWakeupOperationSchedule failed",&local_48,2);
            }
          }
          FUN_10017060f(lVar3);
        }
        FUN_10017060f(lVar2);
        goto LAB_1005c64e9;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "wakeupToken != nullptr";
        goto LAB_1005c64bb;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "JRCFGetTypeID(value) == CFDataGetTypeID()";
        goto LAB_1005c64bb;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "JRCFGetTypeID(key) == CFStringGetTypeID()";
LAB_1005c64bb:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1005c64e9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

