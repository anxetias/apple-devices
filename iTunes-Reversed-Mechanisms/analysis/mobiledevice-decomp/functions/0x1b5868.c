// rea decompile_all
// name: _AMAuthInstallUpdaterPersonalize
// address: 0x1b5868
// body: available
// range: 0x1b5868-0x1b5b8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallUpdaterPersonalize(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_40;
  long local_38;
  
  if (param_1 == 0) {
    _AMAuthInstallUpdaterPersonalize_cold_7(param_4);
    return 0;
  }
  if (param_2 == 0) {
    _AMAuthInstallUpdaterPersonalize_cold_6(param_4);
    return 0;
  }
  if (*(long *)(param_1 + 0x1c8) == 0) {
    _AMAuthInstallUpdaterPersonalize_cold_5(param_4);
    return 0;
  }
  lVar3 = _CFDictionaryGetValue(*(long *)(param_1 + 0x1c8),param_2);
  if (lVar3 == 0) {
    _AMAuthInstallUpdaterPersonalize_cold_4(param_4);
    return 0;
  }
  if (*(long *)(lVar3 + 0x10) == 0) {
    _AMAuthInstallUpdaterPersonalize_cold_3(param_4,param_2);
    return 0;
  }
  uVar4 = _CFGetAllocator(param_1);
  lVar5 = _CFDictionaryCreateMutable
                    (uVar4,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar5 == 0) {
    _AMSupportCreateErrorInternal
              (param_4,&cf_AuthInstallErrorDomain,2,0,&cf__s_failedtoallocateoptions,
               "AMAuthInstallUpdaterPersonalize");
    return 0;
  }
  uVar4 = _CFGetAllocator(param_1);
  local_40 = _CFDictionaryCreateMutableCopy(uVar4,0,*(undefined8 *)(lVar3 + 0x10));
  if (local_40 == 0) {
    _AMAuthInstallUpdaterPersonalize_cold_2(param_4);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x90) == 0)) && (*(int *)(lVar7 + 8) != 0)) {
      local_38 = local_40;
      _AMSupportLogInternal
                (6,"AMAuthInstallUpdaterPersonalize",
                 "Adding AP fusing information to coprocessor TSS request.");
      _AMSupportCFDictionarySetInteger32
                (local_38,&cf_ApChipID,*(undefined4 *)(*(long *)(param_1 + 0x10) + 8));
      _AMSupportCFDictionarySetInteger32
                (local_38,&cf_ApBoardID,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xc));
      _AMSupportCFDictionarySetBoolean
                (local_38,&cf_ApProductionMode,*(undefined1 *)(*(long *)(param_1 + 0x10) + 0x14));
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x74) == '\0') {
        puVar6 = &_kAMAuthInstallTagApSecurityMode;
      }
      else {
        puVar6 = &_kAMAuthInstallTagX86SecurityMode;
      }
      _AMSupportCFDictionarySetBoolean
                (local_38,*puVar6,*(undefined1 *)(*(long *)(param_1 + 0x10) + 0x48));
    }
    if ((*(long *)(param_1 + 0x1a8) != 0) &&
       (lVar7 = _CFDictionaryGetValue(*(long *)(param_1 + 0x1a8),&cf_UpdaterRequestEntries),
       lVar7 != 0)) {
      local_38 = lVar7;
      uVar4 = _CFGetAllocator(param_1);
      iVar2 = _AMAuthInstallSupportApplyDictionaryOverrides(uVar4,local_38,&local_40,0);
      if (iVar2 != 0) {
        _AMAuthInstallUpdaterPersonalize_cold_1();
        goto LAB_001b5b7d;
      }
    }
    _CFDictionarySetValue(lVar5,&cf_UpdaterName,param_2);
    _CFDictionarySetValue(lVar5,&cf_PersonalizedBundle,param_3);
    local_38 = _AMAuthInstallUpdaterCreateResponse(param_1,lVar5,local_40,param_4);
    if (local_38 != 0) {
      if ((param_3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) {
        uVar4 = 0;
        _AMSupportLogInternal
                  (6,"AMAuthInstallUpdaterPersonalize",
                   "Stashing %@ ticket(s) in bundle (LoopInstance=%@)",param_2,
                   *(undefined8 *)(lVar3 + 0x30));
        cVar1 = _AMAuthInstallUpdaterWriteManifest(lVar3,param_2,param_3,local_38,param_4);
        lVar3 = local_38;
        if (cVar1 != '\x01') goto LAB_001b5abe;
      }
      lVar3 = local_38;
      uVar4 = _AMSupportSafeRetain(local_38);
      goto LAB_001b5abe;
    }
  }
LAB_001b5b7d:
  uVar4 = 0;
  lVar3 = 0;
LAB_001b5abe:
  _CFRelease(lVar5);
  if (local_40 != 0) {
    _CFRelease();
    local_40 = 0;
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
    return uVar4;
  }
  return uVar4;
}

