// rea decompile_all
// name: _AMDeviceLookupApplicationArchives
// address: 0x15561c
// body: available
// range: 0x15561c-0x1556f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceLookupApplicationArchives(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long local_30;
  
  local_30 = 0;
  iVar1 = -0x17fffff9;
  if (param_3 != (undefined8 *)0x0 && param_1 != 0) {
    *param_3 = 0;
    iVar1 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobile_installation_proxy,0,&local_30)
    ;
    if (iVar1 == 0) {
      iVar2 = _perform_command(local_30,&cf_LookupArchives,param_3,0,0,&cf_ClientOptions,param_2,0);
      iVar1 = 0;
      if (iVar2 != 0) {
        _pretty_error("AMDeviceLookupApplicationArchives",
                      "Could not lookup application archives on device",iVar2);
        iVar1 = iVar2;
      }
    }
    else {
      _pretty_error("AMDeviceLookupApplicationArchives","Could not start installation proxy service"
                    ,iVar1);
    }
    if (local_30 != 0) {
      _CFRelease();
    }
  }
  return iVar1;
}

