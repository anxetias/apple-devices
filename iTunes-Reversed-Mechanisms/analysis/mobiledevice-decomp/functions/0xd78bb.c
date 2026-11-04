// rea decompile_all
// name: _handleBasebandUpdaterRequest
// address: 0xd78bb
// body: available
// range: 0xd78bb-0xd79c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleBasebandUpdaterRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*) */

int _handleBasebandUpdaterRequest(AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x10);
  local_38 = 0;
  uVar4 = _CFGetAllocator(lVar2);
  lVar5 = _CFDictionaryCreateMutable
                    (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar5 == 0) {
    iVar3 = 0x12;
  }
  else {
    _pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x158));
    if (*(long *)(lVar2 + 0x150) == 0) {
      iVar3 = 1;
      bVar6 = false;
    }
    else {
      iVar3 = _AMRAuthInstallBasebandUpdaterRequest
                        (*(long *)(lVar2 + 0x150),param_2,*(undefined8 *)(lVar1 + 0x18),&local_38);
      bVar6 = local_38 != 0;
    }
    _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x158));
    if (bVar6) {
      _CFDictionarySetValue(lVar5,&cf_BasebandData,local_38);
      iVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar5);
      iVar3 = (uint)(iVar3 != 0) * 9;
    }
    _CFRelease(lVar5);
    if (local_38 != 0) {
      _CFRelease();
    }
  }
  return iVar3;
}

