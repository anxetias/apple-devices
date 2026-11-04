// rea decompile_all
// name: ___thr_AMRecoveryDeviceDisconnected
// address: 0x163a85
// body: available
// range: 0x163a85-0x163b20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x163af8 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRecoveryDeviceDisconnected(long param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    _AMRSafePrintLog(5,&cf_Entered__s_libusbrestore_device_0x_p,"__thr_AMRecoveryDeviceDisconnected"
                     ,param_1);
    lVar2 = param_1;
  }
  pcVar1 = (cfstringStruct *)__AMRestorableCopyTrackedDevice(lVar2);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = &cf_Can_thandledevicedisconnectsincethisdeviceisnottracked;
    _AMRSafeLog(3,&cf___,&cf_Can_thandledevicedisconnectsincethisdeviceisnottracked);
  }
  else {
    _AMRLog(7,&cf_RecoverymodedevicedisconnectedwithECID_0x_lX,pcVar1[3].field2_0x10);
    __AMRestorableDeviceHandleDisconnection(pcVar1);
  }
  _CFRelease(pcVar1);
  if (param_1 != 0) {
    _CFRelease(param_1);
    return;
  }
  return;
}

