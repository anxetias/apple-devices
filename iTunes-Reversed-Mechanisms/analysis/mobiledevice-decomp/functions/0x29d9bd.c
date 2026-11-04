// rea decompile_all
// name: _AMAuthInstallUpdaterCryptex1MobileAssetCopyImg4WithRestoreInfo
// address: 0x29d9bd
// body: available
// range: 0x29d9bd-0x29dbd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallUpdaterCryptex1MobileAssetCopyImg4WithRestoreInfo
          (long param_1,undefined8 param_2,long param_3,long param_4,long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  local_48 = 0;
  local_40 = param_5;
  if (param_1 == 0) {
    pcVar5 = &cf__s_amaiisNULL;
LAB_0029db47:
    local_38 = 0;
    _AMSupportCreateErrorInternal
              (param_5,&cf_AuthInstallErrorDomain,1,0,pcVar5,
               "AMAuthInstallUpdaterCryptex1MobileAssetCopyImg4WithRestoreInfo");
  }
  else {
    if (param_3 == 0) {
      pcVar5 = &cf__s_nonceisNULL;
      goto LAB_0029db47;
    }
    if (param_4 == 0) {
      pcVar5 = &cf__s_exclaveNonceisNULL;
      goto LAB_0029db47;
    }
    local_38 = _AMAuthInstallUpdaterCryptex1CopyTicket(param_1,param_2,param_5);
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      uVar1 = _CFGetAllocator(param_1);
      lVar2 = _CFDataCreate(uVar1,&_kAMAuthInstallCryptex1MobileAssetDummyPayload,0x16);
      if (lVar2 != 0) {
        uVar1 = _CFGetAllocator(param_1);
        uVar1 = _AMAuthInstallApImg4CreateStitchTicket(uVar1,lVar2,local_38);
        uVar3 = _CFGetAllocator(param_1);
        lVar4 = _CFDictionaryCreateMutable
                          (uVar3,2,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar4 == 0) {
          lVar4 = 0;
          _AMSupportCreateErrorInternal
                    (local_40,&cf_AuthInstallErrorDomain,2,0,
                     &cf__s_failedtocreaterestoreinfodictionary,
                     "AMAuthInstallUpdaterCryptex1MobileAssetCopyImg4WithRestoreInfo");
        }
        else {
          _CFDictionarySetValue(lVar4,&cf_cncn,param_3);
          _CFDictionarySetValue(lVar4,&cf_cncx,param_4);
          _AMAuthInstallApImg4EncodeRestoreInfo(uVar1,lVar4,&local_48);
        }
        goto LAB_0029dab3;
      }
      _AMSupportCreateErrorInternal
                (param_5,&cf_AuthInstallErrorDomain,2,0,&cf__s_failedtocreatedummypayload,
                 "AMAuthInstallUpdaterCryptex1MobileAssetCopyImg4WithRestoreInfo");
    }
  }
  lVar2 = 0;
  uVar1 = 0;
  lVar4 = 0;
LAB_0029dab3:
  _AMSupportSafeRelease(local_38);
  _AMSupportSafeRelease(lVar2);
  _AMSupportSafeRelease(uVar1);
  _AMSupportSafeRelease(lVar4);
  if ((local_40 != (long *)0x0) && (*local_40 != 0)) {
    _AMAuthInstallLog(3,"AMAuthInstallUpdaterCryptex1MobileAssetCopyImg4WithRestoreInfo",
                      "failed: %@");
  }
  return local_48;
}

