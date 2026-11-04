// rea decompile_all
// name: ConcreteSyncClient::handleSyncCancelNotification:
// address: 0x10000289f
// body: available
// range: 0x10000289f-0x10000299f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100002940 to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100002791 ConcreteSyncClient::cancelSync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100002990 to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void ConcreteSyncClient::handleSyncCancelNotification_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  
  puVar1 = PTR__objc_msgSend_100020210;
  uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"userInfo");
  lVar4 = (*(code *)puVar1)(uVar3,"objectForKey:",&cf_target);
  if (lVar4 != 0) {
    IVar5 = getTarget(param_1,"getTarget");
    cVar2 = (*(code *)puVar1)(lVar4,"isEqualToString:",IVar5);
    if (cVar2 != '\0') {
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,"-[ConcreteSyncClient handleSyncCancelNotification:]",5,
                &cf_CancelNotificationreceivedforourclient_Canceling_);
      }
      cancelSync(param_1,"cancelSync");
      return;
    }
  }
  cVar2 = _DLShouldLog(5);
  if (cVar2 != '\0') {
    IVar5 = getTarget(param_1,"getTarget");
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient handleSyncCancelNotification:]",5,
            &cf_Cancelnotificationreceivedforanotherclient______Ourclient_____,lVar4,IVar5);
    return;
  }
  return;
}

