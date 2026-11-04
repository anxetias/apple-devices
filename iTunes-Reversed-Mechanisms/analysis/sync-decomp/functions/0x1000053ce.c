// rea decompile_all
// name: ConcreteSyncClient::_changesArePreparedToBePulledForClient:session:
// address: 0x1000053ce
// body: available
// range: 0x1000053ce-0x100005546 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000054d2 to 0x10000559b ConcreteSyncClient::_sendChangesToDevice: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void ConcreteSyncClient::_changesArePreparedToBePulledForClient_session_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 local_38;
  
  lVar2 = _dataClassHandler;
  puVar1 = PTR__objc_msgSend_100020210;
  local_38 = 0;
  IVar4 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _dataClassHandler),"dataClassName");
  _saveAnchorForDataClassName_anchor_forKey_
            (param_1,"_saveAnchorForDataClassName:anchor:forKey:",IVar4,
             *(ID *)(param_1 + _nextDeviceAnchor),0x100020dd8);
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + _pulling) = 1;
    uVar5 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),"entityNamesInOrderToPull");
    uVar5 = (*(code *)PTR__objc_retain_100020220)(uVar5);
    *(undefined8 *)(param_1 + _entityNameArrayOfEntityNamesToPull) = uVar5;
    *(undefined8 *)(param_1 + _entityNameEnumeratorIndex) = 0;
    IVar6 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),"updateFilterCriteriaAfterMingling");
    if (IVar6 != 0) {
      _updateDataClassFilterWithCriteria_(param_1,"_updateDataClassFilterWithCriteria:",IVar6);
    }
    _postNotification_message_(param_1,"_postNotification:message:",0x100020a58,0x100021378);
    _sendChangesToDevice_(param_1,"_sendChangesToDevice:",IVar4);
    return;
  }
  _cancelSyncing_errorCode_(param_1,"_cancelSyncing:errorCode:",0,0);
  cVar3 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _talker),"finishSessionForDataClass:error:",
                            IVar4,&local_38);
  if (cVar3 != '\x01') {
    cVar3 = _DLShouldLog(3);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient _changesArePreparedToBePulledForClient:session:]",3,
              &cf_finishSessionForDataClassfailed___,local_38);
    }
  }
  return;
}

