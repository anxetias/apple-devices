// rea decompile_all
// name: _handleOverlayRootDataRequestForKeyIndex
// address: 0xdbea9
// body: available
// range: 0xdbea9-0xdbf92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleOverlayRootDataRequestForKeyIndex(AMRestoreMuxedDeviceMessage*, __CFDictionary const*,
   __CFError**) */

undefined8
_handleOverlayRootDataRequestForKeyIndex
          (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  char cVar1;
  __CFString *p_Var2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  
  if (param_2 == (__CFDictionary *)0x0) {
    local_38 = -1;
    lVar3 = 0;
    p_Var2 = (__CFString *)0x0;
  }
  else {
    p_Var2 = (__CFString *)_CFDictionaryGetValue(param_2,&cf_MessageOverlayRootKey);
    local_38 = -1;
    lVar3 = _CFDictionaryGetValue(param_2,&cf_MessageOverlayRootIndex);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFNumberGetTypeID();
      if ((lVar4 == lVar5) &&
         (cVar1 = _CFNumberGetValue(lVar3,0xe,&local_38), local_38 != -1 && cVar1 != '\0')) {
        uVar6 = _handleOverlayRootDataRequest(param_1,param_2,p_Var2,local_38,param_3);
        return uVar6;
      }
    }
  }
  _AMRLog(3,&cf_invalidrootindexrequested_______,p_Var2,lVar3);
  return 10;
}

