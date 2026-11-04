// rea decompile_all
// name: ConcreteSyncClient::runSyncSessionWithTargetIdentifier:handleAppEvents:displayName:
// address: 0x1000026cd
// body: available
// range: 0x1000026cd-0x100002790 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

void ConcreteSyncClient::runSyncSessionWithTargetIdentifier_handleAppEvents_displayName_
               (ID param_1,SEL param_2,ID param_3,char param_4,ID param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + _dataClassIndex) = 0;
  *(char *)(param_1 + _handleAppEvents) = param_4;
  lVar2 = _client;
  puVar1 = PTR__objc_release_100020218;
  (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _client));
  *(undefined8 *)(param_1 + lVar2) = 0;
  lVar2 = _displayName;
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _displayName));
  uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_5,"copy");
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  _setTarget_(param_1,"_setTarget:",param_3);
  _runSyncSession(param_1,"_runSyncSession");
  *(undefined1 *)(param_1 + _handleAppEvents) = 0;
  (*(code *)puVar1)(*(undefined8 *)(param_1 + _client));
  *(undefined8 *)(param_1 + _client) = 0;
  return;
}

