// rea decompile_all
// name: __AMAuthInstallSsoLoadSymbols
// address: 0x29d537
// body: available
// range: 0x29d537-0x29d65c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMAuthInstallSsoLoadSymbols(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uStack_30;
  
  cVar1 = _CFBundleLoadExecutable();
  if (cVar1 == '\0') {
    uStack_30 = 0x14;
  }
  else {
    lVar3 = _CFArrayCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&_kSSOFrameworkSymbols,4
                           ,PTR__kCFTypeArrayCallBacks_004411a8);
    uStack_30 = 2;
    if (lVar3 != 0) {
      plVar4 = _calloc(1,0x20);
      if (plVar4 == (long *)0x0) {
LAB_0029d5e9:
        plVar4 = (long *)0x0;
      }
      else {
        _CFBundleGetFunctionPointersForNames(param_1,lVar3,plVar4);
        if (*plVar4 == 0) {
          pcVar5 = "missing framework symbol SSOInit";
        }
        else {
          iVar2 = _pthread_mutex_lock((pthread_mutex_t *)&__ssoApiMutex);
          if (iVar2 != 0) {
            _AMAuthInstallLog(3,"_AMAuthInstallSsoLoadSymbols","could not acquire sso lock");
            uStack_30 = 0xe;
            goto LAB_0029d5ec;
          }
          iVar2 = (*(code *)*plVar4)();
          _pthread_mutex_unlock((pthread_mutex_t *)&__ssoApiMutex);
          if (iVar2 == 0) {
            __ssoSymbolTable = plVar4;
            __ssoFrameworkBundle = _CFRetain(param_1);
            uStack_30 = 0;
            goto LAB_0029d5e9;
          }
          pcVar5 = "SSOInit() failed";
        }
        _AMAuthInstallLog(3,"_AMAuthInstallSsoLoadSymbols",pcVar5);
        uStack_30 = 99;
      }
      goto LAB_0029d5ec;
    }
  }
  plVar4 = (long *)0x0;
  lVar3 = 0;
LAB_0029d5ec:
  _SafeRelease(lVar3);
  _SafeFree(plVar4);
  return uStack_30;
}

