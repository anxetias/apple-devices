// rea decompile_all
// name: ConcreteSyncClient::dealloc
// address: 0x10000206c
// body: available
// range: 0x10000206c-0x1000021dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void ConcreteSyncClient::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  objc_super local_30;
  
  puVar1 = PTR__objc_release_100020218;
  (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _talker));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _dataClassNames));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _supportedDataClassNamesForDevice));
  DataClassFilter::setDataClassHandler_
            ((ID)&objc::class_t::DataClassFilter,"setDataClassHandler:",0);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _dataClassHandler));
  lVar2 = _syncSessionUUID;
  if (*(long *)(param_1 + _syncSessionUUID) != 0) {
    cVar3 = _DLShouldLog(5);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient dealloc]",5,&cf_Finishedsyncsession__,
              *(undefined8 *)(param_1 + lVar2));
    }
    (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + lVar2));
  }
  (*(code *)PTR__objc_release_100020218)
            (*(undefined8 *)(param_1 + _entityNameArrayOfEntityNamesToPull));
  if (*(long *)(param_1 + _session) != 0) {
    _finishSyncing(param_1,"_finishSyncing");
  }
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _pullingEntityNames));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _pullEnumerator));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _client));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _targetIdentifier));
  if (*(long *)(param_1 + _deviceListener) != 0) {
    _DLDeviceListenerDestroy();
  }
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _info));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _displayName));
  local_30.super_class = &objc::class_t::ConcreteSyncClient;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

