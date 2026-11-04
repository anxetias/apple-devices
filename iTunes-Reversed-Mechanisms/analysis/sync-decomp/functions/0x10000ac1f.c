// rea decompile_all
// name: CalendarsDataClassHandler::_shouldApplyEventInner:withRecordIdentifier:
// address: 0x10000ac1f
// body: available
// range: 0x10000ac1f-0x10000b063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char CalendarsDataClassHandler::_shouldApplyEventInner_withRecordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  code *pcVar9;
  char cVar10;
  double dVar11;
  
  lVar6 = _filterAcceptSet;
  cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _filterAcceptSet),"containsObject:",param_4);
  if (cVar2 != '\0') {
    cVar2 = _DLShouldLog(7);
    cVar10 = '\x01';
    if (cVar2 == '\0') {
      return '\x01';
    }
    pcVar8 = &cf_Acceptingevent__becausealreadyinacceptset;
LAB_10000acc9:
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler _shouldApplyEventInner:withRecordIdentifier:]",7,pcVar8,
            param_4);
    return cVar10;
  }
  cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _filterRejectSet),"containsObject:",param_4);
  if (cVar2 != '\0') {
    cVar2 = _DLShouldLog(7);
    if (cVar2 == '\0') {
      return '\0';
    }
    pcVar8 = &cf_Rejectingevent__becausealreadyinrejectset;
    cVar10 = '\0';
    goto LAB_10000acc9;
  }
  cVar2 = _shouldApplyRecordForCalendarFiltering_relationshipName_
                    (param_1,"_shouldApplyRecordForCalendarFiltering:relationshipName:",param_3,
                     *(ID *)PTR__ISyncRelationship_Calendars_Event_Calendar_100020160);
  if (cVar2 == '\0') {
    IVar5 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"objectForKey:",
                       *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038);
    _addReject_info_reason_(param_1,"_addReject:info:reason:",param_4,IVar5,0x100022278);
    return '\0';
  }
  uVar3 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",
                     *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_EndDate_100020020);
  if ((*(int *)(param_1 + _dayLimit) == 0) ||
     (dVar11 = (double)(*(code *)PTR__objc_msgSend_100020210)(uVar3,"timeIntervalSince1970"),
     *(int *)(param_1 + _dayLimit) <= (int)dVar11)) {
    cVar2 = _DLShouldLog(7);
    if (cVar2 == '\0') goto LAB_10000ae76;
    pcVar8 = &cf_Acceptingevent__becauseenddateiswithinlimitdate;
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"objectForKey:",
                       *(undefined8 *)PTR__ISyncRelationship_Calendars_Event_MainEvent_100020168);
    lVar4 = (*(code *)PTR__objc_msgSend_100020210)(uVar3,"count");
    if ((lVar4 != 0) &&
       (IVar5 = (*(code *)PTR__objc_msgSend_100020210)(uVar3,"objectAtIndex:",0), IVar5 != 0)) {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (*(undefined8 *)(param_1 + lVar6),"containsObject:",IVar5);
      if (cVar2 != '\0') goto LAB_10000ae76;
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (*(undefined8 *)(param_1 + _filterRejectSet),"containsObject:",IVar5);
      lVar6 = _detachedEvents;
      if (cVar2 == '\0') {
        cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                          (*(undefined8 *)(param_1 + _detachedEvents),"containsObject:");
        if (cVar2 == '\0') {
          lVar4 = *(long *)(param_1 + lVar6);
          if (lVar4 == 0) {
            IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
            IVar7 = NSMutableSet::initWithObjects_(IVar7,"initWithObjects:",param_4,0);
            *(ID *)(param_1 + lVar6) = IVar7;
          }
          else {
            (*(code *)PTR__objc_msgSend_100020210)(lVar4,"addObject:",param_4);
          }
          puVar1 = PTR__objc_msgSend_100020210;
          IVar7 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
          uVar3 = (*(code *)puVar1)(IVar7,"recordsWithIdentifiers:",uVar3);
          IVar7 = (*(code *)puVar1)(uVar3,"objectForKey:",IVar5);
          if ((IVar7 != 0) &&
             (cVar2 = _shouldApplyEventInner_withRecordIdentifier_
                                (param_1,"_shouldApplyEventInner:withRecordIdentifier:",IVar7,IVar5)
             , cVar2 != '\0')) {
            pcVar9 = (code *)PTR__objc_msgSend_100020210;
            if (cVar2 != '\x01') goto LAB_10000af02;
            cVar2 = _DLShouldLog(7);
            if (cVar2 == '\0') goto LAB_10000ae76;
            pcVar8 = &cf_Acceptingevent__becausemaineventiswithinlimitdate;
            goto LAB_10000ae59;
          }
        }
        else {
          cVar2 = _DLShouldLog(3);
          if (cVar2 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                    ,"-[CalendarsDataClassHandler _shouldApplyEventInner:withRecordIdentifier:]",3,
                    &
                    cf_Skippingmaineventcheckforevent__becauseitclaimsitsmaineventisadetachedevent___
                    ,param_4,IVar5);
          }
        }
      }
    }
    pcVar9 = (code *)PTR__objc_msgSend_100020210;
    IVar5 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"objectForKey:",
                       *(undefined8 *)PTR__ISyncRelationship_Calendars_Event_Recurrences_100020178);
    lVar6 = (*pcVar9)(IVar5,"count");
    if (lVar6 == 0) {
      cVar2 = '\0';
LAB_10000af02:
      IVar5 = (*pcVar9)(param_3,"objectForKey:",
                        *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038);
      _addReject_info_reason_(param_1,"_addReject:info:reason:",param_4,IVar5,0x100022318);
      return cVar2;
    }
    cVar2 = _shouldApplyEventRecurrences_withRecordIdentifier_
                      (param_1,"_shouldApplyEventRecurrences:withRecordIdentifier:",IVar5,param_4);
    if (cVar2 != '\x01') goto LAB_10000af02;
    cVar2 = _DLShouldLog(7);
    if (cVar2 == '\0') goto LAB_10000ae76;
    pcVar8 = &cf_Acceptingevent__becauserecurrencesarewithinlimitdate;
  }
LAB_10000ae59:
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
          ,"-[CalendarsDataClassHandler _shouldApplyEventInner:withRecordIdentifier:]",7,pcVar8,
          param_4);
LAB_10000ae76:
  IVar5 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",
                     *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038);
  _addAccept_info_(param_1,"_addAccept:info:",param_4,IVar5);
  return '\x01';
}

