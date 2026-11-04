// rea decompile_all
// name: __CopyCompanionProxyServiceConnectionForDevice
// address: 0x44567
// body: available
// range: 0x44567-0x446af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __CopyCompanionProxyServiceConnectionForDevice(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  
  local_28 = 0;
  *param_2 = 0;
  lVar2 = _AMDeviceCreateCopy();
  if (lVar2 == 0) {
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"AMDeviceCreateCopy failed");
    iVar1 = -0x17fffff9;
  }
  else {
    iVar1 = _AMDeviceConnect(lVar2);
    if (iVar1 == 0) {
      iVar1 = _AMDeviceStartSession(lVar2);
      if (iVar1 == 0) {
        iVar1 = _AMDeviceSecureStartService(lVar2,&cf_com_apple_companion_proxy,0,&local_28);
        if (iVar1 == 0) {
          *param_2 = local_28;
        }
        else {
          uVar3 = _CFStringGetCStringPtr(&cf_com_apple_companion_proxy,0x8000100);
          __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to start service %s: 0x%08x",
                            uVar3,iVar1);
          if (local_28 != 0) {
            _CFRelease();
          }
          local_28 = 0;
        }
        _AMDeviceStopSession(lVar2);
      }
      else {
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"AMDeviceStartSession failed: 0x%08x",
                          iVar1);
      }
      _AMDeviceDisconnect(lVar2);
    }
    else {
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"AMDeviceConnect failed: 0x%08x",iVar1);
    }
    _CFRelease(lVar2);
  }
  return iVar1;
}

