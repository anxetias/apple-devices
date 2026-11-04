// name: FUN_10053a0d7
// address: 10053a0d7

void FUN_10053a0d7(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    lVar5 = _CFDictionaryGetTypeID();
    lVar6 = _CFGetTypeID(lVar1);
    local_60 = 0;
    if (lVar5 == lVar6) {
      local_60 = lVar1;
    }
  }
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10053a502;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
LAB_10053a140:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar3 != '\0') {
      local_54 = *(char **)(lVar1 + 0x152c8);
      local_58 = 0x8420202;
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,*(undefined4 *)(param_1 + 0x24));
      __os_log_impl(0x100000000,uVar7,0x10,
                    "activation> failed to create activation session info for device %{public}@ (0x%08X)"
                    ,&local_58,0x12);
    }
    iVar4 = FUN_1005bed46(*(undefined8 *)(lVar1 + 0x7168),0,0,FUN_10053b677,param_2);
    if (iVar4 != 0) {
      *(int *)(param_2 + 8) = iVar4;
      FUN_10053b52b(param_2);
    }
    goto LAB_10053a502;
  }
  if (local_60 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = "activationSessionInfo.get()";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar3 = FUN_1001782e9(0,0);
    if (cVar3 == '\0') goto LAB_10053a140;
  }
  lVar1 = local_60;
  lVar5 = FUN_1001744bd(DAT_1008c4d90,&cf_https___albert_apple_com_deviceservices_drmHandshake,0);
  if (lVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4a = "url != nullptr";
LAB_10053a63c:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10053a49e:
    FUN_1001782e9(0,0);
    FUN_10017060f(lVar5);
    lVar6 = 0;
LAB_10053a4b2:
    FUN_10017060f(lVar6);
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "request != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar6 = 0;
    FUN_1001782e9(0,0);
    iVar4 = -0x6c;
  }
  else {
    lVar6 = FUN_100171969(DAT_1008c4d90,PTR_cf_POST_10083c4a8,lVar5,
                          *(undefined8 *)PTR__kCFHTTPVersion1_1_10082d5c8);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_4a = "request != nullptr";
        goto LAB_10053a63c;
      }
      goto LAB_10053a49e;
    }
    FUN_100132900(&local_58);
    FUN_10016939d(lVar6,PTR_cf_User_Agent_10083c510,&local_58);
    FUN_1001b7a50(&local_58);
    puVar2 = PTR_cf_application_xml_10083c528;
    FUN_100171b23(lVar6,PTR_cf_Content_Type_10083c4d8,PTR_cf_application_xml_10083c528);
    FUN_100171b23(lVar6,PTR_cf_Accept_10083c4b0,puVar2);
    iVar4 = FUN_1001988d9(lVar6,lVar1,3,0);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    FUN_10017060f(lVar5);
    if (iVar4 != 0) goto LAB_10053a4b2;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_54 = *(char **)(*(long *)(param_2 + 0x10) + 0x152c8);
      local_58 = 0x8420102;
      __os_log_impl(0x100000000,uVar7,1,
                    "activation> sending activation session request for device %{public}@",&local_58
                    ,0xc);
    }
    iVar4 = FUN_10019c22a(DAT_100700af8,(int)DAT_100700af8,*(undefined8 *)(param_2 + 0x18),lVar6,0,0
                          ,FUN_10053ba98,param_2,0);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_10017060f(lVar6);
  if (iVar4 != 0) {
    *(int *)(param_2 + 8) = iVar4;
    FUN_10053b52b(param_2);
  }
LAB_10053a502:
  FUN_10026340c(&local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

