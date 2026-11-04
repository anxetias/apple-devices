// rea decompile_all
// name: _AMRAuthInstallSubmitFDRData
// address: 0xfa977
// body: available
// range: 0xfa977-0xfad05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfad01 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMRAuthInstallSubmitFDRData
          (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if ((((param_5 == 0) || (param_3 == 0)) || (param_2 == 0)) ||
     (((param_1 == 0 || (param_4 == 0)) || (param_6 == 0)))) {
    lVar5 = 0;
    _AMRLog(3,&cf_badparameter);
    uVar4 = 1;
    goto LAB_000fac41;
  }
  cVar1 = __AMRAuthInstallFDRSupported(param_4,param_6);
  if (cVar1 == '\0') {
    uVar4 = 0;
    _AMRLog(5,&cf_FDRisnotsupportedonthisdevice_notsubmittingprovisioningdata);
    lVar5 = 0;
    goto LAB_000fac41;
  }
  uVar4 = _CFGetAllocator(param_4);
  local_60 = _CFDictionaryCreateMutable
                       (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (local_60 == 0) {
    lVar5 = 0;
    _AMRLog(3,&cf_failedtocreatefdrOptions);
    uVar4 = 0x12;
    goto LAB_000fac41;
  }
  _AMFDRLogSetHandler(__AMAuthInstallLogHandler);
  lVar5 = _CFDictionaryGetValue(param_6,&cf_FDRCAURL);
  if (lVar5 != 0) {
    _CFDictionarySetValue(local_60,&cf_CAURL,lVar5);
  }
  lVar5 = _CFDictionaryGetValue(param_6,&cf_FDRDataStoreURL);
  if (lVar5 != 0) {
    _CFDictionarySetValue(local_60,&cf_DSURL,lVar5);
  }
  lVar6 = _CFDictionaryGetValue(param_6,&cf_FDRSealingURL);
  lVar5 = local_60;
  if (lVar6 != 0) {
    _CFDictionarySetValue(local_60,&cf_SealingURL,lVar6);
  }
  _CFDictionaryAddValue(lVar5,&cf_Permissions,param_5);
  _CFDictionaryAddValue(lVar5,&cf_DataStore,&cf_Remote);
  lVar6 = _CFDictionaryGetValue(param_6,&cf_FDRPersistCertificateHost);
  if (lVar6 != 0) {
    _CFDictionarySetValue(lVar5,&cf_PersistCertificate,lVar6);
  }
  uVar4 = _CFGetAllocator(param_4);
  lVar6 = _AMFDRCreateWithOptions(uVar4,lVar5);
  if (lVar6 == 0) {
    lVar5 = 0;
    _AMRLog(3,&cf_failedtocreateamfdr);
    uVar4 = 0x12;
  }
  else {
    uVar4 = _CFDictionaryGetValue(param_6,&cf_FDRTrustObjectURL);
    bVar2 = _AMFDRDataCopyTrustObject(lVar6,uVar4,&local_68,&local_70);
    if ((local_68 != 0 & bVar2) == 1) {
      uVar4 = _CFDataGetBytePtr();
      uVar7 = _CFDataGetLength(local_68);
      iVar3 = _AMSupportDigestSha256(uVar4,uVar7,&local_58);
      if (iVar3 != 0) {
        pcVar8 = &cf_AMSupportDigestSha256failedonFDRTrustObject;
        goto LAB_000fac0e;
      }
      lVar5 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_58,0x20);
      uVar4 = 0;
      if (lVar5 == 0) {
        pcVar8 = &cf_CFDataCreatefailedontrustObjectDigestData;
        goto LAB_000fac0e;
      }
      _AMFDRSetOption(lVar6,&cf_TrustObject,local_68);
      _AMFDRSetOption(lVar6,&cf_TrustObjectDigest,lVar5);
      cVar1 = _AMFDRDataPut(lVar6,param_1,param_2,param_3,&local_70);
      if (cVar1 == '\0') {
        pcVar8 = &cf_AMFDRDataPutfailed;
        goto LAB_000fac10;
      }
    }
    else {
      pcVar8 = &cf_AMFDRDataCopyTrustObjectfailedtofetchtrustobject_;
LAB_000fac0e:
      lVar5 = 0;
LAB_000fac10:
      _AMRLog(3,pcVar8);
      uVar4 = 0x35;
    }
    _CFRelease(lVar6);
  }
  _CFRelease(local_60);
  if (local_70 != 0) {
    _CFRelease();
  }
LAB_000fac41:
  if (local_68 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

