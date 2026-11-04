// rea decompile_all
// name: _AMRAuthInstallBasebandUpdaterRequest
// address: 0x26b412
// body: available
// range: 0x26b412-0x26b8ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRAuthInstallBasebandUpdaterRequest
              (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_50 = 0;
  cVar1 = _AMRestoreOptionsAreLegacy(param_3);
  if (cVar1 == '\0') {
    iVar2 = _AMRAuthInstallCopyFileSystemPathForKey(param_1,param_3,&cf_BasebandFirmware,&local_40);
    if (iVar2 == 0) goto LAB_0026b46f;
    pcVar8 = &cf_Failedtogetpathtobasebandfirmware;
LAB_0026b6ac:
    lVar6 = 0;
  }
  else {
    local_40 = _CFDictionaryGetValue(param_3,&cf_BasebandFirmware);
    _CFRetain(local_40);
LAB_0026b46f:
    iVar2 = _AMAuthInstallBasebandSetParametersWithUpdaterOutput(param_1,param_2);
    if (iVar2 != 0) {
      iVar2 = _AMAuthInstallToRestoreError(iVar2);
      pcVar8 = &cf_unrecognizedbasebandupdateroutput;
      goto LAB_0026b6ac;
    }
    iVar2 = 0x12;
    if (param_3 != 0) {
      pcVar4 = (char *)_CFDictionaryGetValue(param_3,&cf_BasebandFusingProfile);
      if ((pcVar4 != (char *)0x0) &&
         (iVar3 = _AMAuthInstallBasebandSetFusingProfileName(param_1,pcVar4), iVar3 != 0)) {
        iVar3 = _AMAuthInstallToRestoreError(iVar3);
        pcVar8 = &cf_failedtosetfusingprofile___;
        lVar6 = 0;
        goto LAB_0026b86a;
      }
      pcVar4 = (char *)_CFDictionaryGetValue(param_3,&cf_BasebandFusingProgram);
      if (pcVar4 == (char *)0x0) goto LAB_0026b536;
      uVar5 = _CFGetAllocator(param_1);
      lVar6 = _CFURLCreateWithString(uVar5,pcVar4,0);
      if (lVar6 == 0) {
        lVar6 = 0;
        goto LAB_0026b758;
      }
      uVar5 = _CFGetAllocator(param_1);
      iVar2 = _AMAuthInstallSupportCreateDictionaryFromFileURL(uVar5,&local_50,lVar6);
      if (iVar2 == 0) {
        iVar2 = _AMAuthInstallBasebandSetDevelopmentFusingProgram(param_1,local_50);
        if (iVar2 == 0) goto LAB_0026b538;
        iVar3 = _AMAuthInstallToRestoreError(iVar2);
        pcVar8 = &cf_failedtosetfusingprogram___;
      }
      else {
        iVar3 = _AMAuthInstallToRestoreError(iVar2);
        pcVar8 = &cf_failedtocreatefusingdatafrom___;
      }
LAB_0026b86a:
      _AMRLog(3,pcVar8,pcVar4);
      iVar2 = iVar3;
      goto LAB_0026b758;
    }
LAB_0026b536:
    lVar6 = 0;
LAB_0026b538:
    lVar7 = _CFDictionaryGetValue(param_3,&cf_AutoPersonalizeBaseband);
    if ((lVar7 != 0) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 == '\x01')) {
      cVar1 = _AMAuthInstallBasebandPersonalizationRequired(param_1);
      if ((cVar1 == '\0') ||
         (cVar1 = _AMAuthInstallBasebandPersonalizationEnabled(param_1), cVar1 != '\0')) {
LAB_0026b598:
        cVar1 = _AMAuthInstallBasebandPersonalizationRequired(param_1);
        if ((cVar1 == '\0') &&
           (cVar1 = _AMAuthInstallBasebandPersonalizationEnabled(param_1), cVar1 != '\0')) {
          iVar2 = _AMAuthInstallBasebandEnablePersonalization(param_1,0);
          if (iVar2 != 0) goto LAB_0026b7e9;
          _AMRLog(5,&cf_basebandpersonalizationforcedisabled);
        }
        goto LAB_0026b5d3;
      }
      iVar2 = _AMAuthInstallBasebandEnablePersonalization(param_1,1);
      if (iVar2 == 0) {
        _AMRLog(5,&cf_basebandpersonalizationforceenabled);
        goto LAB_0026b598;
      }
LAB_0026b7e9:
      iVar2 = _AMAuthInstallToRestoreError(iVar2);
      goto LAB_0026b758;
    }
LAB_0026b5d3:
    iVar3 = 1;
    cVar1 = _AMAuthInstallBasebandPersonalizationEnabled(param_1);
    if (cVar1 != '\0') {
      iVar2 = _AMAuthInstallBundleCopyNextBasebandComponentName(param_1,&local_48);
      if (iVar2 != 0) goto LAB_0026b7e9;
      iVar2 = _AMRAuthInstallPersonalizeBundle(param_1,param_3);
      if (iVar2 != 0) {
        _AMRLog(3,&cf__s_failedtopersonalizebundle,"AMRAuthInstallBasebandUpdaterRequest");
        goto LAB_0026b758;
      }
      lVar7 = _CFDictionaryGetValue(param_3,&cf_PersonalizedRestoreBundlePath);
      if (lVar7 == 0) {
        pcVar8 = &cf__s_PersonalizedRestoreBundlePathisNULL;
        pcVar4 = "AMRAuthInstallBasebandUpdaterRequest";
        goto LAB_0026b86a;
      }
      uVar5 = _CFGetAllocator(param_1);
      lVar7 = _CFURLCreateWithFileSystemPath(uVar5,lVar7,0,1);
      if (lVar7 == 0) {
        iVar2 = 0x12;
        goto LAB_0026b758;
      }
      uVar5 = _CFGetAllocator(param_1);
      iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent(uVar5,lVar7,local_48,0,&local_38);
      if (iVar2 == 0) goto LAB_0026b72c;
      iVar2 = _AMAuthInstallToRestoreError(iVar2);
LAB_0026b750:
      _CFRelease(lVar7);
      goto LAB_0026b758;
    }
    lVar7 = _CFDictionaryGetValue(param_3,&cf_BasebandEnableProvisioning);
    if (local_40 != 0) {
      if ((lVar7 == 0) || (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\x01')) {
        lVar7 = 0;
        local_38 = _CFURLCreateWithFileSystemPath
                             (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_40,0,0);
      }
      else {
        iVar2 = _AMAuthInstallBasebandCopyCustomFirmware(param_1,local_40,&local_38);
        if (iVar2 != 0) {
          iVar2 = _AMAuthInstallToRestoreError(iVar2);
          pcVar8 = &cf_AMAuthInstallBasebandCopyCustomFirmwarefailed;
          goto LAB_0026b6ae;
        }
        if (local_38 == 0) {
          _AMRLog(3,&cf_personalizedBbfwURLisNULL);
          iVar2 = 0x1f;
          goto LAB_0026b758;
        }
        lVar7 = 0;
      }
LAB_0026b72c:
      uVar5 = _CFGetAllocator(param_1);
      iVar3 = _AMAuthInstallSupportCreateDataFromMappedFileURL(uVar5,param_4,local_38);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = _AMAuthInstallToRestoreError(iVar3);
        _AMRLog(3,&cf_failedtoread__,local_48);
      }
      if (lVar7 == 0) goto LAB_0026b758;
      goto LAB_0026b750;
    }
    pcVar8 = &cf_customBbfwPathisNULL;
    iVar2 = iVar3;
  }
LAB_0026b6ae:
  _AMRLog(3,pcVar8);
LAB_0026b758:
  if (local_48 != 0) {
    _CFRelease();
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  return iVar2;
}

