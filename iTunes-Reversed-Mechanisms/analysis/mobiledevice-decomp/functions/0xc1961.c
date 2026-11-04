// rea decompile_all
// name: __getRetainedCrashReportProcessLinkForTarget
// address: 0xc1961
// body: available
// range: 0xc1961-0xc1a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __getRetainedCrashReportProcessLinkForTarget(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = __getCrashReportProcessLinkLock();
  if (cVar1 == '\0') {
    __AMSDebugLog("Could not get crash report processlink lock.\n");
  }
  if (_sCrashReportProcessLinks == 0) {
    _sCrashReportProcessLinks =
         _CFDictionaryCreateMutable(0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
  }
  lVar2 = _CFDictionaryGetValue(_sCrashReportProcessLinks,param_1);
  if (lVar2 == 0) {
    lVar2 = _ProcessLinkSetupParent(&_sCrashReportPath,0);
    if (lVar2 == 0) {
      lVar2 = 0;
      __AMSDebugLog("Couldn\'t create a processlink object. I see bad things in your future...\n");
    }
    else {
      _CFDictionarySetValue(_sCrashReportProcessLinks,param_1,lVar2);
    }
  }
  else {
    _AMSProcessLinkRetain(lVar2);
  }
  if (cVar1 != '\0') {
    __releaseCrashReportProcessLinkLock();
  }
  return lVar2;
}

