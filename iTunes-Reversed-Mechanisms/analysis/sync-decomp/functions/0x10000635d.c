// rea decompile_all
// name: ConcreteSyncClient::remapRecordIdentifiers:dataClass:
// address: 0x10000635d
// body: available
// range: 0x10000635d-0x1000064fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000644c to 0x10000559b ConcreteSyncClient::_sendChangesToDevice: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void ConcreteSyncClient::remapRecordIdentifiers_dataClass_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  ID IVar5;
  undefined8 local_38;
  
  local_38 = in_RAX;
  cVar3 = _DLShouldLog(6);
  if (cVar3 != '\0') {
    uVar4 = _sel_getName(param_2);
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient remapRecordIdentifiers:dataClass:]",6,&cf__s_dataclass__,uVar4,
            param_4);
  }
  cVar3 = _DLShouldLog(7);
  if (cVar3 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient remapRecordIdentifiers:dataClass:]",7,&cf_Remapmapping___,param_3
           );
  }
  (*(code *)PTR__objc_msgSend_100020210)
            (*(undefined8 *)(param_1 + _session),"clientChangedRecordIdentifiers:",param_3);
  lVar2 = _dataClassHandler;
  puVar1 = PTR__objc_msgSend_100020210;
  (*(code *)PTR__objc_msgSend_100020210)
            (*(undefined8 *)(param_1 + _dataClassHandler),"noteClientRemappedRecordIdentifiers:",
             param_3);
  cVar3 = _moreChangesComing(param_1,"_moreChangesComing");
  if (cVar3 != '\0') {
    _sendChangesToDevice_(param_1,"_sendChangesToDevice:",param_4);
    return;
  }
  (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),"clientFinishedPullingRecords");
  cVar3 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _talker),"finishSessionForDataClass:error:",
                            param_4,&local_38);
  if (cVar3 != '\x01') {
    IVar5 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",
                       &cf_finishSessionForDataClassfailed___,local_38);
    cVar3 = _DLShouldLog(3);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient remapRecordIdentifiers:dataClass:]",3,&cf___,IVar5);
    }
    deviceCancelledSessionForDataClass_reason_
              (param_1,"deviceCancelledSessionForDataClass:reason:",param_4,IVar5);
  }
  return;
}

