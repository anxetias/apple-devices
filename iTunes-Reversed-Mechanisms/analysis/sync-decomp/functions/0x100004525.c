// rea decompile_all
// name: ConcreteSyncClient::deviceDetached:
// address: 0x100004525
// body: available
// range: 0x100004525-0x100004627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000045dc to 0x100006804 ConcreteSyncClient::deviceDisconnected: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000461e to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void ConcreteSyncClient::deviceDetached_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient deviceDetached:]",5,
            &cf_Devicedetached_UID___ourtargetIdentifieris__,param_3,
            *(undefined8 *)(param_1 + _targetIdentifier));
  }
  if ((param_3 != 0) && (*(long *)(param_1 + _targetIdentifier) != 0)) {
    cVar1 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"isEqual:");
    if (cVar1 != '\0') {
      cVar1 = _DLShouldLog(5);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,"-[ConcreteSyncClient deviceDetached:]",5,
                &cf_Devicedetachednotificationreceivedforourdevice_Canceling_);
      }
      deviceDisconnected_(param_1,"deviceDisconnected:",0x100020f78);
      return;
    }
  }
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient deviceDetached:]",5,
            &cf_Devicedetachednotificationreceivedforanotherdevice______Ourdevice_____,param_3,
            *(undefined8 *)(param_1 + _targetIdentifier));
    return;
  }
  return;
}

