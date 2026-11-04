// rea decompile_all
// name: CalendarsDataClassHandler::shouldApplyRecord:withRecordIdentifier:
// address: 0x10000b224
// body: available
// range: 0x10000b224-0x10000b732 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000b395 to 0x10000b0ae CalendarsDataClassHandler::_shouldApplyTask:withRecordIdentifier: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char CalendarsDataClassHandler::shouldApplyRecord_withRecordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ID IVar10;
  ID IVar11;
  cfstringStruct *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  
  if (*(char *)(param_1 + _loggedFiltering) == '\0') {
    *(undefined1 *)(param_1 + _loggedFiltering) = 1;
    cVar4 = _DLShouldLog(5);
    if (cVar4 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",5,
              &cf_Calendardataclassisbeingfiltered___);
    }
  }
  cVar4 = _DLShouldLog(7);
  if (cVar4 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",7,
            &cf_Calledwithrecord_____,param_4,param_3);
  }
  puVar3 = PTR__objc_msgSend_100020210;
  if ((*(int *)(param_1 + _dayLimit) == 0) && (*(long *)(param_1 + _filterCalendarNames) == 0)) {
    cVar4 = _DLShouldLog(4);
    if (cVar4 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",4,
              &cf_Calendarfiltercalledbutnofilterisactuallyconfigured_ReturningYES);
      return '\x01';
    }
    return '\x01';
  }
  uVar13 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150;
  uVar7 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:");
  cVar4 = (*(code *)puVar3)(uVar7,"isEqual:",
                            *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_1000200c8);
  if (cVar4 == '\x01') {
    pcVar14 = "_shouldApplyCalendar:withRecordIdentifier:";
LAB_10000b383:
    cVar4 = _shouldApplyTask_withRecordIdentifier_(param_1,pcVar14,param_3,param_4);
    return cVar4;
  }
  uVar1 = *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000200e0;
  cVar4 = (*(code *)PTR__objc_msgSend_100020210)(uVar7,"isEqual:",uVar1);
  if (cVar4 == '\x01') {
    pcVar14 = "_shouldApplyEvent:withRecordIdentifier:";
    goto LAB_10000b383;
  }
  uVar2 = *(undefined8 *)PTR__ISyncEntity_Calendars_Task_1000200f8;
  cVar4 = (*(code *)PTR__objc_msgSend_100020210)(uVar7,"isEqual:",uVar2);
  if (cVar4 == '\x01') {
    pcVar14 = "_shouldApplyTask:withRecordIdentifier:";
    goto LAB_10000b383;
  }
  lVar8 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",
                     *(undefined8 *)PTR__ISyncRelationship_Calendars_AudioAlarm_Owner_100020158);
  if ((lVar8 == 0) ||
     (lVar9 = (*(code *)PTR__objc_msgSend_100020210)(lVar8,"count"),
     puVar3 = PTR__objc_msgSend_100020210, lVar9 != 1)) {
    cVar4 = _DLShouldLog(4);
    if (cVar4 == '\0') {
      return '\0';
    }
    pcVar12 = &cf_filteredrecord__doesn_thaveownerorhasmorethanoneowner___;
    cVar4 = '\0';
    uVar13 = 4;
    goto LAB_10000b56f;
  }
  IVar10 = (*(code *)PTR__objc_msgSend_100020210)(lVar8,"objectAtIndex:",0);
  cVar5 = (*(code *)puVar3)(*(undefined8 *)(param_1 + _filterAcceptSet),"containsObject:",IVar10);
  cVar4 = '\x01';
  if (cVar5 != '\0') {
    return '\x01';
  }
  cVar5 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _filterRejectSet),"containsObject:",IVar10);
  puVar3 = PTR__objc_msgSend_100020210;
  if (cVar5 != '\0') {
    return '\0';
  }
  IVar11 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
  uVar7 = (*(code *)puVar3)(IVar11,"recordsWithIdentifiers:",lVar8);
  IVar11 = (*(code *)puVar3)(uVar7,"objectForKey:",IVar10);
  if (IVar11 == 0) {
    cVar4 = _DLShouldLog(4);
    if (cVar4 == '\0') {
      return '\0';
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",4,
            &cf_noparentforsubentitybeingfiltered___,param_3);
    return '\0';
  }
  lVar8 = (*(code *)PTR__objc_msgSend_100020210)(IVar11,"objectForKey:",uVar13);
  if (lVar8 == 0) {
    cVar4 = _DLShouldLog(4);
    if (cVar4 == '\0') {
      return '\0';
    }
    pcVar12 = &cf_Noparententitytypeforsubentitybeingfiltered___Parentrecord___;
    cVar4 = '\0';
    uVar13 = 4;
    param_4 = param_3;
    param_3 = IVar11;
    goto LAB_10000b56f;
  }
  cVar5 = (*(code *)PTR__objc_msgSend_100020210)(lVar8,"isEqual:",uVar1);
  if (cVar5 == '\x01') {
    cVar5 = _shouldApplyEvent_withRecordIdentifier_
                      (param_1,"_shouldApplyEvent:withRecordIdentifier:",IVar11,IVar10);
    cVar6 = _DLShouldLog(7);
    if (cVar6 != '\0') {
      pcVar12 = &cf_Checkingsubentity_sEventreturned_s;
LAB_10000b640:
      pcVar14 = "NO";
      if (cVar5 == '\x01') {
        pcVar14 = "YES";
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",7,pcVar12,
              pcVar14);
    }
  }
  else {
    cVar5 = (*(code *)PTR__objc_msgSend_100020210)(lVar8,"isEqual:",uVar2);
    if (cVar5 != '\x01') {
      cVar4 = _DLShouldLog(7);
      if (cVar4 == '\0') {
        return '\0';
      }
      pcVar12 = &cf_Refusingrecordwithunknownparenttype_____;
      cVar4 = '\0';
      uVar13 = 7;
      goto LAB_10000b56f;
    }
    cVar5 = _shouldApplyTask_withRecordIdentifier_
                      (param_1,"_shouldApplyTask:withRecordIdentifier:",IVar11,IVar10);
    cVar6 = _DLShouldLog(7);
    if (cVar6 != '\0') {
      pcVar12 = &cf_Checkingsubentity_sTaskreturned_s;
      goto LAB_10000b640;
    }
  }
  cVar6 = _DLShouldLog(7);
  if (cVar5 != '\x01') {
    if (cVar6 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",7,
              &cf_Rejectingsubentity_____,param_4,param_3);
      return cVar5;
    }
    return cVar5;
  }
  if (cVar6 == '\0') {
    return '\x01';
  }
  pcVar12 = &cf_Acceptingsubentity_____;
  uVar13 = 7;
LAB_10000b56f:
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
          ,"-[CalendarsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",uVar13,pcVar12,
          param_4,param_3);
  return cVar4;
}

