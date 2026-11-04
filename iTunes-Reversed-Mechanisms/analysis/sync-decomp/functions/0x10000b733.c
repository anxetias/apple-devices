// rea decompile_all
// name: CalendarsDataClassHandler::updateFilterCriteriaAfterPushing
// address: 0x10000b733
// body: available
// range: 0x10000b733-0x10000ba29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID CalendarsDataClassHandler::updateFilterCriteriaAfterPushing(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  ID self;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  long lVar7;
  double extraout_XMM0_Qa;
  long local_40;
  
  self = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
  lVar7 = _filterForceDayInterval;
  if (*(char *)(param_1 + _rebuildFilterCriteria) == '\0') {
    if (*(int *)(param_1 + _dayLimit) < 1) {
      return 0;
    }
    if (*(long *)(param_1 + _filterForceDayInterval) == -1) {
      return 0;
    }
    cVar2 = _DLShouldLog(5);
    local_40 = _filterCriteria;
    if (cVar2 != '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_100020210)
                        (*(undefined8 *)(param_1 + _filterCriteria),"objectForKey:",
                         &cf_CalendarFilterDayLimitKey);
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler updateFilterCriteriaAfterPushing]",5,
              &cf_Checkinglastfiltereddate_sincewehaveadaylimitof__day_s_forfilteringcalendars,uVar4
             );
    }
    lVar5 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + local_40),"objectForKey:",
                       &cf_CalendarFilterLastCalendarFilterDateKey);
    if (lVar5 == 0) {
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                ,"-[CalendarsDataClassHandler updateFilterCriteriaAfterPushing]",5,
                &cf_NolastFilteredDate_forcingrefilter);
      }
    }
    else {
      NSDate::timeIntervalSinceDate_(self,"timeIntervalSinceDate:",lVar5);
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        (*(code *)PTR__objc_msgSend_100020210)(lVar5,"timeIntervalSinceReferenceDate");
        IVar3 = NSCalendarDate::dateWithTimeIntervalSinceReferenceDate_
                          ((ID)&_OBJC_CLASS___NSCalendarDate,
                           "dateWithTimeIntervalSinceReferenceDate:");
        NSDate::timeIntervalSinceReferenceDate(self,"timeIntervalSinceReferenceDate");
        lVar7 = _filterForceDayInterval;
        IVar6 = NSCalendarDate::dateWithTimeIntervalSinceReferenceDate_
                          ((ID)&_OBJC_CLASS___NSCalendarDate,
                           "dateWithTimeIntervalSinceReferenceDate:");
        __DLLog(extraout_XMM0_Qa / 86400.0,
                "/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                ,"-[CalendarsDataClassHandler updateFilterCriteriaAfterPushing]",5,
                &cf_Comparinglastfiltereddate__tonow___intervalis_ddays,IVar3,IVar6);
      }
      if (extraout_XMM0_Qa / 86400.0 < (double)*(long *)(param_1 + lVar7)) {
        return 0;
      }
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                ,"-[CalendarsDataClassHandler updateFilterCriteriaAfterPushing]",5,
                &cf_Morethan_ddayssincelastcalendarfilter_anddaylimitisset_forcingrefilter,
                *(undefined8 *)(param_1 + lVar7));
      }
    }
    IVar3 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _filterCriteria),"mutableCopy");
  }
  else {
    cVar2 = _DLShouldLog(5);
    local_40 = _filterCriteria;
    lVar7 = _filterCalendarNames;
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler updateFilterCriteriaAfterPushing]",5,
              &cf_Rebuildingfiltercriteriaafterpushingwitholdcriteria__andnewfiltercalendarnames__,
              *(undefined8 *)(param_1 + _filterCriteria),
              *(undefined8 *)(param_1 + _filterCalendarNames));
    }
    puVar1 = PTR__objc_msgSend_100020210;
    IVar3 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + local_40),"mutableCopy");
    uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar7),"allObjects");
    (*(code *)puVar1)(IVar3,"setObject:forKey:",uVar4,&cf_CalendarFilterCalendarsKey);
  }
  if (IVar3 == 0) {
    return 0;
  }
  (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + local_40));
  *(ID *)(param_1 + local_40) = IVar3;
  (*(code *)PTR__objc_msgSend_100020210)
            (IVar3,"setObject:forKey:",self,&cf_CalendarFilterLastCalendarFilterDateKey);
  return IVar3;
}

