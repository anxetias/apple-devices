// rea decompile_all
// name: _AMSupportCreateCStringFromCFString
// address: 0x390c
// body: available
// range: 0x390c-0x39af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportCreateCStringFromCFString(long param_1,undefined8 *param_2,size_t *param_3)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  size_t sVar4;
  
  if (param_1 == 0) {
    _AMSupportCreateCStringFromCFString_cold_5();
  }
  else if (param_2 == (undefined8 *)0x0) {
    _AMSupportCreateCStringFromCFString_cold_4();
  }
  else {
    if (param_3 != (size_t *)0x0) {
      lVar2 = _CFStringGetLength();
      sVar4 = lVar2 + 1;
      pvVar3 = _malloc(sVar4);
      if (pvVar3 == (void *)0x0) {
        _AMSupportCreateCStringFromCFString_cold_2();
        return 2;
      }
      cVar1 = _CFStringGetCString(param_1,pvVar3,sVar4,0x8000100);
      if (cVar1 != '\0') {
        *param_2 = pvVar3;
        *param_3 = sVar4;
        return 0;
      }
      _AMSupportCreateCStringFromCFString_cold_1(pvVar3);
      return 3;
    }
    _AMSupportCreateCStringFromCFString_cold_3();
  }
  return 1;
}

