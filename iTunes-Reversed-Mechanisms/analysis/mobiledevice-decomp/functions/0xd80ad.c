// rea decompile_all
// name: _handleProvisioningRequest
// address: 0xd80ad
// body: available
// range: 0xd80ad-0xd819b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleProvisioningRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*) */

undefined4 _handleProvisioningRequest(AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2)

{
  pthread_mutex_t *ppVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  undefined8 local_38;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  local_38 = 0;
  if (lVar5 == 0) {
    return 1;
  }
  ppVar1 = (pthread_mutex_t *)(lVar5 + 0x158);
  _pthread_mutex_lock(ppVar1);
  if (*(long *)(lVar5 + 0x150) == 0) {
    local_48 = 1;
  }
  else {
    iVar3 = _AMAuthInstallProvisioningGetProvisionedInfo(*(long *)(lVar5 + 0x150),&local_38);
    if (iVar3 == 0) {
      bVar2 = true;
      local_48 = 0;
      goto LAB_000d8118;
    }
    local_48 = _AMAuthInstallToRestoreError(iVar3);
  }
  bVar2 = false;
LAB_000d8118:
  _pthread_mutex_unlock(ppVar1);
  if (bVar2) {
    uVar4 = _CFGetAllocator(lVar5);
    lVar5 = _CFDictionaryCreateMutable
                      (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar5 == 0) {
      local_48 = 0x12;
    }
    else {
      _handleProvisioningRequest((AMRestoreMuxedDeviceMessage *)&local_38,(__CFDictionary *)param_1)
      ;
      local_48 = SUB84(ppVar1,0);
    }
  }
  return local_48;
}

