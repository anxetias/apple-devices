// name: FUN_1004f36b3
// address: 1004f36b3

void FUN_1004f36b3(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10024607f(param_1 + 0x14cd0);
  FUN_1004ef324(param_1,8,0);
  if (*(char *)(param_1 + 0x359) != '\0') {
    if (*(long *)(param_1 + 0x152c8) != 0) {
      FUN_10016bec9(&local_38);
      iVar2 = _AMSSetCrashReportCopyPreferencesForTarget(CONCAT44(uStack_34,local_38),1,0,0);
      FUN_10016d588(&local_38);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          uStack_34 = 0x7a0a90;
          uStack_30 = 1;
          local_2c = 0x822;
          local_2a = "amsStatus == AMSStatus_OK";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    iVar2 = _AMSSetCrashReportCopyPreferencesForTarget(&cf_RestoreLogs,1,0,0);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        uStack_34 = 0x7a0a90;
        uStack_30 = 1;
        local_2c = 0x822;
        local_2a = "amsStatus == AMSStatus_OK";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  uVar3 = FUN_1001c156e();
  FUN_1001c6987(uVar3,0x69707772,*(undefined4 *)(param_1 + 0x28),0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

