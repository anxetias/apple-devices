// rea decompile_all
// name: ConcreteSyncClient::deviceReadyToReceiveChanges:
// address: 0x100006244
// body: available
// range: 0x100006244-0x10000635c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void ConcreteSyncClient::deviceReadyToReceiveChanges_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_30;
  
  local_30 = 0;
  cVar3 = _DLShouldLog(6);
  if (cVar3 != '\0') {
    uVar4 = _sel_getName(param_2);
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient deviceReadyToReceiveChanges:]",6,&cf__s___,uVar4,param_3);
  }
  lVar2 = _dataClassHandler;
  puVar1 = PTR__objc_msgSend_100020210;
  (*(code *)PTR__objc_msgSend_100020210)
            (*(undefined8 *)(param_1 + _dataClassHandler),"clientFinishedPushingRecords");
  cVar3 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _talker),"pingDevice:error:",
                            &cf_Preparingtogetchangesfordevice,&local_30);
  if (cVar3 != '\x01') {
    cVar3 = _DLShouldLog(3);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient deviceReadyToReceiveChanges:]",3,&cf_pingDevicefailed___,
              local_30);
    }
  }
  IVar5 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + lVar2),"updateFilterCriteriaAfterPushing");
  if (IVar5 != 0) {
    _updateDataClassFilterWithCriteria_(param_1,"_updateDataClassFilterWithCriteria:",IVar5);
  }
  _sendChangesToDevice_(param_1,"_sendChangesToDevice:",param_3);
  return;
}

