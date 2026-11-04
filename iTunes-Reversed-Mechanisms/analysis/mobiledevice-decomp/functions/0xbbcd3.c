// rea decompile_all
// name: _AFCLogV
// address: 0xbbcd3
// body: available
// range: 0xbbcd3-0xbbd7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbbd26 to 0x2aa33e _fflush (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xbbd7a to 0xbb076 _AFCLockUnlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AFCLogV(int param_1,char *param_2,va_list param_3)

{
  undefined *puVar1;
  
  _pthread_once((pthread_once_t *)&___gPlatformInit,___AFCPlatformInitialize);
  puVar1 = PTR____stderrp_004412c0;
  if (_gAFCLogLevel == 6) {
    _vfprintf(*(FILE **)PTR____stderrp_004412c0,param_2,param_3);
    _fflush(*(FILE **)puVar1);
    return;
  }
  if ((_gAFCLogLevel < param_1) && (_gAFCVerboseLogEnabled == '\0')) {
    return;
  }
  _AFCLockLock(___gAFCLogLock);
  _asl_vlog(___gAFCASLClient,0,3,param_2,param_3);
  _AFCLockUnlock(___gAFCLogLock);
  return;
}

