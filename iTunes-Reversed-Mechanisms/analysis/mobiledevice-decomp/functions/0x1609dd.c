// rea decompile_all
// name: _append_root_paths_from_options
// address: 0x1609dd
// body: available
// range: 0x1609dd-0x160a74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _append_root_paths_from_options(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulong uVar5;
  
  lVar1 = _CFDictionaryGetValue(param_2,param_3);
  uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (lVar1 != 0) {
    lVar2 = _CFGetTypeID(lVar1);
    lVar3 = _CFStringGetTypeID();
    if (lVar2 == lVar3) {
      _CFArrayAppendValue(param_1,lVar1);
    }
    else {
      lVar3 = _CFArrayGetTypeID();
      if (lVar2 == lVar3) {
        uVar4 = _CFArrayGetCount(lVar1);
        _CFArrayAppendArray(param_1,lVar1,0,uVar4);
      }
      else {
        uVar5 = 0;
        _AMRSafeLog(3,&cf_invalidtypefor__,param_3);
      }
    }
  }
  return uVar5 & 0xffffffff;
}

