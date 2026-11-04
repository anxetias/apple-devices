// rea decompile_all
// name: _isAtLeastVersionOnPlatform
// address: 0x13ec4f
// body: available
// range: 0x13ec4f-0x13edbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _isAtLeastVersionOnPlatform(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 unaff_R12;
  ulong uVar3;
  undefined7 uVar4;
  cfstringStruct *pcVar5;
  
  cVar1 = _CFEqual(param_2,&cf_iPhoneOS);
  if (cVar1 == '\0') {
    cVar1 = _CFEqual(param_2,&cf_watchOS);
    pcVar5 = &cf_MinWatchVersion;
    if (cVar1 != '\0') goto LAB_0013ecc9;
    cVar1 = _CFEqual(param_2,&cf_WatchOS);
    if (cVar1 != '\0') goto LAB_0013ecc9;
    cVar1 = _CFEqual(param_2,&cf_AppleTVOS);
    if (cVar1 != '\0') {
      pcVar5 = &cf_MinAppleTVVersion;
      goto LAB_0013ecc9;
    }
    cVar1 = _CFEqual(param_2,&cf_xrOS);
    uVar4 = (undefined7)((ulong)unaff_R12 >> 8);
    if (cVar1 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "Unknown product: %@. File a Radar for MobileDevice to start supporting it. Treating as sufficiently new."
                        ,param_2);
      uVar3 = CONCAT71(uVar4,1);
      goto LAB_0013ed28;
    }
    uVar3 = CONCAT71(uVar4,1);
    pcVar5 = &cf_MinXROSVersion;
  }
  else {
    pcVar5 = &cf_MinIPhoneVersion;
LAB_0013ecc9:
    uVar3 = 0;
  }
  lVar2 = _CFDictionaryGetValue(param_3,pcVar5);
  if (lVar2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"Failed to get min version to compare against for product: %@"
                      ,param_2);
  }
  else {
    lVar2 = _CFStringCompare(param_1,lVar2,0x40);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),lVar2 != -1);
  }
LAB_0013ed28:
  return uVar3 & 0xffffffff;
}

