// rea decompile_all
// name: ___thr_AMRegisterForCallbacks
// address: 0x162b2a
// body: available
// range: 0x162b2a-0x162c3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x162c13 to 0x13d384 _MDRSSDeregisterForCallbacks (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRegisterForCallbacks(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = _CFRunLoopGetCurrent();
  uVar3 = _CFRetain(uVar3);
  *_gRestorableData = uVar3;
  _AMRestoreSetLocationIDFilter(__locationIDFilter);
  iVar2 = _AMRestoreRegisterForDeviceNotifications
                    (__AMDFUDeviceConnected,__AMRecoveryDeviceConnected,__AMDFUDeviceDisconnected,
                     __AMRecoveryDeviceDisconnected,__AMRestoreErrorCallback,_gRestorableData);
  if (iVar2 == 0) {
    ___thr__AMRestorableAttemptMuxRegistrationNow();
    ___thr__AMRestorableAttemptBootedOSRegistrationNow();
    iVar2 = ___isPlatformVersionAtLeast(1,10,0xd,0);
    if (iVar2 != 0) {
      _MDRSSRegisterForCallbacks
                (__AMRemoteServiceDeviceConnectedCallback,
                 __AMRemoteServiceDeviceDisconnectedCallback);
    }
    puVar1 = _gRestorableData;
    *(undefined1 *)(_gRestorableData + 2) = 1;
    _dispatch_semaphore_signal((dispatch_semaphore_t)puVar1[1]);
    _CFRunLoopRun();
    _AMRLog(6,&cf_Runloopstopped);
  }
  else {
    _AMRSafePrintLogAndRelease(3,&cf_Failedtoregisterforlibusbrestoredevicenotifications);
    _dispatch_semaphore_signal((dispatch_semaphore_t)_gRestorableData[1]);
  }
  iVar2 = ___isPlatformVersionAtLeast(1,10,0xd,0);
  if (iVar2 != 0) {
    _MDRSSDeregisterForCallbacks();
    return;
  }
  return;
}

