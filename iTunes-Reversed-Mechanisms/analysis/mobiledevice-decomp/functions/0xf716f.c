// rea decompile_all
// name: _AMRAuthInstallCopyPersonalizedBundleSupportRecoveryOSURL
// address: 0xf716f
// body: available
// range: 0xf716f-0xf7216 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMRAuthInstallCopyPersonalizedBundleSupportRecoveryOSURL
          (long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = &cf_Can_tcopyURLtopersonalizedbundlefromNULLdictionary;
  }
  else {
    cVar1 = _CFBooleanGetValue(param_2);
    pcVar3 = &cf_PersonalizedRecoveryOSBundlePath;
    if (cVar1 == '\0') {
      pcVar3 = &cf_PersonalizedRestoreBundlePath;
    }
    lVar2 = _CFDictionaryGetValue(param_1,pcVar3);
    if (lVar2 != 0) {
      lVar2 = _AMAuthInstallSupportCreateURLFromString
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2);
      if (lVar2 != 0) {
        if (param_3 == (long *)0x0) {
          _CFRelease(lVar2);
        }
        else {
          *param_3 = lVar2;
        }
        return 0;
      }
      _AMRLog(3,&cf_FailedtoallocatebundleURL);
      return 0x1f;
    }
    pcVar3 = &cf_NopersonalizedbundleURLinoptions;
  }
  _AMRLog(3,pcVar3);
  return 1;
}

