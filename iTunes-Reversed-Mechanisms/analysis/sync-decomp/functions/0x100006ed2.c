// rea decompile_all
// name: CalendarsDataClassHandler::initWithDataClassName:client:
// address: 0x100006ed2
// body: available
// range: 0x100006ed2-0x10000711f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID CalendarsDataClassHandler::initWithDataClassName_client_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  ID local_38;
  class_t *local_30;
  
  cVar3 = _DLShouldLog(7);
  if (cVar3 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler initWithDataClassName:client:]",7,
            &cf_CalendarsDataClassHandler0x_08xcreated,param_1);
  }
  local_30 = &objc::class_t::CalendarsDataClassHandler;
  local_38 = param_1;
  IVar5 = ConcreteDataClassHandler::initWithDataClassName_client_
                    ((ID)&local_38,"initWithDataClassName:client:",param_3,param_4);
  if (IVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(IVar5 + _dayLimit) = 0;
  *(undefined4 *)(IVar5 + _syncType) = 0;
  puVar1 = PTR__objc_msgSend_100020210;
  IVar6 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar6 = NSUserDefaults::integerForKey_
                    (IVar6,"integerForKey:",&cf_CalendarDefaultFilterForceDayIntervalKey);
  lVar2 = _filterForceDayInterval;
  *(ID *)(IVar5 + _filterForceDayInterval) = IVar6;
  if (IVar6 == 0) {
    *(undefined8 *)(IVar5 + lVar2) = 0x1e;
    cVar3 = _DLShouldLog(5);
    if (cVar3 == '\0') goto LAB_100006ff0;
    pcVar9 = &cf_Settingfilterforcedayintervalto_d_novaluefoundinuserdefaults;
  }
  else {
    cVar3 = _DLShouldLog(5);
    if (cVar3 == '\0') goto LAB_100006ff0;
    pcVar9 = &cf_Setfilterforcedayintervalto_dfromuserdefaults;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
          ,"-[CalendarsDataClassHandler initWithDataClassName:client:]",5,pcVar9,
          *(undefined8 *)(IVar5 + lVar2));
LAB_100006ff0:
  *(undefined1 *)(IVar5 + _loggedFiltering) = 0;
  *(undefined1 *)(IVar5 + _rebuildFilterCriteria) = 0;
  *(undefined1 *)(IVar5 + _createdDefaultCalendar) = 0;
  *(undefined8 *)(IVar5 + _detachedEvents) = 0;
  *(undefined8 *)(IVar5 + _outOfRangeEvents) = 0;
  *(undefined8 *)(IVar5 + _filterAcceptSet) = 0;
  *(undefined8 *)(IVar5 + _filterRejectSet) = 0;
  *(undefined8 *)(IVar5 + _filterCalendarNames) = 0;
  *(undefined8 *)(IVar5 + _homeCalendarRecordIdentifier) = 0;
  uVar7 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_4,"objectForKey:",&cf_iPodSyncNewRecordCalendarKey);
  lVar8 = (*(code *)PTR__objc_retain_100020220)(uVar7);
  lVar2 = _defaultCalendarName;
  *(long *)(IVar5 + _defaultCalendarName) = lVar8;
  if (lVar8 == 0) {
    uVar7 = (*(code *)PTR__objc_retain_100020220)(&cf_Home);
    *(undefined8 *)(IVar5 + lVar2) = uVar7;
  }
  *(undefined8 *)(IVar5 + _defaultCalendarRecordIdentifier) = 0;
  uVar7 = (*(code *)puVar1)(param_4,"supportedEntityNames");
  uVar4 = (*(code *)puVar1)(uVar7,"containsObject:",
                            *(undefined8 *)PTR__ISyncEntity_Calendars_Attendee_1000200b8);
  *(undefined1 *)(IVar5 + _supportsAttendees) = uVar4;
  uVar4 = (*(code *)puVar1)(uVar7,"containsObject:",
                            *(undefined8 *)PTR__ISyncEntity_Calendars_Task_1000200f8);
  *(undefined1 *)(IVar5 + _supportsTasks) = uVar4;
  uVar4 = (*(code *)puVar1)(uVar7,"containsObject:",
                            *(undefined8 *)PTR__ISyncEntity_Calendars_CalendarOrder_1000200d0);
  *(undefined1 *)(IVar5 + _supportsCalendarOrder) = uVar4;
  return IVar5;
}

