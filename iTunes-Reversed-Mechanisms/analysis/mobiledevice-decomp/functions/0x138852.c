// rea decompile_all
// name: _AMDeviceIsAtLeastVersionOnPlatform
// address: 0x138852
// body: available
// range: 0x138852-0x138a7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDeviceIsAtLeastVersionOnPlatform(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined4 local_34;
  
  local_34 = 0xe8000001;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "Invalid input.";
LAB_0013894e:
    __os_log_internal(0,_md_log_log,0x10,pcVar6);
    return 0;
  }
  if (param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "No OS platform versions to compare against";
    goto LAB_0013894e;
  }
  lVar2 = _CFDictionaryGetValue(param_2,&cf_CurrentDeviceVersion);
  if (lVar2 == 0) {
LAB_001388d6:
    lVar2 = _copy_string_value_from_device(param_1,&cf_ProductVersion,&local_34);
    if (lVar2 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to get device os version from %@: 0x%x",
                        *(undefined8 *)(param_1 + 0x20),local_34);
      return 0;
    }
  }
  else {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFStringGetTypeID();
    if (lVar3 != lVar4) goto LAB_001388d6;
    _CFRetain(lVar2);
  }
  lVar3 = _CFDictionaryGetValue(param_2,&cf_CurrentProductName);
  if (lVar3 == 0) {
LAB_00138961:
    lVar3 = _copy_device_product_name_string(param_1,&local_34);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to get product name from %@: 0x%x",
                        *(undefined8 *)(param_1 + 0x20),local_34);
      goto LAB_00138a09;
    }
  }
  else {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFStringGetTypeID();
    if (lVar4 != lVar5) goto LAB_00138961;
    _CFRetain(lVar3);
  }
  uVar1 = _isAtLeastVersionOnPlatform(lVar2,lVar3,param_2);
  _CFRelease(lVar2);
  lVar2 = lVar3;
LAB_00138a09:
  _CFRelease(lVar2);
  return uVar1;
}

