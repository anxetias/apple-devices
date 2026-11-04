// name: FUN_10024c50f
// address: 10024c50f

long FUN_10024c50f(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_3 + 0x24) == 0 && *(int *)(param_3 + 0x20) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "(deviceUpdaterFamilyInfo.mobileDeviceDFUProductTypeID != 0) || (deviceUpdaterFamilyInfo.mobileDeviceRecoveryProductTypeID != 0)"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10024c6fc;
  }
  lVar3 = FUN_100166b7f();
  if (lVar3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "mobileDeviceProductTypesDictionary != nullptr";
LAB_10024c6c1:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_10024c6e6:
    lVar3 = 0;
    FUN_1001782e9(0,0);
    lVar4 = 0;
  }
  else {
    piVar5 = (int *)(param_3 + 0x20);
    if (*piVar5 == 0) {
      lVar3 = FUN_100166b7f(lVar3,&cf_Recovery);
      if (lVar3 == 0) goto LAB_10024c641;
      piVar5 = (int *)(param_3 + 0x24);
    }
    else {
      lVar3 = FUN_100166b7f(lVar3,&cf_DFU);
      if (lVar3 == 0) {
LAB_10024c641:
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_3a = "mobileDeviceProductTypesForModeDictionary != nullptr";
          goto LAB_10024c6c1;
        }
        goto LAB_10024c6e6;
      }
    }
    lVar4 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,*piVar5);
    if (lVar4 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "productTypeIDString != nullptr";
        goto LAB_10024c6c1;
      }
      goto LAB_10024c6e6;
    }
    lVar3 = FUN_100171475(lVar3,lVar4);
    if (lVar3 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "value != nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1001705fc(lVar3);
    }
  }
  FUN_10017060f(lVar4);
LAB_10024c6fc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
}

