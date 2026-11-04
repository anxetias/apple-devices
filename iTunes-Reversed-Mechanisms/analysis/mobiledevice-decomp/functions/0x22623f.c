// rea decompile_all
// name: _AppleTCONDP855RestoreInfoCopyFirmware
// address: 0x22623f
// body: available
// range: 0x22623f-0x226669 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AppleTCONDP855RestoreInfoCopyFirmware(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long local_58;
  undefined8 *local_50;
  long local_48;
  long local_40;
  char local_31;
  
  if (param_1 == 0) {
    pcVar7 = "AppleTCONDP855RestoreInfoCopyFirmware: options is NULL";
    lVar3 = 0;
    uVar2 = 2;
    param_1 = 0;
  }
  else {
    uVar2 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
    lVar3 = _AMSupportSafeRetain(uVar2);
    if (lVar3 == 0) {
      local_31 = '\0';
      local_58 = 0;
      local_48 = 0;
      local_40 = 0;
      local_50 = param_2;
      lVar3 = _CFDictionaryGetValue(param_1,&cf_BundlePath);
      if (lVar3 == 0) {
        pcVar7 = "CreateDataFromFile: Missing kUpdaterBundlePath";
        uVar2 = 0xc;
LAB_00226532:
        lVar3 = _AppleTCONLoggingCreateCFErrorWithDomain
                          (pcVar7,uVar2,param_1,&cf_AppleTCONUpdaterErrorDomain);
        lVar4 = 0;
LAB_002265c7:
        if (lVar3 == 0) goto LAB_002264a8;
        uVar2 = _CFErrorCopyDescription(lVar3);
        uVar6 = _CFStringGetCStringPtr(uVar2,0);
        _AppleTCONLoggingLogMsg("%s [error]: %s\n","CreateDataFromFile",uVar6);
        _CFRelease(uVar2);
        _AMSupportSafeRelease(local_40);
        local_40 = 0;
        lVar5 = _AMSupportSafeRetain(lVar3);
        _AMSupportSafeRelease(lVar3);
        _AMSupportSafeRelease(lVar4);
        param_2 = local_50;
        lVar3 = local_40;
        if (lVar5 != 0) goto LAB_002262f3;
      }
      else {
        uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar4 = _CFStringCreateWithFormat
                          (uVar2,0,&cf____________,&cf_BuildIdentity,&cf_Baobab_TCON,&cf_Info,
                           &cf_Path);
        if (lVar4 == 0) {
          pcVar7 = "CreateDataFromFile: create key failed";
          uVar2 = 3;
          goto LAB_00226532;
        }
        lVar5 = _AMSupportGetValueForKeyPathInDict(uVar2,param_1,lVar4);
        if (lVar5 == 0) {
          pcVar7 = "CreateDataFromFile: Missing kAppleTCONDP855BuildIdentityPathKey";
          iVar1 = 0xc;
LAB_002265bc:
          lVar3 = _AppleTCONLoggingCreateCFErrorWithDomain
                            (pcVar7,iVar1,param_1,&cf_AppleTCONUpdaterErrorDomain);
          goto LAB_002265c7;
        }
        iVar1 = _AMSupportPlatformCopyURLWithAppendedComponent(0,lVar3,lVar5,0,&local_58);
        if ((iVar1 != 0) || (local_58 == 0)) {
          pcVar7 = 
          "CreateDataFromFile: AMSupportPlatformCopyURLWithAppendedComponent(srcBundleURL) failed";
          goto LAB_002265bc;
        }
        iVar1 = _AMSupportCreateDataFromFileURL(0,&local_40);
        if ((iVar1 != 0) || (local_40 == 0)) {
          pcVar7 = "CreateDataFromFile: AMSupportCreateDataFromFileURL failed";
          goto LAB_002265bc;
        }
        lVar3 = _CFDictionaryGetValue(param_1,&cf_DestBundlePath);
        if (lVar3 != 0) {
          iVar1 = _AMSupportPlatformCopyURLWithAppendedComponent(0,lVar3,lVar5,0,&local_48);
          if ((iVar1 == 0) && (local_48 != 0)) {
            iVar1 = _AMSupportMakeDirectory();
            if (iVar1 == 0) {
              iVar1 = _AMSupportWriteDataToFileURL(uVar2,local_40,local_48,1);
              if (iVar1 == 0) {
                _AMSupportPlatformFileURLExists(local_48,&local_31);
                if (local_31 != '\0') goto LAB_002264a8;
                pcVar7 = "CreateDataFromFile: AMSupportPlatformFileURLExists returned FALSE";
                iVar1 = 5;
              }
              else {
                pcVar7 = 
                "CreateDataFromFile: Fail to run AMSupportWriteDataToFileURL with dstFilePathURL";
              }
            }
            else {
              pcVar7 = "CreateDataFromFile: Fail to run AMSupportMakeDirectory with dstFilePathURL";
            }
          }
          else {
            pcVar7 = 
            "CreateDataFromFile: Fail to run AMSupportPlatformCopyURLWithAppendedComponent with dstBundleURL"
            ;
          }
          goto LAB_002265bc;
        }
LAB_002264a8:
        _AMSupportSafeRelease(lVar4);
      }
      param_2 = local_50;
      lVar3 = local_40;
      if (local_40 != 0) goto LAB_002264c1;
      lVar3 = 0;
    }
    else {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFDataGetTypeID();
      if (lVar4 == lVar5) {
LAB_002264c1:
        lVar4 = _CFDataGetLength(lVar3);
        if (lVar4 != 0) {
          return lVar3;
        }
      }
      else {
        lVar5 = _AppleTCONLoggingCreateCFErrorWithDomain
                          ("AppleTCONDP855RestoreInfoCopyFirmware: invalid FirmwareOverride type",10
                           ,param_1,&cf_AppleTCONUpdaterErrorDomain);
        _CFRelease(lVar3);
        lVar3 = 0;
        if (lVar5 != 0) goto LAB_002262f3;
      }
    }
    pcVar7 = "AppleTCONDP855RestoreInfoCopyFirmware: Empty AppleTCONDP855 firmware file";
    uVar2 = 4;
  }
  lVar5 = _AppleTCONLoggingCreateCFErrorWithDomain
                    (pcVar7,uVar2,param_1,&cf_AppleTCONUpdaterErrorDomain);
  if (lVar5 == 0) {
    return lVar3;
  }
LAB_002262f3:
  uVar2 = _CFErrorCopyDescription(lVar5);
  uVar6 = _CFStringGetCStringPtr(uVar2,0);
  _AppleTCONLoggingLogMsg("%s [error]: %s\n","AppleTCONDP855RestoreInfoCopyFirmware",uVar6);
  _CFRelease(uVar2);
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = _AMSupportSafeRetain(lVar5);
    *param_2 = uVar2;
  }
  _AMSupportSafeRelease(lVar5);
  return lVar3;
}

