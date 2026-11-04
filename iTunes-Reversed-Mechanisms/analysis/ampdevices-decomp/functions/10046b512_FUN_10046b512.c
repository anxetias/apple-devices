// name: FUN_10046b512
// address: 10046b512

int FUN_10046b512(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001c0041("litUAylD22AMPDevicesAgentService",1,FUN_100469a1e,DAT_1008c76a0);
  if (iVar2 == -0x80) goto LAB_10046b869;
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_10046b869;
    local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
LAB_10046b841:
    local_2c = 0x400;
    local_34 = "Assertion failure";
    local_38 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    goto LAB_10046b869;
  }
  DAT_1008bf930 = 1;
  FUN_100178be7();
  FUN_1005360c1(FUN_10029f00f,0,0,0);
  local_40 = 0x10200000110;
  iVar2 = FUN_10036c147();
  if (iVar2 == -0x80) {
LAB_10046b781:
    iVar2 = -0x80;
  }
  else {
    if (iVar2 == 0) {
      lVar3 = _CFNotificationCenterGetDistributedCenter();
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure (expected to be not NULL)";
          local_2c = 0x822;
          local_2a = "notificationCenter";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 != '\0') goto LAB_10046b5d8;
      }
      else {
LAB_10046b5d8:
        _CFNotificationCenterAddObserver
                  (lVar3,0,FUN_10046c98f,&cf_com_apple_iTunes_parentalPrefsChanged,0,4);
        _CFNotificationCenterAddObserver
                  (lVar3,0,FUN_10046c999,&cf_CPProfilePreferencesChangedNotification,0,4);
        _CFNotificationCenterAddObserver
                  (lVar3,0,FUN_10046c9cc,&cf_com_apple_syncservices_ISyncPlanChangedNotification,0,4
                  );
      }
      uVar4 = _CFRunLoopGetMain();
      DAT_1008bf928 =
           __LSScheduleNotificationFunction
                     (0xfffffffe,FUN_10046ca88,0,0,uVar4,
                      *(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
      if (DAT_1008bf928 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "sLSNotificationID != 0";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar2 = __LSModifyNotification(DAT_1008bf928,2,&local_40,0,0,0,0);
      if (iVar2 == -0x80) goto LAB_10046b781;
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
          goto LAB_10046b953;
        }
        goto LAB_10046b7f5;
      }
      FUN_1001b7b04(&local_38,"com.apple.AMPDevicesAgent");
      FUN_10021a095(&local_38);
      FUN_1001c0fbe(FUN_1003bb361,0,0,0,0);
      FUN_1001b7a50(&local_38);
      FUN_1001c334a(&local_38,0x10cf001a);
      FUN_1003bb427(0x6973756e,&local_38);
      FUN_1001b7a50(&local_38);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
LAB_10046b953:
        local_2c = 0x400;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
LAB_10046b7f5:
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_10046b869;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
        goto LAB_10046b841;
      }
    }
    iVar2 = 0;
    FUN_1003b8716(0x41707052,0);
    FUN_100207a7d();
  }
LAB_10046b869:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

