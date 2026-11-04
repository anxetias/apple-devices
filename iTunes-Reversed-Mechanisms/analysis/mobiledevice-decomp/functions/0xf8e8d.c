// rea decompile_all
// name: _AMRAuthInstallSetFusingRootCA
// address: 0xf8e8d
// body: available
// range: 0xf8e8d-0xf9104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRAuthInstallSetFusingRootCA(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_50;
  long local_48;
  long local_40;
  char local_31;
  
  local_31 = '\0';
  local_48 = 0;
  local_40 = 0;
  local_50 = 0;
  if (param_1 == 0 || param_2 == 0) {
    lVar3 = 0;
    _AMRLog(3,&cf_badparameter);
    iVar1 = 1;
LAB_000f8edf:
    lVar4 = 0;
  }
  else {
    iVar1 = __AMRAuthInstallCopyTrustObjectOverride
                      (param_2,&cf_FDRTrustObjectFile,&cf_FDRTrustObject,&local_40);
    if (iVar1 != 0) {
      _AMRAuthInstallSetFusingRootCA_cold_1();
LAB_000f90c9:
      lVar3 = 0;
      goto LAB_000f8edf;
    }
    lVar3 = _AMRAuthInstallCopyVariant(param_1,param_2);
    if (lVar3 == 0) {
      _AMRAuthInstallSetFusingRootCA_cold_4();
      iVar1 = 0;
      goto LAB_000f90c9;
    }
    lVar4 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
    if (lVar4 == 0) {
      _AMRAuthInstallSetFusingRootCA_cold_3();
      iVar1 = 0;
      goto LAB_000f8edf;
    }
    uVar5 = _CFGetAllocator(param_1);
    iVar1 = 0;
    lVar4 = _CFURLCreateWithFileSystemPath(uVar5,lVar4,0,1);
    iVar2 = _AMAuthInstallBundleFDRBasebandSupported(param_1,lVar4,lVar3,&local_31);
    if (iVar2 == 0) {
      iVar1 = 0;
      if ((local_31 != '\0') && (local_40 != 0)) {
        uVar5 = _CFGetAllocator(param_1);
        iVar1 = _AMSupportCreateDataFromFileURL(uVar5,&local_48,local_40);
        if (iVar1 == 0) {
          uVar5 = _CFGetAllocator(param_1);
          lVar6 = _AMFDRDataCopySslRoots(uVar5,local_48,&local_50);
          if (local_50 == 0) {
            if (lVar6 != 0) {
              iVar1 = _AMAuthInstallSetFusingRootCA(param_1,lVar6);
              if (iVar1 == 0) {
                iVar1 = 0;
                _AMRLog(5,&cf_SSLrootCAcertforfusingserveraccessisset);
              }
              else {
                iVar1 = _AMAuthInstallToRestoreError(iVar1);
              }
              goto LAB_000f8ee5;
            }
            lVar6 = 0;
            _AMRLog(5,&cf_caRootsisNULL);
          }
          else {
            uVar5 = _CFErrorGetCode();
            _AMRLog(3,&cf_Failedtodecodetrustobject_ld,uVar5);
          }
          iVar1 = 0x35;
          goto LAB_000f8ee5;
        }
        iVar1 = _AMAuthInstallToRestoreError(iVar1);
      }
    }
    else {
      _AMRAuthInstallSetFusingRootCA_cold_2();
    }
  }
  lVar6 = 0;
LAB_000f8ee5:
  if (local_48 != 0) {
    _CFRelease();
    local_48 = 0;
  }
  if (local_40 != 0) {
    _CFRelease();
    local_40 = 0;
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  return iVar1;
}

