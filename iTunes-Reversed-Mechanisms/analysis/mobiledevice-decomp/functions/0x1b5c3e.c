// rea decompile_all
// name: _AMAuthInstallUpdaterCopyBuildIdentityTags
// address: 0x1b5c3e
// body: available
// range: 0x1b5c3e-0x1b5ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdaterCopyBuildIdentityTags
               (long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    _AMAuthInstallUpdaterCopyBuildIdentityTags_cold_6(param_6);
    return 0;
  }
  if (param_2 == 0) {
    _AMAuthInstallUpdaterCopyBuildIdentityTags_cold_5(param_6);
  }
  else if (param_3 == 0) {
    _AMAuthInstallUpdaterCopyBuildIdentityTags_cold_4(param_6);
  }
  else if (param_5 == 0) {
    _AMAuthInstallUpdaterCopyBuildIdentityTags_cold_3(param_6);
  }
  else {
    lVar2 = _CFDictionaryGetValue(param_3,&cf_BuildIdentityTags);
    if (lVar2 != 0) {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFArrayGetTypeID();
      if (lVar3 == lVar4) {
        iVar1 = _AMAuthInstallUpdaterSetTags(param_1,param_2,&cf_BuildIdentityTags,lVar2,param_6);
        if (iVar1 == 0) {
          lVar3 = _CFDictionaryGetValue(param_3,&cf_ResponseTags);
          if (lVar3 != 0) {
            lVar4 = _CFGetTypeID(lVar3);
            lVar5 = _CFArrayGetTypeID();
            if (lVar4 == lVar5) {
              iVar1 = _AMAuthInstallUpdaterSetTags(param_1,param_2,&cf_ResponseTags,lVar3,param_6);
              if (iVar1 == 0) {
                iVar1 = _AMAuthInstallBundleCopyBuildIdentityForVariant
                                  (param_1,param_5,param_4,&local_38);
                if (iVar1 == 0) {
                  lVar3 = _CFDictionaryCreateMutable
                                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                  if (lVar3 != 0) {
                    lVar4 = _CFArrayGetCount(lVar2);
                    if (0 < lVar4) {
                      lVar4 = 0;
                      do {
                        uVar6 = _CFArrayGetValueAtIndex(lVar2,lVar4);
                        lVar5 = _AMAuthInstallSupportGetValueForKeyWithFormat
                                          (0,local_38,&cf_Manifest___,uVar6);
                        if ((lVar5 != 0) ||
                           (lVar5 = _AMAuthInstallSupportGetValueForKeyWithFormat
                                              (0,local_38,&cf___,uVar6), lVar5 != 0)) {
                          _CFDictionarySetValue(lVar3,uVar6,lVar5);
                        }
                        lVar4 = lVar4 + 1;
                        lVar5 = _CFArrayGetCount(lVar2);
                      } while (lVar4 < lVar5);
                    }
                    goto LAB_001b5d41;
                  }
                  pcVar7 = &cf__s_failedtoallocateupdaterTags;
                  iVar1 = 2;
                }
                else {
                  pcVar7 = &cf__s_failedtocopybuildidentity;
                }
                lVar3 = 0;
                _AMSupportCreateErrorInternal
                          (param_6,&cf_AuthInstallErrorDomain,iVar1,0,pcVar7,
                           "AMAuthInstallUpdaterCopyBuildIdentityTags");
                goto LAB_001b5d41;
              }
              goto LAB_001b5d3e;
            }
          }
          _AMAuthInstallUpdaterCopyBuildIdentityTags_cold_1(param_6);
        }
        goto LAB_001b5d3e;
      }
    }
    _AMAuthInstallUpdaterCopyBuildIdentityTags_cold_2(param_6);
  }
LAB_001b5d3e:
  lVar3 = 0;
LAB_001b5d41:
  if (local_38 != 0) {
    _CFRelease();
  }
  return lVar3;
}

