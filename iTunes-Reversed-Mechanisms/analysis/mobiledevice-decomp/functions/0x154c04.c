// rea decompile_all
// name: _AMDeviceLookupApplications
// address: 0x154c04
// body: available
// range: 0x154c04-0x154e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceLookupApplications(long param_1,long param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_30;
  
  local_30 = 0;
  if (param_3 == (long *)0x0 || param_1 == 0) {
    return -0x17fffff9;
  }
  *param_3 = 0;
  if (param_2 == 0) {
    lVar4 = 0;
LAB_00154c72:
    _AMDeviceSlowLookupBreak("AMDeviceLookupApplications",lVar4);
  }
  else {
    cVar1 = _CFDictionaryContainsKey(param_2,&cf_ReturnAttributes);
    lVar4 = param_2;
    if (cVar1 == '\0') goto LAB_00154c72;
  }
  iVar2 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobile_installation_proxy,0,&local_30);
  if (iVar2 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,
                      "Was unable to start the install service on the device: 0x%x",iVar2);
    goto LAB_00154db2;
  }
  lVar3 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  lVar4 = local_30;
  if (lVar3 == 0) {
    iVar2 = -0x17fffffd;
    goto LAB_00154db2;
  }
  if (param_2 == 0) {
    lVar5 = 0;
LAB_00154d26:
    _AMDeviceSlowLookupBreak("AMDeviceBrowseApplications",lVar5);
  }
  else {
    cVar1 = _CFDictionaryContainsKey(param_2,&cf_ReturnAttributes);
    lVar5 = param_2;
    if (cVar1 == '\0') goto LAB_00154d26;
  }
  iVar2 = _perform_command(lVar4,&cf_Browse,0,_browse_callback,lVar3,&cf_ClientOptions,param_2,0);
  if (iVar2 == 0) {
    *param_3 = lVar3;
    iVar2 = 0;
  }
  else {
    _pretty_error("AMDeviceBrowseApplications","Could not browse applications from device",iVar2);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Could not browse 0x%x",iVar2);
    _CFRelease(lVar3);
  }
LAB_00154db2:
  if (local_30 != 0) {
    _CFRelease();
  }
  return iVar2;
}

