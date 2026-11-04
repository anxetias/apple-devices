// name: FUN_100333742
// address: 100333742

void FUN_100333742(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (4 < *(int *)(param_1 + 0x166d4) - 2U) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "handlerData->airTrafficSyncState >= kAirTrafficSyncState_RequestingSync && handlerData->airTrafficSyncState < kAirTrafficSyncState_Finished"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)(param_1 + 0x16688) != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_44 = (char *)FUN_10032f390(param_2);
      local_3a = *(char **)(param_1 + 0x152c8);
      local_48 = 0x8220202;
      local_3c = 0x842;
      __os_log_impl(0x100000000,uVar2,1,
                    "airtraffic> sending SyncFailed (%{public}s) for device %{public}@",&local_48,
                    0x16);
    }
    _ATHostConnectionSendSyncFailed(*(undefined8 *)(param_1 + 0x16688),param_2);
  }
  FUN_10033470c(param_1,param_2 == 2 | 8,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

