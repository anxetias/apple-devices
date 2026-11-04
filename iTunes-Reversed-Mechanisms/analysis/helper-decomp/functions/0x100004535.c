// rea decompile_all
// name: FUN_100004535
// address: 0x100004535
// body: available
// range: 0x100004535-0x10000474f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100004535(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ID IVar6;
  undefined8 uVar7;
  ID IVar8;
  ID IVar9;
  
  lVar5 = FUN_100007da1();
  puVar2 = PTR__objc_msgSend_100012170;
  if (lVar5 == 0) {
    return 0;
  }
  IVar1 = *(ID *)PTR__ISyncDataClass_Calendars_100012070;
  IVar6 = (*(code *)PTR__objc_msgSend_100012170)(lVar5,"filters");
  IVar6 = DataClassFilter::filterForDataClassName_fromFilters_
                    ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",IVar1
                     ,IVar6);
  if (IVar6 != 0) {
    IVar6 = DataClassFilter::criteria(IVar6,"criteria");
    uVar7 = (*(code *)puVar2)(IVar6,"mutableCopy");
    IVar6 = _objc_autorelease(uVar7);
    if (IVar6 != 0) goto LAB_1000045d9;
  }
  IVar6 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionary");
LAB_1000045d9:
  iVar4 = (*(code *)PTR__objc_msgSend_100012170)(param_2,"intValue");
  if (iVar4 < 1) {
    NSMutableDictionary::removeObjectForKey_
              (IVar6,"removeObjectForKey:",&cf_CalendarFilterDayLimitKey);
  }
  else {
    NSMutableDictionary::setObject_forKey_
              (IVar6,"setObject:forKey:",param_2,&cf_CalendarFilterDayLimitKey);
  }
  cVar3 = _DLShouldLog(5);
  if (cVar3 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_setCalendarDayLimit",5,&cf_OK_actuallyreallysettingcalendardaylimitfor__to__days,
            param_1,param_2);
  }
  IVar8 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_100012090,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000120a8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Task_1000120b8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_AudioAlarm_100012088,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_DisplayAlarm_1000120a0,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Recurrence_1000120b0,0);
  IVar9 = NSMutableDictionary::count(IVar6,"count");
  if ((IVar9 == 1) &&
     (IVar9 = NSMutableDictionary::objectForKey_
                        (IVar6,"objectForKey:",&cf_CalendarFilterLastCalendarFilterDateKey),
     IVar9 != 0)) {
    cVar3 = _DLShouldLog(5);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_setCalendarDayLimit",5,
              &cf_Clearedoutallcalendarfiltercriteriaexceptthe___removingfilter,
              &cf_CalendarFilterLastCalendarFilterDateKey);
    }
    NSMutableDictionary::removeObjectForKey_
              (IVar6,"removeObjectForKey:",&cf_CalendarFilterLastCalendarFilterDateKey);
  }
  FUN_100007bd9(lVar5,IVar1,IVar8,IVar6);
  return 0;
}

