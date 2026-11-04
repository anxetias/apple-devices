// rea decompile_all
// name: _AMAuthInstallApImg4ServerRequestAddUIDMode
// address: 0x27849a
// body: available
// range: 0x27849a-0x278590 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg4ServerRequestAddUIDMode(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (*(long *)(param_1 + 0x10) != 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8);
    cVar2 = _CFDictionaryContainsKey(param_2,&cf_UniqueBuildID);
    uVar4 = 0;
    if ((cVar2 == '\0') && (cVar2 = _CFDictionaryContainsKey(param_2,&cf_UID_MODE), cVar2 == '\0'))
    {
      lVar3 = *(long *)PTR__kCFBooleanFalse_00441108;
      if (((lVar1 == lVar3 || lVar1 == 0) &&
          ((*(long *)(*(long *)(param_1 + 0x10) + 0xb0) != *(long *)PTR__kCFBooleanTrue_00441110 &&
           (cVar2 = _CFDictionaryContainsKey(param_2,&cf_SepNonce), cVar2 == '\0')))) &&
         (cVar2 = __deviceRequiresUidMode(param_1), cVar2 == '\0')) {
        return 0;
      }
      if (lVar1 != 0) {
        lVar3 = lVar1;
      }
      _CFDictionarySetValue(param_2,&cf_UID_MODE,lVar3);
    }
  }
  return uVar4;
}

