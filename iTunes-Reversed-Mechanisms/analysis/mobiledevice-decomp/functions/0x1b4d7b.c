// rea decompile_all
// name: _AMAuthInstallUpdaterCopyTags
// address: 0x1b4d7b
// body: available
// range: 0x1b4d7b-0x1b4f1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallUpdaterCopyTags(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_1 == 0) {
    _AMAuthInstallUpdaterCopyTags_cold_4(param_4);
  }
  else if (param_2 == 0) {
    _AMAuthInstallUpdaterCopyTags_cold_3(param_4);
  }
  else if (param_3 == 0) {
    _AMAuthInstallUpdaterCopyTags_cold_2(param_4);
  }
  else {
    lVar1 = _AMAuthInstallUpdater(param_1,param_2,0,&local_28);
    if (lVar1 == 0) {
      _AMAuthInstallUpdaterCopyTags_cold_1(&local_28,param_4);
    }
    else {
      lVar2 = _CFStringCompare(param_3,&cf_RequestTags,0);
      if (lVar2 == 0) {
        lVar1 = *(long *)(lVar1 + 0x10);
      }
      else {
        lVar2 = _CFStringCompare(param_3,&cf_RequestHeaderTags,0);
        if (lVar2 != 0) {
          lVar2 = _CFStringCompare(param_3,&cf_ResponseTags,0);
          if (lVar2 == 0) {
            lVar1 = *(long *)(lVar1 + 0x28);
          }
          else {
            lVar2 = _CFStringCompare(param_3,&cf_BuildIdentityTags,0);
            if (lVar2 != 0) {
              lVar2 = _CFStringCompare(param_3,&cf_LoopInstance,0);
              if (lVar2 != 0) {
                if (param_4 == 0) {
                  return 0;
                }
                _AMSupportCreateErrorInternal
                          (param_4,&cf_AuthInstallErrorDomain,1,0,&cf__s_tagTypeisnotsupported,
                           "AMAuthInstallUpdaterCopyTags");
                return 0;
              }
              if (*(long *)(lVar1 + 0x30) == 0) {
                return 0;
              }
              uVar3 = _CFStringCreateMutableCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0)
              ;
              return uVar3;
            }
            lVar1 = *(long *)(lVar1 + 0x20);
          }
          if (lVar1 == 0) {
            return 0;
          }
          uVar3 = _CFArrayCreateMutableCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
          return uVar3;
        }
        lVar1 = *(long *)(lVar1 + 0x18);
      }
      if (lVar1 != 0) {
        uVar3 = _CFDictionaryCreateMutableCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
        return uVar3;
      }
    }
  }
  return 0;
}

