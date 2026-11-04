// rea decompile_all
// name: _AMAuthInstallBundleShouldPersonalizeOSImage
// address: 0x1a8d2c
// body: available
// range: 0x1a8d2c-0x1a8e21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _AMAuthInstallBundleShouldPersonalizeOSImage
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    _AMAuthInstallBundleShouldPersonalizeOSImage_cold_6(param_4);
  }
  else if (param_2 == 0) {
    _AMAuthInstallBundleShouldPersonalizeOSImage_cold_5(param_4,0,param_3,0);
  }
  else {
    lVar2 = _AMAuthInstallBundleGetManifestEntry(param_1,&cf_Manifest,param_3,param_2,param_4);
    if (lVar2 == 0) {
      _AMAuthInstallBundleShouldPersonalizeOSImage_cold_4(param_4);
    }
    else {
      lVar2 = _CFDictionaryGetValue(lVar2,&cf_OS);
      if (lVar2 == 0) {
        _AMAuthInstallBundleShouldPersonalizeOSImage_cold_3(param_4);
      }
      else {
        lVar2 = _CFDictionaryGetValue(lVar2,&cf_Info);
        if (lVar2 == 0) {
          _AMAuthInstallBundleShouldPersonalizeOSImage_cold_2(param_4);
        }
        else {
          lVar2 = _CFDictionaryGetValue(lVar2,&cf_Personalize);
          if (lVar2 != 0) {
            cVar1 = _CFBooleanGetValue(lVar2);
            pcVar3 = "Yes";
            if (cVar1 == '\0') {
              pcVar3 = "No";
            }
            _AMAuthInstallLog(6,"AMAuthInstallBundleShouldPersonalizeOSImage",
                              "Personalize OS image = %s",pcVar3);
            return cVar1;
          }
          _AMAuthInstallBundleShouldPersonalizeOSImage_cold_1(param_4);
        }
      }
    }
  }
  return '\0';
}

