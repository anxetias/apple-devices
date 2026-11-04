// name: FUN_10024be76
// address: 10024be76

undefined8 FUN_10024be76(undefined4 param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c = 0;
  if (param_3 == (undefined1 *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outMinimumMajorVersion != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffffce;
    goto LAB_10024c1a0;
  }
  *param_3 = 0;
  lVar2 = FUN_1005f4b1c(*param_2);
  if (lVar2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "webUpdateDictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffff94;
LAB_10024c184:
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_100166b7f(lVar2,&cf_MobileDeviceMajorVersionsByProductType);
    if (lVar3 == 0) {
      if (param_2[1] == 0x2713) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_4a = "mobileDeviceMajorVersionsByProductTypeDictionary != nullptr";
LAB_10024c14d:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
      }
      else {
        lVar5 = FUN_100166b7f(lVar2,&cf_MobileDeviceMajorVersions);
        if (lVar5 != 0) {
          lVar4 = 0;
LAB_10024c1c9:
          lVar3 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,param_1);
          if (lVar3 == 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "securityEpochString != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            lVar3 = 0;
            FUN_1001782e9(0,0);
            uVar7 = 0xffffff94;
          }
          else {
            lVar5 = FUN_100171475(lVar5,lVar3);
            if (lVar5 == 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                local_4a = "value != nullptr";
LAB_10024c33f:
                local_4c = 0x822;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              goto LAB_10024c0d9;
            }
            lVar6 = _CFGetTypeID(lVar5);
            lVar8 = _CFNumberGetTypeID();
            if (lVar6 == lVar8) {
              cVar1 = FUN_100164d80(lVar5,&local_5c);
              if (cVar1 == '\0') {
                uVar7 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar7,0x10);
                if (cVar1 != '\0') {
                  local_4a = "JRCFTypeGetUInt32(value, &minimumMajorVersion)";
                  goto LAB_10024c33f;
                }
                goto LAB_10024c0d9;
              }
LAB_10024c3ea:
              *param_3 = (undefined1)local_5c;
              uVar7 = 0;
            }
            else {
              lVar6 = _CFGetTypeID(lVar5);
              lVar8 = _CFArrayGetTypeID();
              uVar7 = 0x5c6;
              if (lVar6 == lVar8) {
                cVar1 = FUN_100164c9b(lVar5,0,&local_5c);
                if (cVar1 != '\0') goto LAB_10024c3ea;
                uVar9 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar9,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = 
                  "JRCFArrayGetUInt32AtIndex(static_cast<CFArrayRef>(value), 0, &minimumMajorVersion)"
                  ;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
            }
          }
          goto LAB_10024c187;
        }
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_4a = "mobileDeviceMajorVersionsDictionary != nullptr";
          goto LAB_10024c14d;
        }
      }
LAB_10024c172:
      FUN_1001782e9(0,0);
      uVar7 = 0x5c6;
      goto LAB_10024c184;
    }
    lVar4 = FUN_10024c50f(lVar2,&cf_MobileDeviceProductTypes,param_2);
    if (lVar4 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_4a = "productTypeString != nullptr";
        goto LAB_10024c14d;
      }
      goto LAB_10024c172;
    }
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFStringGetTypeID();
    if (lVar5 == lVar6) {
      lVar5 = FUN_100166b7f(lVar3,lVar4);
      while (lVar5 != 0) {
        lVar6 = FUN_100166c1b(lVar5,&cf_SameAs);
        if (lVar6 == 0) goto LAB_10024c1c9;
        FUN_1001705fc(lVar6);
        FUN_10017060f(lVar4);
        lVar5 = FUN_100166b7f(lVar3,lVar6);
        lVar4 = lVar6;
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_4a = "mobileDeviceMajorVersionsDictionary != nullptr";
LAB_10024c41d:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_4a = "CFGetTypeID(productTypeString) == CFStringGetTypeID()";
        goto LAB_10024c41d;
      }
    }
    lVar3 = 0;
LAB_10024c0d9:
    FUN_1001782e9(0,0);
    uVar7 = 0x5c6;
  }
LAB_10024c187:
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar2);
LAB_10024c1a0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

