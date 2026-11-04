// name: FUN_1003250e4
// address: 1003250e4

void FUN_1003250e4(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x20) == 0x22) goto LAB_1003251b5;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "result->requestType == kMobileDeviceRequestType_SetFilteredCollectionNamesForDataClassName";
      goto LAB_100325187;
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "result->amsStatus == AMSStatus_OK";
LAB_100325187:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1003251b5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

