// rea decompile_all
// name: __AMAuthInstallUpdaterCopyResponseURL
// address: 0x1b539a
// body: available
// range: 0x1b539a-0x1b55b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallUpdaterCopyResponseURL
          (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  if (param_1 == 0) {
    __AMAuthInstallUpdaterCopyResponseURL_cold_4(param_5);
    return local_40;
  }
  if (param_2 == 0) {
    __AMAuthInstallUpdaterCopyResponseURL_cold_3(param_5);
    return local_40;
  }
  if (param_3 == 0) {
    __AMAuthInstallUpdaterCopyResponseURL_cold_2(param_5);
    return local_40;
  }
  local_38 = param_5;
  uVar2 = _AMAuthInstallBundleGetManifestPath();
  lVar3 = _CFStringCreateWithFormat(0,0,&cf____c__,uVar2,0x2f,param_2);
  if (lVar3 == 0) {
    _AMSupportCreateErrorInternal
              (local_38,&cf_AuthInstallErrorDomain,2,0,&cf__s_failedtoallocatepath,
               "_AMAuthInstallUpdaterCopyResponseURL");
    return local_40;
  }
  lVar4 = _CFURLCreateCopyAppendingPathComponent(0,param_1,lVar3,1);
  if (lVar4 == 0) {
    _AMSupportCreateErrorInternal
              (local_38,&cf_AuthInstallErrorDomain,2,0,&cf__s_failedtoallocatedirURL,
               "_AMAuthInstallUpdaterCopyResponseURL");
    lVar5 = lVar3;
    goto LAB_001b557f;
  }
  iVar1 = _AMSupportMakeDirectory(lVar4);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      lVar5 = _CFRetain(param_3);
    }
    else {
      lVar5 = _CFStringCreateWithFormat
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf______,param_3,
                         param_4);
      if (lVar5 == 0) {
        __AMAuthInstallUpdaterCopyResponseURL_cold_1(local_38);
        lVar5 = 0;
        goto LAB_001b5567;
      }
    }
    iVar1 = _AMSupportCopyURLWithAppendedComponent(0,lVar4,lVar5,0,&local_40);
    if (iVar1 != 0) {
      _AMSupportCreateErrorInternal
                (local_38,&cf_AuthInstallErrorDomain,4,0,&cf__s_failedtocreateurlfor_______d,
                 "_AMAuthInstallUpdaterCopyResponseURL",param_2,param_3,iVar1);
    }
  }
  else {
    lVar5 = 0;
    _AMSupportCreateErrorInternal
              (local_38,&cf_AuthInstallErrorDomain,4,0,&cf__s_failedtocreatedirectoryfor____d,
               "_AMAuthInstallUpdaterCopyResponseURL",param_2,iVar1);
  }
LAB_001b5567:
  _CFRelease(lVar3);
  _CFRelease(lVar4);
  if (lVar5 == 0) {
    return local_40;
  }
LAB_001b557f:
  _CFRelease(lVar5);
  return local_40;
}

