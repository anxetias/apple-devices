// rea decompile_all
// name: _AMAuthInstallUpdaterAddTags
// address: 0x1b469c
// body: available
// range: 0x1b469c-0x1b4715 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 _AMAuthInstallUpdaterAddTags(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  
  if (param_1 == 0) {
    _AMAuthInstallUpdaterAddTags_cold_3(param_4);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x1c8);
    if (lVar2 == 0) {
      _AMAuthInstallUpdaterAddTags_cold_2(param_4);
    }
    else {
      if (param_2 != 0) {
        if (param_3 != 0) {
          cVar1 = _AMAuthInstallUpdaterLoadFromReceipt(param_1,param_3,param_4);
          if (cVar1 == '\0') {
            return 0;
          }
          lVar2 = *(long *)(param_1 + 0x1c8);
        }
        _CFDictionaryApplyFunction(lVar2,__AddUpdaterTags,param_2);
        return 1;
      }
      _AMAuthInstallUpdaterAddTags_cold_1(param_4);
    }
  }
  return 0;
}

