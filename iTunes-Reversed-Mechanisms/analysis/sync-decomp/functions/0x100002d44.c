// rea decompile_all
// name: ConcreteSyncClient::_cancelSyncing:errorCode:
// address: 0x100002d44
// body: available
// range: 0x100002d44-0x100002e1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100002e19 to 0x100002afe ConcreteSyncClient::_cleanupSession (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

void ConcreteSyncClient::_cancelSyncing_errorCode_(ID param_1,SEL param_2,ID param_3,int param_4)

{
  char cVar1;
  
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient _cancelSyncing:errorCode:]",5,&cf_Cancelingsync___,param_3);
  }
  _postNotification_message_errorCode_
            (param_1,"_postNotification:message:errorCode:",0x100020a58,0x100020a78,param_4);
  if (*(long *)(param_1 + _client) != 0) {
    if (*(char *)(param_1 + _syncClientStateWaitingForSession) == '\x01') {
      ISyncSession::cancelPreviousBeginSessionWithClient_
                ((ID)&_OBJC_CLASS___ISyncSession,"cancelPreviousBeginSessionWithClient:");
    }
    else if (*(long *)(param_1 + _session) != 0) {
      (*(code *)PTR__objc_msgSend_100020210)(*(long *)(param_1 + _session),"cancelSyncing");
    }
  }
  *(undefined1 *)(param_1 + _cancelled) = 1;
  _cleanupSession(param_1,"_cleanupSession");
  return;
}

