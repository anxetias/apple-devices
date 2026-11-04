// rea decompile_all
// name: __AMRestorableDeviceRestoreQueueNotifyClientsOfPendingPosition
// address: 0x160255
// body: available
// range: 0x160255-0x1602fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1602f7 to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceRestoreQueueNotifyClientsOfPendingPosition(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
  iVar1 = _CFArrayGetCount(*(undefined8 *)(_gRestorableData + 0xb0));
  if (0 < (long)iVar1) {
    lVar3 = 0;
    do {
      lVar2 = _CFArrayGetValueAtIndex(*(undefined8 *)(_gRestorableData + 0xb0),lVar3);
      if (lVar2 != 0) {
        lVar2 = _CFDictionaryGetValue(lVar2,&cf_Device);
        if (lVar2 != 0) {
          __AMRestorableDeviceNotifyStatusInfoChanged(lVar2,0xd0,0xffffffff,(int)lVar3 + 1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (iVar1 != lVar3);
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
  return;
}

