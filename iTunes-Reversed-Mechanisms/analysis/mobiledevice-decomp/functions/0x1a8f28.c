// rea decompile_all
// name: __AMAuthInstallBundleShouldPersonalizeOS
// address: 0x1a8f28
// body: available
// range: 0x1a8f28-0x1a9034 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001a9005) */

bool __AMAuthInstallBundleShouldPersonalizeOS
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    __AMAuthInstallBundleShouldPersonalizeOS_cold_2(param_4);
    bVar5 = false;
  }
  else if (param_2 == 0) {
    __AMAuthInstallBundleShouldPersonalizeOS_cold_1(param_4);
    bVar5 = false;
  }
  else {
    iVar1 = _AMAuthInstallBundleCopyBuildIdentityForVariant();
    if (iVar1 == 0) {
      uVar2 = _CFGetAllocator(param_1);
      lVar3 = _AMSupportGetValueForKeyPathInDict(uVar2,0,&cf_Manifest_OS_Digest);
      bVar5 = lVar3 != 0;
      pcVar4 = "No";
      if (bVar5) {
        pcVar4 = "Yes";
      }
      _AMAuthInstallLog(6,"_AMAuthInstallBundleShouldPersonalizeOS","Personalize OS = %s",pcVar4);
    }
    else {
      bVar5 = false;
      _AMAuthInstallLog(3,"_AMAuthInstallBundleShouldPersonalizeOS",
                        "failed to copy build variant %d",iVar1);
      _AMSupportCreateErrorInternal
                (param_4,&cf_AuthInstallErrorDomain,iVar1,0,&cf__s_failedtocopybuildidentity,
                 "_AMAuthInstallBundleShouldPersonalizeOS");
    }
  }
  return bVar5;
}

