// rea decompile_all
// name: _device_os_is_at_least
// address: 0x147080
// body: available
// range: 0x147080-0x1471e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_device_os_is_at_least(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar1 = 0;
    __os_log_internal(0,_md_log_log,1,"Failed to create options dictionary");
  }
  else {
    if (param_2 != 0) {
      _CFDictionarySetValue(lVar2,&cf_MinIPhoneVersion,param_2);
    }
    if (param_3 != 0) {
      _CFDictionarySetValue(lVar2,&cf_MinWatchVersion,param_3);
    }
    if (param_4 != 0) {
      _CFDictionarySetValue(lVar2,&cf_MinAppleTVVersion,param_4);
    }
    if (param_5 != 0) {
      _CFDictionarySetValue(lVar2,&cf_MinXROSVersion,param_5);
    }
    lVar3 = _CFDictionaryGetCount(lVar2);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = 0;
      __os_log_internal(0,_md_log_log,1,"No versions specified");
    }
    else {
      uVar1 = _AMDeviceIsAtLeastVersionOnPlatform(param_1,lVar2);
    }
    _CFRelease(lVar2);
  }
  return uVar1;
}

