// name: FUN_1005b8e71
// address: 1005b8e71

undefined8 FUN_1005b8e71(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  local_58 = param_1;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "identifier != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1005b9005;
  }
  lVar3 = FUN_100170716(0,&local_58,1,PTR__kCFTypeArrayCallBacks_10082e130);
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_3a = "identifiers != __null";
LAB_1005b913f:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1005b8fdd:
    lVar4 = 0;
    FUN_1001782e9(0,0);
LAB_1005b8fe9:
    uVar6 = 0;
  }
  else {
    lVar4 = FUN_100166547(0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140,&cf_MatchingMode,
                          &cf_MatchAll,&cf_MatchUDID,lVar3,0);
    if (lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_3a = "query != __null";
        goto LAB_1005b913f;
      }
      goto LAB_1005b8fdd;
    }
    uVar6 = 0;
    iVar2 = _AMDCopyArrayOfDevicesMatchingQuery(0,lVar4,&local_50);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        lVar5 = FUN_10017076e(local_50);
        if (lVar5 == 1) {
          uVar6 = FUN_100170853(local_50,0);
        }
        else {
          if (lVar5 < 2) goto LAB_1005b8fe9;
          uVar7 = FUN_100170853(local_50,0);
          uVar6 = FUN_100170853(local_50,1);
          iVar2 = _AMDeviceGetInterfaceType(uVar7);
          if (iVar2 == 1) {
            uVar6 = uVar7;
          }
        }
        uVar6 = FUN_1001705fc(uVar6);
        goto LAB_1005b8fec;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      goto LAB_1005b8fe9;
    }
  }
LAB_1005b8fec:
  FUN_10017060f(local_50);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
LAB_1005b9005:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

