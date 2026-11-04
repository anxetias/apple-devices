// rea decompile_all
// name: _copyCStringFromCFString
// address: 0x14add9
// body: available
// range: 0x14add9-0x14ae7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _copyCStringFromCFString(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  
  uVar2 = _CFStringGetLength();
  lVar3 = _CFStringGetMaximumSizeForEncoding(uVar2,0x8000100);
  pvVar4 = _calloc(1,lVar3 + 1U);
  cVar1 = _CFStringGetCString(param_1,pvVar4,lVar3 + 1U,0x8000100);
  if (cVar1 == '\0') {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"unable to get C string");
    if (pvVar4 != (void *)0x0) {
      _free(pvVar4);
    }
    pvVar4 = (void *)0x0;
  }
  return pvVar4;
}

