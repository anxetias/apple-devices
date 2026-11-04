// rea decompile_all
// name: FUN_100005de1
// address: 0x100005de1
// body: available
// range: 0x100005de1-0x10000613b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100005de1(undefined8 param_1,undefined8 param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  
  lVar3 = FUN_100007da1();
  if (lVar3 == 0) {
    return 0;
  }
  pcVar8 = *(cfstringStruct **)PTR__ISyncDataClass_Calendars_100012070;
  lVar4 = _CFStringCompare(param_2,pcVar8,0);
  puVar1 = PTR__objc_msgSend_100012170;
  if (lVar4 != 0) {
    pcVar8 = *(cfstringStruct **)PTR__ISyncDataClass_Contacts_100012078;
    lVar4 = _CFStringCompare(param_2,pcVar8,0);
    puVar1 = PTR__objc_msgSend_100012170;
    if (lVar4 != 0) {
      lVar4 = _CFStringCompare(param_2,&cf_com_apple_MailAccounts,0);
      if (lVar4 != 0) {
        return 0;
      }
      IVar5 = NSArray::arrayWithObjects_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",&cf_com_apple_mail_Account,0
                        );
      pcVar8 = &cf_com_apple_MailAccounts;
      IVar6 = param_3;
      goto LAB_100006126;
    }
    IVar6 = (*(code *)PTR__objc_msgSend_100012170)(lVar3,"filters");
    IVar6 = DataClassFilter::filterForDataClassName_fromFilters_
                      ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                       (ID)pcVar8,IVar6);
    if (IVar6 == 0) {
LAB_100005f93:
      IVar6 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionary");
    }
    else {
      IVar6 = DataClassFilter::criteria(IVar6,"criteria");
      uVar7 = (*(code *)puVar1)(IVar6,"mutableCopy");
      IVar6 = _objc_autorelease(uVar7);
      if (IVar6 == 0) goto LAB_100005f93;
    }
    lVar4 = (*(code *)PTR__objc_msgSend_100012170)(param_3,"count");
    if (lVar4 == 0) {
      NSMutableDictionary::removeObjectForKey_
                (IVar6,"removeObjectForKey:",&cf_ContactsFilterGroupsKey);
    }
    else {
      NSMutableDictionary::setObject_forKey_
                (IVar6,"setObject:forKey:",param_3,&cf_ContactsFilterGroupsKey);
    }
    IVar5 = NSArray::arrayWithObjects_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                       *(undefined8 *)PTR__ISyncEntity_Contacts_Group_1000120d8,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_Contact_1000120c0,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_EmailAddress_1000120d0,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_PhoneNumber_1000120e8,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_StreetAddress_1000120f8,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_URL_100012100,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_RelatedName_1000120f0,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_IM_1000120e0,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_Date_1000120c8,0);
    goto LAB_100006126;
  }
  IVar6 = (*(code *)PTR__objc_msgSend_100012170)(lVar3,"filters");
  IVar6 = DataClassFilter::filterForDataClassName_fromFilters_
                    ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                     (ID)pcVar8,IVar6);
  if (IVar6 == 0) {
LAB_100005eea:
    IVar6 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  }
  else {
    IVar6 = DataClassFilter::criteria(IVar6,"criteria");
    uVar7 = (*(code *)puVar1)(IVar6,"mutableCopy");
    IVar6 = _objc_autorelease(uVar7);
    if (IVar6 == 0) goto LAB_100005eea;
  }
  lVar4 = (*(code *)PTR__objc_msgSend_100012170)(param_3,"count");
  if (lVar4 == 0) {
    NSMutableDictionary::removeObjectForKey_
              (IVar6,"removeObjectForKey:",&cf_CalendarFilterCalendarsKey);
  }
  else {
    NSMutableDictionary::setObject_forKey_
              (IVar6,"setObject:forKey:",param_3,&cf_CalendarFilterCalendarsKey);
  }
  cVar2 = _DLShouldLog(5);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_setFilteredCalendarNamesForClient",5,&cf_Settingcalendarfilteringcriteria___,IVar6);
  }
  IVar5 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_100012090,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000120a8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Task_1000120b8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_AudioAlarm_100012088,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_DisplayAlarm_1000120a0,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Recurrence_1000120b0,0);
LAB_100006126:
  FUN_100007bd9(lVar3,pcVar8,IVar5,IVar6);
  return 0;
}

