// rea decompile_all
// name: _AMRAuthInstallCreatePathFromBundle
// address: 0xf9cc1
// body: available
// range: 0xf9cc1-0xf9e31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf9d78 to 0xf5bf5 _AMAuthInstallToRestoreError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMRAuthInstallCreatePathFromBundle
                (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_38;
  
  local_38 = 0;
  if (param_4 == (long *)0x0 || (param_2 == 0 || param_1 == 0)) {
    if (param_4 != (long *)0x0) {
      *param_4 = 0;
    }
    uVar7 = 1;
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
    if (lVar3 == 0) {
      uVar7 = 8;
    }
    else {
      uVar7 = _CFGetAllocator(param_1);
      lVar3 = _CFURLCreateWithFileSystemPath(uVar7,lVar3,0,1);
      if (lVar3 != 0) {
        lVar5 = _AMRAuthInstallCopyVariant(param_1,param_2);
        if (lVar5 == 0) {
          iVar1 = 8;
        }
        else {
          iVar1 = _AMAuthInstallBundleCopyURLForKey(param_1,param_3,lVar5,lVar3,&local_38);
          if (iVar1 == 0) {
            uVar4 = 0;
            lVar6 = _CFURLCopyFileSystemPath(local_38,0);
            *param_4 = lVar6;
            if (lVar6 != 0) goto LAB_000f9ddf;
            iVar1 = 2;
          }
          else {
            _AMRLog(3,&cf_failedtogeturlforkey__,param_3);
          }
        }
        *param_4 = 0;
        uVar2 = _AMAuthInstallToRestoreError(iVar1);
        uVar4 = (ulong)uVar2;
LAB_000f9ddf:
        _CFRelease(lVar3);
        if (local_38 != 0) {
          _CFRelease();
        }
        if (lVar5 != 0) {
          _CFRelease(lVar5);
        }
        return uVar4;
      }
      _AMRLog(3,&cf_bundleURLallocationfailed);
      uVar7 = 2;
    }
    *param_4 = 0;
  }
  uVar4 = _AMAuthInstallToRestoreError(uVar7);
  return uVar4;
}

