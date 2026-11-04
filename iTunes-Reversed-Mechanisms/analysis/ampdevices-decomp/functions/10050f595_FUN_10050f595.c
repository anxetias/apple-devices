// name: FUN_10050f595
// address: 10050f595

void FUN_10050f595(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  cfstringStruct *pcVar8;
  undefined4 local_58;
  undefined8 uStack_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x66b0) != 0x69506f64) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54._0_4_ = 0x7a0a90;
      uStack_54._4_4_ = 1;
      local_4c = 0x822;
      local_4a = "IsDeviceAutoRegistrationSupported(handlerData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10050f985;
  }
  lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54._0_4_ = 0x7a0a90;
      uStack_54._4_4_ = 1;
      local_4c = 0x822;
      local_4a = "params != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54._0_4_ = 0x7a0a90;
      uStack_54._4_4_ = 1;
      local_4c = 0x822;
      local_4a = "params != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10050f900:
    iVar2 = -0x6c;
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x66b0);
    if (iVar2 < 0x69506f64) {
      if (iVar2 == 0x69506164) {
        pcVar8 = &cf_iPad;
      }
      else if (iVar2 == 0x6950686e) {
        pcVar8 = &cf_iPhone;
      }
      else {
LAB_10050f6b1:
        pcVar8 = (cfstringStruct *)0x0;
      }
    }
    else if (iVar2 == 0x69506f64) {
      FUN_100168746(lVar3,&cf_familyID,*(undefined4 *)(param_1 + 0x284),0);
      pcVar8 = &cf_iPod;
    }
    else {
      if (iVar2 != 0x69506f74) goto LAB_10050f6b1;
      pcVar8 = &cf_iPodTouch;
    }
    FUN_10016843e(lVar3,&cf_productType,param_1 + 0x106,0);
    FUN_100171502(lVar3,&cf_deviceClass,pcVar8);
    FUN_10016843e(lVar3,&cf_serialNumber,param_1 + 0x144,0);
    FUN_10016843e(lVar3,&cf_softwareVersion,param_1 + 0x66,0);
    FUN_10015095e(&local_58);
    uVar4 = FUN_100150dd2(&local_58);
    FUN_100168746(lVar3,&cf_dsid,uVar4,0);
    FUN_100150de8(&local_58);
    uVar4 = FUN_10020e322();
    FUN_100168746(lVar3,&cf_storefrontID,uVar4,0);
    FUN_100171502(lVar3,&cf_iTunesVersion,&cf_13_5_6);
    FUN_100171502(lVar3,&cf_DevicesVersion,&cf_1_5_6);
    FUN_100171502(lVar3,&cf_hostOS,&cf_Mac);
    uVar4 = FUN_1001eb64b();
    local_58 = (undefined4)uVar4;
    uStack_54._0_4_ = (undefined4)((ulong)uVar4 >> 0x20);
    FUN_100171502(lVar3,&cf_hostOSVersion,uVar4);
    FUN_10016d588(&local_58);
    lVar5 = FUN_1001744bd(DAT_1008c4d90,&cf_https___littlebuddy_apple_com_tethReg,0);
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54._0_4_ = 0x7a0a90;
        uStack_54._4_4_ = 1;
        local_4c = 0x822;
        local_4a = "url != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10050f900;
    }
    lVar6 = FUN_100171969(DAT_1008c4d90,PTR_cf_POST_10083c4a8,lVar5,
                          *(undefined8 *)PTR__kCFHTTPVersion1_1_10082d5c8);
    if (lVar6 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54._0_4_ = 0x7a0a90;
        uStack_54._4_4_ = 1;
        local_4c = 0x822;
        local_4a = "request != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
      lVar6 = 0;
    }
    else {
      FUN_100132900(&local_58);
      FUN_10016939d(lVar6,PTR_cf_User_Agent_10083c510,&local_58);
      FUN_1001b7a50(&local_58);
      iVar2 = FUN_1001988d9(lVar6,lVar3,3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54._0_4_ = 0x7a0a90;
          uStack_54._4_4_ = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar3);
  if (iVar2 == 0) {
    if (lVar6 == 0) goto LAB_10050f92d;
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (plVar7 == (long *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54._0_4_ = 0x7a0a90;
        uStack_54._4_4_ = 1;
        local_4c = 0x822;
        local_4a = "context != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
LAB_10050fbf5:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54._0_4_ = 0x7a0a90;
        uStack_54._4_4_ = 1;
        local_4c = 0x822;
        local_4a = "context != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10050f95b;
    }
    *plVar7 = param_1;
    plVar7[1] = 0;
    *(undefined1 *)(plVar7 + 2) = 0;
    FUN_1004e17a4(param_1);
    iVar2 = FUN_1004dccf5(*plVar7,"");
    *(bool *)(plVar7 + 2) = iVar2 == 0;
    iVar2 = FUN_10019c4ca(plVar7 + 1,1);
    if (iVar2 == -0x80) {
LAB_10050fbe5:
      FUN_1004fde8a(plVar7);
      operator_delete(plVar7);
      goto LAB_10050fbf5;
    }
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54._0_4_ = 0x7a0a90;
        uStack_54._4_4_ = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_10050fbe5;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      uStack_54 = param_1 + 0x144;
      local_58 = 0x8220102;
      __os_log_impl(0x100000000,uVar4,1,
                    "setup> sending device registration request for serial number \"%{public}s\"",
                    &local_58,0xc);
    }
    iVar2 = FUN_10019c22a(DAT_100700af8,(int)DAT_100700af8,plVar7[1],lVar6,0,0,FUN_10051323f,plVar7,
                          0);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54._0_4_ = 0x7a0a90;
        uStack_54._4_4_ = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  else {
    FUN_10017060f(lVar6);
LAB_10050f92d:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54._0_4_ = 0x7a0a90;
      uStack_54._4_4_ = 1;
      local_4c = 0x822;
      local_4a = "request != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    lVar6 = 0;
LAB_10050f95b:
    iVar2 = -0x6c;
    plVar7 = (long *)0x0;
  }
  FUN_10017060f(lVar6);
  if (plVar7 != (long *)0x0 && iVar2 != 0) {
    FUN_1004fde8a(plVar7);
    operator_delete(plVar7);
  }
LAB_10050f985:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

