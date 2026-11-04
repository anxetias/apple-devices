// rea decompile_all
// name: __addVariantsForDevice
// address: 0x178a38
// body: available
// range: 0x178a38-0x178ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x178abf to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __addVariantsForDevice(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Info);
  if (lVar2 == 0) {
    pcVar4 = &cf_FailedtogetInfodictionaryforbuildidentitity_continuing___;
  }
  else {
    lVar3 = _CFDictionaryGetValue(lVar2,&cf_DeviceClass);
    if (lVar3 == 0) {
      pcVar4 = &cf_FailedtogetDeviceClassfromInfoinBuildIdentity_continuing___;
    }
    else {
      cVar1 = _CFEqual(lVar3,*param_2);
      if (cVar1 != '\0') {
        lVar2 = _CFDictionaryGetValue(lVar2,&cf_Variant);
        if (lVar2 == 0) {
          pcVar4 = &cf_FailedtogetVariantfromInfoinBuildIdentity_continuing___;
          goto LAB_00178ab6;
        }
        _CFArrayAppendValue(param_2[1],lVar2);
      }
      pcVar4 = (cfstringStruct *)0x0;
    }
  }
LAB_00178ab6:
  _AMRSafeLogAndRelease(3,pcVar4);
  return;
}

