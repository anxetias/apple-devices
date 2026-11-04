// rea decompile_all
// name: CreateFileData
// address: 0x25c9c9
// body: available
// range: 0x25c9c9-0x25cfd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* CreateFileData(__CFDictionary const*, __CFString const*, __CFError**) */

long CreateFileData(__CFDictionary *param_1,__CFString *param_2,__CFError **param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  __CFError *p_Var9;
  long lVar10;
  char *pcVar11;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  char local_31;
  
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_31 = '\0';
  lVar3 = _CFCopyDescription();
  if (lVar3 != 0) {
    uVar4 = _CFStringGetLength(lVar3);
    lVar5 = _CFStringGetMaximumSizeForEncoding(uVar4,0x8000100);
    pcVar6 = _malloc(lVar5 + 1);
    cVar1 = _CFStringGetCString(lVar3,pcVar6,lVar5,0x8000100);
    pcVar11 = "No C string description available.";
    if (cVar1 != '\0') {
      pcVar11 = pcVar6;
    }
    SavageRestoreInfoLog("%s [input]: Input Options - %s \n","CreateFileData",pcVar11);
    _CFRelease(lVar3);
    if (pcVar6 != (char *)0x0) {
      _free(pcVar6);
    }
  }
  lVar3 = _CFDictionaryGetValue(param_1,&cf_BundleDataDict);
  if (lVar3 == 0) {
    SavageRestoreInfoLog("%s: Host side restoreInfo path \n","CreateFileData");
    uVar4 = _CFDictionaryGetValue(param_1,&cf_BuildIdentity);
    local_60 = _SavageSafeRetain(uVar4);
    if (local_60 == 0) {
      pcVar11 = "CreateFileData: Missing kSavageOptionBuildIdentity";
      uVar4 = 10;
      goto LAB_0025cdd8;
    }
    uVar4 = _CFDictionaryGetValue(local_60,param_2);
    lVar3 = _SavageSafeRetain(uVar4);
    if (lVar3 == 0) {
      uVar4 = _CFStringGetCStringPtr(param_2,0x600);
      lVar3 = _makeCFErrorWithDomain(uVar4,10,param_1,&cf_SavageErrorDomain);
      local_40 = 0;
      local_58 = 0;
LAB_0025ce91:
      lVar7 = 0;
      lVar5 = 0;
LAB_0025cef0:
      lVar8 = 0;
      goto LAB_0025cf39;
    }
    uVar4 = _CFDictionaryGetValue(lVar3,&cf_Info);
    local_40 = _SavageSafeRetain(uVar4);
    local_58 = lVar3;
    if (local_40 == 0) {
      lVar3 = _makeCFErrorWithDomain
                        ("CreateFileData: Missing kSavageBuildIdentityInfoKey",0xc,param_1,
                         &cf_SavageErrorDomain);
      local_40 = 0;
      goto LAB_0025ce91;
    }
    uVar4 = _CFDictionaryGetValue(local_40,&cf_Path);
    lVar5 = _SavageSafeRetain(uVar4);
    if (lVar5 == 0) {
      lVar3 = _makeCFErrorWithDomain
                        ("CreateFileData: Missing kSavageBuildIdentityPathKey",0xc,param_1,
                         &cf_SavageErrorDomain);
      goto LAB_0025ce91;
    }
    uVar4 = _CFDictionaryGetValue(param_1,&cf_BundlePath);
    lVar7 = _SavageSafeRetain(uVar4);
    if (lVar7 == 0) {
      lVar3 = _makeCFErrorWithDomain
                        ("CreateFileData: Missing kSavageOptionSourceBundlePath",10,param_1,
                         &cf_SavageErrorDomain);
      lVar7 = 0;
      goto LAB_0025cef0;
    }
    iVar2 = _AMSupportPlatformCopyURLWithAppendedComponent(0,lVar7,lVar5,0,&local_68);
    if ((iVar2 != 0) || (local_68 == 0)) {
      pcVar11 = 
      "CreateFileData: Fail to run AMSupportPlatformCopyURLWithAppendedComponent with srcBundleURL";
LAB_0025cee3:
      lVar3 = _makeCFErrorWithDomain(pcVar11,iVar2,param_1,&cf_SavageErrorDomain);
      goto LAB_0025cef0;
    }
    iVar2 = _AMSupportCreateDataFromFileURL(0,&local_50);
    if ((iVar2 != 0) || (local_50 == 0)) {
      pcVar11 = "CreateFileData: Fail to run AMSupportCreateDataFromFileURL";
      goto LAB_0025cee3;
    }
    uVar4 = _CFDictionaryGetValue(param_1,&cf_DestBundlePath);
    lVar8 = _SavageSafeRetain(uVar4);
    if (lVar8 != 0) {
      iVar2 = _AMSupportPlatformCopyURLWithAppendedComponent(0,lVar8,lVar5,0,&local_48);
      if ((iVar2 == 0) && (local_48 != 0)) {
        iVar2 = _AMSupportMakeDirectory();
        if (iVar2 == 0) {
          iVar2 = _AMSupportWriteDataToFileURL
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_50,local_48,1);
          if (iVar2 == 0) {
            _AMSupportPlatformFileURLExists(local_48,&local_31);
            if (local_31 != '\0') goto LAB_0025cca2;
            pcVar11 = "CreateFileData: AMSupportPlatformFileURLExists returned FALSE";
            iVar2 = 5;
          }
          else {
            pcVar11 = "CreateFileData: Fail to run AMSupportWriteDataToFileURL with dstFilePathURL";
          }
        }
        else {
          pcVar11 = "CreateFileData: Fail to run AMSupportMakeDirectory with dstFilePathURL";
        }
      }
      else {
        pcVar11 = 
        "CreateFileData: Fail to run AMSupportPlatformCopyURLWithAppendedComponent with dstBundleURL"
        ;
      }
      lVar3 = _makeCFErrorWithDomain(pcVar11,iVar2,param_1,&cf_SavageErrorDomain);
      goto LAB_0025cf39;
    }
    lVar8 = 0;
LAB_0025cca2:
    lVar3 = _CFCopyDescription(local_50);
    if (lVar3 == 0) {
      SavageRestoreInfoLog
                ("%s [output]: %s \n","CreateFileData","No C string description available.");
      goto LAB_0025cd14;
    }
    cVar1 = _CFStringGetCString(lVar3,&_logString,0x1000,0);
    pcVar11 = "No C string description available.";
    if (cVar1 != '\0') {
      pcVar11 = &_logString;
    }
    SavageRestoreInfoLog("%s [output]: %s \n","CreateFileData",pcVar11);
  }
  else {
    SavageRestoreInfoLog("%s: Device side restoreInfo path \n","CreateFileData");
    uVar4 = _CFDictionaryGetValue(lVar3,param_2);
    local_50 = _SavageSafeRetain(uVar4);
    if (local_50 != 0) {
      local_40 = 0;
      local_58 = 0;
      lVar7 = 0;
      lVar5 = 0;
      lVar8 = 0;
      local_60 = 0;
      goto LAB_0025cca2;
    }
    pcVar11 = "CreateFileData: bundleDataDict missing expected tag";
    uVar4 = 0xffffffff;
LAB_0025cdd8:
    lVar3 = _makeCFErrorWithDomain(pcVar11,uVar4,param_1,&cf_SavageErrorDomain);
    local_40 = 0;
    local_58 = 0;
    lVar7 = 0;
    lVar5 = 0;
    lVar8 = 0;
    local_60 = 0;
LAB_0025cf39:
    if ((param_3 == (__CFError **)0x0) || (lVar3 == 0)) {
      if (lVar3 == 0) goto LAB_0025cd14;
    }
    else {
      p_Var9 = (__CFError *)_SavageSafeRetain(lVar3);
      *param_3 = p_Var9;
      lVar10 = _CFErrorCopyDescription(lVar3);
      if (lVar10 == 0) {
        SavageRestoreInfoLog
                  ("%s [error]: %s \n","CreateFileData","No C string description available.");
      }
      else {
        cVar1 = _CFStringGetCString(lVar10,&_logString,0x1000,0);
        pcVar11 = "No C string description available.";
        if (cVar1 != '\0') {
          pcVar11 = &_logString;
        }
        SavageRestoreInfoLog("%s [error]: %s \n","CreateFileData",pcVar11);
        _CFRelease(lVar10);
      }
    }
  }
  _CFRelease(lVar3);
LAB_0025cd14:
  if (local_48 != 0) {
    _CFRelease();
    local_48 = 0;
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_68 != 0) {
    _CFRelease();
    local_68 = 0;
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  lVar5 = local_58;
  lVar3 = local_60;
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return local_50;
}

