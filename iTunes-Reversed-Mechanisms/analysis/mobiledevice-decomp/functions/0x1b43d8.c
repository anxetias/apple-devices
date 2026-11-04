// rea decompile_all
// name: _AMAuthInstallUpdater
// address: 0x1b43d8
// body: available
// range: 0x1b43d8-0x1b4604 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdater(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    _AMSupportCreateErrorInternal
              (param_4,&cf_AuthInstallErrorDomain,1,0,&cf__s_amaiisNULL,"AMAuthInstallUpdater");
    return 0;
  }
  if (param_2 == 0) {
    pcVar6 = &cf__s_updaterNameisNULL;
    lVar2 = 0;
    uVar3 = 1;
  }
  else {
    lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x1c8),param_2);
    if (lVar2 != 0) goto LAB_001b451e;
    uVar3 = _CFGetAllocator(param_1);
    lVar2 = _AMAuthInstallUpdaterCreate(uVar3);
    if (lVar2 == 0) {
      _AMAuthInstallUpdater_cold_1(param_4);
      lVar2 = 0;
      goto LAB_001b451e;
    }
    __AMAuthInstallUpdaterInitLocalSigning(lVar2,param_2);
    *(code **)(param_1 + 0x1b8) = _AMAuthInstallUpdaterAddTags;
    *(code **)(param_1 + 0x1c0) = _AMAuthInstallUpdaterWriteManifests;
    _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x1c8),param_2,lVar2);
    _CFRelease(lVar2);
    if (param_3 == 0) goto LAB_001b451e;
    iVar1 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(param_1,param_3,&local_38);
    if (iVar1 == 0) {
      uVar3 = _CFGetAllocator(param_1);
      lVar4 = _AMAuthInstallSupportGetValueForKeyWithFormat
                        (uVar3,local_38,&cf______,&cf_Updaters,param_2);
      if (lVar4 != 0) {
        lVar5 = _CFDictionaryGetValue(lVar4,&cf_RequestTags);
        if (lVar5 != 0) {
          uVar3 = _CFRetain(lVar5);
          *(undefined8 *)(lVar2 + 0x10) = uVar3;
        }
        lVar5 = _CFDictionaryGetValue(lVar4,&cf_ResponseTags);
        if (lVar5 != 0) {
          uVar3 = _CFRetain(lVar5);
          *(undefined8 *)(lVar2 + 0x28) = uVar3;
        }
        lVar5 = _CFDictionaryGetValue(lVar4,&cf_BuildIdentityTags);
        if (lVar5 != 0) {
          uVar3 = _CFRetain(lVar5);
          *(undefined8 *)(lVar2 + 0x20) = uVar3;
        }
        lVar4 = _CFDictionaryGetValue(lVar4,&cf_LoopInstance);
        if (lVar4 != 0) {
          uVar3 = _CFRetain(lVar4);
          *(undefined8 *)(lVar2 + 0x30) = uVar3;
        }
      }
      goto LAB_001b451e;
    }
    pcVar6 = &cf__s_failedtocopyreceipt;
    uVar3 = 2;
  }
  _AMSupportCreateErrorInternal
            (param_4,&cf_AuthInstallErrorDomain,uVar3,0,pcVar6,"AMAuthInstallUpdater");
LAB_001b451e:
  if (local_38 != 0) {
    _CFRelease();
  }
  return lVar2;
}

