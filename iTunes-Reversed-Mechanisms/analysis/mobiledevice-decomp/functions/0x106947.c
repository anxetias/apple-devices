// rea decompile_all
// name: _AMDeviceProxyMergePersonalizationKeysFromSourceToDestination
// address: 0x106947
// body: available
// range: 0x106947-0x106a7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x106a41 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x106a7a to 0xdf44a _AMRLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyMergePersonalizationKeysFromSourceToDestination(__CFDictionary const*,
   __CFDictionary*) */

void _AMDeviceProxyMergePersonalizationKeysFromSourceToDestination
               (__CFDictionary *param_1,__CFDictionary *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  
  if (param_1 == (__CFDictionary *)0x0) {
    pcVar5 = &cf_Can_tmergeoptionswithinvalidsourcedict;
  }
  else {
    if (param_2 != (__CFDictionary *)0x0) {
      lVar1 = _CFArrayCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         PTR__kCFTypeArrayCallBacks_004411a8);
      _CFArrayAppendValue(lVar1,&cf_PersonalizedRestoreBundlePath);
      _CFArrayAppendValue(lVar1,&cf_SourceRestoreBundlePath);
      _CFArrayAppendValue(lVar1,&cf_BasebandNonce);
      _CFArrayAppendValue(lVar1,&cf_BBUpdaterState);
      _CFArrayAppendValue(lVar1,&cf_UUID);
      _CFArrayAppendValue(lVar1,&cf_RestoreBundlePath);
      lVar2 = _CFArrayGetCount(lVar1);
      if (0 < lVar2) {
        lVar6 = 0;
        do {
          uVar3 = _CFArrayGetValueAtIndex(lVar1,lVar6);
          lVar4 = _CFDictionaryGetValue(param_1,uVar3);
          if (lVar4 != 0) {
            _CFDictionarySetValue(param_2,uVar3,lVar4);
          }
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
      }
      if (lVar1 != 0) {
        _CFRelease(lVar1);
        return;
      }
      return;
    }
    pcVar5 = &cf_Can_tmergeoptionswithinvaliddestdict;
  }
  _AMRLog(3,pcVar5);
  return;
}

