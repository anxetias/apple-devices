// rea decompile_all
// name: _browse_callback
// address: 0x154e08
// body: available
// range: 0x154e08-0x154fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x154f9f to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _browse_callback(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  
  if (param_2 != 0) {
    lVar2 = _CFDictionaryGetValue(param_1,&cf_CurrentList);
    if (lVar2 == 0) {
      lVar2 = _CFDictionaryGetValue(param_1,&cf_Status);
      if (lVar2 == 0) {
        pcVar6 = "Could not extract current list or status value from the status";
      }
      else {
        cVar1 = _CFEqual(lVar2,&cf_Complete);
        if (cVar1 != '\0') goto LAB_00154f88;
        pcVar6 = "Could not extract current list from the status";
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,pcVar6);
    }
    else {
      uVar3 = _CFArrayGetCount(lVar2);
      if (0 < (long)uVar3) {
        uVar7 = 0;
        do {
          lVar4 = _CFArrayGetValueAtIndex(lVar2,uVar7);
          if (lVar4 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar6 = "Could not extract entry %d of %d";
LAB_00154ee5:
            __os_log_internal(0,_md_log_log,1,pcVar6,(int)uVar7 + 1,uVar3 & 0xffffffff);
          }
          else {
            lVar5 = _CFDictionaryGetValue(lVar4,&cf_CFBundleIdentifier);
            if (lVar5 == 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar6 = "Could not extract identifier for entry %d of %d";
              goto LAB_00154ee5;
            }
            _CFDictionarySetValue(param_2,lVar5,lVar4);
          }
          uVar7 = uVar7 + 1;
        } while (uVar3 != uVar7);
      }
    }
  }
LAB_00154f88:
  if (param_1 == 0) {
    return;
  }
  _CFRelease();
  return;
}

