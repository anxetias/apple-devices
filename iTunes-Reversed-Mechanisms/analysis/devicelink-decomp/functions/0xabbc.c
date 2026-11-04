// rea decompile_all
// name: _DLCreateCStringFromCFString
// address: 0xabbc
// body: available
// range: 0xabbc-0xac2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _DLCreateCStringFromCFString(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  
  if (param_1 != 0) {
    uVar2 = _CFStringGetLength();
    lVar3 = _CFStringGetMaximumSizeForEncoding(uVar2,0x8000100);
    sVar5 = lVar3 + 1;
    pvVar4 = _malloc(sVar5);
    if (pvVar4 != (void *)0x0) {
      ___bzero(pvVar4,sVar5);
      cVar1 = _CFStringGetCString(param_1,pvVar4,sVar5,0x8000100);
      if (cVar1 != '\0') {
        return pvVar4;
      }
      _free(pvVar4);
    }
  }
  return (void *)0x0;
}

