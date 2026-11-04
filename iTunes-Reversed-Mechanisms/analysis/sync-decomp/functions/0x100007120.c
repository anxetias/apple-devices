// rea decompile_all
// name: CalendarsDataClassHandler::dealloc
// address: 0x100007120
// body: available
// range: 0x100007120-0x100007227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void CalendarsDataClassHandler::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  ID local_28;
  class_t *local_20;
  
  cVar2 = _DLShouldLog(7);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler dealloc]",7,&cf_CalendarsDataClassHandler0x_08xdeleted,
            param_1);
  }
  puVar1 = PTR__objc_release_100020218;
  (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _detachedEvents));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _filterCriteria));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _outOfRangeEvents));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _filterAcceptSet));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _filterRejectSet));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _filterCalendarNames));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _defaultCalendarName));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _homeCalendarRecordIdentifier));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _lostRecordsInDefaultCalendar));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _defaultCalendarRecordIdentifier));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _pushedEventsAllDayMap));
  local_20 = &objc::class_t::CalendarsDataClassHandler;
  local_28 = param_1;
  ConcreteDataClassHandler::dealloc((ID)&local_28,"dealloc");
  return;
}

