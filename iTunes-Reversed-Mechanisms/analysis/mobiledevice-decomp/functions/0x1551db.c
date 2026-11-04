// rea decompile_all
// name: _AMDeviceSecureArchiveApplication
// address: 0x1551db
// body: available
// range: 0x1551db-0x1552ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceSecureArchiveApplication
              (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long local_38;
  
  local_38 = 0;
  iVar2 = -0x17fffff9;
  if (param_1 != 0 || param_2 != 0) {
    if ((param_1 == 0) &&
       (iVar2 = _AMDeviceSecureStartService
                          (param_2,&cf_com_apple_mobile_installation_proxy,0,&local_38),
       param_1 = local_38, iVar2 != 0)) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "Was unable to start the install service on the device: 0x%x",iVar2);
    }
    else {
      iVar1 = _perform_command(param_1,&cf_Archive,0,param_5,param_6,&cf_ApplicationIdentifier,
                               param_3,&cf_ClientOptions,param_4,0);
      iVar2 = 0;
      if (iVar1 != 0) {
        _pretty_error("AMDeviceSecureArchiveApplication","Could not archive application on device",
                      iVar1);
        iVar2 = iVar1;
      }
    }
    if (local_38 != 0) {
      _CFRelease();
    }
  }
  return iVar2;
}

