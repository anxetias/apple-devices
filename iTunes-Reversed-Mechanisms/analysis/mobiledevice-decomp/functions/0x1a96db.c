// rea decompile_all
// name: _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity
// address: 0x1a96db
// body: available
// range: 0x1a96db-0x1a993f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity
               (long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity_cold_6(param_6);
  }
  else if (param_3 == 0) {
    _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity_cold_5(param_6);
  }
  else if (param_4 == 0) {
    _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity_cold_4(param_6);
  }
  else {
    if (param_2 != 0) {
      cVar1 = _CFBooleanGetValue(param_5);
      if (((cVar1 == '\0') || (cVar1 = _CFStringHasPrefix(param_4,&cf_RecoveryOS), cVar1 != '\0'))
         || (lVar5 = _CFStringCreateWithFormat(0,0,&cf_____,&cf_RecoveryOS,param_4), lVar5 == 0)) {
        _CFRetain(param_4);
        lVar5 = param_4;
      }
      if (param_5 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = _CFBooleanGetValue(param_5);
      }
      _AMAuthInstallLog(6,"AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity",
                        "%s: isRecovery = %d, entry = %@",
                        "AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity",uVar2,lVar5);
      lVar3 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),lVar5);
      if (lVar3 == 0) {
        cVar1 = _CFBooleanGetValue(param_5);
        if (cVar1 != '\0') {
          _CFRelease(lVar5);
          uVar4 = _CFGetAllocator(param_1);
          lVar5 = _AMAuthInstallICreateTranslationOfRecoveryEnteryName(uVar4,param_4);
        }
        uVar4 = _CFGetAllocator(param_1);
        _AMAuthInstallSupportGetValueForKeyPathInDict(uVar4,param_3,lVar5);
        uVar4 = _CFGetAllocator(param_1);
        lVar6 = _CFStringCreateWithFormat
                          (uVar4,0,&cf____________,&cf_Manifest,lVar5,&cf_Info,&cf_Path);
        if (lVar6 == 0) {
          _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity_cold_2(param_6);
          lVar3 = 0;
          lVar6 = 0;
        }
        else {
          uVar4 = _CFGetAllocator(param_1);
          lVar3 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar4,param_3,lVar6);
          if (lVar3 == 0) {
            _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity_cold_1(param_6);
            lVar3 = 0;
          }
          else {
            uVar4 = _CFGetAllocator(param_1);
            lVar3 = _CFURLCreateCopyAppendingPathComponent(uVar4,param_2,lVar3,0);
          }
        }
      }
      else {
        _CFRetain(lVar3);
        lVar6 = 0;
        _AMAuthInstallLog(8,"AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity",
                          "using override: %@ = %@",lVar5,lVar3);
      }
      goto LAB_001a989c;
    }
    _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity_cold_3(param_6);
  }
  lVar3 = 0;
  lVar6 = 0;
  lVar5 = 0;
LAB_001a989c:
  _SafeRelease(lVar6);
  _SafeRelease(lVar5);
  return lVar3;
}

