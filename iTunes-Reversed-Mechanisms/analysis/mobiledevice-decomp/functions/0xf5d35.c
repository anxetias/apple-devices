// rea decompile_all
// name: __AMRAuthInstallApplyBundleOverride
// address: 0xf5d35
// body: available
// range: 0xf5d35-0xf5e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __AMRAuthInstallApplyBundleOverride(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  if (param_1 == 0) {
    pcVar4 = &cf_Can_toverridebundlevaluewithNULLkey;
  }
  else {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFStringGetTypeID();
    if (lVar2 == lVar3) {
      if (param_2 == 0) {
        pcVar4 = &cf_Can_toverridebundlevaluewithNULLvalue;
      }
      else {
        lVar2 = _CFGetTypeID(param_2);
        lVar3 = _CFStringGetTypeID();
        if (lVar2 == lVar3) {
          if (param_3 == 0) {
            pcVar4 = &cf_Can_toverridebundlevaluewithoutamairef;
          }
          else {
            lVar2 = _AMAuthInstallSupportCreateURLFromString
                              (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2);
            if (lVar2 != 0) {
              _AMRLogWithFilePath(6,param_2,&cf_Applyingbundlefileoverrideforkey___,param_1);
              iVar1 = _AMAuthInstallBundleOverrideEntry(param_3,param_1,lVar2);
              if (iVar1 != 0) {
                _AMRLog(3,&cf_Failedtosetbundleoverrideforkey___,param_1);
              }
              _CFRelease(lVar2);
              return iVar1 == 0;
            }
            pcVar4 = &cf_FailedtocreateoverrideURLfromURLstring;
          }
        }
        else {
          pcVar4 = &cf_Can_toverridebundlevaluewithnonCFTypevalue;
        }
      }
    }
    else {
      pcVar4 = &cf_Can_toverridebundlevaluewithnonCFTypekey;
    }
  }
  _AMRLog(3,pcVar4);
  return false;
}

