// name: FUN_10024d14f
// address: 10024d14f

undefined8 FUN_10024d14f(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10024d52e();
  if (cVar1 != '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "IsIOSDeviceEligibleForUniqueBuildID(ecid, uniqueBuildID) == false";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10024d31c;
  }
  lVar3 = FUN_1001cd749(&cf_iOSBuildEligibilityCache,0);
  if (lVar3 == 0) {
LAB_10024d1f0:
    lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  }
  else {
    lVar4 = _CFDictionaryGetTypeID();
    lVar5 = _CFGetTypeID(lVar3);
    if (lVar4 != lVar5) goto LAB_10024d1f0;
    lVar4 = FUN_100171413(DAT_1008c4d90,0,lVar3);
  }
  if (lVar4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "mutableCacheDictionary != nullptr";
LAB_10024d463:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10024d2dc:
    lVar5 = 0;
    FUN_1001782e9(0,0);
LAB_10024d2f1:
    lVar6 = 0;
    uVar2 = 0xffffff94;
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_100165701(DAT_1008c4d90,param_1);
    if (lVar5 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "ecidNumber != nullptr";
        goto LAB_10024d463;
      }
      goto LAB_10024d2dc;
    }
    lVar6 = FUN_1001736b8(DAT_1008c4d90,0,&cf___,lVar5);
    if (lVar6 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "ecidString != nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10024d2f1;
    }
    lVar7 = FUN_100166844(lVar4,lVar6);
    if (lVar7 == 0) {
      lVar7 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    }
    else {
      lVar7 = FUN_10017072a(DAT_1008c4d90,0,lVar7);
    }
    if (lVar7 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mutableUniqueBuildIDArray != nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar7 = 0;
      FUN_1001782e9(0,0);
      uVar2 = 0xffffff94;
    }
    else {
      FUN_1001709a5(lVar7,param_2);
      FUN_100171502(lVar4,lVar6,lVar7);
      uVar2 = 0;
      FUN_1001cdefe(&cf_iOSBuildEligibilityCache,lVar4,0);
    }
  }
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
LAB_10024d31c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

