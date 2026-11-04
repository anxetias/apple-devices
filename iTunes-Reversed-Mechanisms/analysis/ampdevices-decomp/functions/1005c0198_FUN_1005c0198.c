// name: FUN_1005c0198
// address: 1005c0198

int FUN_1005c0198(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_50;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "storeSettings != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005c0484;
  }
  iVar2 = FUN_1005b7cbc(param_1);
  if (iVar2 == -0x80) goto LAB_1005c04b4;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_1005c04b4;
  }
  cVar1 = FUN_1001cd899("storefront",&local_50);
  if (local_50 == 0 || cVar1 == '\0') {
LAB_1005c023c:
    iVar2 = FUN_1005b8a8e(param_1,&cf_com_apple_mobile_iTunes_store,&cf_DSPersonID,4);
    lVar4 = *param_2;
    if (lVar4 == 0) {
LAB_1005c052f:
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_48 = local_48 & 0xffff0000;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"removing device store settings",
                      &local_48,2);
      }
      iVar2 = FUN_1005b8e27(param_1,&cf_com_apple_mobile_iTunes_store,&cf_DSPersonID);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_1005b8e27(param_1,&cf_com_apple_mobile_iTunes_store,&cf_AppleID);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_1005b8e27(param_1,&cf_com_apple_mobile_iTunes_store,&cf_UserName);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_1005b8e27(param_1,&cf_com_apple_mobile_iTunes_store,&cf_AccountKind);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_1005b8e27(param_1,&cf_com_apple_mobile_iTunes_store,&cf_PreferHQTracks);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_1005b8e27(param_1,&cf_com_apple_mobile_iTunes_store,
                            &cf_AccountAvailableServiceTypes);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          goto LAB_1005c0725;
        }
      }
    }
    else if ((char)param_2[0x81] == '\0') {
      if (lVar4 == 0) goto LAB_1005c052f;
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_48 = local_48 & 0xffff0000;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "not setting device store settings",&local_48,2);
      }
    }
    else {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_48 = local_48 & 0xffff0000;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"setting device store settings",
                      &local_48,2);
        lVar4 = *param_2;
      }
      iVar2 = FUN_1005b8afb(param_1,&cf_com_apple_mobile_iTunes_store,&cf_DSPersonID,lVar4);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_1005b8c02(param_1,&cf_AppleID,param_2 + 1);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_1005b8c02(param_1,&cf_UserName,param_2 + 0x41);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = _AMDeviceSetValue(param_1,&cf_com_apple_mobile_iTunes_store,&cf_PreferHQTracks,
                                *(undefined8 *)PTR__kCFBooleanTrue_10082e038);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      iVar2 = FUN_1005b8afb(param_1,&cf_com_apple_mobile_iTunes_store,
                            &cf_AccountAvailableServiceTypes,
                            (ulong)(*(char *)((long)param_2 + 0x409) != '\0') << 2);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          goto LAB_1005c0725;
        }
      }
    }
  }
  else {
    iVar2 = _AMDeviceSetValue(param_1,&cf_com_apple_mobile_iTunes_store,&cf_Storefront);
    if (iVar2 == -0x80) goto LAB_1005c0484;
    if (iVar2 == 0) goto LAB_1005c023c;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1005c0484;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1005c0725:
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_1005c0484:
  FUN_1005b8595(param_1);
  FUN_10017060f(local_50);
LAB_1005c04b4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

