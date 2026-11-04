// rea decompile_all
// name: _AMRAuthInstallIsRecoveryOSImagePersonalized
// address: 0xfafa1
// body: available
// range: 0xfafa1-0xfb0af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000fb036) */

undefined8
_AMRAuthInstallIsRecoveryOSImagePersonalized
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  lVar2 = _CFDictionaryGetValue(param_2,&cf_AuthInstallRecoveryOSVariant);
  if (lVar2 == 0) {
    pcVar4 = &cf_Couldn_tfindRecoveryOSVariant_;
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_2,&cf_RecoveryOSBundlePath);
    if (lVar3 != 0) {
      lVar3 = _CFURLCreateWithFileSystemPath
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar3,0,1);
      if (lVar3 != 0) {
        uVar1 = _AMAuthInstallBundleShouldPersonalizeOSImage(param_1,lVar3,lVar2);
        *param_3 = uVar1;
        _CFRelease(lVar3);
        return 0;
      }
      _AMRLog(3,&cf_FailedtocreaterecoveryOSBundleURL_);
      return 0x12;
    }
    pcVar4 = &cf_Couldn_tfindrecoveryOSBundlePath_;
  }
  _AMRLog(3,pcVar4);
  return 0x3f;
}

