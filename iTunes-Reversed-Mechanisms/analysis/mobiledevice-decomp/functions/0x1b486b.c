// rea decompile_all
// name: _AMAuthInstallUpdaterSaveToReceipt
// address: 0x1b486b
// body: available
// range: 0x1b486b-0x1b4bd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallUpdaterSaveToReceipt(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    _AMSupportCreateErrorInternal
              (param_4,&cf_AuthInstallErrorDomain,1,0,&cf__s_amaiisNULL,
               "AMAuthInstallUpdaterSaveToReceipt");
    return 0;
  }
  if (param_2 == 0) {
    pcVar8 = &cf__s_updaterNameisNULL;
LAB_001b4931:
    uVar2 = 1;
LAB_001b493f:
    _AMSupportCreateErrorInternal
              (param_4,&cf_AuthInstallErrorDomain,uVar2,0,pcVar8,"AMAuthInstallUpdaterSaveToReceipt"
              );
  }
  else {
    if (param_3 == 0) {
      pcVar8 = &cf__s_bundleURLisNULL;
      goto LAB_001b4931;
    }
    iVar1 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(param_1,param_3,&local_38);
    if (iVar1 != 0) {
      uVar2 = _CFGetAllocator(param_1);
      local_38 = _CFDictionaryCreateMutable
                           (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    }
    if (local_38 != 0) {
      lVar3 = _AMAuthInstallUpdater(param_1,param_2,0,param_4);
      if (lVar3 == 0) {
        _AMAuthInstallUpdaterSaveToReceipt_cold_1(param_4);
        goto LAB_001b494b;
      }
      lVar4 = _CFDictionaryGetValue(local_38,&cf_Updaters);
      if (lVar4 != 0) {
        _CFRetain(lVar4);
LAB_001b49ce:
        lVar5 = _CFDictionaryGetValue(lVar4,param_2);
        if (lVar5 == 0) {
          uVar2 = _CFGetAllocator(param_1);
          lVar5 = _CFDictionaryCreateMutable
                            (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar5 == 0) {
            uVar2 = 0;
            _AMSupportCreateErrorInternal
                      (param_4,&cf_AuthInstallErrorDomain,2,0,&cf__s_failedtoallocateupdaterDict,
                       "AMAuthInstallUpdaterSaveToReceipt");
            lVar5 = 0;
            goto LAB_001b4b76;
          }
        }
        else {
          _CFRetain(lVar5);
        }
        if ((*(long *)(lVar3 + 0x10) != 0) && (lVar6 = _CFDictionaryGetCount(), 0 < lVar6)) {
          _CFDictionarySetValue(lVar5,&cf_RequestTags,*(undefined8 *)(lVar3 + 0x10));
        }
        if ((*(long *)(lVar3 + 0x28) != 0) && (lVar6 = _CFArrayGetCount(), 0 < lVar6)) {
          _CFDictionarySetValue(lVar5,&cf_ResponseTags,*(undefined8 *)(lVar3 + 0x28));
        }
        if ((*(long *)(lVar3 + 0x20) != 0) && (lVar6 = _CFArrayGetCount(), 0 < lVar6)) {
          _CFDictionarySetValue(lVar5,&cf_BuildIdentityTags,*(undefined8 *)(lVar3 + 0x20));
        }
        if (*(long *)(lVar3 + 0x30) != 0) {
          _CFDictionarySetValue(lVar5,&cf_LoopInstance);
        }
        lVar3 = _CFDictionaryGetCount(lVar5);
        if (0 < lVar3) {
          _CFDictionarySetValue(lVar4,param_2,lVar5);
          _CFDictionarySetValue(local_38,&cf_Updaters,lVar4);
        }
        iVar1 = _AMAuthInstallBundleWriteReceipt
                          (param_1,param_3,local_38,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        else {
          uVar7 = _AMAuthInstallGetLocalizedStatusString(param_1,iVar1);
          uVar2 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallUpdaterSaveToReceipt","failed to write receipt: %@",
                            uVar7);
        }
        goto LAB_001b4b76;
      }
      uVar2 = _CFGetAllocator(param_1);
      lVar4 = _CFDictionaryCreateMutable
                        (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar4 != 0) goto LAB_001b49ce;
      pcVar8 = &cf__s_failedtoallocateallUpdaters;
      uVar2 = 2;
      goto LAB_001b493f;
    }
    _AMAuthInstallUpdaterSaveToReceipt_cold_2(param_4);
  }
LAB_001b494b:
  uVar2 = 0;
  lVar5 = 0;
  lVar4 = 0;
LAB_001b4b76:
  if (local_38 != 0) {
    _CFRelease();
    local_38 = 0;
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return uVar2;
}

