// rea decompile_all
// name: _AMAuthInstallBundleGetManifestEntry
// address: 0x1a8e22
// body: available
// range: 0x1a8e22-0x1a8f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallBundleGetManifestEntry
               (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_1 == 0) {
    _AMAuthInstallBundleGetManifestEntry_cold_5(param_5);
  }
  else if (param_2 == 0) {
    _AMAuthInstallBundleGetManifestEntry_cold_4(param_5);
  }
  else if (param_3 == 0) {
    _AMAuthInstallBundleGetManifestEntry_cold_3(param_5);
  }
  else if (param_4 == 0) {
    _AMAuthInstallBundleGetManifestEntry_cold_2(param_5);
  }
  else {
    iVar1 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,param_4,param_3,&local_28);
    if (iVar1 == 0) {
      uVar2 = _CFGetAllocator(param_1);
      lVar3 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar2,local_28,param_2);
      if (lVar3 == 0) {
        lVar3 = 0;
        _AMSupportCreateErrorInternal
                  (param_5,&cf_AuthInstallErrorDomain,8,0,&cf__s_didnotfind__inmanifest,
                   "AMAuthInstallBundleGetManifestEntry",param_2);
      }
      goto LAB_001a8eca;
    }
    _AMAuthInstallBundleGetManifestEntry_cold_1(iVar1,param_5);
  }
  lVar3 = 0;
LAB_001a8eca:
  _SafeRelease(local_28);
  return lVar3;
}

