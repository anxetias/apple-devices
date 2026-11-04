// rea decompile_all
// name: _AMSCleanup
// address: 0xbf3f2
// body: available
// range: 0xbf3f2-0xbf4da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSCleanup(void)

{
  char cVar1;
  
  if (_sSyncerPathString != 0) {
    _CFRelease();
    _sSyncerPathString = 0;
  }
  if (_sCrashReportPathString != 0) {
    _CFRelease();
    _sCrashReportPathString = 0;
  }
  if (_sBackupPathString != 0) {
    _CFRelease();
    _sBackupPathString = 0;
  }
  _AMSProcessLinkRelease(_sMainProcessLink);
  _sMainProcessLink = 0;
  cVar1 = __getCrashReportProcessLinkLock();
  if (cVar1 == '\0') {
    __AMSDebugLog("Could not get crash report processlink lock.\n");
  }
  if (_sCrashReportProcessLinks != 0) {
    _CFDictionaryApplyFunction(_sCrashReportProcessLinks,__invalidateProcessLink,0);
    _CFRelease(_sCrashReportProcessLinks);
    _sCrashReportProcessLinks = 0;
  }
  if (cVar1 != '\0') {
    __releaseCrashReportProcessLinkLock();
  }
  if (_sCrashReportProcessLinkLock != (void *)0x0) {
    _free(_sCrashReportProcessLinkLock);
    _sCrashReportProcessLinkLock = (void *)0x0;
  }
  return 0;
}

