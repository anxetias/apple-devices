// rea decompile_all
// name: ConcreteSyncClient::deviceFinishedSessionForDataClass:
// address: 0x1000065a9
// body: available
// range: 0x1000065a9-0x1000066a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000066a4 to 0x1000043d7 ConcreteSyncClient::_syncNextDataClassOrExit (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void ConcreteSyncClient::deviceFinishedSessionForDataClass_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  
  cVar3 = _DLShouldLog(5);
  if (cVar3 != '\0') {
    uVar4 = _sel_getName(param_2);
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient deviceFinishedSessionForDataClass:]",5,&cf__s_dataclass__,uVar4,
            param_3);
  }
  (*(code *)PTR__objc_msgSend_100020210)
            (*(undefined8 *)(param_1 + _session),"clientCommittedAcceptedChanges");
  lVar2 = _dataClassHandler;
  puVar1 = PTR__objc_msgSend_100020210;
  (*(code *)PTR__objc_msgSend_100020210)
            (*(undefined8 *)(param_1 + _dataClassHandler),"clientCommittedPulledRecords");
  _saveAnchorForDataClassName_anchor_forKey_
            (param_1,"_saveAnchorForDataClassName:anchor:forKey:",param_3,
             *(ID *)(param_1 + _nextComputerAnchor),0x100020e38);
  if (*(long *)(param_1 + lVar2) != 0) {
    IVar5 = (*(code *)puVar1)(*(long *)(param_1 + lVar2),"getVersion");
    _setClientInfoVersion_forDataClass_(param_1,"_setClientInfoVersion:forDataClass:",IVar5,param_3)
    ;
  }
  _finishSyncing(param_1,"_finishSyncing");
  _syncNextDataClassOrExit(param_1,"_syncNextDataClassOrExit");
  return;
}

