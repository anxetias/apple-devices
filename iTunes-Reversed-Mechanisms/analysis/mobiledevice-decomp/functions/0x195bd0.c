// rea decompile_all
// name: __dispatch_ld_AMDeviceFunctions
// address: 0x195bd0
// body: available
// range: 0x195bd0-0x195c7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __dispatch_ld_AMDeviceFunctions() */

void __dispatch_ld_AMDeviceFunctions(void)

{
  long lVar1;
  
  lVar1 = _dlopen("/System/Library/PrivateFrameworks/MobileDevice.framework/MobileDevice",1);
  if (lVar1 != 0) {
    _ld_AMDeviceCreateCopy = _dlsym(lVar1,"AMDeviceCreateCopy");
    _ld_AMDeviceConnect = _dlsym(lVar1,"AMDeviceConnect");
    _ld_AMDeviceStartSession = _dlsym(lVar1,"AMDeviceStartSession");
    _ld_AMDeviceSecureStartService = _dlsym(lVar1,"AMDeviceSecureStartService");
    _ld_AMDeviceStopSession = _dlsym(lVar1,"AMDeviceStopSession");
    _ld_AMDeviceDisconnect = _dlsym(lVar1,"AMDeviceDisconnect");
  }
  return;
}

