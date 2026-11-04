// rea decompile_all
// name: __deviceRequiresUidMode
// address: 0x1a0d89
// body: available
// range: 0x1a0d89-0x1a0df0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __deviceRequiresUidMode(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long local_20;
  
  local_20 = 0;
  lVar2 = 0;
  iVar1 = _AMAuthInstallApCopyDeviceEntryFromDeviceMap(param_1,0,&local_20);
  if (local_20 != 0 && iVar1 == 0) {
    lVar2 = _CFDictionaryGetValue(local_20,&cf_RequiresUIDMode);
  }
  _SafeRelease(local_20);
  return lVar2 == *(long *)PTR__kCFBooleanTrue_00441110;
}

