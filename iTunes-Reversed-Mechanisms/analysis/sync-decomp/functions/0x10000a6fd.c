// rea decompile_all
// name: CalendarsDataClassHandler::_addAccept:info:
// address: 0x10000a6fd
// body: available
// range: 0x10000a6fd-0x10000a799 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000a78c to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void CalendarsDataClassHandler::_addAccept_info_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  char cVar2;
  ID IVar3;
  
  lVar1 = _filterAcceptSet;
  IVar3 = *(ID *)(param_1 + _filterAcceptSet);
  if (IVar3 == 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
    IVar3 = NSMutableSet::init(IVar3,"init");
    *(ID *)(param_1 + lVar1) = IVar3;
  }
  NSMutableSet::addObject_(IVar3,"addObject:",param_3);
  cVar2 = _DLShouldLog(7);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler _addAccept:info:]",7,&cf_Accepting_____,param_3,param_4);
    return;
  }
  return;
}

