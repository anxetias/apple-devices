// name: FUN_1005f2591
// address: 1005f2591

/* WARNING: Type propagation algorithm not settling */

void FUN_1005f2591(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_50;
  int local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4c[0] = -1;
  local_50 = 0;
  iVar2 = _AMSConnectToCrashReportCopyTarget(param_1,0);
  if (iVar2 == 0) {
    iVar2 = _AMSGetNumberOfCrashReportsToCopy(param_1,local_4c,0);
    if (iVar2 == 0) {
      if (local_4c[0] < 1) goto LAB_1005f26d2;
      iVar2 = _AMSCopyCrashReportsFromTarget(param_1,0,&local_50,0);
      if (iVar2 == 0) goto LAB_1005f26d2;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4c[1] = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "amsStatus == AMSStatus_OK";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_4c + 1,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 == '\0') goto LAB_1005f26d2;
      local_44 = (char *)CONCAT44(local_44._4_4_,iVar2);
      pcVar4 = "AMSCopyCrashReportsFromTarget failed (%d)";
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4c[1] = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "amsStatus == AMSStatus_OK";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_4c + 1,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 == '\0') goto LAB_1005f26d2;
      local_44 = (char *)CONCAT44(local_44._4_4_,iVar2);
      pcVar4 = "AMSGetNumberOfCrashReportsToCopy failed (%d)";
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4c[1] = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "amsStatus == AMSStatus_OK";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_4c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar1 == '\0') goto LAB_1005f26d2;
    local_44 = (char *)CONCAT44(local_44._4_4_,iVar2);
    pcVar4 = "AMSConnectToCrashReportCopyTarget failed (%d)";
  }
  local_4c[1] = 0x4000100;
  __os_log_impl(0x100000000,uVar3,0x10,pcVar4,local_4c + 1,8);
LAB_1005f26d2:
  _AMSDisconnectFromCrashReportCopyTarget(param_1,0);
  FUN_10017060f(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

