// rea decompile_all
// name: __AMAuthInstallCryptex1CopyObjectTags
// address: 0x29dd1c
// body: available
// range: 0x29dd1c-0x29de4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMAuthInstallCryptex1CopyObjectTags(void)

{
  long lVar1;
  
  lVar1 = _CFArrayCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0xe,
                     PTR__kCFTypeArrayCallBacks_004411a8);
  if (lVar1 != 0) {
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_SystemOS);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_SystemVolume);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_SystemTrustCache);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_AppOS);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_AppVolume);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_AppTrustCache);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_MobileAssetBrainOS);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_MobileAssetBrainVolume);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_MobileAssetBrainTrustCache);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_CryptexInfoPlist);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_GenericDmg);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_GenericTrustCache);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_GenericVolume);
    _CFArrayAppendValue(lVar1,&cf_Cryptex1_GenericIntegrityCatalog);
  }
  return lVar1;
}

