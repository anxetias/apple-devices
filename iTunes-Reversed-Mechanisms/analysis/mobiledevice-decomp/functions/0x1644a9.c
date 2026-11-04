// rea decompile_all
// name: ___thr_AMDFUDeviceDisconnected
// address: 0x1644a9
// body: available
// range: 0x1644a9-0x164562 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16453a to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMDFUDeviceDisconnected(long param_1)

{
  int iVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    _AMRSafePrintLog(5,&cf_Entered__s_libusbrestore_device_0x_p,"__thr_AMDFUDeviceDisconnected",
                     param_1);
    lVar4 = param_1;
  }
  pcVar2 = (cfstringStruct *)__AMRestorableCopyTrackedDevice(lVar4);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = &cf_Can_thandledevicedisconnectsincethisdeviceisnottracked;
    _AMRSafeLog(3,&cf___,&cf_Can_thandledevicedisconnectsincethisdeviceisnottracked);
  }
  else {
    iVar1 = __AMDeviceProxyGetState(pcVar2[1].field0_0x0);
    pcVar3 = "";
    if (iVar1 == 6) {
      pcVar3 = "Port ";
    }
    _AMRLog(7,&cf__sDFUmodedevicedisconnectedwithECID_0x_lX,pcVar3,pcVar2[3].field2_0x10);
    __AMRestorableDeviceHandleDisconnection(pcVar2);
  }
  _CFRelease(pcVar2);
  if (param_1 != 0) {
    _CFRelease(param_1);
    return;
  }
  return;
}

