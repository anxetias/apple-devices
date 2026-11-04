// rea decompile_all
// name: _AMRAuthInstallSetBundleOverridesFromOptions
// address: 0xf736b
// body: available
// range: 0xf736b-0xf7609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf73b8 to 0xf5bf5 _AMAuthInstallToRestoreError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRAuthInstallSetBundleOverridesFromOptions(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  iVar2 = _AMRestoreOptionsApplyMacOSChangesIfNeeded(param_2);
  if (iVar2 != 0) {
    iVar3 = 3;
    _AMRLog(3,&cf_failedtoapplyMacOSrestoreOptionchangeswithstatus_d,iVar2);
    goto LAB_000f73a8;
  }
  lVar4 = _CFDictionaryGetValue(param_2,&cf_BundleOverrides);
  if (lVar4 != 0) {
    _CFDictionaryApplyFunction(lVar4,__AMRAuthInstallApplyBundleOverride,param_1);
    lVar4 = _CFDictionaryGetValue(lVar4,&cf_RecoveryOSBundlePath);
    iVar3 = 0;
    if (lVar4 != 0) {
      _CFDictionarySetValue(param_2,&cf_RecoveryOSSourceBundlePath,lVar4);
    }
    goto LAB_000f73a8;
  }
  cVar1 = _AMRestoreOptionsAreLegacy(param_2);
  if (cVar1 == '\0') {
    lVar4 = 0;
    lVar6 = 0;
    local_38 = 0;
    iVar3 = 0;
LAB_000f75da:
    if (lVar4 != 0) goto LAB_000f75df;
  }
  else {
    lVar4 = _CFDictionaryGetValue(param_2,&cf_BootImageFile);
    if (lVar4 == 0) {
      lVar4 = 0;
LAB_000f748b:
      lVar6 = _CFDictionaryGetValue(param_2,&cf_RestoreKernelCacheFile);
      if (lVar6 == 0) {
        local_38 = 0;
LAB_000f750a:
        lVar7 = _CFDictionaryGetValue(param_2,&cf_KernelCacheFile);
        iVar3 = 0;
        if (lVar7 == 0) {
          lVar6 = 0;
        }
        else {
          uVar5 = _CFGetAllocator(param_1);
          lVar6 = _AMAuthInstallSupportCreateURLFromString(uVar5,lVar7);
          if (lVar6 == 0) {
            lVar6 = 0;
            _AMRLog(3,&cf_failedtoconvertcustomKernelCacheFileURL__,0);
            iVar3 = 3;
          }
          else {
            _CFDictionarySetValue(param_2,&cf_KernelCacheFile,lVar7);
            iVar2 = _AMAuthInstallBundleOverrideEntry(param_1,&cf_KernelCache,lVar6);
            if (iVar2 != 0) {
              iVar3 = iVar2;
            }
          }
        }
      }
      else {
        uVar5 = _CFGetAllocator(param_1);
        local_38 = _AMAuthInstallSupportCreateURLFromString(uVar5,lVar6);
        if (local_38 == 0) {
          iVar3 = 3;
          _AMRLog(3,&cf_failedtoconvertcustomRestoreKernelCacheFileURL__,0);
          local_38 = 0;
        }
        else {
          _CFDictionarySetValue(param_2,&cf_RestoreKernelCacheFile,lVar6);
          iVar3 = _AMAuthInstallBundleOverrideEntry(param_1,&cf_RestoreKernelCache,local_38);
          if (iVar3 == 0) goto LAB_000f750a;
        }
        lVar6 = 0;
      }
      goto LAB_000f75da;
    }
    uVar5 = _CFGetAllocator(param_1);
    lVar4 = _AMAuthInstallSupportCreateURLFromString(uVar5,lVar4);
    if (lVar4 == 0) {
      iVar3 = 3;
      _AMRLog(3,&cf_failedtoconvertcustomRamDiskFileURL__,0);
      goto LAB_000f73a8;
    }
    iVar3 = _AMAuthInstallBundleOverrideEntry(param_1,&cf_RestoreRamDisk,lVar4);
    if (iVar3 == 0) goto LAB_000f748b;
    local_38 = 0;
    lVar6 = 0;
LAB_000f75df:
    _CFRelease(lVar4);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_38 != 0) {
    _CFRelease(local_38);
  }
LAB_000f73a8:
  _AMAuthInstallToRestoreError(iVar3);
  return;
}

