// rea decompile_all
// name: _createSubDictionary
// address: 0xaf6b3
// body: available
// range: 0xaf6b3-0xaf71e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _createSubDictionary(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    _createSubDictionary_cold_2();
  }
  else {
    lVar1 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar1 != 0) {
      _CFDictionarySetValue(param_1,param_2,lVar1);
      _CFRelease(lVar1);
      return 1;
    }
    _createSubDictionary_cold_1();
  }
  return 0;
}

