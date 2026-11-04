// name: FUN_1004f1091
// address: 1004f1091

void FUN_1004f1091(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x359) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      iStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "handlerData->deviceInfo.supportsMobileSync";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_1 + 0x15218) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      iStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "handlerData->syncServicesAvailable";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(long *)(param_1 + 0x152c8) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      iStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "handlerData->deviceIdentifier != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_38 = 0x8420102;
      iStack_34 = (int)*(undefined8 *)(param_1 + 0x152c8);
      uStack_30 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x152c8) >> 0x20);
      __os_log_impl(0x100000000,uVar3,1,"calling AMSUnregisterTarget for %{public}@",&local_38,0xc);
    }
    FUN_10016bec9(&local_38,*(undefined8 *)(param_1 + 0x152c8));
    iVar2 = FUN_1005c675e(CONCAT44(iStack_34,local_38));
    FUN_10016d588(&local_38);
    if (iVar2 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x4000100;
        iStack_34 = iVar2;
        __os_log_impl(0x100000000,uVar3,0x10,"AMSUnregisterClient failed (%d)",&local_38,8);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

