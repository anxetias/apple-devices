// rea decompile_all
// name: ___thr_AMRestorableBuildCopySupportedBoardConfigs
// address: 0x16ab77
// body: available
// range: 0x16ab77-0x16af3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16ae45 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x16ae85 to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableBuildCopySupportedBoardConfigs(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  
  if (param_1 == (long *)0x0) {
    _AMRSafeLogAndRelease(3,&cf_Can_tcopysupportedboardconfigwithNULLargs);
    return;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar7 = 0xfa1;
    pcVar6 = &cf_Can_tcopysupportedboardconfigwithoutmetadata;
    lVar1 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x20) == 2) {
      uVar7 = 0xfa1;
      if (*(long *)(lVar1 + 0x18) != 0) {
        lVar1 = _CFDictionaryGetValue(*(long *)(lVar1 + 0x18),&cf_BuildIdentities);
        if (lVar1 == 0) {
          pcVar6 = &cf_FailedtolocaterequiredkeyBuildIdentities;
          goto LAB_0016adca;
        }
        lVar2 = _CFArrayGetCount(lVar1);
        if (lVar2 == 0) {
          pcVar6 = &cf_BuildIdentitiesarrayisemtpyinmetadata;
          goto LAB_0016adca;
        }
        uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar2 = _CFSetCreateMutable(uVar3,0,PTR__kCFTypeSetCallBacks_004411c0);
        uVar7 = 0xfa2;
        if (lVar2 == 0) {
          pcVar6 = &cf_Failedtocreatesetforboardconfigs;
          goto LAB_0016adca;
        }
        uVar5 = _CFArrayGetCount(lVar1);
        _CFArrayApplyFunction(lVar1,0,uVar5,__addDeviceClassFromBuildIdentity,lVar2);
        lVar1 = _CFSetGetCount(lVar2);
        if (lVar1 == 0) {
          uVar7 = 4000;
          pcVar6 = &cf_Failedtolocateanybuildidentities;
          goto LAB_0016adcd;
        }
        lVar4 = _CFArrayCreateMutable(uVar3,0,PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar4 == 0) {
          pcVar6 = &cf_Failedtoallocatesupporteddevicesarray;
          goto LAB_0016adcd;
        }
        _CFSetApplyFunction(lVar2,__addSetValueToArray,lVar4);
        lVar1 = _CFArrayGetCount(lVar4);
        if (lVar1 == 0) {
          pcVar6 = &cf_Failedtocreatearrayfromset;
          lVar1 = _AMRCreateErrorWithDomain
                            (&cf_Failedtocreatearrayfromset,4000,
                             &cf_com_apple_MobileDevice_MobileRestore,0);
          _CFRelease(lVar4);
          lVar4 = 0;
        }
        else {
          lVar1 = 0;
          pcVar6 = (cfstringStruct *)0x0;
        }
        _AMRSafeLogAndRelease(3,pcVar6);
LAB_0016adf9:
        _CFRelease(lVar2);
        goto LAB_0016ae01;
      }
      pcVar6 = &cf_Can_tgetboardconfigwithNULLcontent;
LAB_0016adca:
      lVar2 = 0;
LAB_0016adcd:
      lVar4 = 0;
      lVar1 = _AMRCreateErrorWithDomain(pcVar6,uVar7,&cf_com_apple_MobileDevice_MobileRestore,0);
      _AMRSafeLogAndRelease(3,pcVar6);
      if (lVar2 != 0) goto LAB_0016adf9;
    }
    else {
      if (*(int *)(lVar1 + 0x20) != 3) {
        lVar1 = 0;
        lVar2 = _AMRMakeString(&cf_Unsupportedmetadatatype_d);
        uVar7 = 4000;
        pcVar6 = &cf_Failedtocopysupportedboardconfigs;
        if (lVar2 != 0) {
          lVar1 = _AMRCreateErrorWithDomain(lVar2,0xfa1,&cf_com_apple_MobileDevice_MobileRestore,0);
        }
        goto LAB_0016ad68;
      }
      uVar7 = 0xfa1;
      if (*(long *)(lVar1 + 0x18) == 0) {
        pcVar6 = &cf_Can_tgetboardconfigwithNULLcontent;
LAB_0016ad9a:
        lVar4 = 0;
        lVar1 = _AMRCreateErrorWithDomain(pcVar6,uVar7,&cf_com_apple_MobileDevice_MobileRestore,0);
      }
      else {
        lVar1 = _CFDictionaryGetValue(*(long *)(lVar1 + 0x18),&cf_RestoreBundles);
        if (lVar1 == 0) {
          pcVar6 = &cf_FailedtolocaterequiredkeyRestoreBundles;
          goto LAB_0016ad9a;
        }
        lVar2 = _CFDictionaryGetCount(lVar1);
        if (lVar2 == 0) {
          pcVar6 = &cf_Restorebundlesdictionaryisemtpyinmetadata;
          goto LAB_0016ad9a;
        }
        uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar3 = _CFDictionaryGetCount(lVar1);
        lVar4 = _CFArrayCreateMutable(uVar7,uVar3,PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar4 == 0) {
          pcVar6 = &cf_Failedtoallocatesupporteddevicesarray;
          uVar7 = 0xfa2;
          goto LAB_0016ad9a;
        }
        _CFDictionaryApplyFunction(lVar1,__addKeysIntoArray,lVar4);
        lVar1 = 0;
        pcVar6 = (cfstringStruct *)0x0;
      }
      _AMRSafeLogAndRelease(3,pcVar6);
LAB_0016ae01:
      if (lVar4 != 0) {
        _CFRetain(lVar4);
        param_1[2] = lVar4;
        pcVar6 = (cfstringStruct *)0x0;
        goto LAB_0016ae15;
      }
    }
    uVar7 = 4000;
    pcVar6 = &cf_Failedtocopysupportedboardconfigs;
  }
LAB_0016ad68:
  if (param_1[1] != 0) {
    uVar7 = _AMRCreateErrorWithDomain(pcVar6,uVar7,&cf_com_apple_MobileDevice_MobileRestore,lVar1);
    *(undefined8 *)param_1[1] = uVar7;
  }
  lVar4 = 0;
LAB_0016ae15:
  _AMRSafeLogAndRelease(3,pcVar6);
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
    return;
  }
  return;
}

