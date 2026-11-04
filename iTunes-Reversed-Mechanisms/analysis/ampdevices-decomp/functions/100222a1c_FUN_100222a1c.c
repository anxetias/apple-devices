// name: FUN_100222a1c
// address: 100222a1c

long FUN_100222a1c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1001cd3d4();
  lVar3 = FUN_1001722b7(&cf_MobileDeviceSoftwareUpdateQueueHostUUID,uVar2);
  if (lVar3 != 0) goto LAB_100222b61;
  lVar4 = _CFUUIDCreate(DAT_1008c4d90);
  if (lVar4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "hostUUID != nullptr";
LAB_100222d60:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar3 = FUN_100174bb2(DAT_1008c4d90,lVar4);
    FUN_10017060f(lVar4);
    if (lVar3 != 0) {
      uVar2 = FUN_1001cd3d4();
      FUN_10017232a(&cf_MobileDeviceSoftwareUpdateQueueHostUUID,lVar3,uVar2);
      uVar2 = FUN_1001cd3d4();
      FUN_100159ff2(uVar2,*(undefined8 *)PTR__kCFPreferencesCurrentUser_10082e108,
                    *(undefined8 *)PTR__kCFPreferencesCurrentHost_10082e100);
      goto LAB_100222b61;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "hostUUIDCFString != nullptr";
      goto LAB_100222d60;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "hostUUIDCFString != nullptr";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100222b61:
  lVar4 = FUN_1001736b8(DAT_1008c4d90,0,&cf______,param_1[3],param_1[2]);
  if (lVar4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "requestedVersionCFString != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar5 = FUN_1001736b8(DAT_1008c4d90,0,
                        &
                        cf_X_Apple_JADownloadQueue_Token___X_Apple_JADownloadQueue_ID___X_Apple_JADownloadQueue_Request_Type___X_Apple_JADownloadQueue_Asset_Type___X_Apple_JADownloadQueue_Requested_Version___X_Apple_JADownloadQueue_Destination___
                        ,*param_1,lVar3,&cf_2,&cf_com_apple_iTunes_iOSSoftwareRestore,lVar4,param_2)
  ;
  if (lVar5 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "httpHeaderCFString != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

