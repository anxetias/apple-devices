// rea decompile_all
// name: _DLWait
// address: 0x9f27
// body: available
// range: 0x9f27-0xa088 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa075 to 0xa79e __DLLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _DLWait(pthread_cond_t *param_1,pthread_mutex_t *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  
  iVar2 = _pthread_mutex_lock(param_2);
  if (iVar2 == 0) {
    do {
      if (*param_3 != '\0') goto LAB_00009ffd;
      cVar1 = _DLShouldLog(5);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
                ,"DLWait",5,&cf_Waitingforflagtobeset___);
      }
      iVar2 = _pthread_cond_wait(param_1,param_2);
    } while (iVar2 == 0);
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
              ,"DLWait",3,&cf_Errorwaitingoncondition__d,iVar2);
    }
LAB_00009ffd:
    cVar1 = _DLShouldLog(5);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
              ,"DLWait",5,&cf_Donewaitingforflagtobeset_readytorockandroll);
    }
    iVar2 = _pthread_mutex_unlock(param_2);
    if ((iVar2 != 0) && (cVar1 = _DLShouldLog(3), cVar1 != '\0')) {
      pcVar3 = &cf_Errorunlockingmutexafterwaitingoncondition__d;
      goto LAB_0000a065;
    }
  }
  else {
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      pcVar3 = &cf_Errorlockingmutextowaitoncondition__d;
LAB_0000a065:
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
              ,"DLWait",3,pcVar3,iVar2);
      return;
    }
  }
  return;
}

