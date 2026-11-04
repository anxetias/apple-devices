// name: FUN_1001ff952
// address: 1001ff952

int FUN_1001ff952(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined4 local_5c;
  undefined4 local_58;
  int iStack_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 uStack_4c;
  undefined4 uStack_4a;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar10 = FUN_1001658f1(DAT_1008c4d90);
  FUN_10016bec9(&local_58,param_1);
  iVar8 = _AMSRegisterClientWithTargetIdentifierAndDisplayName(CONCAT44(iStack_54,local_58),uVar10);
  FUN_10016d588(&local_58);
  FUN_10017060f(uVar10);
  if (iVar8 == 0) {
    lVar11 = FUN_100166844(param_3,&cf_DataClassInfo);
    if (lVar11 != 0) {
      FUN_10016bec9(&local_58,param_1);
      iVar8 = _AMSSetDataClassInfoForTarget(CONCAT44(iStack_54,local_58),lVar11);
      FUN_10016d588(&local_58);
      if (iVar8 != 0) {
        uVar10 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar10,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x8220202;
          iStack_54 = 0x7a0a90;
          local_50 = 1;
          local_4e = 0;
          uStack_4c = 0x822;
          uStack_4a = 0x7adb24;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar7 == '\0') goto LAB_1001ffa3a;
        pcVar12 = "AMSSetDataClassInfoForTarget failed (%d)";
        iStack_54 = iVar8;
        goto LAB_1001ffa27;
      }
    }
    lVar11 = FUN_100166844(param_3,&cf_ContactsCollections);
    iVar8 = 0;
    if (lVar11 != 0) {
      uVar10 = FUN_1002040cd(lVar11);
      FUN_10016bec9(&local_58,param_1);
      iVar9 = _AMSSetFilteredCollectionNamesForDataClassName
                        (CONCAT44(iStack_54,local_58),&cf_com_apple_Contacts,uVar10);
      FUN_10016d588(&local_58);
      FUN_10017060f(uVar10);
      if (iVar9 != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        iVar8 = iVar9;
        if (cVar7 != '\0') {
          local_58 = 0x4000202;
          local_50 = 0x842;
          local_4e = 0x3f70;
          uStack_4c = 0x87;
          uStack_4a = 1;
          iStack_54 = iVar9;
          __os_log_impl(0x100000000,uVar10,0x10,
                        "AMSSetFilteredCollectionNamesForDataClassName failed (%d) for %{public}@",
                        &local_58,0x12);
        }
      }
    }
    lVar11 = FUN_100166844(param_3,&cf_CalendarsCollections);
    if (lVar11 != 0) {
      uVar10 = FUN_1002040cd(lVar11);
      FUN_10016bec9(&local_58,param_1);
      iVar8 = _AMSSetFilteredCollectionNamesForDataClassName
                        (CONCAT44(iStack_54,local_58),&cf_com_apple_Calendars,uVar10);
      FUN_10016d588(&local_58);
      FUN_10017060f(uVar10);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x4000202;
          local_50 = 0x842;
          local_4e = 0x3fb0;
          uStack_4c = 0x87;
          uStack_4a = 1;
          iStack_54 = iVar8;
          __os_log_impl(0x100000000,uVar10,0x10,
                        "AMSSetFilteredCollectionNamesForDataClassName failed (%d) for %{public}@",
                        &local_58,0x12);
        }
      }
    }
    lVar11 = FUN_100166844(param_3,&cf_MailAccountsCollections);
    if (lVar11 != 0) {
      uVar10 = FUN_1002040cd(lVar11);
      FUN_10016bec9(&local_58,param_1);
      iVar8 = _AMSSetFilteredCollectionNamesForDataClassName
                        (CONCAT44(iStack_54,local_58),&cf_com_apple_MailAccounts,uVar10);
      FUN_10016d588(&local_58);
      FUN_10017060f(uVar10);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x4000202;
          local_50 = 0x842;
          local_4e = 0x3ff0;
          uStack_4c = 0x87;
          uStack_4a = 1;
          iStack_54 = iVar8;
          __os_log_impl(0x100000000,uVar10,0x10,
                        "AMSSetFilteredCollectionNamesForDataClassName failed (%d) for %{public}@",
                        &local_58,0x12);
        }
      }
    }
    lVar11 = FUN_100166c1b(param_3,&cf_NewRecordGroupName);
    uVar5 = uStack_4a;
    uVar3 = uStack_4c;
    uVar1 = local_4e;
    local_4e = (undefined2)param_1;
    uVar2 = local_4e;
    uStack_4c = (undefined2)((ulong)param_1 >> 0x10);
    uVar4 = uStack_4c;
    uStack_4a = (undefined4)((ulong)param_1 >> 0x20);
    uVar6 = uStack_4a;
    local_4e = uVar1;
    uStack_4c = uVar3;
    uStack_4a = uVar5;
    if (lVar11 != 0) {
      FUN_10016bec9(&local_58,param_1);
      iVar8 = _AMSSetNewRecordGroupName(CONCAT44(iStack_54,local_58),lVar11);
      FUN_10016d588(&local_58);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x4000202;
          local_50 = 0x842;
          iStack_54 = iVar8;
          local_4e = uVar2;
          uStack_4c = uVar4;
          uStack_4a = uVar6;
          __os_log_impl(0x100000000,uVar10,0x10,
                        "AMSSetNewRecordGroupName failed (%d) for device %{public}@",&local_58,0x12)
          ;
        }
      }
    }
    lVar11 = FUN_100166c1b(param_3,&cf_NewRecordCalendarName);
    if (lVar11 != 0) {
      FUN_10016bec9(&local_58,param_1);
      iVar8 = _AMSSetNewRecordCalendarName(CONCAT44(iStack_54,local_58),lVar11);
      FUN_10016d588(&local_58);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x4000202;
          local_50 = 0x842;
          iStack_54 = iVar8;
          local_4e = uVar2;
          uStack_4c = uVar4;
          uStack_4a = uVar6;
          __os_log_impl(0x100000000,uVar10,0x10,
                        "AMSSetNewRecordCalendarName failed (%d) for device %{public}@",&local_58,
                        0x12);
        }
      }
    }
    cVar7 = FUN_100167896(param_3,&cf_CalendarDayLimit,&local_5c);
    if (cVar7 == '\0') goto LAB_1001ffa3a;
    FUN_10016bec9(&local_58,param_1);
    iVar8 = _AMSSetCalendarDayLimit(CONCAT44(iStack_54,local_58),local_5c);
    FUN_10016d588(&local_58);
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_1001ffa3a;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar10 = DAT_1008c75b8;
    cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar7 == '\0') goto LAB_1001ffa3a;
    local_58 = 0x4000202;
    local_50 = 0x842;
    pcVar12 = "AMSSetCalendarDayLimit failed (%d) for device %{public}@";
    uVar13 = 0x12;
    iStack_54 = iVar8;
    local_4e = uVar2;
    uStack_4c = uVar4;
    uStack_4a = uVar6;
  }
  else {
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      iStack_54 = 0x7a0a90;
      local_50 = 1;
      local_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x7adb24;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar10 = DAT_1008c75b8;
    cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar7 == '\0') goto LAB_1001ffa3a;
    pcVar12 = "AMSRegisterClientWithTargetIdentifierAndDisplayName failed (%d)";
    iStack_54 = iVar8;
LAB_1001ffa27:
    local_58 = 0x4000100;
    uVar13 = 8;
  }
  iVar8 = iStack_54;
  __os_log_impl(0x100000000,uVar10,0x10,pcVar12,&local_58,uVar13);
LAB_1001ffa3a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

