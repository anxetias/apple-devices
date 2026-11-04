// rea decompile_all
// name: _AMAuthInstallSupportGetValueForKeyPathInDict
// address: 0x1b417c
// body: available
// range: 0x1b417c-0x1b421f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallSupportGetValueForKeyPathInDict(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    _AMAuthInstallSupportGetValueForKeyPathInDict_cold_4();
  }
  else if (param_3 == 0) {
    _AMAuthInstallSupportGetValueForKeyPathInDict_cold_3();
  }
  else {
    lVar1 = _CFStringCreateArrayBySeparatingStrings(param_1,param_3,&cf__);
    if (lVar1 != 0) {
      lVar2 = _CFArrayGetCount(lVar1);
      if (0 < lVar2) {
        lVar4 = 0;
        do {
          lVar3 = _CFArrayGetValueAtIndex(lVar1,lVar4);
          if (lVar3 == 0) {
            _AMAuthInstallSupportGetValueForKeyPathInDict_cold_1();
LAB_001b4205:
            param_2 = 0;
            break;
          }
          param_2 = _CFDictionaryGetValue(param_2,lVar3);
          if (param_2 == 0) goto LAB_001b4205;
          lVar4 = lVar4 + 1;
        } while (lVar2 != lVar4);
      }
      _CFRelease(lVar1);
      return param_2;
    }
    _AMAuthInstallSupportGetValueForKeyPathInDict_cold_2();
  }
  return 0;
}

