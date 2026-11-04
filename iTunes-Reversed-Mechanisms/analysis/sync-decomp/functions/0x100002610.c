// rea decompile_all
// name: ConcreteSyncClient::_runSyncSession
// address: 0x100002610
// body: available
// range: 0x100002610-0x1000026cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000026b9 to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void ConcreteSyncClient::_runSyncSession(ID param_1,SEL param_2)

{
  long lVar1;
  char cVar2;
  ID IVar3;
  
  IVar3 = NSDate::distantFuture((ID)&_OBJC_CLASS___NSDate,"distantFuture");
  lVar1 = _running;
  *(undefined1 *)(param_1 + _running) = 1;
  *(undefined1 *)(param_1 + _failed) = 0;
  *(undefined1 *)(param_1 + _cancelled) = 0;
  cVar2 = *(char *)(param_1 + lVar1);
  while (cVar2 != '\0') {
    _checkRunloopAndEvents_(param_1,"_checkRunloopAndEvents:",IVar3);
    cVar2 = *(char *)(param_1 + lVar1);
  }
  cVar2 = _DLShouldLog(5);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient _runSyncSession]",5,&cf_Runloopexited);
    return;
  }
  return;
}

