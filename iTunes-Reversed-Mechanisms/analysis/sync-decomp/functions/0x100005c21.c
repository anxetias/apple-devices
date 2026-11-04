// rea decompile_all
// name: ConcreteSyncClient::deviceWillClearAllRecordsForDataClass:
// address: 0x100005c21
// body: available
// range: 0x100005c21-0x100005cfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005cf7 to 0x10000559b ConcreteSyncClient::_sendChangesToDevice: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void ConcreteSyncClient::deviceWillClearAllRecordsForDataClass_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = in_RAX;
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    uVar2 = _sel_getName(param_2);
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient deviceWillClearAllRecordsForDataClass:]",6,&cf__s___,uVar2,
            param_3);
  }
  if (*(char *)(param_1 + _clear) != '\0') {
    cVar1 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _talker),"finishSessionForDataClass:error:",param_3
                       ,&local_28);
    if (cVar1 != '\x01') {
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,"-[ConcreteSyncClient deviceWillClearAllRecordsForDataClass:]",3,
                &cf_ErrorcallingfinishSessionForDataClass___,local_28);
      }
    }
    return;
  }
  _sendChangesToDevice_(param_1,"_sendChangesToDevice:",param_3);
  return;
}

