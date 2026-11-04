// name: FUN_1005ea766
// address: 1005ea766

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005ea766(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  iVar4 = 0;
  if (param_1 < 0x696e6974) {
    if (param_1 == 0x41707052) goto LAB_1005eacf8;
    lVar2 = DAT_1008c7bc0;
    if (param_1 == 0x636c7220) {
      while (lVar2 != 0) {
        lVar1 = *(long *)(lVar2 + 0x6878);
        FUN_1005e9102(&DAT_1008c7b60,lVar2,0);
        lVar2 = lVar1;
      }
      FUN_100267a68(DAT_1008c7bb0);
      FUN_1001c72e9(&DAT_1008c7b70);
      cVar3 = FUN_1005b7b92();
      if (cVar3 != '\0') {
        FUN_1001c0137(0x41704576,0x414d524e);
        cVar3 = FUN_1005b7c7f();
        if ((cVar3 != '\0') && (DAT_1008c7bb8 != -1)) {
          cVar3 = _AMRestorableDeviceUnregisterForNotifications(DAT_1008c7bb8);
          if (cVar3 == '\0') {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "::AMRestorableDeviceUnregisterForNotifications( mAMRestorableClientID )";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar6 = DAT_1008c75b8;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar3 != '\0') {
              local_48 = local_48 & 0xffff0000;
              __os_log_impl(0x100000000,uVar6,0x10,"Failed to unregister with MobileRestore!",
                            &local_48,2);
            }
          }
          DAT_1008c7bb8 = -1;
        }
      }
      FUN_100238ca8(&local_48,&DAT_1008c7bd0);
      FUN_10017060f(DAT_1008c7bc8);
      DAT_1008c7bc8 = 0;
      FUN_10015a142(&local_48);
      goto LAB_1005eacf8;
    }
  }
  else {
    if (param_1 == 0x70727174) goto LAB_1005eacf8;
    if (param_1 == 0x696e6974) {
      _DAT_1008c7b60 = *(undefined4 *)(param_2 + 8);
      uRam00000001008c7b64 = *(undefined4 *)(param_2 + 0xc);
      uRam00000001008c7b68 = *(undefined4 *)(param_2 + 0x10);
      uRam00000001008c7b6c = *(undefined4 *)(param_2 + 0x14);
      *(undefined8 *)(param_2 + 0x1c) = 0;
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 4;
      DAT_1008c7bc8 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
      if (DAT_1008c7bc8 == 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "mRestorableBootedOSDevicesArray != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -0x6c;
      }
      else {
        iVar4 = FUN_1001e9c3e(&DAT_1008c7bd0);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            iVar4 = FUN_1001e9c3e(&DAT_1008c7c48);
            if (iVar4 == -0x80) goto LAB_1005eacf8;
            if (iVar4 == 0) {
              iVar4 = FUN_1001e9c3e(&DAT_1008c7ca8);
              if (iVar4 == -0x80) goto LAB_1005eacf8;
              if (iVar4 == 0) {
                iVar4 = FUN_1001c703f(&DAT_1008c7b70,FUN_1005eb95e,&DAT_1008c7b60);
                if (iVar4 == -0x80) goto LAB_1005eacf8;
                if (iVar4 == 0) {
                  uVar6 = FUN_1001c156e();
                  FUN_1001c6b4a(uVar6,&DAT_1008c7b70);
                  iVar4 = FUN_100267603(FUN_1005ebb04,0,&DAT_1008c7bb0);
                  if (iVar4 == -0x80) goto LAB_1005eacf8;
                  if (iVar4 == 0) {
                    cVar3 = FUN_1005b7b92();
                    if (cVar3 != '\0') {
                      iVar4 = FUN_1001bff4c(0x41704576,0x414d524e,FUN_1005e9a8e,0);
                      if (iVar4 != 0) {
                        uVar6 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar3 != '\0') {
                          local_48 = 0x8220202;
                          local_44 = "Assertion failure";
                          local_3c = 0x822;
                          local_3a = 
                          "::JRAppEventInstallHandler( kAppEventClassApplication, kMobileDeviceRestoreNotificationAppEventKind, MobileDeviceRestoreNotificationEventHandler, nullptr ) == noErr"
                          ;
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                              &local_48,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      FUN_1005ec22f();
                      cVar3 = FUN_1005b7c7f();
                      if (cVar3 == '\0') {
                        iVar4 = 0;
                        iVar5 = _AMRestoreRegisterForDeviceNotifications
                                          (FUN_1005ec48e,FUN_1005ec592,FUN_1005ec696,FUN_1005ec79a,0
                                           ,1);
                        if (iVar5 != 0) {
                          uVar6 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar3 != '\0') {
                            local_48 = 0x8220202;
                            local_44 = "Assertion failure";
                            local_3c = 0x822;
                            local_3a = "result == kAMDSuccess";
                            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                                &local_48,0x16);
                          }
                          FUN_1001782e9(0,0);
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar6 = DAT_1008c75b8;
                          cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                          iVar4 = 0;
                          if (cVar3 != '\0') {
                            local_48 = 0x4000100;
                            local_44 = (char *)CONCAT44(local_44._4_4_,iVar5);
                            __os_log_impl(0x100000000,uVar6,0x10,
                                          "Failed to register for libusbrestore notifications!  result %d"
                                          ,&local_48,8);
                          }
                        }
                        goto LAB_1005eacf8;
                      }
                      FUN_1005eaebe();
                    }
                    iVar4 = 0;
                    goto LAB_1005eacf8;
                  }
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 == '\0') goto LAB_1005eacf8;
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 == '\0') goto LAB_1005eacf8;
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
                }
              }
              else {
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 == '\0') goto LAB_1005eacf8;
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
              }
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 == '\0') goto LAB_1005eacf8;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 == '\0') goto LAB_1005eacf8;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
          }
          local_3c = 0x400;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      goto LAB_1005eacf8;
    }
  }
  iVar4 = -4;
LAB_1005eacf8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

