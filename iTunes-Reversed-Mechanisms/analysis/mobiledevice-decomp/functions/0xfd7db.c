// rea decompile_all
// name: _copy_encoded_date
// address: 0xfd7db
// body: available
// range: 0xfd7db-0xfd884 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_encoded_date(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  lVar1 = _CFGetTypeID();
  lVar2 = _CFDateGetTypeID();
  if (lVar1 == lVar2) {
    lVar1 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar1 != 0) {
      _CFDictionarySetValue(lVar1,&cf_EncodedObjectType,&cf_CFDateRef);
      _CFDictionarySetValue(lVar1,&cf_Content,param_1);
      return lVar1;
    }
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar3 = "failed to allocate encoding storage";
  }
  else {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar3 = "can\'t encode unexpected type";
  }
  (*_logger)(pcVar3);
  return 0;
}

