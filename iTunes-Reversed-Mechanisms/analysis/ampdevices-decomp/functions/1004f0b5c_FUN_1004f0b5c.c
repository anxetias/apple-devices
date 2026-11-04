// name: FUN_1004f0b5c
// address: 1004f0b5c

void FUN_1004f0b5c(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_248 [512];
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x15218) == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      iStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "handlerData->syncServicesAvailable";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_1 + 0x359) == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      iStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "handlerData->deviceInfo.supportsMobileSync";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(long *)(param_1 + 0x152c8) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      iStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "handlerData->deviceIdentifier != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1004f0e83(param_1,local_248);
    uVar4 = FUN_1001658f1(DAT_1008c4d90,local_248);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_48 = 0x8420102;
      iStack_44 = (int)*(undefined8 *)(param_1 + 0x152c8);
      uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x152c8) >> 0x20);
      __os_log_impl(0x100000000,uVar1,1,
                    "calling AMSRegisterClientWithTargetIdentifierAndDisplayName for %{public}@",
                    &local_48,0xc);
    }
    FUN_10016bec9(&local_48,*(undefined8 *)(param_1 + 0x152c8));
    iVar3 = FUN_1005c66f1(CONCAT44(iStack_44,local_48),uVar4);
    FUN_10016d588(&local_48);
    if (iVar3 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x4000100;
        iStack_44 = iVar3;
        __os_log_impl(0x100000000,uVar1,0x10,
                      "AMSRegisterClientWithTargetIdentifierAndDisplayName failed (%d)",&local_48,8)
        ;
      }
    }
    FUN_10017060f(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

