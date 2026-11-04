// name: FUN_1005bf4e1
// address: 1005bf4e1

ulong FUN_1005bf4e1(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  uint uStack_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      pcVar8 = "notifications != __null";
LAB_1005bf6ca:
      uStack_4e = 0;
      uStack_50 = 1;
      local_54 = 0x7a0a90;
      uStack_4c = 0x822;
      local_58 = 0x8220202;
      uStack_4a = (uint)pcVar8;
      uStack_46 = (undefined2)((ulong)pcVar8 >> 0x20);
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    local_60 = param_1;
    lVar3 = FUN_10017076e(param_2);
    if (lVar3 < 1) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        pcVar8 = "(count = JRCFArrayGetCount(notifications)) > 0";
        goto LAB_1005bf6ca;
      }
    }
    else if (param_3 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        pcVar8 = "callback != __null";
        goto LAB_1005bf6ca;
      }
    }
    else {
      if (param_5 != (undefined8 *)0x0) {
        uVar4 = FUN_1005b98e2(local_60,&cf_com_apple_mobile_notification_proxy,0,param_5);
        uVar2 = (uint)uVar4;
        if (uVar2 != 0xffffff80) {
          if (uVar2 == 0) {
            uVar2 = _AMDSecureListenForNotifications(*param_5,param_3,param_4);
            if (uVar2 != 0xffffff80) {
              if (uVar2 == 0) {
                lVar9 = 0;
                do {
                  lVar5 = FUN_100164a01(param_2,lVar9);
                  if (lVar5 == 0) {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 == '\0') goto LAB_1005bf6ef;
                    pcVar8 = "notification != __null";
                    goto LAB_1005bf6ca;
                  }
                  uVar2 = _AMDSecureObserveNotification(*param_5,lVar5);
                  if (uVar2 != 0) {
                    uVar4 = (ulong)uVar2;
                    if (uVar2 != 0xffffff80) {
                      uVar6 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar1 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = 0x7a0a90;
                        uStack_50 = 1;
                        uStack_4e = 0;
                        uStack_4c = 0x400;
                        uStack_4a = uVar2;
                        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
                    uVar6 = local_60;
                    if (cVar1 != '\0') {
                      uVar7 = _AMDeviceCopyDeviceIdentifier(local_60);
                      FUN_1001aaedc(local_68,uVar7);
                      uStack_4e = local_68._0_2_;
                      uStack_4c = local_68._2_2_;
                      uStack_4a = local_68._4_4_;
                      uStack_44 = (undefined2)uVar6;
                      uStack_42 = (undefined6)((ulong)uVar6 >> 0x10);
                      pcVar8 = 
                      "AMDSecureObserveNotification failed (0x%08X) for device %{public}@ (%p)";
                      local_54 = uVar2;
                      goto LAB_1005bf900;
                    }
                    break;
                  }
                  lVar9 = lVar9 + 1;
                  uVar4 = 0;
                } while (lVar3 != lVar9);
                goto LAB_1005bf6fd;
              }
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4e = 0;
                uStack_4c = 0x400;
                uStack_4a = uVar2;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            uVar4 = (ulong)uVar2;
            cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
            uVar6 = local_60;
            if (cVar1 != '\0') {
              uVar7 = _AMDeviceCopyDeviceIdentifier(local_60);
              FUN_1001aaedc(local_68,uVar7);
              uStack_4e = local_68._0_2_;
              uStack_4c = local_68._2_2_;
              uStack_4a = local_68._4_4_;
              uStack_44 = (undefined2)uVar6;
              uStack_42 = (undefined6)((ulong)uVar6 >> 0x10);
              pcVar8 = "AMDSecureListenForNotifications failed (0x%08X) for device %{public}@ (%p)";
              local_54 = uVar2;
LAB_1005bf900:
              uStack_46 = 0x800;
              uStack_50 = 0x842;
              local_58 = 0x4000302;
              __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,pcVar8,&local_58,
                                  0x1c);
              FUN_1001ab006(local_68);
            }
          }
          else {
            uVar4 = uVar4 & 0xffffffff;
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              uStack_4c = 0x400;
              uStack_4a = uVar2;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        goto LAB_1005bf6fd;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        pcVar8 = "connection != __null";
        goto LAB_1005bf6ca;
      }
    }
  }
LAB_1005bf6ef:
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1005bf6fd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

