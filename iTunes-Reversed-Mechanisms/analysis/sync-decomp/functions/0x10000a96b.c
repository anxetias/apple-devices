// rea decompile_all
// name: CalendarsDataClassHandler::_shouldApplyCalendar:withRecordIdentifier:
// address: 0x10000a96b
// body: available
// range: 0x10000a96b-0x10000ab12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char CalendarsDataClassHandler::_shouldApplyCalendar_withRecordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  ID IVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  
  IVar5 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",
                     *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_Title_100020010);
  puVar1 = PTR__objc_msgSend_100020210;
  if (*(char *)(param_1 + _excludeBirthdayCalendar) != '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_com_apple_ical_type);
    cVar3 = (*(code *)puVar1)(uVar6,"isEqualToString:",&cf_birthday);
    if (cVar3 != '\0') {
      pcVar7 = &cf_excludingthebirthdaycalendar;
      goto LAB_10000a9ed;
    }
  }
  lVar2 = _filterCalendarNames;
  cVar3 = '\x01';
  if (*(long *)(param_1 + _filterCalendarNames) == 0) {
    return '\x01';
  }
  cVar4 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _filterAcceptSet),"containsObject:",param_4);
  if (cVar4 == '\0') {
    cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _filterRejectSet),"containsObject:",param_4);
    if (cVar3 == '\0') {
      if ((IVar5 != 0) &&
         (cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                            (*(undefined8 *)(param_1 + lVar2),"containsObject:",IVar5),
         cVar3 != '\0')) {
        _addAccept_info_(param_1,"_addAccept:info:",param_4,IVar5);
        return '\x01';
      }
      pcVar7 = &cf_calendarisnotbeingsyncedtodevice;
LAB_10000a9ed:
      _addReject_info_reason_(param_1,"_addReject:info:reason:",param_4,IVar5,(ID)pcVar7);
      return '\0';
    }
    cVar3 = _DLShouldLog(7);
    if (cVar3 == '\0') {
      return '\0';
    }
    pcVar7 = &cf_Rejectingcalendar______becausealreadyinrejectset;
    cVar3 = '\0';
  }
  else {
    cVar4 = _DLShouldLog(7);
    if (cVar4 == '\0') {
      return '\x01';
    }
    pcVar7 = &cf_Acceptingcalendar______becausealreadyinacceptset;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
          ,"-[CalendarsDataClassHandler _shouldApplyCalendar:withRecordIdentifier:]",7,pcVar7,IVar5,
          param_4);
  return cVar3;
}

