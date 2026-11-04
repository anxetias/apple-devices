// rea decompile_all
// name: _AMDeviceSecureStartSessionedService
// address: 0x1128d0
// body: available
// range: 0x1128d0-0x112a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceSecureStartSessionedService(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = _AMDeviceConnect();
  if (iVar2 == 0) {
    iVar2 = _AMDeviceStartSession(param_1);
    if (iVar2 == 0) {
      iVar2 = _AMDeviceSecureStartService
                        (param_1,&cf_com_apple_mobile_mobile_image_mounter,0,param_2);
      if (iVar2 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar1 = _md_log_log;
        uVar3 = _AMDErrorString(iVar2);
        __os_log_internal(0,uVar1,0x10,"Failed to start service %@: 0x%08x (%s)",
                          &cf_com_apple_mobile_mobile_image_mounter,iVar2,uVar3);
      }
      _AMDeviceStopSession(param_1);
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = _md_log_log;
      uVar3 = _AMDErrorString(iVar2);
      __os_log_internal(0,uVar1,0x10,"Failed to start session: 0x%08x (%s)",iVar2,uVar3);
    }
    _AMDeviceDisconnect(param_1);
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar1 = _md_log_log;
    uVar3 = _AMDErrorString(iVar2);
    __os_log_internal(0,uVar1,0x10,"Failed to connect to device: 0x%08x (%s)",iVar2,uVar3);
  }
  return iVar2;
}

