// name: FUN_1004f09bc
// address: 1004f09bc

void FUN_1004f09bc(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_39;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x15218) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "handlerData->syncServicesAvailable";
LAB_1004f0ae6:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    iVar2 = _AMSIsSyncServicesEnabled(&local_39);
    if (iVar2 == -0x80) goto LAB_1004f0aa5;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
      goto LAB_1004f0aa5;
    }
    if (local_39 != '\0') goto LAB_1004f0aa5;
    cVar1 = FUN_100544095(param_1);
    if (cVar1 == '\0') goto LAB_1004f0aa5;
    iVar2 = _AMSEnableSyncServices(1);
    if (iVar2 == 0) goto LAB_1004f0aa5;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "amsStatus == AMSStatus_OK";
      goto LAB_1004f0ae6;
    }
  }
  FUN_1001782e9(0,0);
LAB_1004f0aa5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

