// rea decompile_all
// name: CalendarsDataClassHandler::clientFinishedPushingRecords
// address: 0x10000bc28
// body: available
// range: 0x10000bc28-0x10000bc97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void CalendarsDataClassHandler::clientFinishedPushingRecords(ID param_1,SEL param_2)

{
  char cVar1;
  ID local_20;
  class_t *local_18;
  
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler clientFinishedPushingRecords]",5,
            &cf_Losinganypushedeventsindefaultcalendaratendofpushphase);
  }
  _loseRecordsInDefaultCalendar(param_1,"_loseRecordsInDefaultCalendar");
  local_18 = &objc::class_t::CalendarsDataClassHandler;
  local_20 = param_1;
  ConcreteDataClassHandler::clientFinishedPushingRecords
            ((ID)&local_20,"clientFinishedPushingRecords");
  return;
}

