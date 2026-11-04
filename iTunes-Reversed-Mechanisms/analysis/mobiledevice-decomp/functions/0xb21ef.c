// rea decompile_all
// name: _copyCStringFromCFString
// address: 0xb21ef
// body: available
// range: 0xb21ef-0xb2279 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _copyCStringFromCFString(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  void *pvVar4;
  
  uVar2 = _CFStringGetLength();
  sVar3 = _CFStringGetMaximumSizeForEncoding(uVar2,0x8000100);
  pvVar4 = _calloc(1,sVar3);
  if (pvVar4 == (void *)0x0) {
    _copyCStringFromCFString_cold_1();
  }
  else {
    cVar1 = _CFStringGetCString(param_1,pvVar4,sVar3,0x8000100);
    if (cVar1 != '\0') {
      return pvVar4;
    }
    _dmlog("copyCStringFromCFString",0x356,&cf_CFStringGetCStringfailedfor__,param_1);
    _free(pvVar4);
  }
  return (void *)0x0;
}

