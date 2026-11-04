// name: FUN_1001fcbda
// address: 1001fcbda

undefined8 FUN_1001fcbda(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1001fcf40:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1001fcf40;
    }
    if ((*(char *)(param_1 + 0x6ac3) != '\0') && (*(long *)(param_1 + 0x152c8) != 0)) {
      local_48 = 0;
      uStack_44 = 0;
      local_80 = 0;
      FUN_10016bec9(&local_60);
      iVar2 = _AMSGetClientIdentifierAndDisplayNameForTarget(local_60,&local_48,&local_80);
      FUN_10016d588(&local_60);
      if (iVar2 == 0) {
        local_60 = 0;
        local_58 = 0;
        local_78 = 0;
        local_70 = 0;
        local_64 = 0;
        uVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        FUN_10016883b(uVar3,&cf_iTunesUserID,*(undefined8 *)(param_1 + 0x14d80),1);
        FUN_10016bec9(&local_50,*(undefined8 *)(param_1 + 0x152c8));
        iVar2 = _AMSGetDataClassInfoForTarget(local_50,&local_60);
        FUN_10016d588(&local_50);
        if (iVar2 == 0) {
          FUN_100171502(uVar3,&cf_DataClassInfo,local_60);
          FUN_10017060f(local_60);
          local_60 = 0;
        }
        FUN_10016bec9(&local_50,*(undefined8 *)(param_1 + 0x152c8));
        iVar2 = _AMSGetCollectionsForDataClassName(local_50,&cf_com_apple_Contacts,&local_58);
        FUN_10016d588(&local_50);
        if (iVar2 == 0) {
          FUN_100171502(uVar3,&cf_ContactsCollections,local_58);
          FUN_10017060f(local_58);
          local_58 = 0;
        }
        FUN_10016bec9(&local_50,*(undefined8 *)(param_1 + 0x152c8));
        iVar2 = _AMSGetCollectionsForDataClassName(local_50,&cf_com_apple_Calendars,&local_58);
        FUN_10016d588(&local_50);
        if (iVar2 == 0) {
          FUN_100171502(uVar3,&cf_CalendarsCollections,local_58);
          FUN_10017060f(local_58);
          local_58 = 0;
        }
        FUN_10016bec9(&local_50,*(undefined8 *)(param_1 + 0x152c8));
        iVar2 = _AMSGetCollectionsForDataClassName(local_50,&cf_com_apple_MailAccounts,&local_58);
        FUN_10016d588(&local_50);
        if (iVar2 == 0) {
          FUN_100171502(uVar3,&cf_MailAccountsCollections,local_58);
          FUN_10017060f(local_58);
          local_58 = 0;
        }
        FUN_10016bec9(&local_50,*(undefined8 *)(param_1 + 0x152c8));
        iVar2 = _AMSGetNewRecordGroupName(local_50,&local_70);
        FUN_10016d588(&local_50);
        if (iVar2 == 0) {
          FUN_100171502(uVar3,&cf_NewRecordGroupName,local_70);
          FUN_10017060f(local_70);
          local_70 = 0;
        }
        FUN_10016bec9(&local_50,*(undefined8 *)(param_1 + 0x152c8));
        iVar2 = _AMSGetNewRecordCalendarName(local_50,&local_78);
        FUN_10016d588(&local_50);
        if (iVar2 == 0) {
          FUN_100171502(uVar3,&cf_NewRecordCalendarName,local_78);
          FUN_10017060f(local_78);
          local_78 = 0;
        }
        FUN_10016bec9(&local_50,*(undefined8 *)(param_1 + 0x152c8));
        iVar2 = _AMSGetCalendarDayLimit(local_50,&local_64);
        FUN_10016d588(&local_50);
        if (iVar2 == 0) {
          FUN_100168746(uVar3,&cf_CalendarDayLimit,(long)local_64,1);
        }
        FUN_10017060f(CONCAT44(uStack_44,local_48));
        FUN_10017060f(local_80);
        goto LAB_1001fcf65;
      }
    }
  }
  uVar3 = 0;
LAB_1001fcf65:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

