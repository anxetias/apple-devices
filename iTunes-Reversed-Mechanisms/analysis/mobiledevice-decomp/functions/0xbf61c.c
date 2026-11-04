// rea decompile_all
// name: _AMSIsSyncServicesEnabled
// address: 0xbf61c
// body: available
// range: 0xbf61c-0xbf6b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSIsSyncServicesEnabled(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (_sMainProcessLink == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = __createDictionaryWithRequestAndArgKeysAndValues(&cf_AMSIsSyncEnabledRequest,0);
    lVar3 = _AMSProcessLinkSendMessageLock(_sMainProcessLink,uVar2);
    _CFRelease(uVar2);
    if (lVar3 == 0) {
      uVar2 = 3;
    }
    else {
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_AMSIsSyncEnabledKey);
      uVar2 = 0;
      if (lVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = _CFBooleanGetValue(lVar4);
      }
      _CFRelease(lVar3);
      if (param_1 != (undefined1 *)0x0) {
        *param_1 = uVar1;
      }
    }
  }
  return uVar2;
}

