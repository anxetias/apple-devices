// rea decompile_all
// name: CalendarsDataClassHandler::_shouldApplyTask:withRecordIdentifier:
// address: 0x10000b0ae
// body: available
// range: 0x10000b0ae-0x10000b223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char CalendarsDataClassHandler::_shouldApplyTask_withRecordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char cVar1;
  char cVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  
  cVar1 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _filterAcceptSet),"containsObject:",param_4);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _filterRejectSet),"containsObject:",param_4);
    if (cVar1 == '\0') {
      if ((*(long *)(param_1 + _filterCalendarNames) != 0) &&
         (cVar1 = _shouldApplyRecordForCalendarFiltering_relationshipName_
                            (param_1,"_shouldApplyRecordForCalendarFiltering:relationshipName:",
                             param_3,*(ID *)PTR__ISyncRelationship_Calendars_Task_Calendar_100020190
                            ), cVar1 != '\x01')) {
        IVar3 = (*(code *)PTR__objc_msgSend_100020210)
                          (param_3,"objectForKey:",
                           *(undefined8 *)PTR__ISyncAttribute_Calendars_Task_Summary_100020068);
        _addReject_info_reason_(param_1,"_addReject:info:reason:",param_4,IVar3,0x100022378);
        return cVar1;
      }
      IVar3 = (*(code *)PTR__objc_msgSend_100020210)
                        (param_3,"objectForKey:",
                         *(undefined8 *)PTR__ISyncAttribute_Calendars_Task_Summary_100020068);
      _addAccept_info_(param_1,"_addAccept:info:",param_4,IVar3);
      return '\x01';
    }
    cVar1 = _DLShouldLog(7);
    if (cVar1 == '\0') {
      return '\0';
    }
    pcVar4 = &cf_Rejectingtask__becausealreadyinrejectset;
    cVar1 = '\0';
  }
  else {
    cVar2 = _DLShouldLog(7);
    cVar1 = '\x01';
    if (cVar2 == '\0') {
      return '\x01';
    }
    pcVar4 = &cf_Acceptingtask__becausealreadyinacceptset;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
          ,"-[CalendarsDataClassHandler _shouldApplyTask:withRecordIdentifier:]",7,pcVar4,param_4);
  return cVar1;
}

