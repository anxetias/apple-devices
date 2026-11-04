// name: FUN_1005eaebe
// address: 1005eaebe

void FUN_1005eaebe(void)

{
  char cVar1;
  undefined8 uVar2;
  uint local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  DAT_1008c7bb8 =
       _AMRestorableDeviceRegisterForNotificationsForDevices(FUN_1005eb01e,&DAT_1008c7b60,0xff,0);
  if (DAT_1008c7bb8 == -1) {
    DAT_1008c7bb8 = _AMRestorableDeviceRegisterForNotifications(FUN_1005eb01e,&DAT_1008c7b60,0);
  }
  if (DAT_1008c7bb8 == -1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mAMRestorableClientID != kMobileDeviceAMRestorableInvalidClientID";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar1 != '\0') {
      local_38 = local_38 & 0xffff0000;
      __os_log_impl(0x100000000,uVar2,0x10,"Failed to register for MobileRestore notifications!",
                    &local_38,2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

