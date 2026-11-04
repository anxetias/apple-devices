// rea decompile_all
// name: _DLReleaseFlockForFile
// address: 0xcb81
// body: available
// range: 0xcb81-0xcca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcca3 to 0xa79e __DLLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _DLReleaseFlockForFile(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  char *pcVar5;
  int local_1c;
  
  if (__lockFds == 0 || param_1 == 0) {
    return;
  }
  lVar3 = _CFDictionaryGetValue(__lockFds,param_1);
  if (lVar3 != 0) {
    local_1c = -1;
    _CFNumberGetValue(lVar3,9,&local_1c);
    iVar2 = _flock(local_1c,8);
    if ((iVar2 == -1) &&
       ((cVar1 = _DLLoggingEnabled(4), cVar1 != '\0' || (cVar1 = _DLOutputEnabled(4), cVar1 != '\0')
        ))) {
      piVar4 = ___error();
      iVar2 = *piVar4;
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"DLReleaseFlockForFile",4,&cf_Error_Can_tunlockfdforfilename_____d__s,param_1,iVar2,
              pcVar5);
    }
    _close(local_1c);
    _CFDictionaryRemoveValue(__lockFds,param_1);
    return;
  }
  cVar1 = _DLLoggingEnabled(4);
  if ((cVar1 == '\0') && (cVar1 = _DLOutputEnabled(4), cVar1 == '\0')) {
    return;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
          ,"DLReleaseFlockForFile",4,&cf_Attemptingtounlockalockthatdoesn_texist);
  return;
}

