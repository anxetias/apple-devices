// name: FUN_1002ea96c
// address: 1002ea96c

void FUN_1002ea96c(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x20) == 0x1f) {
      if (*(long *)(param_1 + 0x30) != 0) {
        cVar1 = FUN_1001c19de();
        if (cVar1 == '\0') {
          lVar3 = FUN_1004f1381(param_2);
          if (lVar3 == 0) {
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure (expected to be not NULL)";
              local_3c = 0x822;
              local_3a = "syncServicePrefs";
              __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            cVar1 = FUN_1001782e9(0,0);
            if (cVar1 == '\0') goto LAB_1002eaa40;
          }
          FUN_1002eab6a(lVar3,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
        }
LAB_1002eaa40:
        FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
        goto LAB_1002eaafc;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "result->u.dataClasses != nullptr";
        goto LAB_1002eaace;
      }
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "result->requestType == kMobileDeviceRequestType_GetDataClassInfoForTarget";
        goto LAB_1002eaace;
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "result->amsStatus == AMSStatus_OK";
LAB_1002eaace:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1002eaafc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

