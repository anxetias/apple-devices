// rea decompile_all
// name: ___thr_AMRestorableDeviceSetProxyCredentialsCallback
// address: 0x169dd4
// body: available
// range: 0x169dd4-0x169e4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x169e3d to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceSetProxyCredentialsCallback(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    pcVar5 = &cf_Can_tsetproxycallbackonNULLdevice;
  }
  else {
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(lVar1 + 0x88),0xffffffffffffffff);
    if (*(char *)(lVar1 + 0x79) == '\0') {
      uVar2 = *(undefined4 *)((long)param_1 + 0xc);
      lVar4 = param_1[2];
      uVar3 = *(undefined4 *)((long)param_1 + 0x14);
      *(int *)(lVar1 + 0xc0) = (int)param_1[1];
      *(undefined4 *)(lVar1 + 0xc4) = uVar2;
      *(int *)(lVar1 + 200) = (int)lVar4;
      *(undefined4 *)(lVar1 + 0xcc) = uVar3;
      pcVar5 = (cfstringStruct *)0x0;
      _AMRAuthInstallRegisterProxyCredentialsCallback
                (__AMRestorableDeviceHandleProxyCredentialsCallback,0);
    }
    else {
      pcVar5 = &cf_Youcan_tsettheproxycredentialscallbackwhilearestoreisinprogress;
    }
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(lVar1 + 0x88));
  }
  _AMRSafeLogAndRelease(3,pcVar5);
  return;
}

